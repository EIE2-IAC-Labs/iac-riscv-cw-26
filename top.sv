module top #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    output logic [31:0] a0
);

// Temporary universal signals (remove these once pipeline registers are added)
logic PCsrc, ALUsrc, resultSrc, regWrite, ImmSrc;
logic [3:0] ALUctrl;
logic [4:0] Rd;
logic [WIDTH-1:0] instr, PC, ImmOp, RD1, RD2, PCPlus4, ALUResult, ReadData;

// // // Fetch stage // // //

logic PCsrc_E;
logic [WIDTH-1:0] PCTarget_E, instr_F, PC_F, PCPlus4_F;

top_fetch top_fetch(
    .clk(clk),
    .rst(rst),
    .PCsrc_E(PCsrc_E),
    .PCTarget_E(PCTarget_E),
    .instr_F(instr_F),
    .PC_F(PC_F),
    .PCPlus4_F(PCPlus4_F)
);

// Temporary signal assignments
assign PCsrc_E = PCsrc;
assign PCTarget_E = PC_F + (ImmOp << 1);
assign instr = instr_F;
assign PC = PC_F;
assign PCPlus4 = PCPlus4_F;

// // // End of fetch stage // // //

// // // Decode stage // // //

logic regWrite_D, regWrite_W;
logic [1:0] resultSrc_D;
// logic memWrite_D;
// logic jump_D;
// logic [2:0] branch_D;
logic [3:0] ALUctrl_D;
logic ALUsrc_D, PCsrc_D;
logic [4:0] Rd_D, Rd_W;
logic [WIDTH-1:0] instr_D, RD1_D, RD2_D, ImmExt_D, PC_D, PCPlus4_D, result_W;

top_decode top_decode(
    .clk(clk),
    .rst(rst),
    .EQ(EQ),
    .instr_D(instr_D),
    .regWrite_W(regWrite_W),
    .Rd_W(Rd_W),
    .result_W(result_W),
    .regWrite_D(regWrite_D),
    .resultSrc_D(resultSrc_D),
    .PCsrc_D(PCsrc_D),
    .ALUctrl_D(ALUctrl_D),
    .ALUsrc_D(ALUsrc_D),
    .RD1_D(RD1_D),
    .RD2_D(RD2_D),
    .Rd_D(Rd_D),
    .ImmExt_D(ImmExt_D),
    .a0(a0)
);

// Temporary signal assignments
assign regWrite = regWrite_D;
assign regWrite_W = regWrite;
assign resultSrc = resultSrc_D;
assign ALUctrl = ALUctrl_D;
assign ALUsrc = ALUsrc_D;
assign Rd = Rd_D;
assign Rd_W = Rd;
assign instr_D = instr;
assign RD1 = RD1_D;
assign RD2 = RD2_D;
assign ImmOp = ImmExt_D;
assign PC_D = PC;
assign PCPlus4_D = PCPlus4_F;
assign result_W = resultSrc ? ReadData : ALUResult;
assign PCsrc = PCsrc_D;

// Other values
logic EQ;

aluTop aluTop(
    .clk(clk), 
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .RD1(RD1),
    .RD2(RD2),
    .ImmOp(ImmOp),
    .EQ(EQ),
    .a0(a0),
    .ALUout(ALUResult),
    .memOut(ReadData)
    );

endmodule
