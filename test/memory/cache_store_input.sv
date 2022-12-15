module cache_store_input #(
    parameter WIDTH = 32
) (
    input logic sw, sh, sb,
    input logic [WIDTH-1:0] din, addr, cache_out,
    output logic [WIDTH-1:0] cache_store
);

always_comb begin
    if (sw)
        cache_store = din;
    else if (sh)
        case (addr[1])
            0: cache_store = {cache_out[31:16], din[15:0]};
            1: cache_store = {din[31:16], cache_out[15:0]};
            default: cache_store = 32'b0;
        endcase
    else if (sb)
        case (addr[1:0])
            2'b00: cache_store = {cache_out[31:8], din[7:0]};
            2'b01: cache_store = {cache_out[31:16], din[7:0], cache_out[7:0]};
            2'b10: cache_store = {cache_out[31:24], din[7:0], cache_out[15:0]};
            2'b11: cache_store = {din[7:0], cache_out[23:0]};
            default: cache_store = 32'b0;
        endcase
    else
        cache_store = 32'b0;
end

endmodule
