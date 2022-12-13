module top_decode #(
    parameter WIDTH = 32
) (
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] instr_D,
    input logic regWrite_W,
    input logic [4:0] Rd_W,
    input logic [WIDTH-1:0] result_W,
    output logic regWrite_D,
    output logic [1:0] resultSrc_D,
    output logic jump_D,
    output logic branch_D, //chaning width to 1
    output logic [3:0] ALUctrl_D,
    output logic ALUsrc_D,
    output logic [4:0] Rd_D,
    output logic [WIDTH-1:0] RD1_D, RD2_D, ImmExt_D, a0,
    output logic [2:0] R_size_D, DMem_size_D,
    output logic jalr, lui
);

assign Rd_D = instr_D[11:7];

logic [2:0] ImmSrc_D;

register register (
    .clk(clk),
    .rst(rst),
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
    .opcode(instr_D[6:0]),
    .funct3(instr_D[14:12]),
    .funct7(instr_D[31:25]),
    .RegWriteD(regWrite_D),
    .ResultSrcD(resultSrc_D),
    .ALUsrcD(ALUsrc_D),
    .ImmSrcD(ImmSrc_D),
    .BranchD(branch_D),
    .JumpD(jump_D),
    .R_size(R_size_D),
    .DMem_size(DMem_size_D),
    .ALUControlD(ALUctrl_D),
    .jalr(jalr),
    .lui(lui)
);

sign_extend SignExtend (
    .InstrD(instr_D),
    .ImmSrcD(ImmSrc_D),
    .ImmExtD(ImmExt_D)
);
    
endmodule
