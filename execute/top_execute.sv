module top_execute #(
    parameter DATA_WIDTH = 32
) (
    input logic ALUsrc,
    input logic [3:0] ALUctrl,
    input logic [DATA_WIDTH-1:0] RD1, RD2,
    input logic [DATA_WIDTH-1:0] ImmOp,
    input logic jump_E,
    input logic [2:0] branch_E,
    output logic EQ,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic PCsrc_E
);

logic [DATA_WIDTH-1:0] ALUop2;

assign ALUop2 = ALUsrc ? ImmOp : RD2;

alu ALU(
.ALUctrl(ALUctrl),
.ALUop1(RD1),
.ALUop2(ALUop2),
.SUM(ALUout),
.EQ(EQ)
);

pc_src pc_src(
    .JumpE(jump_E),
    .BranchE(branch_E),
    .ZeroE(EQ),
    .PCSrcE(PCsrc_E)
);

endmodule
