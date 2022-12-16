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

// Internal signals
logic loadIns, storeIns;

// Cache signals
logic cache_hit, cache_evict;
logic [WIDTH-1:0] cache_out, cache_store, cache_addr_out;

// Other memory signals
logic [WIDTH-1:0] ram_out, memory_out;

always_comb begin
    loadIns = lw || lh || lb;
    storeIns = sw || sh || sb;
    memory_out = cache_hit ? cache_out : ram_out;
end

// // // Cache // // //

cache cache (
    .clk(clk),
    .loadIns(loadIns),
    .storeIns(storeIns),
    .addr_in(ALUResult_M),
    .cache_store(cache_store),
    .ram_out(ram_out),
    .hit(cache_hit),
    .evict(cache_evict),
    .addr_out(cache_addr_out),
    .dout(cache_out)
);

cache_store_input cache_store_input (
    .sw(sw),
    .sh(sh),
    .sb(sb),
    .din(writeData_M),
    .addr(ALUResult_M),
    .mem_out(memory_out),
    .cache_store(cache_store)
);

// // // RAM // // //

ram ram(
    .sw(cache_evict),
    .sh(0),
    .sb(0),
    .wd(cache_out),
    .r_a(ALUResult_M),
    .w_a(cache_addr_out),
    .clk(clk),
    .rd(ram_out)
);

half_byte_word hbw(
    .lw(lw),
    .lh(lh),
    .lb(lb),
    .s(s),
    .data(memory_out),
    .offset(ALUResult_M[1:0]),
    .dout(readData_M)
);

endmodule
