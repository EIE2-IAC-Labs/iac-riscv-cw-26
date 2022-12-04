module top_memory #(
    parameter WIDTH = 32
) (
    input logic clk,
    input logic rst,
    input logic memWrite_M,
    input logic [WIDTH-1:0] ALUResult_M,
    input logic [WIDTH-1:0] writeData_M,
    output logic [WIDTH-1:0] readData_M
);

ram ram(
    .we(memWrite_M),
    .wd(writeData_M),
    .a(ALUResult_M),
    .clk(clk),
    .rd(readData_M)
);

endmodule
