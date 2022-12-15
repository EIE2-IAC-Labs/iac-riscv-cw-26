/* verilator lint_off MODDUP */
module top_memory #(
    parameter WIDTH = 32
) (
    input logic clk,
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

logic loadIns;
assign loadIns = lw || lh || lb;
logic storeIns;
assign storeIns = sw || sh || sb;

// Cache signals
logic cache_hit, cache_wen;
logic [WIDTH-1:0] cache_out, cache_in1, cache_in2;

// RAM signals
logic [WIDTH-1:0] ram_out, ram_in;

logic [WIDTH-1:0] memory_out;

// Note: this design uses a write-through cache for simplicity.

always_comb begin
    memory_out = cache_hit ? cache_out : ram_out; // If we have a cache miss, output from the ram instead.
    cache_in2 = storeIns ? cache_in1 : ram_out; // If instruction is a sw, write writeData to cache (as well as to ram).
    cache_wen = storeIns || (loadIns && !cache_hit);
end

logic [WIDTH-1:0] dout;

// // // Cache // // //

cache cache (
    .clk(clk),
    .wen(cache_wen),
    .addr(ALUResult_M),
    .din(cache_in2),
    .hit(cache_hit),
    .dout(cache_out)
);

memory_input cache_input (
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .din(writeData_M),
    .addr(ALUResult_M),
    .memory_out(cache_out),
    .memory_in(cache_in1)
);

// // // RAM // // //

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
