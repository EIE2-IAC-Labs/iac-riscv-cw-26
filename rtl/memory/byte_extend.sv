module byte_extend #(
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
        sign = din[7];
        case (sign)
            1: dout = {{24{1'b1}},din};
            0: dout = {{24{1'b0}},din};
            default: dout = {{24{1'b0}},din};
        endcase
    end
    else begin
        dout = {{24{1'b0}},din};
    end    
end
endmodule
