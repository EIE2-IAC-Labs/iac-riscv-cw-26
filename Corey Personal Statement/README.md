# Corey Personal Statement

Throughout the project I was mainly in charge of implementing the memory as well as the program counter in the single cycled, pipelined and cache version, however I also worked on the assembly programs and wrote some makefile to make running the simulations easier.

- [Corey Personal Statement](#corey-personal-statement)
  - [Memory](#memory)
    - [Store Instructions](#store-instructions)
    - [Load instructions](#load-instructions)
    - [Challenges encountered](#challenges-encountered)
    - [Testing Done](#testing-done)
  - [Cache](#cache)
    - [Challenges Encountered](#challenges-encountered-1)
    - [Testing Done](#testing-done-1)
  - [Program Counter](#program-counter)
    - [Challenges Encountered](#challenges-encountered-2)
  - [Assembly](#assembly)
    - [Challenges Encountered](#challenges-encountered-3)
    - [Testing](#testing)
  - [Makefile](#makefile)
    - [Challenges Encountered](#challenges-encountered-4)
  - [Reflection](#reflection)

## Memory 

The following was all initially implemented in the following commit [Finalised Testing](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/f42a9f13187c43600c24fb1266fa717dd6c6bb62) and then fully finalised in the following commit [Added an input signal s for lbu and lb instruction](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/d42da76e7e56fe7099b33abaf2848585a7b71e6c)

The Specification for the memory required the instructions `LW, LH, LB, LBU, LHU, SW, SH, SB`. These were all implemented in similar but different ways. The ram itself is byte addressed, I implemented it by splitting the ram array into 0x10FFFF 8 bit blocks.

Firstly when the 32 bit immediate is fed into the ram and split into 4 8 bit blocks this allows for ease of storage and ease of load and read instructions.

ram.sv has 6 inputs and 1 output and they are as follows
```systemverilog
input logic [ADDRESS_LENGTH-1:0] wd,
input logic sw,
input logic sh,
input logic sb,
input logic [ADDRESS_LENGTH-1:0] a,
input logic clk,
output logic [ADDRESS_LENGTH-1:0] rd
```

|input/output|Description|
|---|---|
|wd| The 32 bit data word which will be stored|
|sw| Control Signal for Store Word|
|sh| Control Signal for Store Half|
|sb| Control Signal for Store Byte|
|a| The Address at which the data will be stored|
|rd|The data at address a|

The half_byte_word.sv module is used to read Words, Halfs and Bytes from the rd output of the ram. It has 5 inputs and 1 output and they are as follows.
```systemverilog
input logic lw,
input logic lb,
input logic lh,
input logic s,
input [CPU_WORD-1:0] data,
output [CPU_WORD-1:0] dout
```
|Input/Output|Description|
|---|---|
|lw| Control Signal for load word|
|lb| Control Signal for load byte|
|lh| Control Signal for load half|
|s| Control Signal for signed|
|data| The input data from ram.sv|
|dout| The signed/unsigned Word/Half/Byte|

half_extend and byte_extend both sign and zero extend the half and bytes respectively to 32 bits, either zero extending or sign extending depending on the s input. They both have 2 inputs and 1 output.

half_extend.sv
```systemverilog
input logic [HALF_LEN-1:0] din,
input logic s,
output logic [WORD_LENGTH-1:0] dout
```

byte_extend.sv
```systemverilog
input logic [BYTE_LEN-1:0] din,
input logic s,
output logic [WORD_LENGTH-1:0] dout
```

|Input/output|Description|
|---|---|
|din| byte/half read from the ram|
|s| control signal from decode block for signed/unsigned|
|dout| zero/sign extended byte/half|

top_memory.sv just combines everything and wire things properly.

### Store Instructions

When the instruction requires for data to be stored in the memory it takes in one of 3 control signals SW for store word, SH for store half and SB for store byte. These signals are passed into the following block.

```systemverilog
always_ff @(posedge clk) begin
    if (sb) begin
        ram_array[a] <= d0;
    end
    else if (sh) begin
        ram_array[a] <= d0;
        ram_array[a+1] <= d1;
    end
    else if (sw) begin
        ram_array[a] <= d0;
        ram_array[a+1] <= d1;
        ram_array[a+2] <= d2;
        ram_array[a+3] <= d3;
    end
end
```
Here when SB is high it stores the least significant byte of the 32 bit immediate into the ram array, when SH is high it stores the 2 least significant bytes of the 32 bit immediate into the ram array and when SW is high it loads all 32 bits into the ram array.

The splitting of the input data into 4 8 bit blocks allows for the logic and code within the `always_ff` block to be relatively simple.

The way the code byte addresses the data is to take the 4 8 bit blocks on the 32 bin data input and store each of them relative to each other by storing them based on an offset.

### Load instructions 

Initially the full 32 bit word starting with the least significant byte at the inputted address is loaded into the `half_byte_word.sv` module which takes in the data and control signals and then performs various actions based off of then control inputs.

|Instruction|LW|LH|LB|S|Description|
|---|---|---|---|---|---|
|LW|1|0|0|x [^1]| Here the input word is simply outputted without any formatting|
|LHU|0|1|0|0| Here the 2 least significant bytes are zero extended to 32 bits and outputted|
|LH|0|1|0|1| Here the 2 least significant bytes are sign extended to 32 bits and outputted|
|LBU|0|0|1|0| Here the least significant byte is zero extended to 32 bits and outputted|
|LB|0|0|1|1| Here the least significant byte is sign extended to 32 bits and outputted|

[^1]: The reason the sign input is x on LW is that you cannot have a signed/unsigned word as it is already 32 bits.

### Challenges encountered

The main challenge encountered in this aspect of the memory was the byte addressing as it required a lot of fore thought to implement, the way I chose to implement this was by splitting the 32 bit data word into 4 8 bit blocks. This definitely was the right choice as it allowed proper read and load implementations.

Another challenge I encountered was the sign extension however this was easily implemented using a case statement and clever concatination based off of control signals. The case statement was used as it is easier to read and see what is being said.

### Testing Done
[Testing Evidence](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/tree/main/test/memory) within the memory section on the github. This is not an extensive test however it is enough to show basic functionality.

## Cache

The following additions and changes to the memory were implemented initially in the following commit [implemented offset](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/d552da007dc1e8c71ef55ac2d70c04dfe55b40e8) and finalised in the following commit [ram reads and writes to different addresses ](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/3c2234eb1f90f036064cb82d0cd08e039149cf00)

There were a few changes to the modules when moving to the cache from the pipelined version. In the cache task I mainly worked on the ram and half_byte_word modules.

ram.sv contains two additional inputs which are as and removes the original a input.
```Systemverilog
input logic [ADDRESS_LENGTH-1:0] w_a,
input logic [ADDRESS_LENGTH-1:0] r_a,
```
|Input|Description|
|---|---|
|w_a| This is the address where data is written to|
|r_a| This is the address where data is read from|

These additional inputs allow the cpu to read from and write to two different addresses as opposed to always overwriting one.

half_word_byte.sv contains one additional input

```Systemverilog
input logic [1:0] offset,
```
|Input|Description|
|---|---|
|offset| This is the byte off set of the selected byte in the word|


In order to implement the cache I made one large change to the ram, instead of reading the byte at the address and the bytes at the next 3 addresses as seen below.

![Old Ram Addressing](media/oldramaddressing.png)

Where the cell in red represents is the byte that is addressed in the instruction and the yellow cells represent the additional 3 bytes that are loaded.

I instead changed it so it would always read the word in memory that included the byte at the address as seen below.

![New Ram Addressing](media/newramaddressing.png)

Where the cell in red represents is the byte that is addressed in the instruction and the yellow cells represent the additional 3 bytes that are loaded. This was implemented using the following line of code

```Systemverilog
assign offset_ra = {r_a[ADDRESS_LENGTH-1:2], 2'b0};
```

Here the last two bits of the address are discarded 2 zeroes are concatenated in order to get the address of the least significant byte in the word containing the addressed byte. Then the ram array entries ram_array[offset_ra + 3], ram_array[offset_ra + 2], ram_array[offset_ra + 1] and ram_array[offset_ra] are concatenated and sent to the altered half_byte_width.sv module. Here I used the following case statement in order to implement the offset.
```Systemverilog
always_comb begin
    case (offset)
        0: begin
            h = data[15:0];
            b = data[7:0];
        end
        1: begin
            h = data[23:8];
            b = data[15:8];
        end
        2: begin
            h = data[31:16];
            b = data[23:16];
        end
        3: begin
            h = data[31:16];
            b = data[31:24];
        end
        default: begin
            h = 0;
            b = 0;
        end
    endcase
end
```

This allowed for the cache or ram (depending on whether or not there is a hit) to pass the word into the half_word_byte module in order to sign/zero extend it.

### Challenges Encountered

The main challenges throughout the development of the cache were the offset and offset address, this was a difficult sticking point for an amount of time, however after discussing with my group there were a number of errors in my code, a main one was the use of assign within an always_comb block that caused a serious error which lead to the offset. One of the other issues I had was with the offset address aspect on the ram.sv file this was again easily fixed after discussion with my group as there was an error in how the offset address was calculated.

### Testing Done

[Testing Evidence](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/tree/cache/test/memory) within the memory section on github, not an extensive test however it shows basic functionality.

## Program Counter

The design of the program counter within the CPU is relatively straight forward I chose to completely separate structural and behavioral blocks this lead to a separate mux which i chose to do as it helps with visualising the program counter at a top level. There wasn't an awful lot of room in what could be changed about the program counter so I wrote it pretty much as the specification asked for.

### Challenges Encountered

In the design of the problem counter I encountered no major challenges, the majority of the errors made were simple syntax errors and were easily fixed thanks to the errors thrown by verilator.

## Assembly

The following was initially implemented by myself in the following commit [assembly](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/9c2ef79372362c8457fde79cfaab4724da8a7138). It was then finalised by Roshan in the following commit [Testing](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/df9896f701c083c28a23d94e8b8e92ba42a95951#diff-d14c6307b289859d26897e85c24a95755a9d7f4e2ef7e430084b1fd80aba5c68)

I wrote a basic f1 assembly program based off of an original idea created by Anlan, I then added the no-ops (`ADDI zero, zero, 0x0`) after the pipelining had been finished by Roshan. It was then also improved and finalised by Roshan, I then using an altered version of the make file used provided in the reference program I assembled the program into the hex file.

Below is the assembly programs without any no-ops.

```
main:
    JAL ra, init
    JAL ra, _loop
    ADDI a0, zero, 0 # Cut lights at end of sequence

infloop:
    JAL ra, infloop # Loop here forever when program is finished

init:
    ADDI s0, zero, 0xFF
    ADDI s1, zero, 8
    JALR ra, ra, 0
 
_loop:
    SLLI t0, a0, 1
    ADDI a0, t0, 1
    ADDI t2, zero, 0 # Reset t2 to 0 before calling routine
    JAL t1, routine
    BNE a0, s0, _loop
    JALR ra, ra, 0

routine:
    ADDI t2, t2, 1
    BNE t2, s1, routine
    JALR t1, t1, 0

```
This program is split into several parts (main, infloop, _loop, init and routine).
|Function|Description|
|---|---|
|main| Calls the intialisation and main functions and also resets the lights at the end of the sequence|
|infloop| Loops forever when the program is finished|
|_loop| The main loop that calls shifts the a0 register in order to light up the correct lights|
|init| Initialises the registers with the correct values for the program|
|rountine| Ticks up a register in order to provide the delay in the light sequence|

### Challenges Encountered

The main challenge encountered within this task was the syntax of the RISC V assembly language, due to this being a completely new language to me I was incredibly new to the structure and syntax of this language therefore I made a few errors during the first couple of iterations of the program this was helped by collaborating with my group mates.

### Testing

When simulated the f1 light sequence worked exactly as expected [F1 lights](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/blob/main/test/media/F1_lights.mp4)

## Makefile

The following was initially implemented in commite [Added makefile](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/cd01e18b412ae529cc6b89fb285df9f3c951dd8e) and finalised in [fixed make file to allow source](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/commit/ecd975f64e0c5e69c96b1bcd44c79fe722efd3b4)

The last and definitely smallest part of my role within the group was a makefile for each of the branches which allows automatic loading of the correct ram and instruction memory using the `sed` bash command.

### Challenges Encountered

The default shell in a make file isnt BASH its shell so i had to add the line `SHELL := /bin/bash` in order to use the command `source x.sh` as it allows for the make file to be ran without using `chmod +x x.sh`.
## Reflection

On reflection I feel like my knowledge and understanding of system verilog, git, bash and overall memory design. I feel like as a group once we got to grips with streamlined github development we were very efficient with how we developed the cpu over the past couple of weeks also implementing a system in which every pull request would be read over by another member of the group in order to maintain consistency and accuracy in the source code. 

As a team I felt we all worked incredibly well together as I feel like we all collaborated together to solve all of the issues we came about during the project in an accurate and efficient way. This led to an incredibly successful workflow that allowed us to meet the highest stretch goals asked of us.

Overall I feel like we have been extremely successful with the development of our risc-v cpu as we set out to do more than we even expected to, mainly the cache memory. As we all felt like the goal of having a working cache memory was maybe perhaps too difficult of a goal to achieve however in the end we managed to successfully get a working cpu with 256 bytes of cache and 8kb of ram. This has made me incredibly happy as I feel like I have improved so much within the past couple of weeks as both a computer engineer and a team member.

