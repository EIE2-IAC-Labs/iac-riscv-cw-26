module half_extend #(
    parameter LEN = 32,
    parameter HALF_LEN = 16
) (
    input logic [HALF_LEN-1:0] half_input,
    output logic [LEN-1:0] he
);

assign he = {{16{1'b0}}, half_input};
    
endmodule
