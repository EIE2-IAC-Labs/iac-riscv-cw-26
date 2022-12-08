module ram #(
    parameter logic ADDRESS_LENGTH = 32,
    parameter WORD_LENGTH = 8
) (
    //input logic we,
    input logic [ADDRESS_LENGTH-1:0] wd,
    input logic sw,
    input logic sh,
    input logic sb,
    input logic [ADDRESS_LENGTH-1:0] a,
    input logic clk,
    output logic [ADDRESS_LENGTH-1:0] rd
);

logic [WORD_LENGTH-1:0] ram_array[32'h1FFF:32'h1000];

logic [WORD_LENGTH-1:0] d0;
logic [WORD_LENGTH-1:0] d1;
logic [WORD_LENGTH-1:0] d2;
logic [WORD_LENGTH-1:0] d3;

assign d0 = wd[BYTE_LEN-1:0];
assign d1 = wd[2*(BYTE_LEN)-1:BYTE_LEN];
assign d2 = wd[3*(BYTE_LEN)-1:2*(BYTE_LEN)];
assign d3 = wd[4*(BYTE_LEN)-1:3*(BYTE_LEN)];

initial begin
    $display("Loading data memory.");
    $readmemh("memory/dataram.mem", ram_array);
end

assign rd = {ram_array[a+3],ram_array[a+2],ram_array[a+1],ram_array[a]};
    
always_ff @(posedge clk) begin
    if (sb) begin
        ram_array[a] <= d0;
    end
    else if (sh) begin
        ram_array[a] <= d0;
        ram_array[a+1] <= d1;
    end
    else if (sw) begin
        ram_array[a] <= d0;
        ram_array[a+1] <= d1;
        ram_array[a+2] <= d2;
        ram_array[a+3] <= d3;
    end
end

endmodule
