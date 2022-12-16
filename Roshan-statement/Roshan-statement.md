# Personal statement - Roshan

## Explanation of contributions (in rough chronological order)

### Conversion to pipelining

At the start of the project, I discussed the idea of starting with a pipelined CPU with my team. I believed it would be easier to change the structure of the CPU to be compatible with pipelining before making other large changes; the alternative would have been to make these sturctural changes at the end with a larger number of files. As such, my time was initially spent creating five new folders and top-level modules for the five pipeline stages. The pipeline registers were also added to separate signals of different stages. All of this was done in accordance with the schematics shown in the pipelining lecture.

In order to test the CPU while making these changes, it was necessary to put temporary logic in the top-level module, which was later taken on and expanded by my team members. Testing each stage as it was completed allowed me to handle issues as soon as they arose, although the extent of these issues was syntax errors and typos.

Commits: c7fa64cd0887795a094ec44b8390fb47c530e4d3, 398854ae4c3a4da5bb47af12f42b5cf8157fadb8

### Integrating components

My task then became integrating components made by other people into the pipelining stages. I integrated pc_src.sv into the appropriate top-level modules, and added the new signals needed by it. This replaced the temporary logic I had put in top.sv. It should be noted at this point that I accidently made this commit to an old branch, so I had to make another pull request.

Commit: b5364d1ca66ea3eed4e39028670dc3483cb63382.

I added the new control unit and sign extend components and their signals. Unfortunately, due to a lack of communication, I believed these components were finished and should have been working, which was not the case. Therefore, I started making fixes to these files, mostly for syntax errors. After correcting my misunderstanding I left this debugging task to the appropriate team member.

Commits: e0d00d91df9499d552c130a43f92717e9a4a6084, 743343ea6bf093a0505dfb01e0b1bfa2cd20faa8

### Completing the decode stage

I was requested to review a pull request which contained most of the logic for the completed decode stage. I offered small fixes and suggestions for main_decoder.sv and sign_extend.sv. After the merge, I updated the necessary top-level components and the pipeline registers to support the new signals. As part of this, I removed the old MemWrite signal which was no longer sufficient for the new memory instructions, and also completed a few other fixes including an error in instructions.mem.

Commits: e5974b686708244ce006a416b16ef820ff9bd6e8, 8be0da46df7bedb040577438c3444488bfa40ec8

### Experimenting with no-ops

In the previous version of the test program (implementing a simple counter, from lab 4), four no-ops were added after each instruction to ensure that each instruction would be able to go through the pipeline in isolation, as it was thought this would make testing easier. However, I wanted to try using fewer no-ops to test the intended function of pipelining (being able to execute multiple instructions in parallel), and found that two no-ops were sufficient after each instruction. This limit is imposed by two stage dependencies: firstly, the dependence of the PC counter on the result of the execute stage (i.e. whether or not to branch); and secondly, the dependence of the register file on the writeback stage (so as to avoid read-before-write data hazards). Using this smaller number of no-ops did not change the function of the program but it did make it faster, as expected.

Commit: 9f4c4df0282fe934ed059678b34365f49c57c2f9.

### Using new program files

When it was decided to test the new .hex file for the f1 program, the instruction memory had to be changed to little-endian so it could read the file properly. Up to this point, it had been more convenient to use a big-endian instruction memory since instructions were translated into machine code and written into .mem files by hand, which reversed the order of bytes. A new testbench and bash scripts were created for future testing, and specifically to differentiate between testing on the Vbuddy and just testing to observe waveforms. This was a measure to save time during testing.

Commit: 7c4b6fa7795bf432c303c600a0c607f000a57eed.

### Writing the F1 program

Although a prototype of the F1 light sequence program had been written by another team member, there were many issues which I decided to address, including:
- Not using the recommended registers as per the RISC-V specification.
- Not including a proper way for the program to terminate.
- Not including a sufficient number of no-ops.
- Generating the wrong light seqeuence due to a lack of SLLI instruction.
and several other issues. Therefore, I completely overhauled the entire program, although the basic structure remained the same.

The way the trigger was implemented in the F1 program was simply through the reset signal. When the program is first run, the light sequence starts automatically, then terminates. In order to run it again, the CPU can be reset. Although other methods were possible, such as implementing an interrupt, this was thought to be the simplest and most functional solution.

