/* verilator lint_off UNUSED */
module control_unit #(
) (
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic [6:0] funct7,


    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic ALUsrcD,
    output logic [2:0] ImmSrcD,
    output logic BranchD,
    output logic JumpD,
    output logic [2:0] R_size,
    output logic [2:0] DMem_size,
    output logic [3:0] ALUControlD,
    output logic jalr, lui,
    output logic load_extend_s
);

logic [1:0] instr_type;       // interconnect wire.

main_decoder main_control (
    .funct3(funct3),
    .opcode(opcode),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .ALUsrcD(ALUsrcD),
    .ImmSrcD(ImmSrcD),
    .BranchD(BranchD),
    .JumpD(JumpD),
    .R_size(R_size),
    .DMem_size(DMem_size),
    .ALUOp(instr_type),
    .jalr_o(jalr),
    .lui_o(lui),
    .load_extend_s(load_extend_s)
);

ALU_decoder alu_control (
    .ALUOp(instr_type),
    .funct3(funct3),
    .funct7_bit(funct7[5]),
    .ALUControlD(ALUControlD)
);
    
endmodule
