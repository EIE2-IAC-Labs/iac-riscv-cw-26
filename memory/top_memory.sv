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

logic [WIDTH-1:0] dout1;
logic [WIDTH-1:0] dout2;
logic [WIDTH-1:0] dout3;
logic [WIDTH-1:0] dout4;
logic hit_out;
logic [WIDTH-1:0] cache_out;

assign mem_out = hit_out ? cache_out : dout1;



ram ram(
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .wd(writeData_M),
    .a(ALUResult_M),
    .clk(clk),
    .rd1(dout1),
    .rd2(dout2),
    .rd3(dout3),
    .rd4(dout4)
);

spatial_cache cache(
    .clk(clk),
    .rst(0),
    .overwrite(sw),
    .instr(writeData_M),
    .data1(dout1),
    .data2(dout2),
    .data3(dout3),
    .data4(dout4),
    .hit_out(hit_out),
    .data_out(cache_out)

);

half_byte_word hbw(
    .lw(lw),
    .lh(lh),
    .lb(lb),
    .s(s),
    .data(mem_out),
    .dout(readData_M)
);

endmodule
