## Contribution

# Control Unit

My main contribution was the control unit. The control unit was made up of the two modules main_decoder.sv and alu_decoder.sv (alu_decoder was largely modified by Shaheer later on), and I combined these in control_unit.sv. 

The logic of the main decoder was that firstly, the instruction type was determined based on the input opcode and funct 3. Secondly, the outputs are set based on the following decode table:

TABLE image in folder.

The main_decoder.sv and alu_decoder.sv files are then used as components of the higher level file control_unit.sv.

The last part of the control unit is the PCSrc component. This signal determined whether the program counter incremented by 4, or was set to the immediate value. The module logical ands the zero signal from the ALU and the Branch signal, and the result is logical or’d with the jump signal. This is because, if we have a jump instruction, or a branch instruction where the branch condition is met, we offset the program counter by the immediate value.

# Sign Extend

My second contribution was the sign extend module, sign_extend.sv. Here, I took an input signal ImmSrcD, which determined the instruction which the immediate came from. Based on this, the direction, length and nature of the sign extend were determined, and a 32-bit binary was outputted.

Commit links for control unit modules and the sign extend module:

4892fcb80cb7501e76795769cba000f30aa7a04e (Initial commit of main_decoder.sv, alu_decoder.sv, sign_extend.sv and pc_src.sv)
Ebed60c06750f72001dad64799198d4b91f917e3 (extra output logic for R_size and DMem_size in main decoder)
6bf8a19d5a45fd4b24408093a39bcf2092a55275 (adding outputs to main decoder)

# Instruction Memory

My next contribution from me was the instruction memory, where the input address was used to index a memory byte, and this along with the 3 bytes next to it were concatenated to form the output word.

(This was done as part of Lab 4, so I have not included the commit link)

# F1 Assembly Code

Another contribution was writing an initial version of the assembly code. The logic for a new light coming on involved a left shift of a0, along with 1 being added to it. The final assembly code was based on this plan.

Commit link for assembly code image:

Fe8fffa9cc801f2629fe3734789ef9fc2127d409 (Image of initial assembly code).

# Testing Reference Program

My final contribution was to the testing of the reference program. To test that our CPU properly executed the reference program for the four PDFs, I put the assembled program in the instruction memory, the distribution data in the data memory, and testbenched the top cpu file to produce vcd file-type waveforms of the A0 register output. I then used the python script Roshan wrote to produce the expected outputs, and observed they were the same as the vcd outputs.

Commit: 0ca89609d4105c31bfa99643e1a3b859c43b729f

## Reflection (Learnings/Mistakes)

# Cache Memory

Although I didn’t contribute to writing cache memory, while planning what type of mapping our data cache should use, I improved my understanding of how each mapping works, and their potential advantages and disadvantages. Taking direct mapped cache as an example, I learned that each combination of address[4:2] of the main memory address maps to a block/set in the cache. Furthermore, with a large main memory, this means a large quantity of memory locations map to a single block, which causes a high miss-rate. N-way set associative mapping could potentially lower the miss-rate, as now the tag of the memory location could potentially match N items rather than one.

# Instruction Memory

From erroneously writing the instruction memory initially, I learnt how byte-addressing works. I made each memory location in the instruction memory ROM 32 bits, so that each instruction would take up one memory location. However, after realising the ROM had to be byte-addressed, I learnt that byte-addressing meant addressing a word by its first or last byte (depending on whether we use little or big endian), and to form the whole instruction word for output, the other three byte locations need to be concatenated with the first to form a 4 byte (32 bit) word.

# Main decoder/Memory instructions

From writing the main decoder, I learnt how memory instructions, where different sized data are stored and loaded (e.g. lh, lbu, sb etc.), work. These instructions have two main features, the size of the memory block being loaded/stored, and, if the memory block is not a full word, whether the block will be sign-extended or zero-extended. This is why lw and sw don’t have unsigned versions that half and byte memory instructions do. They are already storing or loading a full instruction, and hence won’t be sign extended.

