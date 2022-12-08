module top #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    output logic [31:0] a0
);

// // // Fetch stage // // //

// Fetch stage signals
logic [WIDTH-1:0] instr_F, PC_F, PCPlus4_F;

top_fetch top_fetch(
    .clk(clk),
    .rst(rst),
    .PCsrc_E(PCsrc_E), // Relies on result of execute stage
    .PCTarget_E(PCTarget_E), // As above
    .instr_F(instr_F),
    .PC_F(PC_F),
    .PCPlus4_F(PCPlus4_F)
);


// // // Fetch-decode pipeline register // // //

fetch_decode_reg fetch_decode_reg(
    .clk(clk),
    .rst(rst),
    .instr_F(instr_F),
    .PC_F(PC_F),
    .PCPlus4_F(PCPlus4_F),
    .instr_D(instr_D),
    .PC_D(PC_D),
    .PCPlus4_D(PCPlus4_D)
);


// // // Decode stage // // //

// Inputs from fetch stage
logic [WIDTH-1:0] instr_D, PC_D, PCPlus4_D;
// Operands
logic [WIDTH-1:0] RD1_D, RD2_D, ImmExt_D;
// Control signals
logic regWrite_D, memWrite_D, jump_D, ALUsrc_D;
logic [1:0] resultSrc_D;
logic [2:0] branch_D;
logic [3:0] ALUctrl_D;
logic [4:0] Rd_D;

top_decode top_decode(
    .clk(clk),
    .rst(rst),
    .instr_D(instr_D),
    .regWrite_W(regWrite_W), // Write signals come from writeback stage
    .Rd_W(Rd_W), // As above
    .result_W(result_W), // As above
    .regWrite_D(regWrite_D),
    .resultSrc_D(resultSrc_D),
    .memWrite_D(memWrite_D),
    .jump_D(jump_D),
    .branch_D(branch_D),
    .ALUctrl_D(ALUctrl_D),
    .ALUsrc_D(ALUsrc_D),
    .RD1_D(RD1_D),
    .RD2_D(RD2_D),
    .Rd_D(Rd_D),
    .ImmExt_D(ImmExt_D),
    .a0(a0)
);

// // // Decode-execute pipeline register // // //

decode_execute_reg decode_execute_reg(
    .clk(clk),
    .rst(rst),
    .regWrite_D(regWrite_D),
    .memWrite_D(memWrite_D),
    .jump_D(jump_D),
    .branch_D(branch_D),
    .ALUsrc_D(ALUsrc_D),
    .resultSrc_D(resultSrc_D),
    .ALUctrl_D(ALUctrl_D),
    .Rd_D(Rd_D),
    .RD1_D(RD1_D),
    .RD2_D(RD2_D),
    .PC_D(PC_D),
    .ImmExt_D(ImmExt_D),
    .PCPlus4_D(PCPlus4_D),
    .regWrite_E(regWrite_E),
    .memWrite_E(memWrite_E),
    .jump_E(jump_E),
    .branch_E(branch_E),
    .ALUsrc_E(ALUsrc_E),
    .resultSrc_E(resultSrc_E),
    .ALUctrl_E(ALUctrl_E),
    .Rd_E(Rd_E),
    .RD1_E(RD1_E),
    .RD2_E(RD2_E),
    .PC_E(PC_E),
    .ImmExt_E(ImmExt_E),
    .PCPlus4_E(PCPlus4_E)
);


// // // Execute stage // // //

// Operands from decode stage
logic [WIDTH-1:0] RD1_E, RD2_E, ImmExt_E, PCPlus4_E, PC_E;
// Control signals from decode stage
logic regWrite_E, memWrite_E, jump_E, ALUsrc_E, PCsrc_E;
logic [1:0] resultSrc_E;
logic [2:0] branch_E;
logic [3:0] ALUctrl_E;
logic [4:0] Rd_E;
// Internal signals
// logic EQ;
// Output signals
logic [WIDTH-1:0] ALUResult_E, writeData_E, PCTarget_E;

top_execute top_execute(
    .ALUctrl(ALUctrl_E),
    .ALUsrc(ALUsrc_E),
    .RD1(RD1_E),
    .RD2(RD2_E),
    .ImmOp(ImmExt_E),
    .jump_E(jump_E),
    .branch_E(branch_E),
    .EQ(EQ),
    .ALUout(ALUResult_E),
    .PCsrc_E(PCsrc_E)
);

// Temporary signal assignments
// assign PCsrc_E = jump_E || (branch_E == 3'b001 && EQ == 0);
assign PCTarget_E = PC_E + (ImmExt_E << 1); // TODO Move this into top_execute
assign writeData_E = RD2_E; // TODO Move this into top_execute


// // // Execute-memory pipeline register // // //

execute_memory_reg execute_memory_reg(
    .clk(clk),
    .rst(rst),
    .regWrite_E(regWrite_E),
    .memWrite_E(memWrite_E),
    .resultSrc_E(resultSrc_E),
    .Rd_E(Rd_E),
    .ALUResult_E(ALUResult_E),
    .writeData_E(writeData_E),
    .PCPlus4_E(PCPlus4_E),
    .regWrite_M(regWrite_M),
    .memWrite_M(memWrite_M),
    .resultSrc_M(resultSrc_M),
    .Rd_M(Rd_M),
    .ALUResult_M(ALUResult_M),
    .writeData_M(writeData_M),
    .PCPlus4_M(PCPlus4_M)
);


// // // Memory stage // // //

// Operands from execute stage
logic [WIDTH-1:0] ALUResult_M, writeData_M, PCPlus4_M;
// Control signals from execute stage
logic regWrite_M, memWrite_M;
logic [1:0] resultSrc_M;
logic [4:0] Rd_M;
// Output signals
logic [WIDTH-1:0] readData_M;

top_memory top_memory(
    .clk(clk),
    .rst(rst),
    .memWrite_M(memWrite_M),
    .ALUResult_M(ALUResult_M),
    .writeData_M(writeData_M),
    .readData_M(readData_M)
);


// // // Memory-writeback pipeline register // // //

memory_writeback_reg memory_writeback_reg(
    .clk(clk),
    .rst(rst),
    .regWrite_M(regWrite_M),
    .resultSrc_M(resultSrc_M),
    .Rd_M(Rd_M),
    .ALUResult_M(ALUResult_M),
    .readData_M(readData_M),
    .PCPlus4_M(PCPlus4_M),
    .regWrite_W(regWrite_W),
    .resultSrc_W(resultSrc_W),
    .Rd_W(Rd_W),
    .ALUResult_W(ALUResult_W),
    .readData_W(readData_W),
    .PCPlus4_W(PCPlus4_W)
);


// // // Writeback stage // // //

// Operands from memory stage
logic [WIDTH-1:0] ALUResult_W, readData_W, PCPlus4_W;
// Control signals from memory stage
logic regWrite_W;
logic [1:0] resultSrc_W;
logic [4:0] Rd_W;
// Output signals
logic [WIDTH-1:0] result_W;

top_writeback top_writeback(
    .ALUResult_W(ALUResult_W),
    .readData_W(readData_W),
    .PCPlus4_W(PCPlus4_W),
    .resultSrc_W(resultSrc_W),
    .result_W(result_W)
);


endmodule
