module cache #(
    parameter ADDRESS_WIDTH = 2,
    parameter DATA_WIDTH = 32
)(
    input clk,
    input rst,
    input overwrite,
    input logic [DATA_WIDTH-1:0] instr,
    input logic [DATA_WIDTH-1:0] data1,
    input logic [DATA_WIDTH-1:0] data2,
    input logic [DATA_WIDTH-1:0] data3,
    input logic [DATA_WIDTH-1:0] data4,

    output logic  hit_out,
    output logic [DATA_WIDTH-1:0] data_out
    
);

logic V [ADDRESS_WIDTH-1:0];
logic [DATA_WIDTH-5:0] tag [ADDRESS_WIDTH-1:0];
logic [DATA_WIDTH-1:0] D1 [ADDRESS_WIDTH-1:0];
logic [DATA_WIDTH-1:0] D2 [ADDRESS_WIDTH-1:0];
logic [DATA_WIDTH-1:0] D3 [ADDRESS_WIDTH-1:0];
logic [DATA_WIDTH-1:0] D4 [ADDRESS_WIDTH-1:0];


assign instr_tag = instr[DATA_WIDTH-1:5];
assign [1:0] block_offset = instr[4:2];
assign set = instr[4];
assign hit_out = V[set] & (tag[set] == instr_tag); 

always_ff @(posedge clk) 
    if (rst)
        for (i = 0; i < (ADDRESS_WIDTH-1); i = i + 1) begin
            V[i] <= 1'b0;
            //tag <= 27'b0;
            D1[i] <= 32'b0;
            D2[i] <= 32'b0;
            D3[i] <= 32'b0;
            D4[i] <= 32'b0;
        end

    else if (!V[set] || overwrite) begin
    tag[set] <= instr_tag;
    V[set] <= 1'b1;
    D1[set] <= data1;
    D2[set] <= data2;
    D3[set] <= data3;
    D4[set] <= data4;
end


always_comb
if (hit_out) begin
    case (block_offset)
    2'b00: data_out = D1;
    2'b01: data_out = D2;
    2'b10: data_out = D3;
    2'b11: data_out = D4;
    default: data_out = 32'b0;
endcase

end

endmodule