# General 

A logical System Verilog error that I made a lot at the beginning was not fully specifying all the cases of an if statement, or not setting a default in a case statement, which caused files not to compile. The problem here is that there will be cases where the output variables of the file will be undefined.
Technically, I have improved my ability to write efficient and tidy System Verilog files, by making use of features such as ‘enum’ and ‘case’, and am also more confident in using testbenches to generate vcd files for testing.
Theoretically, I now have a better understanding of how a wide range of instructions are executed by the cpu.

## Special Design Decisions

# Sign Extend

There were many different ways of designing the sign extend module. The main issues that needed handling were:
Deciding which bits of the instruction made up the unextended immediate.
1. Deciding whether sign extension happened on the MSB side or LSB side.
2. How many bits needed to be added on.
In the method I executed, the ImmSrcD input decided how an instruction is sign extended.

In the first block of code (which handles issue 1), I used a case statement so that each ImmSrcD value corresponds to a different combination of bits from the instruction making up the unextended immediate. I also stored these unextended immediates in three different variables, with each variable corresponding to a different way of sign extending (or handling issues 2 and 3).

The second block of code handled actually sign extending. Based on the variable I just used to store the unsigned immediate, I sign extend in a different way.

1. The first variable corresponds to a sign extend on the MSB side of 20 bits.
2. The second variable corresponds to a sign extend on the MSB side of 12 bits.
3. The third variable corresponds to a sign extend on the LSB side of 12 bits.

In hindsight, the logic of my method was slightly hard to follow. Perhaps another method would have been to implement a variable specifying which side we are extending on, and a variable specifying how many bits to extend by. However, the problem with this is that we would not have been able to store the unextended immediate in a variable directly, since the variable could take on different bit-lengths. Without a clear bit length, it is also harder to define the logic of whether to extend by 1s or 0s. Also, the method I used doesn’t require too many lines of code.

# R_size

R_size is a 3-bit control unit signal that outputs a unique combination for sw, sh and sb. Originally, there were two different ideas about how to implement the store instructions (sw, sh, sb).

The first one was to connect R_size as an input to the register file. The size of the register file output would then be dependent on R_size (e.g. sh would load the first half of the first 2 bytes of the register contents). This would then get stored into the data memory. The problem with this method is that the register file is not byte addressed. Hence the logic to only output certain bytes of a register’s contents would not be straightforward.

Hence why the second idea was preferred, where R_size is an input to the data memory. When we have a sh instruction for example, the whole word is loaded from the register file, but when it reaches the data memory, the data memory will only load the first two bytes of the specified memory address with the correct data, leaving the more significant two bytes with 0s. This is a much simpler implementation, since the data memory is byte addressed.

## Evaluation

Some of the main improvements we can make next time are that:

1. Currently, to prevent data hazards in our pipelining, we are putting no-op instructions in between our actual instructions to make sure we have the values we need before the next instruction. However, this slows the program down. Instead, we could add a hazard unit to the cpu, which allows the value to be written back to previous stages as soon as it is computed, so we already have the value required for the next instruction.

2. We can implement an N-way set associative cache with a higher N. This means that, in each set in the cache, we have N blocks of data, as opposed to two blocks of data. Since there are more blocks of data available, an incoming address is more likely to have a tag match with one of the blocks, and hence we increase the hit rate of the cache, reducing the need for replacement, and increasing the speed of the cpu.

If we were to do this task again, something we could improve on is allocation of deadlines. Although we did set deadlines for finishing certain tasks, after the pull request of the tasks we did were reviewed by other team members, errors were often found, which took another day to resolve. So in the future, when setting deadlines, we should take into account error resolving time.

Two small syntax related changes I would make next time around are that firstly, I would label R_size and DMem_size differently, perhaps as load_size and store_size, since we didn’t use the register approach, and secondly, I would suffix all my input/ output variables in the sv files with _i and _o for more clarity in testing.