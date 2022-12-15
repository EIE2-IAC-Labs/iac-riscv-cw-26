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
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+120,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+120,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->declBus(c+121,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+122,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBus(c+12,"resultSrc_D", false,-1, 1,0);
    tracep->declBus(c+13,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size_D", false,-1, 2,0);
    tracep->declBus(c+15,"ALUctrl_D", false,-1, 3,0);
    tracep->declBus(c+16,"Rd_D", false,-1, 4,0);
    tracep->declBit(c+17,"jalr", false,-1);
    tracep->declBus(c+18,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+19,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+20,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+21,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+22,"PC_E", false,-1, 31,0);
    tracep->declBit(c+23,"regWrite_E", false,-1);
    tracep->declBit(c+24,"jump_E", false,-1);
    tracep->declBit(c+25,"ALUsrc_E", false,-1);
    tracep->declBit(c+26,"PCsrc_E", false,-1);
    tracep->declBit(c+27,"branch_E", false,-1);
    tracep->declBus(c+28,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+29,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+30,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+31,"ALUctrl_E", false,-1, 3,0);
    tracep->declBus(c+32,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+33,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+19,"writeData_E", false,-1, 31,0);
    tracep->declBus(c+34,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+35,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+36,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+37,"PCPlus4_M", false,-1, 31,0);
    tracep->declBit(c+38,"regWrite_M", false,-1);
    tracep->declBus(c+39,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+40,"R_size_M", false,-1, 2,0);
    tracep->declBus(c+41,"DMem_size_M", false,-1, 2,0);
    tracep->declBus(c+42,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+43,"readData_M", false,-1, 31,0);
    tracep->declBus(c+44,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+45,"readData_W", false,-1, 31,0);
    tracep->declBus(c+46,"PCPlus4_W", false,-1, 31,0);
    tracep->declBit(c+47,"regWrite_W", false,-1);
    tracep->declBus(c+48,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+49,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+50,"result_W", false,-1, 31,0);
    tracep->pushNamePrefix("decode_execute_reg ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBus(c+12,"resultSrc_D", false,-1, 1,0);
    tracep->declBus(c+13,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size_D", false,-1, 2,0);
    tracep->declBus(c+15,"ALUctrl_D", false,-1, 3,0);
    tracep->declBus(c+16,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+121,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+122,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->declBit(c+23,"regWrite_E", false,-1);
    tracep->declBit(c+24,"jump_E", false,-1);
    tracep->declBit(c+25,"ALUsrc_E", false,-1);
    tracep->declBit(c+27,"branch_E", false,-1);
    tracep->declBus(c+28,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+29,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+30,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+31,"ALUctrl_E", false,-1, 3,0);
    tracep->declBus(c+32,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+18,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+19,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+22,"PC_E", false,-1, 31,0);
    tracep->declBus(c+20,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+21,"PCPlus4_E", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("execute_memory_reg ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBit(c+23,"regWrite_E", false,-1);
    tracep->declBus(c+28,"resultSrc_E", false,-1, 1,0);
    tracep->declBus(c+29,"R_size_E", false,-1, 2,0);
    tracep->declBus(c+30,"DMem_size_E", false,-1, 2,0);
    tracep->declBus(c+32,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+33,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+19,"writeData_E", false,-1, 31,0);
    tracep->declBus(c+21,"PCPlus4_E", false,-1, 31,0);
    tracep->declBit(c+38,"regWrite_M", false,-1);
    tracep->declBus(c+39,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+40,"R_size_M", false,-1, 2,0);
    tracep->declBus(c+41,"DMem_size_M", false,-1, 2,0);
    tracep->declBus(c+42,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+35,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+36,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+37,"PCPlus4_M", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch_decode_reg ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBus(c+5,"PC_D", false,-1, 31,0);
    tracep->declBus(c+6,"PCPlus4_D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory_writeback_reg ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBit(c+38,"regWrite_M", false,-1);
    tracep->declBus(c+39,"resultSrc_M", false,-1, 1,0);
    tracep->declBus(c+42,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+35,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+43,"readData_M", false,-1, 31,0);
    tracep->declBus(c+37,"PCPlus4_M", false,-1, 31,0);
    tracep->declBit(c+47,"regWrite_W", false,-1);
    tracep->declBus(c+48,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+49,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+44,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+45,"readData_W", false,-1, 31,0);
    tracep->declBus(c+46,"PCPlus4_W", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_decode ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+4,"instr_D", false,-1, 31,0);
    tracep->declBit(c+47,"regWrite_W", false,-1);
    tracep->declBus(c+49,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+50,"result_W", false,-1, 31,0);
    tracep->declBit(c+8,"regWrite_D", false,-1);
    tracep->declBus(c+12,"resultSrc_D", false,-1, 1,0);
    tracep->declBit(c+9,"jump_D", false,-1);
    tracep->declBit(c+11,"branch_D", false,-1);
    tracep->declBus(c+15,"ALUctrl_D", false,-1, 3,0);
    tracep->declBit(c+10,"ALUsrc_D", false,-1);
    tracep->declBus(c+16,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+121,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+122,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+120,"a0", false,-1, 31,0);
    tracep->declBus(c+13,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size_D", false,-1, 2,0);
    tracep->declBit(c+17,"jalr", false,-1);
    tracep->declBus(c+51,"ImmSrc_D", false,-1, 2,0);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+123,"data_width", false,-1, 31,0);
    tracep->declBus(c+124,"imm_width1", false,-1, 31,0);
    tracep->declBus(c+125,"imm_width2", false,-1, 31,0);
    tracep->declBus(c+125,"imm_width3", false,-1, 31,0);
    tracep->declBus(c+4,"InstrD", false,-1, 31,0);
    tracep->declBus(c+51,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+7,"ImmExtD", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+52,"imm_type_1", false,-1, 11,0);
    tracep->declBus(c+53,"imm_type_lui", false,-1, 19,0);
    tracep->declBus(c+54,"imm_type_jal", false,-1, 19,0);
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+56,"funct3", false,-1, 2,0);
    tracep->declBus(c+57,"funct7", false,-1, 6,0);
    tracep->declBit(c+8,"RegWriteD", false,-1);
    tracep->declBus(c+12,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+51,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+11,"BranchD", false,-1);
    tracep->declBit(c+9,"JumpD", false,-1);
    tracep->declBus(c+13,"R_size", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+15,"ALUControlD", false,-1, 3,0);
    tracep->declBit(c+17,"jalr", false,-1);
    tracep->declBus(c+58,"instr_type", false,-1, 1,0);
    tracep->pushNamePrefix("alu_control ");
    tracep->declBus(c+58,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+56,"funct3", false,-1, 2,0);
    tracep->declBit(c+59,"funct7_bit", false,-1);
    tracep->declBus(c+15,"ALUControlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_control ");
    tracep->declBus(c+56,"funct3", false,-1, 14,12);
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBit(c+8,"RegWriteD", false,-1);
    tracep->declBus(c+12,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+10,"ALUsrcD", false,-1);
    tracep->declBus(c+51,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+11,"BranchD", false,-1);
    tracep->declBit(c+9,"JumpD", false,-1);
    tracep->declBus(c+58,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+13,"R_size", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size", false,-1, 2,0);
    tracep->declBit(c+17,"jalr_o", false,-1);
    tracep->declBus(c+60,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+126,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBus(c+61,"rs1", false,-1, 4,0);
    tracep->declBus(c+62,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"rd", false,-1, 4,0);
    tracep->declBit(c+47,"WE3", false,-1);
    tracep->declBus(c+50,"WD3", false,-1, 31,0);
    tracep->declBus(c+121,"RD1", false,-1, 31,0);
    tracep->declBus(c+122,"RD2", false,-1, 31,0);
    tracep->declBus(c+120,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+86+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_execute ");
    tracep->declBus(c+123,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+25,"ALUsrc", false,-1);
    tracep->declBus(c+31,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+18,"RD1", false,-1, 31,0);
    tracep->declBus(c+19,"RD2", false,-1, 31,0);
    tracep->declBus(c+20,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+22,"PC_E", false,-1, 31,0);
    tracep->declBit(c+24,"jump_E", false,-1);
    tracep->declBit(c+27,"branch_E", false,-1);
    tracep->declBit(c+17,"jalr", false,-1);
    tracep->declBus(c+33,"ALUout", false,-1, 31,0);
    tracep->declBit(c+26,"PCsrc_E", false,-1);
    tracep->declBus(c+34,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+19,"writeData_E", false,-1, 31,0);
    tracep->declBit(c+63,"EQ", false,-1);
    tracep->declBus(c+64,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+123,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+64,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+31,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+33,"SUM", false,-1, 31,0);
    tracep->declBit(c+63,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_src ");
    tracep->declBit(c+24,"JumpE", false,-1);
    tracep->declBit(c+27,"BranchE", false,-1);
    tracep->declBit(c+63,"ZeroE", false,-1);
    tracep->declBit(c+26,"PCSrcE", false,-1);
    tracep->declBit(c+65,"and_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_fetch ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBit(c+26,"PCsrc_E", false,-1);
    tracep->declBus(c+34,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+66,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+123,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+66,"next_PC", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+123,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+2,"in", false,-1, 31,0);
    tracep->declBus(c+127,"N", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+128,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"A", false,-1, 31,0);
    tracep->declBus(c+1,"RD", false,-1, 31,0);
    tracep->declBus(c+67,"byte1", false,-1, 7,0);
    tracep->declBus(c+68,"byte2", false,-1, 7,0);
    tracep->declBus(c+69,"byte3", false,-1, 7,0);
    tracep->declBus(c+70,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"d_0", false,-1, 31,0);
    tracep->declBus(c+34,"d_1", false,-1, 31,0);
    tracep->declBit(c+26,"s", false,-1);
    tracep->declBus(c+66,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+71,"sw", false,-1);
    tracep->declBit(c+72,"sh", false,-1);
    tracep->declBit(c+73,"sb", false,-1);
    tracep->declBit(c+74,"lw", false,-1);
    tracep->declBit(c+75,"lh", false,-1);
    tracep->declBit(c+76,"lb", false,-1);
    tracep->declBus(c+35,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+36,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+43,"readData_M", false,-1, 31,0);
    tracep->declBus(c+77,"dout", false,-1, 31,0);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+123,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+129,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+74,"lw", false,-1);
    tracep->declBit(c+76,"lb", false,-1);
    tracep->declBit(c+75,"lh", false,-1);
    tracep->declBus(c+77,"data", false,-1, 31,0);
    tracep->declBus(c+43,"dout", false,-1, 31,0);
    tracep->declBus(c+78,"he", false,-1, 31,0);
    tracep->declBus(c+79,"be", false,-1, 31,0);
    tracep->declBus(c+80,"h", false,-1, 15,0);
    tracep->declBus(c+81,"b", false,-1, 7,0);
    tracep->pushNamePrefix("ze ");
    tracep->declBus(c+123,"LEN", false,-1, 31,0);
    tracep->declBus(c+129,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"half_input", false,-1, 15,0);
    tracep->declBus(c+81,"byte_input", false,-1, 7,0);
    tracep->declBus(c+78,"he", false,-1, 31,0);
    tracep->declBus(c+79,"be", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+123,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+128,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+36,"wd", false,-1, 31,0);
    tracep->declBit(c+71,"sw", false,-1);
    tracep->declBit(c+72,"sh", false,-1);
    tracep->declBit(c+73,"sb", false,-1);
    tracep->declBus(c+35,"a", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBus(c+77,"rd", false,-1, 31,0);
    tracep->declBus(c+82,"d0", false,-1, 7,0);
    tracep->declBus(c+83,"d1", false,-1, 7,0);
    tracep->declBus(c+84,"d2", false,-1, 7,0);
    tracep->declBus(c+85,"d3", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_writeback ");
    tracep->declBus(c+123,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+45,"readData_W", false,-1, 31,0);
    tracep->declBus(c+46,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+48,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+50,"result_W", false,-1, 31,0);
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
    bufp->fullCData(oldp+12,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 1U : ((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 2U : ((9U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 2U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+13,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
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
    bufp->fullCData(oldp+14,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? ((0x4000U & vlSelf->top__DOT__instr_D)
                                   ? ((0x2000U & vlSelf->top__DOT__instr_D)
                                       ? 4U : ((0x1000U 
                                                & vlSelf->top__DOT__instr_D)
                                                ? 2U
                                                : 1U))
                                   : ((0x2000U & vlSelf->top__DOT__instr_D)
                                       ? 4U : ((0x1000U 
                                                & vlSelf->top__DOT__instr_D)
                                                ? 2U
                                                : 1U)))
                               : 4U)),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__ALUctrl_D),4);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 7U))),5);
    bufp->fullBit(oldp+17,((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__RD1_E),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__RD2_E),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ImmExt_E),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__PCPlus4_E),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__PC_E),32);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__regWrite_E));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__jump_E));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__ALUsrc_E));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__PCsrc_E));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__branch_E));
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__resultSrc_E),2);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__R_size_E),3);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__DMem_size_E),3);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__ALUctrl_E),4);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__Rd_E),5);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ALUResult_E),32);
    bufp->fullIData(oldp+34,(((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? vlSelf->top__DOT__ALUResult_E
                               : (vlSelf->top__DOT__PC_E 
                                  + (vlSelf->top__DOT__ImmExt_E 
                                     << 1U)))),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALUResult_M),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__writeData_M),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__PCPlus4_M),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__regWrite_M));
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__resultSrc_M),2);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__R_size_M),3);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__DMem_size_M),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__Rd_M),5);
    bufp->fullIData(oldp+43,(((2U & (IData)(vlSelf->top__DOT__DMem_size_M))
                               ? (0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)
                               : ((1U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                   ? (0xffU & vlSelf->top__DOT__top_memory__DOT__dout)
                                   : ((4U & (IData)(vlSelf->top__DOT__DMem_size_M))
                                       ? vlSelf->top__DOT__top_memory__DOT__dout
                                       : 0U)))),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ALUResult_W),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__readData_W),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__PCPlus4_W),32);
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__regWrite_W));
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__resultSrc_W),2);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__Rd_W),5);
    bufp->fullIData(oldp+50,(((0U == (IData)(vlSelf->top__DOT__resultSrc_W))
                               ? vlSelf->top__DOT__ALUResult_W
                               : ((1U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                   ? vlSelf->top__DOT__readData_W
                                   : ((2U == (IData)(vlSelf->top__DOT__resultSrc_W))
                                       ? vlSelf->top__DOT__PCPlus4_W
                                       : 0U)))),32);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D),3);
    bufp->fullSData(oldp+52,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1),12);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui),20);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal),20);
    bufp->fullCData(oldp+55,((0x7fU & vlSelf->top__DOT__instr_D)),7);
    bufp->fullCData(oldp+56,((7U & (vlSelf->top__DOT__instr_D 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+57,((vlSelf->top__DOT__instr_D 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+58,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 0U : ((7U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 1U
                                                 : 2U)))),2);
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__instr_D 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr),32);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->top__DOT__instr_D 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__top_execute__DOT__EQ));
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result));
    bufp->fullIData(oldp+66,(((IData)(vlSelf->top__DOT__PCsrc_E)
                               ? ((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                   ? vlSelf->top__DOT__ALUResult_E
                                   : (vlSelf->top__DOT__PC_E 
                                      + (vlSelf->top__DOT__ImmExt_E 
                                         << 1U))) : 
                              ((IData)(4U) + vlSelf->top__DOT__PC_F))),32);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    bufp->fullBit(oldp+71,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                  >> 2U))));
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->top__DOT__R_size_M) 
                                  >> 1U))));
    bufp->fullBit(oldp+73,((1U & (IData)(vlSelf->top__DOT__R_size_M))));
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                  >> 2U))));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->top__DOT__DMem_size_M) 
                                  >> 1U))));
    bufp->fullBit(oldp+76,((1U & (IData)(vlSelf->top__DOT__DMem_size_M))));
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__top_memory__DOT__dout),32);
    bufp->fullIData(oldp+78,((0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)),32);
    bufp->fullIData(oldp+79,((0xffU & vlSelf->top__DOT__top_memory__DOT__dout)),32);
    bufp->fullSData(oldp+80,((0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)),16);
    bufp->fullCData(oldp+81,((0xffU & vlSelf->top__DOT__top_memory__DOT__dout)),8);
    bufp->fullCData(oldp+82,((0xffU & vlSelf->top__DOT__writeData_M)),8);
    bufp->fullCData(oldp+83,((0xffU & (vlSelf->top__DOT__writeData_M 
                                       >> 8U))),8);
    bufp->fullCData(oldp+84,((0xffU & (vlSelf->top__DOT__writeData_M 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+85,((vlSelf->top__DOT__writeData_M 
                              >> 0x18U)),8);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[31]),32);
    bufp->fullBit(oldp+118,(vlSelf->clk));
    bufp->fullBit(oldp+119,(vlSelf->rst));
    bufp->fullIData(oldp+120,(vlSelf->a0),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                              [(0x1fU & (vlSelf->top__DOT__instr_D 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                              [(0x1fU & (vlSelf->top__DOT__instr_D 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+123,(0x20U),32);
    bufp->fullIData(oldp+124,(0xcU),32);
    bufp->fullIData(oldp+125,(0x14U),32);
    bufp->fullIData(oldp+126,(5U),32);
    bufp->fullIData(oldp+127,(4U),32);
    bufp->fullIData(oldp+128,(8U),32);
    bufp->fullIData(oldp+129,(0x10U),32);
}
