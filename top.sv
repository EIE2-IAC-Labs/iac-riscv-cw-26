module top #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    output logic [31:0] a0
);

// Temporary universal signals (remove these once pipeline registers are added)
logic PCsrc, ALUsrc, resultSrc, regWrite, ImmSrc, EQ, memWrite, jump;
logic [2:0] branch;
logic [3:0] ALUctrl;
logic [4:0] Rd;
logic [WIDTH-1:0] instr, PC, ImmOp, RD1, RD2, PCPlus4, ALUResult, readData, writeData;

// // // Fetch stage // // //

logic [WIDTH-1:0] instr_F, PC_F, PCPlus4_F;

top_fetch top_fetch(
    .clk(clk),
    .rst(rst),
    .PCsrc_E(PCsrc),
    .PCTarget_E(PCTarget_E),
    .instr_F(instr_F),
    .PC_F(PC_F),
    .PCPlus4_F(PCPlus4_F)
);

// Temporary signal assignments
assign instr = instr_F;
assign PC = PC_F;
assign PCPlus4 = PCPlus4_F;

// // // End of fetch stage // // //

// // // Decode stage // // //

logic regWrite_D, regWrite_W;
logic [1:0] resultSrc_D;
logic memWrite_D;
logic jump_D;
logic [2:0] branch_D;
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
    .ALUctrl_D(ALUctrl_D),
    .ALUsrc_D(ALUsrc_D),
    .RD1_D(RD1_D),
    .RD2_D(RD2_D),
    .Rd_D(Rd_D),
    .ImmExt_D(ImmExt_D),
    .a0(a0),
    .branch_D(branch_D)
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
assign result_W = resultSrc ? readData : ALUResult; // TODO Move this conditional to the writeback stage.
assign PCsrc = PCsrc_D;
assign branch = branch_D;
// TODO Drive the below signals in the control unit.
assign memWrite_D = 0;
assign memWrite = memWrite_D;
assign jump_D = 0;
assign jump = jump_D;

// // // End of decode stage // // //

// // // Execute stage // // //

logic regWrite_E;
logic [1:0] resultSrc_E;
logic memWrite_E;
logic jump_E;
logic [2:0] branch_E;
logic [3:0] ALUctrl_E;
logic ALUsrc_E;
logic PCsrc_E;
logic [4:0] Rd_E;
logic [WIDTH-1:0] RD1_E, RD2_E, PC_E, ImmExt_E, PCPlus4_E, ALUResult_E, writeData_E, PCTarget_E;

top_execute top_execute(
    .clk(clk),
    .ALUctrl(ALUctrl_E),
    .ALUsrc(ALUsrc_E),
    .RD1(RD1_E),
    .RD2(RD2_E),
    .ImmOp(ImmExt_E),
    .EQ(EQ),
    .a0(a0),
    .ALUout(ALUResult_E)
);

// Temporary signal assignments
assign regWrite_E = regWrite;
assign resultSrc_E = resultSrc;
assign memWrite_E = memWrite;
assign jump_E = jump;
assign branch_E = branch;
assign ALUctrl_E = ALUctrl;
assign ALUsrc_E = ALUsrc;
assign PCsrc_E = branch == 3'b001 && EQ == 0; // TODO Move this into a dedicated 'branch control unit' in top_execute
assign PCsrc = PCsrc_E;
assign Rd_E = Rd;
assign RD1_E = RD1;
assign RD2_E = RD2;
assign PC_E = PC;
assign ImmExt_E = ImmOp;
assign PCPlus4_E = PCPlus4;
assign ALUResult = ALUResult_E;
assign PCTarget_E = PC_E + (ImmOp << 1); // TODO Move this into top_execute
assign writeData_E = RD2_E;
assign writeData = writeData_E;

// // // End of execute stage // // //

// // // Memory stage // // //

logic regWrite_M;
logic [1:0] resultSrc_M;
logic memWrite_M;
logic [4:0] Rd_M;
logic [WIDTH-1:0] ALUResult_M, writeData_M, PCPlus4_M, readData_M;

top_memory top_memory(
    .clk(clk),
    .rst(rst),
    .memWrite_M(memWrite_M),
    .ALUResult_M(ALUResult_M),
    .writeData_M(writeData_M),
    .readData_M(readData_M)
);

// Temporary signal assignments
assign regWrite_M = regWrite;
assign resultSrc_M = resultSrc;
assign memWrite_M = memWrite;
assign Rd_M = Rd;
assign ALUResult_M = ALUResult;
assign writeData_M = writeData;
assign PCPlus4_M = PCPlus4;
assign readData = readData_M;

// // // End of memory stage // // //


endmodule

