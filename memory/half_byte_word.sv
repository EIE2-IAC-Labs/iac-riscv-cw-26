module half_byte_word #(
    parameter CPU_WORD = 32,
    parameter HALF_LEN = 16,
    parameter BYTE_LEN = 8
) (
    input logic lw, // load word
    input logic lb, // load byte
    input logic lh, // load half
    input logic s,
    input [CPU_WORD-1:0] data,
    output [CPU_WORD-1:0] dout
);
    logic [CPU_WORD-1:0] he;
    logic [CPU_WORD-1:0] be;
    logic [HALF_LEN-1:0] h;
    logic [BYTE_LEN-1:0] b;

    assign h = data[HALF_LEN-1:0];
    assign b = data[BYTE_LEN-1:0];

    half_extend h_e(h,he);
    sign_extend s_e(b,s,be);

    always_comb begin
        if(lh)  begin
            assign dout = he;
        end
        else if(lb) begin
            assign dout = be;
        end
        else if(lw) begin
            assign dout = data;
        end
        else begin
            assign dout = {CPU_WORD{1'b0}};
        end
    end

endmodule
