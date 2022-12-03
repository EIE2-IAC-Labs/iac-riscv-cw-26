module top_decode #(
    parameter WIDTH = 32
) (
    input logic clk,
    input logic rst,
    input logic EQ,
    input logic [WIDTH-1:0] instr_D,
    input logic regWrite_W,
    input logic [4:0] Rd_W,
    input logic [WIDTH-1:0] result_W,
    output logic regWrite_D,
    output logic [1:0] resultSrc_D,
    //output logic memWrite_D,
    //output logic jump_D,
    //output logic [2:0] branch_D,
    output logic PCsrc_D,
    output logic [3:0] ALUctrl_D,
    output logic ALUsrc_D,
    output logic [4:0] Rd_D,
    output logic [WIDTH-1:0] RD1_D, RD2_D, ImmExt_D, a0
);

assign Rd_D = instr_D[11:7];

logic [2:0] ImmSrc_D;

register register (
    .clk(clk),
    .rs1(instr_D[19:15]),
    .rs2(instr_D[24:20]),
    .rd(Rd_W),
    .WE3(regWrite_W),
    .WD3(result_W),
    .RD1(RD1_D),
    .RD2(RD2_D),
    .a0(a0)
);

control_unit control_unit(
    .EQ(EQ),
    .funct3(instr_D[14:12]),
    .opcode(instr_D[6:0]),
    .RegWrite(regWrite_D),
    .ALUctrl(ALUctrl_D),
    .ALUsrc(ALUsrc_D),
    .ImmSrc(ImmSrc_D),
    .PCsrc(PCsrc_D),
    .RegWriteSrc(resultSrc_D)
);

sign_extend SignExtend (
    .instruction(instr_D),
    .ImmSrc(ImmSrc_D),
    .ImmOp(ImmExt_D)
);
    
endmodule
