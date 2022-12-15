module memory_writeback_reg #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    input logic regWrite_M,
    input logic [1:0] resultSrc_M,
    input logic [4:0] Rd_M,
    input logic [WIDTH-1:0] ALUResult_M, readData_M, PCPlus4_M,
    output logic regWrite_W,
    output logic [1:0] resultSrc_W,
    output logic [4:0] Rd_W,
    output logic [WIDTH-1:0] ALUResult_W, readData_W, PCPlus4_W
);

always_ff @(posedge clk) begin
    if (rst) begin
        regWrite_W <= 0;
        resultSrc_W <= 0;
        Rd_W <= 0;
        ALUResult_W <= 0;
        readData_W <= 0;
        PCPlus4_W <= 0;
    end else begin
        regWrite_W <= regWrite_M;
        resultSrc_W <= resultSrc_M;
        Rd_W <= Rd_M;
        ALUResult_W <= ALUResult_M;
        readData_W <= readData_M;
        PCPlus4_W <= PCPlus4_M;
    end
end

endmodule
