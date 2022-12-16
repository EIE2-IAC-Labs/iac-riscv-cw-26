module half_byte_word #(
    parameter CPU_WORD = 32,
    parameter HALF_LEN = 16,
    parameter BYTE_LEN = 8
) (
    input logic lw, // load word
    input logic lb, // load byte
    input logic lh, // load half
    input logic s,
    input logic [1:0] offset,
    input [CPU_WORD-1:0] data,
    output [CPU_WORD-1:0] dout
);
    logic [CPU_WORD-1:0] he;
    logic [CPU_WORD-1:0] be;
    logic [HALF_LEN-1:0] h;
    logic [BYTE_LEN-1:0] b;

    always_comb begin
        case (offset)
            0: begin
                h = data[15:0];
                b = data[7:0];
            end
            1: begin
                h = data[23:8];
                b = data[15:8];
            end
            2: begin
                h = data[31:16];
                b = data[23:16];
            end
            3: begin
                h = data[31:16];
                b = data[31:24];
            end
            default: begin
                h = 0;
                b = 0;
            end
        endcase
    end
    
    half_extend h_e(h,s,he);
    byte_extend s_e(b,s,be);

    always_comb begin
        if(lh)  begin
            dout = he;
        end
        else if(lb) begin
            dout = be;
        end
        else if(lw) begin
            dout = data;
        end
        else begin
            dout = {CPU_WORD{1'b0}};
        end
    end

endmodule