/*verilator lint_off UNUSED */
module ram #(
    parameter ADDRESS_LENGTH = 32,
    parameter WORD_LENGTH = 8
) (
    //input logic we,
    input logic [ADDRESS_LENGTH-1:0] wd,
    input logic sw,
    input logic sh,
    input logic sb,
    input logic [ADDRESS_LENGTH-1:0] w_a,
    input logic [ADDRESS_LENGTH-1:0] r_a,
    input logic clk,
    output logic [ADDRESS_LENGTH-1:0] rd
);

logic [WORD_LENGTH-1:0] ram_array[32'h1FFFF:0];
logic [ADDRESS_LENGTH-1:0] offset_ra;
logic [WORD_LENGTH-1:0] d0;
logic [WORD_LENGTH-1:0] d1;
logic [WORD_LENGTH-1:0] d2;
logic [WORD_LENGTH-1:0] d3;

assign d0 = wd[WORD_LENGTH-1:0];
assign d1 = wd[2*(WORD_LENGTH)-1:WORD_LENGTH];
assign d2 = wd[3*(WORD_LENGTH)-1:2*(WORD_LENGTH)];
assign d3 = wd[4*(WORD_LENGTH)-1:3*(WORD_LENGTH)];

// Load data from one of the reference .mem files
initial begin
    $display("Loading data memory.");
    $readmemh("__file__", ram_array, 20'h10000);
end
// assign offset_ra = (a - (a%4)) + 1;
assign offset_ra = {r_a[ADDRESS_LENGTH-1:2], 2'b0};
assign rd = {ram_array[offset_ra+3],ram_array[offset_ra+2],ram_array[offset_ra+1],ram_array[offset_ra]};

always_ff @(posedge clk) begin
    if (sb) begin
        ram_array[w_a] <= d0;
    end
    else if (sh) begin
        ram_array[w_a] <= d0;
        ram_array[w_a+1] <= d1;
    end
    else if (sw) begin
        ram_array[w_a] <= d0;
        ram_array[w_a+1] <= d1;
        ram_array[w_a+2] <= d2;
        ram_array[w_a+3] <= d3;
    end
end

endmodule