Commits: 5690075b612e86167a600118cb35059bb83e33a0 and 04677de20ce78e99f9cd43378e1e696a7c9c0624.

### Testing the F1 program

During testing, I encountered a number of issues, both with CPU and with the F1 program itself. I made the following changes:
- Cutting the lights at the end of the sequence by setting a0 to 0.
- Reducing the time of execution by reducing the number of loop iterations.
- Using a temporary register to calculate (a0 << 1), add 1, then move to a0, instead of applying the operations directly to a0, as this introduced a flicker to the first light (LSB) between the two steps of the calculation.
- Adding new signals for jalr in the pipelining stages as was necessary.
- Adding a reset to the register file using a for loop, permitting the assumption that the registers are all zero at the start of execution (including after a reset).
After these changes, the F1 light sequence program was shown to execute correctly on the Vbuddy.

Commits: 021a79acfbff94ed3ac1092b5195e3e497d7a0ad, b69f900680eb17389b1731d44937949d450a777c.

### Preparing the CPU for the reference program

The LUI and LBU instructions needed to be added to run the reference program. Since LUI is a unique instruction, like JALR, I decided to add a new signal specficifically for it in the decode block. In the execute block, this signal sets the result of the ALU to the immediate if it is asserted, as required.

Commit: e6495016712d4f30571a44773eca90840252ca35.

The memory instructions required less work on my part and were mostly done by another team member. I only connected the necessary signals for pipelining.

Commits: dee97e541dcd9d5e18484d045c2b3a2dd41c94b9, 69829b701ff0e84fdd1ae891e2ded64c3ca1986b.

### Testing the reference program

When testing the reference program, I found and fixed a few issues in the CPU:
- The ALU decoder seemed to assume the existence of a SUBI instruction, thus producing an incorrect opcode. This was fixed with a conditional statement which specifically checks for the immediate-type instruction and produces the correct opcode.
- In order to allow the ALU decoder to differentiate between R-type and I-type instructions, another bit state was added to ALUOp in main_decoder.sv.
- The zero register could be written to a non-zero value (specifically, by JALR instructions which write to zero by default). This was fixed by hard-wiring the zero register to 0 in the register file, so that there are 31 registers in the internal register array.

There were some issues with the program itself due to the fact that I was using an old version with a bug.

I experimented with the number of no-ops, initially just adding two no-ops after every instruction. I then removed no-ops where there was no risk of data hazards (such as places where several immediates are loaded into registers at once). There were some places where it was possible to swap instructions to reduce the number of no-ops needed without changing the function of the program. Despite my efforts to find a way around the limitation, I confirmed my earlier finding that two no-ops per instruction was necessary to avoid both read-before-write hazards and branch hazards.

To test the reference program, I created a new bash script and testbench. The bash script assembed the code in pdf.s as well as running Verilator, allowing changes to the program to be tested quickly. The testbench contained a 'plotting' variable which was only set to true if a0 becomes non-zero. The intention was to only start outputting data to Vbuddy when the program reaches the 'display' phase, since this typically took more than 100,000 clock cycles. A downside of this approach is that it strips away leading 0s which are legitimate bin counts. However, given that the CPU is only allowed to have one output (a0), this was seen as unavoidable, since there is no other way to tell whether displaying has started. The number of cycles taken is highly variable depending on the distribution so this was not an option. Another important change to the testbench was only writing the cycle number to the Vbuddy every 1000 cycles, in the time before the 'display' stage of the program had been reached. This was the only way for the program to run in a reasonable time. 

Commits: be9a0147c7dfd7f85e3f28c4e9cd5908b19c9174, df9896f701c083c28a23d94e8b8e92ba42a95951, b6d5687d88cfd02c4315ef3dbbcf7e71dcd37581.

### Further testing of the reference program

To test the exact values produced by the reference program, I wrote a python script 'calc_pdf.py' which prints the pdf of a given distribution. Like the reference program, it stops when it reaches a bin count of 200. This allowed the output of the reference program to be examined precisely for errors, and it was found to be consistent.

However, when the cache CPU was tested, it did not give the same results as the python script. I found an error in main_decoder.sv where the signal DMem_size, which encodes the flags for LW, LH, and LB, was incorrectly set by default. This made it so that the memory stage incorrectly interpreted a non-memory instruction as a LW instruction. Although this only caused an issue in the cache CPU, the error was fixed in both branches.

