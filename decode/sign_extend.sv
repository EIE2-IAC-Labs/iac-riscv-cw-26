module sign_extend #(
    parameter data_width = 32,
              imm_width1 = 12,
              imm_width2 = 20,
              imm_width3 = 20
) (
    input logic [data_width-1:0] InstrD,
    input logic ImmSrcD,
    output logic [data_width-1:0] ImmExtD
);

logic [imm_width1-1:0] imm_type_1;
logic [imm_width2-1:0] imm_type_lui;
logic [imm_width3-1:0] imm_type_jal;

always_comb begin
    // Determine what bits of the instruction will be used in imm, based on ImmSrcD.
    if (ImmSrcD == 1'b000)
        imm_type_1 = InstrD[31:20];
    else if (ImmSrcD == 001)
        imm_type_lui = InstrD[31:12];
    else if (ImmSrcD == 010)
        imm_type_1 = {InstrD[31:25], InstrD[11:7]};
    else if (ImmSrcD == 011)
        imm_type_1 = {InstrD[31], InstrD[7], InstrD[30:25], InstrD[11:8]};
    else if (ImmSrcD == 100)
        imm_type_jal = {InstrD[31], InstrD[19:12], InstrD[20], InstrD[30:21]}
    // jalr is included in 000.
    
    // If we have an imm_type_1 instruction, which includes jalr.
    if (ImmSrcD == 000 || ImmSrcD == 010 || ImmSrcD == 011) begin
        if(imm_type_1[11] == 0) // If the msb is a 0, we sign extend to 32-bits with 0s.
            ImmExtD = {{data_width - imm_width1{1'b0}}, imm_type_1};
        else // If the msb is a 1, we sign extend to 32-bits with 1s.
            ImmExtD = {{data_width - imm_width1{1'b1}}, imm_type_1};
    end

    // If we have an imm_type_jal instruction, sign extend by only adding 11 bits to the MSB end.
    if (ImmSrcD == 100) begin
        if(imm_type_jal[19] == 0) // If the msb is a 0, we sign extend to 32-bits with 0s.
            ImmExtD = {{data_width - imm_width3{1'b0}}, imm_type_jal};
        else // If the msb is a 1, we sign extend to 32-bits with 1s.
            ImmExtD = {{data_width - imm_width3{1'b1}}, imm_type_jal};
    end

    // If we have an imm_type_lui command, sign extend by only adding 11 0s to the LSB end.
    if (ImmSrcD == 001) begin
            ImmExtD = {imm_type_lui, {data_width - imm_width2{1'b0}}};
    end
    
end
    
endmodule
