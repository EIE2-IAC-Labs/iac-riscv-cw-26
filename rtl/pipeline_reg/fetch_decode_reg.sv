module fetch_decode_reg #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    input logic [WIDTH-1:0] instr_F, PC_F, PCPlus4_F,
    output logic [WIDTH-1:0] instr_D, PC_D, PCPlus4_D
);

always_ff @(posedge clk) begin
    if (rst) begin
        instr_D <= 0;
        PC_D <= 0;
        PCPlus4_D <= 0;
    end else begin
        instr_D <= instr_F;
        PC_D <= PC_F;
        PCPlus4_D <= PCPlus4_F;
    end
end

endmodule
