module top #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    output logic [31:0] a0
);

// Fetch stage

// Fetch stage signals
logic [WIDTH-1:0] instr, PC, PCPlus4;

top_fetch top_fetch(
    .clk(clk),
    .rst(rst),
    .PCsrc_E(PCsrc), // Relies on result of execute stage
    .PCTarget_E(PCTarget), // As above
    .instr_F(instr),
    .PC_F(PC),
    .PCPlus4_F(PCPlus4)
);


// Decode stage

// Operands
logic [WIDTH-1:0] RD1, RD2, ImmExt;
// Control signals
logic regWrite, jump, ALUsrc, branch, jalr, lui, load_extend_s;
logic [1:0] resultSrc;
logic [2:0] R_size, DMem_size;
logic [3:0] ALUctrl;
logic [4:0] Rd;

top_decode top_decode(
    .clk(clk),
    .rst(rst),
    .instr_D(instr),
    .regWrite_W(regWrite), // Write signals come from writeback stage
    .Rd_W(Rd), // As above
    .result_W(result), // As above
    .regWrite_D(regWrite),
    .resultSrc_D(resultSrc),
    .jump_D(jump),
    .branch_D(branch),
    .ALUctrl_D(ALUctrl),
    .ALUsrc_D(ALUsrc),
    .RD1_D(RD1),
    .RD2_D(RD2),
    .Rd_D(Rd),
    .ImmExt_D(ImmExt),
    .a0(a0),
    .R_size_D(R_size),
    .DMem_size_D(DMem_size),
    .jalr(jalr),
    .lui(lui),
    .load_extend_s(load_extend_s)
);


// Execute stage

// Internal signals
logic PCsrc;
// Output signals
logic [WIDTH-1:0] ALUResult, writeData, PCTarget;

top_execute top_execute(
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .RD1(RD1),
    .RD2(RD2),
    .ImmOp(ImmExt),
    .PC_E(PC),
    .jump_E(jump),
    .branch_E(branch),
    .ALUout2(ALUResult),
    .PCsrc_E(PCsrc),
    .PCTarget_E(PCTarget),
    .writeData_E(writeData),
    .jalr(jalr), //added JALR output
    .lui(lui)
);



// Memory stage 

// Output signals
logic [WIDTH-1:0] readData;

top_memory top_memory(
    .clk(clk),
    .sw(R_size[2]),
    .sh(R_size[1]),
    .sb(R_size[0]),
    .lw(DMem_size[2]),
    .lh(DMem_size[1]),
    .lb(DMem_size[0]),
    .s(load_extend_s),
    .ALUResult_M(ALUResult),
    .writeData_M(writeData),
    .readData_M(readData)
);


// // // Writeback stage // // //

// Output signals
logic [WIDTH-1:0] result;

top_writeback top_writeback(
    .ALUResult_W(ALUResult),
    .readData_W(readData),
    .PCPlus4_W(PCPlus4),
    .resultSrc_W(resultSrc),
    .result_W(result)
);


endmodule
