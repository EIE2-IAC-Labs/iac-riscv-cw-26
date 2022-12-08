module ALU_decoder #(
) (
    input logic [1:0] ALUOp,
    input logic [2:0] funct3,
    input logic funct7_bit,
    output logic [2:0] ALUControlD
);

always_comb begin
    if (ALUOp == 2'b00)
        ALUControlD = 3'b000;
    else if (ALUOp == 2'b01)
        ALUControlD = 3'b001;
    else
        if (funct3 == 3'b000 && funct7_bit == 0)
            ALUControlD = 3'b000;
        else if (funct3 == 3'b000 && funct7_bit == 1)
            ALUControlD = 3'b001;
        else if (funct3 == 3'b001)
            ALUControlD = 3'b111; // slli (not in lecture slides)
        else if (funct3 == 3'b010)
            ALUControlD = 3'b101;
        else if (funct3 == 3'b110)
            ALUControlD = 3'b011;
        else if (funct3 == 3'b111)
            ALUControlD = 3'b010;
        else
            ALUControlD = 3'b000; // Default.

            
end    

endmodule
