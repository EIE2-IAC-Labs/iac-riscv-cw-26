module half_byte_word #(
    parameter CPU_WORD = 32,
    parameter HALF_LEN = 16,
    parameter BYTE_LEN = 8
) (
    input logic lw, // load word
    input logic lb, // load byte
    input logic lh, // load half
    input [CPU_WORD-1:0] data,
    output [CPU_WORD-1:0] dout
);
    logic [CPU_WORD-1:0] he;
    logic [CPU_WORD-1:0] be;
    logic [HALF_LEN-1:0] h;
    logic [BYTE_LEN-1:0] b;

    assign h = data[HALF_LEN-1:0];
    assign b = data[BYTE_LEN-1:0];

    zero_extend ze(h,b,he,be);

    if(lh)  assign dout = he;
    else if(lb) assign dout = be;
    else assign dout = data;

endmodule