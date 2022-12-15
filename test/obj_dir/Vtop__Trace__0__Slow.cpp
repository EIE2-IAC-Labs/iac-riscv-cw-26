// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+175,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+175,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->declBus(c+176,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+177,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBit(c+12,"jalr_D", false,-1);
    tracep->declBit(c+13,"lui_D", false,-1);
    tracep->declBit(c+14,"load_extend_s_D", false,-1);
    tracep->declBus(c+15,"resultSrc_D", false,-1, 1,0);
    tracep->declBus(c+16,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+17,"DMem_size_D", false,-1, 2,0);
    tracep->declBus(c+18,"ALUctrl_D", false,-1, 3,0);
    tracep->declBus(c+19,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+20,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+21,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+22,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+23,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+24,"PC_E", false,-1, 31,0);
    tracep->declBit(c+25,"regWrite_E", false,-1);
    tracep->declBit(c+26,"jump_E", false,-1);
    tracep->declBit(c+27,"ALUsrc_E", false,-1);
    tracep->declBit(c+28,"PCsrc_E", false,-1);
    tracep->declBit(c+29,"branch_E", false,-1);
    tracep->declBit(c+30,"jalr_E", false,-1);
    tracep->declBit(c+31,"lui_E", false,-1);
    tracep->declBit(c+32,"load_extend_s_E", false,-1);
    tracep->declBus(c+33,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+34,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+35,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+36,"ALUctrl_E", false,-1, 3,0);
    tracep->declBus(c+37,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+38,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+21,"writeData_E", false,-1, 31,0);
    tracep->declBus(c+39,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+40,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+41,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+42,"PCPlus4_M", false,-1, 31,0);
    tracep->declBit(c+43,"regWrite_M", false,-1);
    tracep->declBit(c+44,"load_extend_s_M", false,-1);
    tracep->declBus(c+45,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+46,"R_size_M", false,-1, 2,0);
    tracep->declBus(c+47,"DMem_size_M", false,-1, 2,0);
    tracep->declBus(c+48,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+49,"readData_M", false,-1, 31,0);
    tracep->declBus(c+50,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+51,"readData_W", false,-1, 31,0);
    tracep->declBus(c+52,"PCPlus4_W", false,-1, 31,0);
    tracep->declBit(c+53,"regWrite_W", false,-1);
    tracep->declBus(c+54,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+55,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+56,"result_W", false,-1, 31,0);
    tracep->pushNamePrefix("decode_execute_reg ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBit(c+12,"jalr_D", false,-1);
    tracep->declBit(c+13,"lui_D", false,-1);
    tracep->declBit(c+14,"load_extend_s_D", false,-1);
    tracep->declBus(c+15,"resultSrc_D", false,-1, 1,0);
    tracep->declBus(c+16,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+17,"DMem_size_D", false,-1, 2,0);
    tracep->declBus(c+18,"ALUctrl_D", false,-1, 3,0);
    tracep->declBus(c+19,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+176,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+177,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->declBit(c+25,"regWrite_E", false,-1);
    tracep->declBit(c+26,"jump_E", false,-1);
    tracep->declBit(c+27,"ALUsrc_E", false,-1);
    tracep->declBit(c+29,"branch_E", false,-1);
    tracep->declBit(c+30,"jalr_E", false,-1);
    tracep->declBit(c+31,"lui_E", false,-1);
    tracep->declBit(c+32,"load_extend_s_E", false,-1);
    tracep->declBus(c+33,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+34,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+35,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+36,"ALUctrl_E", false,-1, 3,0);
    tracep->declBus(c+37,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+20,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+21,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+24,"PC_E", false,-1, 31,0);
    tracep->declBus(c+22,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+23,"PCPlus4_E", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute_memory_reg ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBit(c+25,"regWrite_E", false,-1);
    tracep->declBit(c+32,"load_extend_s_E", false,-1);
    tracep->declBus(c+33,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+34,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+35,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+37,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+38,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+21,"writeData_E", false,-1, 31,0);
    tracep->declBus(c+23,"PCPlus4_E", false,-1, 31,0);
    tracep->declBit(c+43,"regWrite_M", false,-1);
    tracep->declBit(c+44,"load_extend_s_M", false,-1);
    tracep->declBus(c+45,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+46,"R_size_M", false,-1, 2,0);
    tracep->declBus(c+47,"DMem_size_M", false,-1, 2,0);
    tracep->declBus(c+48,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+40,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+41,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+42,"PCPlus4_M", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch_decode_reg ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_writeback_reg ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBit(c+43,"regWrite_M", false,-1);
    tracep->declBus(c+45,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+48,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+40,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+49,"readData_M", false,-1, 31,0);
    tracep->declBus(c+42,"PCPlus4_M", false,-1, 31,0);
    tracep->declBit(c+53,"regWrite_W", false,-1);
    tracep->declBus(c+54,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+55,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+50,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+51,"readData_W", false,-1, 31,0);
    tracep->declBus(c+52,"PCPlus4_W", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_decode ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBit(c+53,"regWrite_W", false,-1);
    tracep->declBus(c+55,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+56,"result_W", false,-1, 31,0);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBus(c+15,"resultSrc_D", false,-1, 1,0);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBus(c+18,"ALUctrl_D", false,-1, 3,0);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBus(c+19,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+176,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+177,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+175,"a0", false,-1, 31,0);
    tracep->declBus(c+16,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+17,"DMem_size_D", false,-1, 2,0);
    tracep->declBit(c+12,"jalr", false,-1);
    tracep->declBit(c+13,"lui", false,-1);
    tracep->declBit(c+14,"load_extend_s", false,-1);
    tracep->declBus(c+57,"ImmSrc_D", false,-1, 2,0);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+178,"data_width", false,-1, 31,0);
    tracep->declBus(c+179,"imm_width1", false,-1, 31,0);
    tracep->declBus(c+180,"imm_width2", false,-1, 31,0);
    tracep->declBus(c+180,"imm_width3", false,-1, 31,0);
    tracep->declBus(c+4,"InstrD", false,-1, 31,0);
    tracep->declBus(c+57,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+7,"ImmExtD", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+58,"imm_type_1", false,-1, 11,0);
    tracep->declBus(c+59,"imm_type_lui", false,-1, 19,0);
    tracep->declBus(c+60,"imm_type_jal", false,-1, 19,0);
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"funct3", false,-1, 2,0);
    tracep->declBus(c+63,"funct7", false,-1, 6,0);
    tracep->declBit(c+8,"RegWriteD", false,-1);
    tracep->declBus(c+15,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+57,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+11,"BranchD", false,-1);
    tracep->declBit(c+9,"JumpD", false,-1);
    tracep->declBus(c+16,"R_size", false,-1, 2,0);
    tracep->declBus(c+17,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+18,"ALUControlD", false,-1, 3,0);
    tracep->declBit(c+12,"jalr", false,-1);
    tracep->declBit(c+13,"lui", false,-1);
    tracep->declBit(c+14,"load_extend_s", false,-1);
    tracep->declBus(c+64,"instr_type", false,-1, 1,0);
    tracep->pushNamePrefix("alu_control ");
    tracep->declBus(c+64,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+62,"funct3", false,-1, 2,0);
    tracep->declBit(c+65,"funct7_bit", false,-1);
    tracep->declBus(c+18,"ALUControlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_control ");
    tracep->declBus(c+62,"funct3", false,-1, 14,12);
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBit(c+8,"RegWriteD", false,-1);
    tracep->declBus(c+15,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+57,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+11,"BranchD", false,-1);
    tracep->declBit(c+9,"JumpD", false,-1);
    tracep->declBus(c+64,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+16,"R_size", false,-1, 2,0);
    tracep->declBus(c+17,"DMem_size", false,-1, 2,0);
    tracep->declBit(c+12,"jalr_o", false,-1);
    tracep->declBit(c+13,"lui_o", false,-1);
    tracep->declBit(c+14,"load_extend_s", false,-1);
    tracep->declBus(c+66,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+181,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+178,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+67,"rs1", false,-1, 4,0);
    tracep->declBus(c+68,"rs2", false,-1, 4,0);
    tracep->declBus(c+55,"rd", false,-1, 4,0);
    tracep->declBit(c+53,"WE3", false,-1);
    tracep->declBus(c+56,"WD3", false,-1, 31,0);
    tracep->declBus(c+176,"RD1", false,-1, 31,0);
    tracep->declBus(c+177,"RD2", false,-1, 31,0);
    tracep->declBus(c+175,"a0", false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+141+i*1,"reg_array", true,(i+1), 31,0);
    }
    tracep->declBus(c+172,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_execute ");
    tracep->declBus(c+178,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+27,"ALUsrc", false,-1);
    tracep->declBus(c+36,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+20,"RD1", false,-1, 31,0);
    tracep->declBus(c+21,"RD2", false,-1, 31,0);
    tracep->declBus(c+22,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+24,"PC_E", false,-1, 31,0);
    tracep->declBit(c+26,"jump_E", false,-1);
    tracep->declBit(c+29,"branch_E", false,-1);
    tracep->declBit(c+30,"jalr", false,-1);
    tracep->declBit(c+31,"lui", false,-1);
    tracep->declBus(c+38,"ALUout2", false,-1, 31,0);
    tracep->declBit(c+28,"PCsrc_E", false,-1);
    tracep->declBus(c+39,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+21,"writeData_E", false,-1, 31,0);
    tracep->declBit(c+69,"EQ", false,-1);
    tracep->declBus(c+70,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+71,"ALUout1", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+178,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+70,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+36,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+71,"SUM", false,-1, 31,0);
    tracep->declBit(c+69,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_src ");
    tracep->declBit(c+26,"JumpE", false,-1);
    tracep->declBit(c+29,"BranchE", false,-1);
    tracep->declBit(c+69,"ZeroE", false,-1);
    tracep->declBit(c+28,"PCSrcE", false,-1);
    tracep->declBit(c+72,"and_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_fetch ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBit(c+28,"PCsrc_E", false,-1);
    tracep->declBus(c+39,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+73,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+178,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+174,"rst", false,-1);
    tracep->declBus(c+73,"next_PC", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+178,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+2,"in", false,-1, 31,0);
    tracep->declBus(c+182,"N", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+183,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+178,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+178,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"A", false,-1, 31,0);
    tracep->declBus(c+1,"RD", false,-1, 31,0);
    tracep->declBus(c+74,"byte1", false,-1, 7,0);
    tracep->declBus(c+75,"byte2", false,-1, 7,0);
    tracep->declBus(c+76,"byte3", false,-1, 7,0);
    tracep->declBus(c+77,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"d_0", false,-1, 31,0);
    tracep->declBus(c+39,"d_1", false,-1, 31,0);
    tracep->declBit(c+28,"s", false,-1);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+78,"sw", false,-1);
    tracep->declBit(c+79,"sh", false,-1);
    tracep->declBit(c+80,"sb", false,-1);
    tracep->declBit(c+81,"lw", false,-1);
    tracep->declBit(c+82,"lh", false,-1);
    tracep->declBit(c+83,"lb", false,-1);
    tracep->declBit(c+44,"s", false,-1);
    tracep->declBus(c+40,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+41,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+49,"readData_M", false,-1, 31,0);
    tracep->declBit(c+84,"loadIns", false,-1);
    tracep->declBit(c+85,"storeIns", false,-1);
    tracep->declBit(c+86,"cache_hit", false,-1);
    tracep->declBit(c+87,"cache_wen", false,-1);
    tracep->declBus(c+88,"cache_out", false,-1, 31,0);
    tracep->declBus(c+89,"cache_in", false,-1, 31,0);
    tracep->declBus(c+90,"cache_store", false,-1, 31,0);
    tracep->declBus(c+91,"ram_out", false,-1, 31,0);
    tracep->declBus(c+92,"memory_out", false,-1, 31,0);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+178,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+184,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+185,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+186,"CACHE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBit(c+87,"wen", false,-1);
    tracep->declBus(c+40,"addr", false,-1, 31,0);
    tracep->declBus(c+89,"din", false,-1, 31,0);
    tracep->declBit(c+86,"hit", false,-1);
    tracep->declBus(c+88,"dout", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+93+i*2,"cache_subarray", true,(i+0), 56,0);
    }
    tracep->declQuad(c+125,"cache_out", false,-1, 56,0);
    tracep->declBit(c+127,"valid", false,-1);
    tracep->declBus(c+128,"tag_out", false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_store_input ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+78,"sw", false,-1);
    tracep->declBit(c+79,"sh", false,-1);
    tracep->declBit(c+80,"sb", false,-1);
    tracep->declBus(c+41,"din", false,-1, 31,0);
    tracep->declBus(c+40,"addr", false,-1, 31,0);
    tracep->declBus(c+88,"cache_out", false,-1, 31,0);
    tracep->declBus(c+90,"cache_store", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+178,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+187,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+183,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+81,"lw", false,-1);
    tracep->declBit(c+83,"lb", false,-1);
    tracep->declBit(c+82,"lh", false,-1);
    tracep->declBit(c+44,"s", false,-1);
    tracep->declBus(c+129,"offset", false,-1, 1,0);
    tracep->declBus(c+92,"data", false,-1, 31,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->declBus(c+130,"he", false,-1, 31,0);
    tracep->declBus(c+131,"be", false,-1, 31,0);
    tracep->declBus(c+132,"h", false,-1, 15,0);
    tracep->declBus(c+133,"b", false,-1, 7,0);
    tracep->pushNamePrefix("h_e ");
    tracep->declBus(c+178,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+187,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+132,"din", false,-1, 15,0);
    tracep->declBit(c+44,"s", false,-1);
    tracep->declBus(c+130,"dout", false,-1, 31,0);
    tracep->declBit(c+134,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_e ");
    tracep->declBus(c+178,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+183,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+133,"din", false,-1, 7,0);
    tracep->declBit(c+44,"s", false,-1);
    tracep->declBus(c+131,"dout", false,-1, 31,0);
    tracep->declBit(c+135,"sign", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+178,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+183,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+41,"wd", false,-1, 31,0);
    tracep->declBit(c+78,"sw", false,-1);
    tracep->declBit(c+79,"sh", false,-1);
    tracep->declBit(c+80,"sb", false,-1);
    tracep->declBus(c+40,"a", false,-1, 31,0);
    tracep->declBit(c+173,"clk", false,-1);
    tracep->declBus(c+91,"rd", false,-1, 31,0);
    tracep->declBus(c+136,"offset_a", false,-1, 31,0);
    tracep->declBus(c+137,"d0", false,-1, 7,0);
    tracep->declBus(c+138,"d1", false,-1, 7,0);
    tracep->declBus(c+139,"d2", false,-1, 7,0);
    tracep->declBus(c+140,"d3", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_writeback ");
    tracep->declBus(c+178,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+51,"readData_W", false,-1, 31,0);
    tracep->declBus(c+52,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+54,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+56,"result_W", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__instr_F),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC_F),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__PC_F)),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__instr_D),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__PC_D),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__PCPlus4_D),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ImmExt_D),32);
    bufp->fullBit(oldp+8,((((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                             | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                            | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                           | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+9,(((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                           | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+10,((((((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                               | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                             | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                            | (6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+11,((7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+12,((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+13,((5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__load_extend_s_D));
    bufp->fullCData(oldp+15,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 1U : ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 2U : ((9U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+16,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? ((2U == (7U 
                                                   & (vlSelf->top__DOT__instr_D 
                                                      >> 0xcU)))
                                            ? 4U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSelf->top__DOT__instr_D 
                                               >> 0xcU)))
                                             ? 2U : 
                                            ((0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__instr_D 
                                                >> 0xcU)))
                                              ? 1U : 0U)))
                                        : 0U))),3);
    bufp->fullCData(oldp+17,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? ((0x4000U & vlSelf->top__DOT__instr_D)
                                   ? ((0x2000U & vlSelf->top__DOT__instr_D)
                                       ? 0U : ((0x1000U 
                                                & vlSelf->top__DOT__instr_D)
                                                ? 2U
                                                : 1U))
                                   : ((0x2000U & vlSelf->top__DOT__instr_D)
                                       ? ((0x1000U 
                                           & vlSelf->top__DOT__instr_D)
                                           ? 0U : 4U)
                                       : ((0x1000U 
                                           & vlSelf->top__DOT__instr_D)
                                           ? 2U : 1U)))
                               : 0U)),3);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ALUctrl_D),4);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 7U))),5);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__RD1_E),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__RD2_E),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ImmExt_E),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__PCPlus4_E),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__PC_E),32);
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__regWrite_E));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__jump_E));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__ALUsrc_E));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__PCsrc_E));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__branch_E));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__jalr_E));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__lui_E));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__load_extend_s_E));
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__resultSrc_E),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__R_size_E),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__DMem_size_E),3);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__ALUctrl_E),4);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__Rd_E),5);
    bufp->fullIData(oldp+38,(((IData)(vlSelf->top__DOT__lui_E)
                               ? vlSelf->top__DOT__ImmExt_E
                               : vlSelf->top__DOT__top_execute__DOT__ALUout1)),32);
    bufp->fullIData(oldp+39,(((IData)(vlSelf->top__DOT__jalr_E)
                               ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                               : (vlSelf->top__DOT__PC_E 
                                  + (vlSelf->top__DOT__ImmExt_E 
                                     << 1U)))),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ALUResult_M),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__writeData_M),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__PCPlus4_M),32);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__regWrite_M));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__load_extend_s_M));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__resultSrc_M),2);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__R_size_M),3);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__DMem_size_M),3);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__Rd_M),5);
    bufp->fullIData(oldp+49,(((2U & (IData)(vlSelf->top__DOT__DMem_size_M))
                               ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                               : ((1U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                   ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                   : ((4U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                       ? vlSelf->top__DOT__top_memory__DOT__memory_out
                                       : 0U)))),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ALUResult_W),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__readData_W),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__PCPlus4_W),32);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__regWrite_W));
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__resultSrc_W),2);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__Rd_W),5);
    bufp->fullIData(oldp+56,(((0U == (IData)(vlSelf->top__DOT__resultSrc_W))
                               ? vlSelf->top__DOT__ALUResult_W
                               : ((1U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                   ? vlSelf->top__DOT__readData_W
                                   : ((2U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                       ? vlSelf->top__DOT__PCPlus4_W
                                       : 0U)))),32);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D),3);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1),12);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui),20);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal),20);
    bufp->fullCData(oldp+61,((0x7fU & vlSelf->top__DOT__instr_D)),7);
    bufp->fullCData(oldp+62,((7U & (vlSelf->top__DOT__instr_D 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+63,((vlSelf->top__DOT__instr_D 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+64,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 0U : ((7U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                  ? 2U
                                                  : 3U))))),2);
    bufp->fullBit(oldp+65,((1U & (vlSelf->top__DOT__instr_D 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr),32);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__top_execute__DOT__EQ));
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__top_execute__DOT__ALUout1),32);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result));
    bufp->fullIData(oldp+73,(((IData)(vlSelf->top__DOT__PCsrc_E)
                               ? ((IData)(vlSelf->top__DOT__jalr_E)
                                   ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                   : (vlSelf->top__DOT__PC_E 
                                      + (vlSelf->top__DOT__ImmExt_E 
                                         << 1U))) : 
                              ((IData)(4U) + vlSelf->top__DOT__PC_F))),32);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                  >> 2U))));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                  >> 1U))));
    bufp->fullBit(oldp+80,((1U & (IData)(vlSelf->top__DOT__R_size_M))));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                  >> 2U))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                  >> 1U))));
    bufp->fullBit(oldp+83,((1U & (IData)(vlSelf->top__DOT__DMem_size_M))));
    bufp->fullBit(oldp+84,((IData)((0U != (IData)(vlSelf->top__DOT__DMem_size_M)))));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__top_memory__DOT__storeIns));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__top_memory__DOT__cache_hit));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns) 
                                  | ((IData)((0U != (IData)(vlSelf->top__DOT__DMem_size_M))) 
                                     & (~ (IData)(vlSelf->top__DOT__top_memory__DOT__cache_hit)))))));
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__top_memory__DOT__cache_out),32);
    bufp->fullIData(oldp+89,(((IData)(vlSelf->top__DOT__top_memory__DOT__storeIns)
                               ? vlSelf->top__DOT__top_memory__DOT__cache_store
                               : vlSelf->top__DOT__top_memory__DOT__ram_out)),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__top_memory__DOT__cache_store),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__top_memory__DOT__ram_out),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__top_memory__DOT__memory_out),32);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[0]),57);
    bufp->fullQData(oldp+95,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[1]),57);
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[2]),57);
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[3]),57);
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[4]),57);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[5]),57);
    bufp->fullQData(oldp+105,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[6]),57);
    bufp->fullQData(oldp+107,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[7]),57);
    bufp->fullQData(oldp+109,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[8]),57);
    bufp->fullQData(oldp+111,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[9]),57);
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[10]),57);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[11]),57);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[12]),57);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[13]),57);
    bufp->fullQData(oldp+121,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[14]),57);
    bufp->fullQData(oldp+123,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_subarray[15]),57);
    bufp->fullQData(oldp+125,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__cache_out),57);
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__valid));
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__top_memory__DOT__cache__DOT__tag_out),24);
    bufp->fullCData(oldp+129,((3U & vlSelf->top__DOT__ALUResult_M)),2);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be),32);
    bufp->fullSData(oldp+132,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h),16);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__b),8);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign));
    bufp->fullIData(oldp+136,((0xfffffffcU & vlSelf->top__DOT__ALUResult_M)),32);
    bufp->fullCData(oldp+137,((0xffU & vlSelf->top__DOT__writeData_M)),8);
    bufp->fullCData(oldp+138,((0xffU & (vlSelf->top__DOT__writeData_M 
                                        >> 8U))),8);
    bufp->fullCData(oldp+139,((0xffU & (vlSelf->top__DOT__writeData_M 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+140,((vlSelf->top__DOT__writeData_M 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__top_decode__DOT__register__DOT__i),32);
    bufp->fullBit(oldp+173,(vlSelf->clk));
    bufp->fullBit(oldp+174,(vlSelf->rst));
    bufp->fullIData(oldp+175,(vlSelf->a0),32);
    bufp->fullIData(oldp+176,(((0U == (0x1fU & (vlSelf->top__DOT__instr_D 
                                                >> 0xfU)))
                                ? 0U : ((0x1eU >= (0x1fU 
                                                   & ((vlSelf->top__DOT__instr_D 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                         ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                        [(0x1fU & (
                                                   (vlSelf->top__DOT__instr_D 
                                                    >> 0xfU) 
                                                   - (IData)(1U)))]
                                         : 0U))),32);
    bufp->fullIData(oldp+177,(((0U == (0x1fU & (vlSelf->top__DOT__instr_D 
                                                >> 0xfU)))
                                ? 0U : ((0x1eU >= (0x1fU 
                                                   & ((vlSelf->top__DOT__instr_D 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                         ? vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                                        [(0x1fU & (
                                                   (vlSelf->top__DOT__instr_D 
                                                    >> 0x14U) 
                                                   - (IData)(1U)))]
                                         : 0U))),32);
    bufp->fullIData(oldp+178,(0x20U),32);
    bufp->fullIData(oldp+179,(0xcU),32);
    bufp->fullIData(oldp+180,(0x14U),32);
    bufp->fullIData(oldp+181,(5U),32);
    bufp->fullIData(oldp+182,(4U),32);
    bufp->fullIData(oldp+183,(8U),32);
    bufp->fullIData(oldp+184,(6U),32);
    bufp->fullIData(oldp+185,(0x18U),32);
    bufp->fullIData(oldp+186,(0x39U),32);
    bufp->fullIData(oldp+187,(0x10U),32);
}
