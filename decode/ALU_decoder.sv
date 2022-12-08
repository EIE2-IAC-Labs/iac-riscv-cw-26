module ALU_decoder #(
) (
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic funct7_bit,
    output logic [3:0] ALUControlD,
    // output logic ALUBranchD,
)

always_comb begin
    case(ALUOp)
        2'b00: ALUControlD = 4'b0;
        2'b01: ALUControl = {0,funct3};
        default: begin
            case(funct3)
                3'b000: ALUControlD = {funct7_bit,000}; // ADD SUB
                3'b001: ALUControlD = {funct7_bit,001}; // SLL
                3'b010: ALUControlD = {funct7_bit,101}; // SLT
                3'b011: ALUControlD = {funct7_bit,111}; // SLTU
                3'b100: ALUControlD = {funct7_bit,100}; // XOR
                3'b101: ALUControlD = {funct7_bit,110}; // SRL SRA
                3'b110: ALUControlD = {funct7_bit,011}; // OR
                3'b111: ALUControlD = {funct7_bit,010}; // AND
                default: ALUControlD = 4'b0; // Default
            endcase
        end
endcase


    // if (ALUOp == 00)
    //     ALUControlD = 000;
    // else if (ALUOp == 01)
    //     ALUControlD = funct3;
    //     ALUBranchD = 1;
    // else
    //     if (funct3 == 000 || funct7_bit == 0)
    //         ALUControlD = 000;
    //     else if (funct3 == 000 || funct7 == 1)
    //         ALUControlD == 001;
    //     else if (funct3 == 001)
    //         ALUControlD = 111 // slli (not in lecture slides)
    //     else if (funct3 == 010)
    //         ALUControlD = 101;
    //     else if (funct3 == 110)
    //         ALUControlD = 011;
    //     else if (funct3 == 111)
    //         ALUControlD = 010;
    //     else
    //         ALUControlD = 000; // Default.
    //     ALUBranch = 0;

            
end    

endmodule
