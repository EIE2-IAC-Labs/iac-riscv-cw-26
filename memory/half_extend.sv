module half_extend #(
    parameter WORD_LENGTH = 32,
    parameter HALF_LEN = 16
) (
    input logic [HALF_LEN-1:0] din,
    input logic s,
    output logic [WORD_LENGTH-1:0] dout
);

logic sign;
always_comb begin
    if(s) begin
        sign = din[WORD_LENGTH-1];
        case (sign)
            1: dout = {{16{1'b1}},din};
            0: dout = {{16{1'b0}},din};
            default: dout = {{16{1'b0}},din};
        endcase
    end
    else begin
        dout = {{16{1'b0}},din};
    end    
end
endmodule
