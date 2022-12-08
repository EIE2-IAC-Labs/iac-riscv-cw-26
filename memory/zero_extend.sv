module zero_extend #(
    parameter LEN = 32,
    parameter HALF_LEN = 16,
    parameter BYTE_LEN = 8
) (
    input logic [HALF_LEN-1:0] half_input,
    input logic [BYTE_LEN-1:0] byte_input,
    output logic [LEN-1:0] he,
    output logic [LEN-1:0] be
);

assign be = {(LEN-BYTE_LEN){1'b0}, byte_input};
assign he = {(LEN-HALF_LEN){1'b0}, half_input};
    
endmodule
