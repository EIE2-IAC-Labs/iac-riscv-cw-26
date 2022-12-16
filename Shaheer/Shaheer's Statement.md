# Table of Contents:
- [Table of Contents:](#table-of-contents)
- [Introduction](#introduction)
  - [ALU](#alu)
- [ALU Decoder ](#alu-decoder-)
- [Register File ](#register-file-)
- [Single Cycle CPU ](#single-cycle-cpu-)
- [Testing](#testing)
- [Commits](#commits)
- [Reflection](#reflection)
    - [_Look in the mirror I guess._](#look-in-the-mirror-i-guess)


---
# Introduction

We were tasked to create a RISC-V32 Single Cycle CPU. Since we had more time, we were able to implement pipelining and cache versions of the processor. Since majority of the work for the single cycle was laid out from the Lab 4, Roshan initally just copyed that repo into this current one.

I was in charge of the execute block stage consisting predominantly of the ALU Block and mux files. I was also the one who made the register. Since I was the one in charge of the ALU, it was easier and made more sense for me to do the ALU Decoder file as well.

We managed to implement all the instructions laid out in [lecture 6 slides](#http://www.ee.ic.ac.uk/pcheung/teaching/EIE2-IAC/Lecture%206%20-%20RISC-V%20Instruction%20Set%20Overview%20(slides).pdf). 

Due to overlap of content in the project and everyone's willingness to work together, we all collaborated as a team in the design process of the cpu where other members where the prinicpal contributors.

---

## ALU

Initially, the ALU top file (`top_execute.sv`) in both single cycle and pipelining originally had the register, mux, and ALU modules. However, when working on the project and designing the cpu, we designed everythihg according to the pipelined version instead of first implementing the single cycle version. One could say we laid out the pipes first (rather this course was laying pipes in me) and then implemented single cycle (top-down approach instead of  down-top). Hence, the top file has the ALU, PC_Src, and internal mux modules.

The ALU takes in 3 inputs and 2 outputs: 
- Inputs:
    - `ALUop1` : input from Register 
    - `ALUop2` : input from Register or Immidate depenidng if instructtion `lui` is implemented
    - `ALUctrl` : Control signal from ALU Decode module to specify what ALU operations to execute. It is defined as 
    ```systemverilog
     ALUctrl = {Funct7_bit,funct3}
    ```
- Outputs:
    - `SUM` : Output of ALU
    - `EQ` : Output depending on the branch instruction and criteria

    The ALU works by getting the 4 bit `ALUctrl` signal from the ALU Decode module and the results are calculated accordingly.

    `ALUctrl` was originally 3 bits, but then it was changed to 4 bits to implement extra instructions such as the ADD and SUB and SRA and SRL on the same `funct3` signal depending on the `funct7_bit` value. 

`SUM` and `EQ` Value were calculated based on the following table specification:

| ALUctrl | SUM Instruction | SUM | Branch Instruction | EQ |
| --- | --- | --- | --- | --- |
| 0000 | ADD | `ALUop1 + ALUop2` | BEQ |`ALUop1 == ALUop2`| 
|1000| SUB | `ALUop1 - ALUop2`| BEQ | `ALUop1 == ALUop2`| 
|X001| SLL | `ALUop1 << ALUop2` | BNE | `ALUop1 != ALUop2`|
|X010| AND | `ALUop1 & ALUop2` | - | - |
|X011| OR | `ALUop1 OR ALUop2` | - | - |
|X101| SLT | `ALUop1 < ALUop2 ? 1:0` |Signed BGE| `signed'(ALUop1) >= signed'(ALUop2)` | 
|X100| XOR | `ALUop1 ^ ALUop2` | Signed BLT|`signed'(ALUop1) < signed'(ALUop2)` | 
|0110| SRL | `ALUop1 >> ALUop2` | Unsigned BLTU | `ALUop1 < ALUop2`|
|X111| Left Shift | `ALUop1 << ALUop2` | Unsigned BGEU | `ALUop1 >=  ALUop2`|
| ```Default``` | - | `ALUop1` | - | `ALUop1 == ALUop2`|

The specifiaction of ALUctrl was designed as per [lecture 7 slide](#http://www.ee.ic.ac.uk/pcheung/teaching/EIE2-IAC/Lecture%207%20-%20Microarchitecture%20(slides).pdf).


Originally, the ALU was made with it just calculating `SUM` depending on `ALUctrl`, while `EQ` was only being evaluated for 1 branch control `BEQ`. While trying to implement the different branch instructions in the control unit, it was decided by myself that it would be much easier and efficient if we had a way to evaluate EQ based on different branch operations and then compared that with the Branch signal in the `PC_Src` module. Hence, later `EQ` was changed to add all the 6 branch functionality.

# ALU Decoder <a name ="alu_decoder"></a>

The ALU Decoder module takes 3 inputs from the Main Decoder and outputs `ALUControlD` accordingly.

- Inputs:
  - `ALUOp` : Defining the instruction type.
  - `funct3` : Opcode to set `ALUControlD` based on [lecture 7 slide](#http://www.ee.ic.ac.uk/pcheung/teaching/EIE2-IAC/Lecture%207%20-%20Microarchitecture%20(slides).pdf) specification.
  - `funct7_bit` : Provides the 4th bit of `ALUControlD`
- Output:
  - `ALUControlD` : Output signal for ALU module.

Initally, the ALU Decode module was developed with just 2 `ALUControlD` operations (ADD and SLL). With the further development of the CPU, all instructions were added based on the code below:

```systemverilog
case(ALUOp)

        2'b00: ALUControlD = 4'b0; // Output of all L_type and S_type Instructions
        2'b01: ALUControlD = {1'b0, funct3}; // Output of all B_type Instructions

        default: begin // Output of all R_type and other Instructions including immediate-type.
            case(funct3)
                3'b000: ALUControlD = {ALUOp == 2'b10 ? funct7_bit : 1'b0, 3'b000}; // ADD SUB
                // The above ternary statement is needed because there is no immediate SUB instruction
                // (the only asymmetry between register and immediate arithmetic instructions).
                3'b001: ALUControlD = {funct7_bit, 3'b001}; // SLL
                3'b010: ALUControlD = {funct7_bit, 3'b101}; // SLT
                3'b011: ALUControlD = {funct7_bit, 3'b111}; // SLTU
                3'b100: ALUControlD = {funct7_bit, 3'b100}; // XOR
                3'b101: ALUControlD = {funct7_bit, 3'b110}; // SRL SRA
                3'b110: ALUControlD = {funct7_bit, 3'b011}; // OR
                3'b111: ALUControlD = {funct7_bit, 3'b010}; // AND
                default: ALUControlD = 4'b0; // Default
            endcase
        end

    endcase

```






# Register File <a name ="reg_file"></a>

The Register module was built according to the LAB 4 specification and later adapted to suit pipelining. It consists of 32 registers where  `register[0]` is hard-wired to be defined as always being aconstant `0` to keep in line with RISC-V ISA rules: 
```systemverilog
logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:1];
// The zero register is not actually implemented as a register,
// but instead hardwired to the constant zero.

```

The register has a synchronous write and an asynchronous read. The writeback stage for the register was changed from positive edge clock cycle to negative edge to reduce number of cycles taken in both pipelining and single cycle CPUs.

Register 10 is used as the `a0` output that drives the value of the F1 and PDF reference testing programs.

# Single Cycle CPU <a name ="single_cycle"></a>

Initially, the whole LAB 4 CPU, which was completed by all of us, was copyed to this repo by Roshan and then we all started working on adding extra functionality with pipelining in mind. We first completed the pipelining CPU and then later, once we had enough time - still not enough to finish the wishbone though, I took the liberty to remove all the pipeling registers and re-writing/editing/debugging the `top.sv` file and others to make sure single cycle was working properly. Minor issues were debugged and lagter all F1 and reference tests worked. The single cycle cpu can be found in the [single_cycle](#https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/tree/single_cycle) branch of this repo.

# Testing

[ALU top module testbench](#[test/alutop_tb.cpp](https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/blob/single_cycle/test/alutop_tb.cpp)) file contains the testing sample to test all the outputs of the ALU module.

It runs through all the possible `ALUctrl` values and to test for each conditon.
```c
    int ALUcntrl_testing_vals[9] = {0,1,8,2,3,5,4,6,7};
```

[ALU Decode module testbench](#https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26/blob/single_cycle/test/aludecode_tb.cpp) file contains the testing sample to test ALU Decode functionality.

```c
int funct7_test[2] = {0,1};
    int ALUOp_test[4] = {0,1,2,3};
    
    
    int funct3_test[8] = {0,1,2,3,4,5,6,7};
    // run simulation for many clock cycles

    for(int i=0; i< 4; i++){


        top->ALUOp = ALUOp_test[i];

        for(int j=0; j<8;j++){

            top->funct7_bit = 0;
             top->funct3 = funct3_test[j];
             top->eval ();

             if(i>=2){
                top->funct7_bit = 1;
                top->eval ();
             }
        }

        // if(Verilated::gotFinish()) exit(0);
    
    }
```
Checks every combination of `funct3, funct7_bit,` and `ALUOp`. Instead of making a `.vcd` file and looking at the signal in GTKWave, as that is a hassle and my eyes have gone numb from all those green lines, 

```systemverilog

    $display("ALUOP = %b ",ALUOp); 
    $display("Funct3 = %b ",funct3);
    $display("Funct7 = %b ",funct7_bit);
    $display("ALUControlD = %b \n ",ALUControlD);
```
was added in the ALU Decode module file to output all the different combinations.

Videos of [F1 Test 01](F1_TEST.MOV), [F1 Test 02](F1_TEST02.MOV),  and PDF Test with [SINE](PDF_SINE.MOV), [GAUSSIAN](PDF_GAUSSIAN.MOV), [TRIANGLE](PDF_TRIANGLE.MOV), and [NOISY data](PDF_NOISY.MOV) values are attached to showcase that single cycle cpu works.

# Commits

The table below outlines the main commits made by myself, it does not include commits that were involved in debugging and fixing minor erros:
|Description| Commit ID (Full SHA)|
| --- | ---|
|Adding Left Shift and SLT TO ALU|abfac27b28fee7c5f0a95a31695e083acf4e6016|
|Adding all the ALU Instructions and re-vamping ALU Decode to include new Branch instruction logic|3907f33ee4ff85377144990b03c568197936583a|
| Fixing bugs in ALU and ALU Decode and merging branch into main | 322a60e1511d1e6b0d9e5be94c615dfba898bc99 |
|Verifying F1 test program and approving merge with main | 87591a132eeb2b24c7de7ddd04fe0c4038c32948 |
| Adding JALR mux in ALU Top| 97e021b73f6dff382ee525ddb6e15e73994975a7 |
| Single Cycle Branch | https://github.com/EIE2-IAC-Labs/iac-riscv-cw-26.git |


# Reflection
 
### _Look in the mirror I guess._

---

While communication between team members was good, in hindsight it could be further improved as most errors can be traced to lack of understanding on how other modules were being implemented by other team members, causing conflicts between them. One way we could improve for next time would be to have more in-person meeting and wokring together physically rather than just using online remote methods - eventhough that is becoming the industry standard. 

As remote work is the new norm, one additional thing we could have implemented properly would have been to use agile methods such as scrum to have sprints for each team member to meet their goal and deadlines. Some agile methods were actually adopted by our team without us realising.


One major error I initally did was to commit all my chnaged before testing, which caused a lot of errors to prop up when testing. While all of these errors were successfully debugged, I should have extensively tested my code before committing and pushing to my own branch. I shortly after adopted this method, which helped me reduce time in debugging later commits.

While there were many challenges faced, this coursework was extremely exhilerating and I learnt a lot. I can now confidenlty say that my knowledge of CPU Architecture and the RISC-V ISA has substantially improved and I longer feel confused and flustered as I used to in lectures (well that's not entirely true as I do understand lecture btw).

This project has taught me a great deal about how to effectively split work in a group, and has improved my confidence and knowledgde of Git, Github, bash, verilog, and shell scripts. It also taught me that testing and debugging is a major part of any project and is usually the hardest one to do.

If I had more time, I would have liked to implement the additonal stretched goals such as the multiple cycle multiplication and subtraction and wishbone criterias. 

