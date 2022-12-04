module top_writeback #(
    parameter WIDTH = 32
) (
    input logic [WIDTH-1:0] ALUResult_W, readData_W, PCPlus4_W,
    input logic [1:0] resultSrc_W,
    output logic [WIDTH-1:0] result_W
);

always_comb begin
    case (resultSrc_W)
        2'b00: result_W = ALUResult_W;
        2'b01: result_W = readData_W;
        2'b10: result_W = PCPlus4_W;
        default: result_W = 0;
    endcase
end

endmodule
