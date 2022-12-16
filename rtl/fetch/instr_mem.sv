module instr_mem #(
    parameter DATA_WIDTH = 8,
              ADDRESS_WIDTH = 32,
              INSTRUCTION_WIDTH = 32
) (
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [INSTRUCTION_WIDTH-1:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [32'hBFC00FFF:32'hBFC00000];
logic [DATA_WIDTH-1:0] byte1;
logic [DATA_WIDTH-1:0] byte2;
logic [DATA_WIDTH-1:0] byte3;
logic [DATA_WIDTH-1:0] byte4;

// Load program
initial begin
    $display("Loading instructions.");
    $readmemh("__file__", rom_array);
end

always_comb begin
    // Output is asynchronous.
    byte1 = rom_array [A];
    byte2 = rom_array [A + 1];
    byte3 = rom_array [A + 2];
    byte4 = rom_array [A + 3];
    // RD = {byte1, byte2, byte3, byte4};
    RD = {byte4, byte3, byte2, byte1}; // This should be compatible with little-endian byte addressing (as generated in the .hex file).
end
    
endmodule
