module top_execute #(
    parameter DATA_WIDTH = 32
) (
    input logic ALUsrc,
    input logic [3:0] ALUctrl,
    input logic [DATA_WIDTH-1:0] RD1, RD2,
    input logic [DATA_WIDTH-1:0] ImmOp,
    input logic [DATA_WIDTH-1:0] PC_E,
    input logic jump_E,
    input logic branch_E,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic PCsrc_E,
    output logic [DATA_WIDTH-1:0] PCTarget_E, writeData_E
);

logic EQ;
logic [DATA_WIDTH-1:0] ALUop2;

assign ALUop2 = ALUsrc ? ImmOp : RD2;
assign PCTarget_E = PC_E + (ImmOp << 1); // TODO Move this into top_execute
assign writeData_E = RD2; // TODO Move this into top_execute


alu ALU(
.ALUop1(RD1),
.ALUop2(ALUop2),
.ALUctrl(ALUctrl),
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
