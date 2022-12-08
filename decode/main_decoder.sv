module main_decoder #(
) (
    input logic [14:12] funct3,
    input logic [6:0] opcode,
    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic ALUsrcD,
    output logic [2:0] ImmSrcD,
    output logic [2:0] BranchD,
    output logic JumpD,
    output logic [1:0] ALUOp
);

typedef enum {UNDEFINED, R_type, addi, slli, lw, U_type, S_type, B_type, jal, jalr} Instr;
Instr instr = UNDEFINED;

// Determine instruction
always_comb begin
    if (opcode == 7'b0110011)
        instr = R_type;
    else if (opcode == 7'b0010011 && funct3 == 3'b000)
        instr = addi;
    else if (opcode == 7'b0010011 && funct3 == 3'b001)
        instr = slli;
    else if (opcode == 7'b0000011 && funct3 == 3'b010)
        instr = lw;
    else if (opcode == 7'b0110111)
        instr = U_type;
    else if (opcode == 7'b0100011)
        instr = S_type;
    else if (opcode == 7'b1100011)
        instr = B_type;
    else if (opcode == 7'b1101111)
        instr = jal;
    else if (opcode == 7'b1100111)
        instr = jalr;
    else
        instr = UNDEFINED;
end

// Set outputs
always_comb begin
    RegWriteD = instr == R_type || instr == addi || instr == slli || instr == lw || instr == U_type;
    if (instr == lw)
        ResultSrcD = 2'b01;
    else if (instr == jal || instr == jalr)
        ResultSrcD = 2'b10;
    else
        ResultSrcD = 2'b00;
    MemWriteD = instr == S_type;
    ALUsrcD = instr == addi || instr == slli || instr == lw || instr == U_type || instr == S_type;
    if (instr == U_type)
        ImmSrcD = 3'b001;
    else if (instr == S_type)
        ImmSrcD = 3'b010;
    else if (instr == B_type)
        ImmSrcD = 3'b011;
    else if (instr == jal)
        ImmSrcD = 3'b100;
    else
        ImmSrcD = 3'b000; // Including jalr.
    BranchD = instr == B_type;
    JumpD = instr == jal || instr == jalr;
    if (instr == lw || instr == S_type)
        ALUOp = 2'b00;
    else if (instr == B_type)
        ALUOp = 2'b01;
    else
        // Mainly for I-type and R-type.
        ALUOp = 2'b10;
end

endmodule
