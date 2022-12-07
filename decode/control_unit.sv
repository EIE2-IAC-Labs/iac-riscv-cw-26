module control_unit #(
) (
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic [6:0] funct7,


    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic ALUsrcD,
    output logic ImmSrcD,
    output logic [2:0] BranchD,
    output logic JumpD,
    output logic [2:0] ALUControlD
);

logic [1:0] instr_type;       // interconnect wire.

main_decoder main_control (
    .funct3(funct3),
    .opcode(opcode),
    .RegWrite(RegWriteD),
    .ResultSrc(ResultSrcD),
    .MemWrite(MemWriteD),
    .ALUsrc(ALUsrcD),
    .ImmSrc(ImmSrcD),
    .branch(BranchD),
    .jump(JumpD),
    .ALUOp(instr_type)
);

ALU_decoder alu_control (
    .ALUOp(instr_type),
    .funct3(funct3),
    .funct7_bit(funct7[6]),
    .ALUControl(ALUControlD)
)
    
endmodule
