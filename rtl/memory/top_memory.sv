/* verilator lint_off MODDUP */
module top_memory #(
    parameter WIDTH = 32
) (
    input logic clk,
    // input logic memWrite_M,
    input logic sw,
    input logic sh,
    input logic sb,
    input logic lw,
    input logic lh,
    input logic lb,
    input logic s,
    input logic [WIDTH-1:0] ALUResult_M,
    input logic [WIDTH-1:0] writeData_M,
    output logic [WIDTH-1:0] readData_M
);

logic [WIDTH-1:0] dout;

ram ram(
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .wd(writeData_M),
    .a(ALUResult_M),
    .clk(clk),
    .rd(dout)
);

half_byte_word hbw(
    .lw(lw),
    .lh(lh),
    .lb(lb),
    .s(s),
    .data(dout),
    .dout(readData_M)
);

endmodule
