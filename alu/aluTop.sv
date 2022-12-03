module aluTop #(
    parameter DATA_WIDTH = 32
) (
    input logic clk,
    input logic ALUsrc,
    input logic [2:0] ALUctrl,
    input logic [DATA_WIDTH-1:0] RD1, RD2,
    input logic [DATA_WIDTH-1:0] ImmOp,
    output logic EQ,
    output logic [DATA_WIDTH-1:0] a0,
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic [DATA_WIDTH-1:0] memOut
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

ram ram(0, 0, ALUout, clk, memOut);

endmodule
