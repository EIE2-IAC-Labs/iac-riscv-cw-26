module memory_input #(
    parameter WIDTH = 32
) (
    input logic sw, sh, sb,
    input logic [WIDTH-1:0] din, addr, memory_out,
    output logic [WIDTH-1:0] memory_in
);

always_comb begin
    if (sw)
        memory_in = din;
    else if (sh)
        case (addr[1])
            0: memory_in = {memory_out[31:16], din[15:0]};
            1: memory_in = {din[31:16], memory_out[15:0]};
            default: memory_in = 32'b0;
        endcase
    else if (sb)
        case (addr[1:0])
            2'b00: memory_in = {memory_out[31:8], din[7:0]};
            2'b01: memory_in = {memory_out[31:16], din[7:0], memory_out[7:0]};
            2'b10: memory_in = {memory_out[31:24], din[7:0], memory_out[15:0]};
            2'b11: memory_in = {din[7:0], memory_out[23:0]};
            default: memory_in = 32'b0;
        endcase
    else
        memory_in = 32'b0;
end

endmodule
