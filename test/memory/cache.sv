/* verilator lint_off UNUSED */
module cache #(
    parameter DATA_WIDTH = 32,
    parameter SET_WIDTH = 5, // 32 sets, 2-way associative, 4 bytes per block, equals 256 bytes total
    parameter TAG_WIDTH = DATA_WIDTH - SET_WIDTH - 2,
    parameter CACHE_DATA_WIDTH = 2 + TAG_WIDTH + DATA_WIDTH
) (
    input logic clk, loadIns, storeIns,
    input logic [DATA_WIDTH-1:0] addr_in, cache_store, ram_out,
    output logic hit, evict,
    output logic [DATA_WIDTH-1:0] addr_out, dout
);

// Cache memory array
logic [CACHE_DATA_WIDTH-1:0] cache_array [2**(SET_WIDTH + 1) - 1 : 0]; // cache_array has 64 ways in total
logic LRU_array [2**SET_WIDTH - 1 : 0]; // One LRU bit per set

// Cache memory array outputs
logic [CACHE_DATA_WIDTH-1:0] cache_out1, cache_out2, cache_out;
logic [TAG_WIDTH-1:0] tag_out1, tag_out2, tag_out;

// Other internal signals
logic target_way, matching_tag, valid, dirty_bit;
logic [SET_WIDTH-1:0] set;
logic [TAG_WIDTH-1:0] tag_in;
logic [DATA_WIDTH-1:0] din;

always_comb begin

    din = storeIns ? cache_store : ram_out;
    
    set = addr_in[SET_WIDTH + 1 : 2];
    tag_in = addr_in[DATA_WIDTH - 1 : SET_WIDTH + 2];

    cache_out1 = cache_array[{set, 1'b0}]; // Way 0
    cache_out2 = cache_array[{set, 1'b1}]; // Way 1
    tag_out1 = cache_out1[CACHE_DATA_WIDTH - 3 : CACHE_DATA_WIDTH - 2 - TAG_WIDTH];
    tag_out2 = cache_out2[CACHE_DATA_WIDTH - 3 : CACHE_DATA_WIDTH - 2 - TAG_WIDTH];

    // If we find a matching tag, return that way of the set.
    // If we don't find a matching tag, return the least recently used set (to be written to).
    if (tag_out1 == tag_in) begin
        matching_tag = 1;
        target_way = 0;
    end else if (tag_out2 == tag_in) begin
        matching_tag = 1;
        target_way = 1;
    end else begin
        matching_tag = 0;
        target_way = !LRU_array[addr_in[SET_WIDTH + 1 : 2]]; // LRU bit = 1: way 0 is least recently used.
    end

    // Determine target way
    cache_out = target_way ? cache_out2 : cache_out1;
    tag_out = target_way ? tag_out2 : tag_out1;

    // Extract bits for internal signals
    valid = cache_out[CACHE_DATA_WIDTH - 1];
    dirty_bit = cache_out[CACHE_DATA_WIDTH - 2];
    dout = cache_out[DATA_WIDTH-1:0];

    // Set output signals
    hit = matching_tag && valid;
    evict = !matching_tag && valid && dirty_bit && (loadIns || storeIns); // Only on memory instruction, to avoid writing to RAM needlessly
    // In principle, D=1 implies V=1, so the condition on V is redundant, but is added just in case.
    addr_out = {tag_out, set, 2'b0};

end

always_ff @(posedge clk) begin
    if ((loadIns && !hit) || storeIns)
        cache_array[{set, target_way}] <= {1'b1, storeIns, tag_in, din};
        // 1. Set valid bit to 1 when writing, always.
        // 2. If we are storing a value, dirty bit = 1.
    
    if (loadIns || storeIns)
        LRU_array[addr_in[SET_WIDTH + 1 : 2]] <= target_way;
    
end

endmodule
