module main_decoder #(
) (
    input logic [14:12] funct3,
    input logic [6:0] opcode,
    output logic RegWriteD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic ALUsrcD,
    output logic [2:0] ImmSrcD,
    output logic BranchD,
    output logic JumpD,
    output logic [1:0] ALUOp,
    output logic [2:0] R_size,
    output logic [2:0] DMem_size

);

typedef enum {UNDEFINED, R_type, addi, slli, L_type, U_type, S_type, B_type, jal, jalr} Instr;
Instr instr = UNDEFINED;

// Determine instruction
always_comb begin
    case (opcode)
        7'b0110011: instr = R_type;
        7'b0010011: if (funct3 == 3'b000) instr = addi;
                    else instr = slli; // Other undefined funct3s will also cause instr = slli.
        7'b0000011: instr = L_type;
        7'b0110111: instr = U_type;
        7'b0100011: instr = S_type;
        7'b1100011: instr = B_type;
        7'b1101111: instr = jal;
        7'b1100111: instr = jalr;
        default: instr = UNDEFINED;
    endcase
end

// Set outputs
always_comb begin
    RegWriteD = instr == R_type || instr == addi || instr == slli || instr == L_type || instr == U_type;
    case(instr)
        L_type: ResultSrcD = 2'b01;
        jal: ResultSrcD = 2'b10;
        jalr: ResultSrcD = 2'b10;
        default: ResultSrcD = 2'b00;
    endcase
    MemWriteD = instr == S_type;
    ALUsrcD = instr == addi || instr == slli || instr == L_type || instr == U_type || instr == S_type;
    case(instr)
        U_type: ImmSrcD = 3'b001;
        S_type: ImmSrcD = 3'b010;
        B_type: ImmSrcD = 3'b011;
        jal: ImmSrcD = 3'b100;
        default: ImmSrcD = 3'b000; // Including jalr.
    endcase
    BranchD = instr == B_type;
    JumpD = instr == jal || instr == jalr;
    case(instr)
        L_type: ALUOp = 2'b00;
        S_type: ALUOp = 2'b00;
        B_type: ALUOp = 2'b01;
        default: ALUOp = 2'b10;
    endcase
    case(instr)
        L_type: R_size = funct3;
        S_type: DMem_size = funct3;
    endcase
end

endmodule
