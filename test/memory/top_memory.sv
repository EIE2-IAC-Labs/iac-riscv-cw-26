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
logic [WIDTH-1:0] cache_out, cache_in, cache_store;

// RAM signals
logic [WIDTH-1:0] ram_out, ram_in;

logic [WIDTH-1:0] memory_out;

// Note: this design uses a write-through cache for simplicity.

assign cache_wen = storeIns || (loadIns && !cache_hit);
// Write to cache on a store instruction or on a failed load instruction.

assign cache_in = storeIns ? cache_store : ram_out;
// Data to write to cache can either come from a store instruction, or from the ram on a failed load instruction.

assign memory_out = cache_hit ? cache_out : ram_out;

// // // Cache // // //

cache cache (
    .clk(clk),
    .wen(cache_wen),
    .addr(ALUResult_M),
    .din(cache_in),
    .hit(cache_hit),
    .dout(cache_out)
);

// Convert writeData to cache_store
cache_input cache_input (
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .din(writeData_M),
    .addr(ALUResult_M),
    .memory_out(cache_out),
    .memory_in(cache_store)
);

// // // RAM // // //

ram ram(
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .wd(writeData_M),
    .a(ALUResult_M),
    .clk(clk),
    .rd(ram_out)
);

half_byte_word hbw(
    .lw(lw),
    .lh(lh),
    .lb(lb),
    .s(s),
    .data(memory_out),
    .dout(readData_M)
);

endmodule
