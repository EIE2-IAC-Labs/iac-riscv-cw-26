module alu #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    input logic [3:0] ALUctrl,
    //input logic ALUBranch,
    output logic [DATA_WIDTH-1:0] SUM,
    output logic EQ
);


always_latch begin

        case (ALUctrl[2:0])
        
            3'b000: begin
                    SUM = ALUctrl[3] ? ALUop1 - ALUop2 : ALUop1 + ALUop2; // SUB ADD
                    EQ = (ALUop1 == ALUop2); //BEQ
            end

            3'b001: begin
                    SUM = ALUop1 << ALUop2; //SLL
                    EQ = (ALUop1 != ALUop2); //BNE
            end

            3'b010: SUM = ALUop1 & ALUop2; // AND

            3'b011: SUM = ALUop1 | ALUop2; // OR

            3'b101: begin
                SUM = ALUop1 < ALUop2 ? 1:0; // set less than 
                EQ = (signed'(ALUop1) >= signed'(ALUop2)); // signed BGE
            end

            3'b100: begin
                SUM = ALUop1 ^ ALUop2;
                EQ = (signed'(ALUop1) < signed'(ALUop2)); //signed BLT
            end

            3'b110: begin
                SUM = ALUctrl[3] ? ALUop1 >>> ALUop2 : ALUop1 >> ALUop2; // SRA SRL
                EQ =  ALUop1 < ALUop2; // unsigned BLTU
            end

            3'b111: begin 
                SUM = ALUop1 << ALUop2; // left shift
                EQ =  ALUop1 >=  ALUop2; // unsigned BGEU
            end

            default: begin
                SUM = ALUop1;
                EQ = (ALUop1 == ALUop2);
            end

        endcase

end

endmodule
