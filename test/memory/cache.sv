module cache #(
    parameter DATA_WIDTH = 32,
    parameter SET_WIDTH = 6,
    parameter TAG_WIDTH = DATA_WIDTH - SET_WIDTH - 2,
    parameter CACHE_DATA_WIDTH = 1 + TAG_WIDTH + DATA_WIDTH
) (
    input logic clk, wen,
    input logic [DATA_WIDTH-1:0] addr, din,
    output logic hit,
    output logic [DATA_WIDTH-1:0] dout
);

// Cache memory array
logic [CACHE_DATA_WIDTH-1:0] cache_array [2**SET_WIDTH-1:0];

// For testing
logic [CACHE_DATA_WIDTH-1:0] cache_subarray [15:0];
assign cache_subarray = cache_array[15:0];
//

// Cache memory outputs
logic [CACHE_DATA_WIDTH-1:0] cache_out;
logic valid;
logic [TAG_WIDTH-1:0] tag_out;

// Access cache memory
always_comb begin
    cache_out = cache_array[addr[SET_WIDTH + 1 : 2]]; // Extract set bits from address
    valid = cache_out[CACHE_DATA_WIDTH - 1];
    tag_out = cache_out[CACHE_DATA_WIDTH - 2 : CACHE_DATA_WIDTH - 1 - TAG_WIDTH];
    hit = valid && (tag_out == addr[DATA_WIDTH - 1 : SET_WIDTH + 2]);
    dout = cache_out[DATA_WIDTH-1:0];
end

// Write to cache memory
always_ff @(posedge clk) begin
    if (wen)
        cache_array[addr[SET_WIDTH + 1 : 2]] <= {1'b1, addr[DATA_WIDTH - 1 : SET_WIDTH + 2], din}; // Set valid bit to 1 when writing
end

endmodule
