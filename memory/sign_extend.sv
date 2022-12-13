/* verilator lint_off LATCH */
module sign_extend #(
    parameter WORD_LENGTH = 32,
    parameter BYTE_LEN = 8
) (
    input logic [BYTE_LEN-1:0] din,
    input logic s,
    output logic [WORD_LENGTH-1:0] dout
);

logic sign;
always_comb begin
    if(s) begin
        assign sign = din[BYTE_LEN-1];
        assign dout = {{24{sign}},din};
    end
    else begin
        assign dout = {{24{1'b0}},din};
    end    
end
endmodule
