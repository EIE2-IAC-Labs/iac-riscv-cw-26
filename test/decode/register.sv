module register #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
) (
    input logic clk, rst,
    input logic [4:0] rs1, rs2, rd,
    input logic WE3,
    input logic [DATA_WIDTH-1:0] WD3,
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2,
    output logic [DATA_WIDTH-1:0] a0
);

logic [DATA_WIDTH-1:0] reg_array [2**ADDRESS_WIDTH-1:1];
// The zero register is not actually implemented as a register,
// but instead hardwired to the constant zero.

always_comb begin
    RD1 = rs1 == 0 ? 0 : reg_array [rs1];
    RD2 = rs1 == 0 ? 0 : reg_array[rs2];
    // If the addresses are to the zero register,
    // just return a constant zero.
    a0 = reg_array[10]; // a0 is register 10, NOT register 0
end

integer i;

always_ff @(negedge clk) begin // Writeback stage happens on negative edge of clock to reduce number of cycles taken.
    if (rst)
        for (i = 1; i < 2**ADDRESS_WIDTH; i = i + 1) reg_array[i] <= 0;
    else if (WE3 && rd != 0) // Do not write to the non-existent zero register
        reg_array[rd] <= WD3;
end

endmodule
