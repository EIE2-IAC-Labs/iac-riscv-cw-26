module decode_execute_reg #(
    parameter WIDTH = 32
) (
    input logic clk, rst,
    input logic regWrite_D, jump_D, ALUsrc_D,
    input logic [1:0] resultSrc_D,
    input logic [2:0] branch_D, R_size_D, DMem_size_D,
    input logic [3:0] ALUctrl_D,
    input logic [4:0] Rd_D,
    input logic [WIDTH-1:0] RD1_D, RD2_D, PC_D, ImmExt_D, PCPlus4_D,
    output logic regWrite_E, jump_E, ALUsrc_E,
    output logic [1:0] resultSrc_E,
    output logic [2:0] branch_E, R_size_E, DMem_size_E,
    output logic [3:0] ALUctrl_E,
    output logic [4:0] Rd_E,
    output logic [WIDTH-1:0] RD1_E, RD2_E, PC_E, ImmExt_E, PCPlus4_E
);

always_ff @(posedge clk) begin
    if (rst) begin
        regWrite_E <= 0;
        resultSrc_E <= 0;
        jump_E <= 0;
        branch_E <= 0;
        ALUctrl_E <= 0;
        ALUsrc_E <= 0;
        RD1_E <= 0;
        RD2_E <= 0;
        PC_E <= 0;
        Rd_E <= 0;
        ImmExt_E <= 0;
        PCPlus4_E <= 0;
        R_size_E <= 0;
        DMem_size_E <= 0;
    end else begin
        regWrite_E <= regWrite_D;
        resultSrc_E <= resultSrc_D;
        jump_E <= jump_D;
        branch_E <= branch_D;
        ALUctrl_E <= ALUctrl_D;
        ALUsrc_E <= ALUsrc_D;
        RD1_E <= RD1_D;
        RD2_E <= RD2_D;
        PC_E <= PC_D;
        Rd_E <= Rd_D;
        ImmExt_E <= ImmExt_D;
        PCPlus4_E <= PCPlus4_D;
        R_size_E <= R_size_D;
        DMem_size_E <= DMem_size_D;
    end
end

endmodule
