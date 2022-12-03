module  top_fetch #(
    parameter WIDTH = 32
) (
    input logic clk,
    input logic rst,
    input logic PCsrc_E,
    input logic [WIDTH-1:0] PCTarget_E,
    output logic [WIDTH-1:0] instr_F,
    output logic [WIDTH-1:0] PC_F,
    output logic [WIDTH-1:0] PCPlus4_F
);

logic [WIDTH-1:0] next_PC;

adder add_inc(
    .in(PC_F),
    .N(32'd4),
    .out(PCPlus4_F)
);

mux_2 mux(
    .d_0(PCPlus4_F),
    .d_1(PCTarget_E),
    .s(PCsrc_E),
    .dout(next_PC)
);

PC_Reg PC_Reg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC_F)
);

instr_mem instr_mem(
    .A(PC_F),
    .RD(instr_F)
);

endmodule
