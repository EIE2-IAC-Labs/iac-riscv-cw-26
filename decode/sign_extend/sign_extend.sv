module sign_extend #(
    parameter data_width = 32,
              imm_width1 = 12,
              imm_width2 = 20,
              imm_width3 = 20
) (
    input logic [data_width-1:0] InstrD,
    input logic [2:0] ImmSrcD,
    output logic [data_width-1:0] ImmExtD
);

always_comb begin

    logic [imm_width1-1:0] imm_type_1 = {imm_width1{1'b0}};
    logic [imm_width2-1:0] imm_type_lui = {imm_width2{1'b0}};
    logic [imm_width3-1:0] imm_type_jal = {imm_width3{1'b0}};

    // Program runs error for some reason if any bits of input are unused.
    logic [6:0] opcode = InstrD[6:0];
    opcode = opcode;

    // Determine what bits of the instruction will be used in imm, based on ImmSrcD.
    case(ImmSrcD)
        3'b000: imm_type_1 = InstrD[31:20];
        3'b001: imm_type_lui = InstrD[31:12];
        3'b010: imm_type_1 = {InstrD[31:25], InstrD[11:7]};
        3'b011: imm_type_1 = {InstrD[31], InstrD[7], InstrD[30:25], InstrD[11:8]};
        3'b100: imm_type_jal = {InstrD[31], InstrD[19:12], InstrD[20], InstrD[30:21]};
        default: begin
                 imm_type_1 = imm_type_1;
                 imm_type_lui = imm_type_lui;
                 imm_type_jal = imm_type_jal;
        end
    endcase
    
    case(ImmSrcD)
        // First three cases have an imm_type_1 instruction.
        3'b000: ImmExtD = {{data_width - imm_width1{imm_type_1[11]}}, imm_type_1};
        3'b010: ImmExtD = {{data_width - imm_width1{imm_type_1[11]}}, imm_type_1};
        3'b011: ImmExtD = {{data_width - imm_width1{imm_type_1[11]}}, imm_type_1};
        // For imm_type_jal case.
        3'b100: ImmExtD = {{data_width - imm_width3{imm_type_jal[19]}}, imm_type_jal};
        // For imm_type_lui case.
        3'b001: ImmExtD = {imm_type_lui, {data_width - imm_width2{1'b0}}};
        default: ImmExtD = {data_width{1'b0}};
    endcase
    
end
    
endmodule
