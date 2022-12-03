module top #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    output logic [31:0] a0
);

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

// Temporary signal assignment
assign PCsrc_E = PCsrc;
assign PCTarget_E = PC_F + (ImmOp << 1);
assign instr = instr_F;
assign PC = PC_F;

// // // End of fetch stage // // //
// // // Decode stage // // //

// Control flags
logic ALUsrc, PCsrc, RegWriteSrc, RegWrite, ImmSrc;
logic [2:0] ALUctrl;

// Register indexes
logic [4:0] rs1, rs2, rd;

// Other values
logic EQ;
logic [31:0] ImmOp, instr, PC;

// Bus splitting
assign rs2 = instr[24:20];
assign rs1 = instr[19:15];
assign rd = instr[11:7];

aluTop aluTop(
    .clk(clk), 
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .RegWriteSrc(RegWriteSrc),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .ImmOp(ImmOp),
    .EQ(EQ),
    .a0(a0));

top_control_mem_extend top_cme(
    .PC(PC),
    .EQ(EQ),
    .instr(instr),
    .RegWrite(RegWrite),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .RegWriteSrc(RegWriteSrc),
    .ImmOp(ImmOp));

endmodule