Commits: d0f453812bb163eca59a899fbc2baa0bc7d45c1d, d416d658845261ab4839ef4f49700201afba2480.

## Stretched goal - CPU with cache

As we had a little more time at the end than expected, our group decided to implement a cache. I was responsible for the cache module itself, cache.sv, as well as a supporting module, cache_store_input.sv.

### Cache v1 - Design decisions

The cache was one of the more interesting parts of the CPU to implement due to the flexibility in design decisions.
- I decided to opt for a simple, direct-mapped cache in order to avoid having to deal with the replacement policies of N-way associative caches.
- For simplicity, the cache was implemented as a write-through cache.
- Using a block size of 4 bytes (1 word in the CPU) allowed for some spatial locality. If a byte is loaded from memory, in the best case, the next 3 bytes (perhaps as part of an array) would also be loaded.
- With each block being its own set, this allowed for 64 sets with the given restriction of a cache being no larger than 256 bytes.

### Cache v1 - Overview of operation

In top_memory.sv:
- The cache is written under one of two conditions: either the instruction is a store instruction; or the instruction is a load instruction, and there has been a cache miss (so it needs to be updated with data from the RAM).
- cache_store_input.sv generates the cache data input for a store instruction by first taking the cache output, then inserting the relevant byte/half/word. This can be done combinationally as memory read is asynchronous.
- The input to the cache is this if the instruction is a store instruction. Otherwise, it is the RAM output (which happens for a cache overwrite).
- The overall output of the memory stage is either from the cache or the RAM, depending on whether the cache access was a hit or miss.

In cache.sv:
- Each element of the cache array contains a valid bit, a 24-bit tag, and the 32-bit data. The index of an element in the array is the set number.
- An access is a hit if the valid bit is 1 and the tag of the cache matches the tag portion of the input address.

Commits: ced8ef00696fc95ac8cd9788554b3a114c00f565, 88588dc2e22a35af60da15c8847cc1a2ade935ce, 6d30fa82d291394f15ea93682d0d8564c5964406.

### Cache v1 - Testing

As mentioned in an earlier section, there was an issue with the decoder which was revealed when testing the cache CPU. This was fixed in commit 09aae2687ace4e7b03081f370a1dd4d5aa9cdef6. Otherwise, there were some syntax errors in some of the RAM components that I fixed (commit: 72cfed6ea9e35822721b504f05118cc042a190ac).

### Cache v2 - Design decisions

After implementing this simple direct-mapped, write-through cache, I decided that with the time I had left I could implement a more complex cache (v2). I decided to make this cache a two-way associative, write-back cache. Since it was two-way associative, I decided on a simple LRU (least recently used) replacement policy, needing only one extra bit per set. Using a cache with more ways would have substantially increased the complexity of the replacement policy, which I wanted to avoid.

### Cache v2 - Overview of operation

This version of the cache required significantly more thought to implement. A collection of images can be found in this folder explaining my thought process. In particular, when implementing the two-way associative functionality I had to consider a number of different cases, and set signals accordingly. A summary of interesting design decisions:
- As well as hit, a new signal called 'evict' was defined. This was asserted if a load or store instruction caused a valid block of data in the cache to be overwritten, if the dirty bit associated with it was 1. This signal was used to inform the RAM to store the evicted data to maintain cache coherency.

### Cache v2 - Testing

Testing the cache revealed no major issues. Most errors were syntax errors which were fixed quickly. During the display phase of the reference program, the cache was observed to hit 

## Reflection

This project has taught me a great deal about how to work with other people in group projects, and has vastly improved my knowledge of and confidence with Git and GitHub. In my opinion, the CPU was, in general, not difficult to design. The only significant design decisions that were made on my part were for the cache stretched goal, since everything else was prescriptive. Even the pipelining stretched goal was completed in accordance with the schematics shown in the lecture slides, such that there was not much room for personal experimentation.

Many of the issues in this project can be traced back to a lack of proper communication, which caused conflicts between modules. As such, the main thing to improve for next time would be more thorough communication between team members to make sure all components work in accordance with each other.

If I had more time, I would have liked to implement a more complex cache, such as one which took greater advantage of spatial locality. This would have been particularly useful for the reference program as it used a large array. The current cache has some spatial locality, but only to store up to three future values of an array.