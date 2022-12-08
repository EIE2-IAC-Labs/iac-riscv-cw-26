module ALU_decoder #(
) (
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic funct7_bit,
    output logic [2:0] ALUControlD
);

always_comb begin
    if (ALUOp == 00)
        ALUControlD = 000;
    else if (ALUOp == 01)
        ALUControlD = 001;
    else
        if (funct3 == 000 || funct7_bit == 0)
            ALUControlD = 000;
        else if (funct3 == 000 || funct7_bit == 1)
            ALUControlD = 001;
        else if (funct3 == 001)
            ALUControlD = 111; // slli (not in lecture slides)
        else if (funct3 == 010)
            ALUControlD = 101;
        else if (funct3 == 110)
            ALUControlD = 011;
        else if (funct3 == 111)
            ALUControlD = 010;
        else
            ALUControlD = 000; // Default.

            
end    

endmodule
