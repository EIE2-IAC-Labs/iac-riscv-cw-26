# Corey Personal Statement

Throughout the project I was mainly in charge of implementing the memory in the single cycled, pipelined and cache versions, however I also worked on the assembly programs and wrote some makefile to make running the simulations easier.

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
|dout| The signed/unsinged Word/Half/Byte|

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
Here when SB is high it stores the least significant byte of the 32 bit immediete into the ram array, when SH is high it stores the 2 least significant bytes of the 32 bit immediate into the ram array and when SW is high it loads all 32 bits into the ram array.

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