module execute_memory_reg #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    input logic regWrite_E, memWrite_E,
    input logic [1:0] resultSrc_E,
    input logic [4:0] Rd_E,
    input logic [WIDTH-1:0] ALUResult_E, writeData_E, PCPlus4_E,
    output logic regWrite_M, memWrite_M,
    output logic [1:0] resultSrc_M,
    output logic [4:0] Rd_M,
    output logic [WIDTH-1:0] ALUResult_M, writeData_M, PCPlus4_M
);

always_ff @(posedge clk) begin
    if (rst) begin
        regWrite_M <= 0;
        resultSrc_M <= 0;
        memWrite_M <= 0;
        ALUResult_M <= 0;
        writeData_M <= 0;
        Rd_M <= 0;
        PCPlus4_M <= 0;
    end else begin
        regWrite_M <= regWrite_E;
        resultSrc_M <= resultSrc_E;
        memWrite_M <= memWrite_E;
        ALUResult_M <= ALUResult_E;
        writeData_M <= writeData_E;
        Rd_M <= Rd_E;
        PCPlus4_M <= PCPlus4_E;
    end
end

endmodule
