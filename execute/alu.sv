module alu #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic [DATA_WIDTH-1:0] ALUop2,
    input logic [2:0] ALUctrl,
    input logic ALUBranch,
    output logic [DATA_WIDTH-1:0] SUM,
    output logic EQ
);

always_comb begin
    if (ALUBranch) begin
        case (ALUctrl)
            3'b000: EQ = (ALUop1 == ALUop2);
            3'b001: EQ = (ALUop1 != ALUop2);
            3'b100: EQ = (ALUop1 < ALUop2);
            3'b101: EQ = (ALUop1 >= ALUop2);
            default: EQ = 0;
        endcase
         
    end
    else begin
        case (ALUctrl)
            3'b000: SUM = ALUop1 + ALUop2;
            3'b001: SUM = ALUop1 - ALUop2;
            3'b010: SUM = ALUop1 & ALUop2;
            3'b011: SUM = ALUop1 | ALUop2;
            3'b101: SUM = ALUop1 < ALUop2 ? 1:0; // set less than 
            3'b111: SUM = ALUop1 << ALUop2 //left shift
            default: SUM = ALUop1;
        endcase

        assign EQ = (ALUop1 == ALUop2);
    end
end

endmodule
