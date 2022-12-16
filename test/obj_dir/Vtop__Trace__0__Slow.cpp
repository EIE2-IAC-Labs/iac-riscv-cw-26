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
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+92,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+92,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+71,"RD1", false,-1, 31,0);
    tracep->declBus(c+72,"RD2", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt", false,-1, 31,0);
    tracep->declBit(c+5,"regWrite", false,-1);
    tracep->declBit(c+6,"jump", false,-1);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBit(c+8,"branch", false,-1);
    tracep->declBit(c+9,"jalr", false,-1);
    tracep->declBit(c+10,"lui", false,-1);
    tracep->declBit(c+11,"load_extend_s", false,-1);
    tracep->declBus(c+12,"resultSrc", false,-1, 1,0);
    tracep->declBus(c+13,"R_size", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+15,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+16,"Rd", false,-1, 4,0);
    tracep->declBit(c+73,"PCsrc", false,-1);
    tracep->declBus(c+74,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+72,"writeData", false,-1, 31,0);
    tracep->declBus(c+93,"PCTarget", false,-1, 31,0);
    tracep->declBus(c+94,"readData", false,-1, 31,0);
    tracep->declBus(c+95,"result", false,-1, 31,0);
    tracep->pushNamePrefix("top_decode ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+1,"instr_D", false,-1, 31,0);
    tracep->declBit(c+5,"regWrite_W", false,-1);
    tracep->declBus(c+16,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+95,"result_W", false,-1, 31,0);
    tracep->declBit(c+5,"regWrite_D", false,-1);
    tracep->declBus(c+12,"resultSrc_D", false,-1, 1,0);
    tracep->declBit(c+6,"jump_D", false,-1);
    tracep->declBit(c+8,"branch_D", false,-1);
    tracep->declBus(c+15,"ALUctrl_D", false,-1, 3,0);
    tracep->declBit(c+7,"ALUsrc_D", false,-1);
    tracep->declBus(c+16,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+71,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+72,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+4,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+92,"a0", false,-1, 31,0);
    tracep->declBus(c+13,"R_size_D", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size_D", false,-1, 2,0);
    tracep->declBit(c+9,"jalr", false,-1);
    tracep->declBit(c+10,"lui", false,-1);
    tracep->declBit(c+11,"load_extend_s", false,-1);
    tracep->declBus(c+17,"ImmSrc_D", false,-1, 2,0);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+97,"data_width", false,-1, 31,0);
    tracep->declBus(c+98,"imm_width1", false,-1, 31,0);
    tracep->declBus(c+99,"imm_width2", false,-1, 31,0);
    tracep->declBus(c+99,"imm_width3", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+17,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+4,"ImmExtD", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+18,"imm_type_1", false,-1, 11,0);
    tracep->declBus(c+19,"imm_type_lui", false,-1, 19,0);
    tracep->declBus(c+20,"imm_type_jal", false,-1, 19,0);
    tracep->declBus(c+21,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+21,"opcode", false,-1, 6,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBus(c+23,"funct7", false,-1, 6,0);
    tracep->declBit(c+5,"RegWriteD", false,-1);
    tracep->declBus(c+12,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+7,"ALUsrcD", false,-1);
    tracep->declBus(c+17,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+8,"BranchD", false,-1);
    tracep->declBit(c+6,"JumpD", false,-1);
    tracep->declBus(c+13,"R_size", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size", false,-1, 2,0);
    tracep->declBus(c+15,"ALUControlD", false,-1, 3,0);
    tracep->declBit(c+9,"jalr", false,-1);
    tracep->declBit(c+10,"lui", false,-1);
    tracep->declBit(c+11,"load_extend_s", false,-1);
    tracep->declBus(c+24,"instr_type", false,-1, 1,0);
    tracep->pushNamePrefix("alu_control ");
    tracep->declBus(c+24,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+22,"funct3", false,-1, 2,0);
    tracep->declBit(c+25,"funct7_bit", false,-1);
    tracep->declBus(c+15,"ALUControlD", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_control ");
    tracep->declBus(c+22,"funct3", false,-1, 14,12);
    tracep->declBus(c+21,"opcode", false,-1, 6,0);
    tracep->declBit(c+5,"RegWriteD", false,-1);
    tracep->declBus(c+12,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+7,"ALUsrcD", false,-1);
    tracep->declBus(c+17,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+8,"BranchD", false,-1);
    tracep->declBit(c+6,"JumpD", false,-1);
    tracep->declBus(c+24,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+13,"R_size", false,-1, 2,0);
    tracep->declBus(c+14,"DMem_size", false,-1, 2,0);
    tracep->declBit(c+9,"jalr_o", false,-1);
    tracep->declBit(c+10,"lui_o", false,-1);
    tracep->declBit(c+11,"load_extend_s", false,-1);
    tracep->declBus(c+26,"instr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+100,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+27,"rs1", false,-1, 4,0);
    tracep->declBus(c+28,"rs2", false,-1, 4,0);
    tracep->declBus(c+16,"rd", false,-1, 4,0);
    tracep->declBit(c+5,"WE3", false,-1);
    tracep->declBus(c+95,"WD3", false,-1, 31,0);
    tracep->declBus(c+71,"RD1", false,-1, 31,0);
    tracep->declBus(c+72,"RD2", false,-1, 31,0);
    tracep->declBus(c+92,"a0", false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+39+i*1,"reg_array", true,(i+1), 31,0);
    }
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_execute ");
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+7,"ALUsrc", false,-1);
    tracep->declBus(c+15,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+71,"RD1", false,-1, 31,0);
    tracep->declBus(c+72,"RD2", false,-1, 31,0);
    tracep->declBus(c+4,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+2,"PC_E", false,-1, 31,0);
    tracep->declBit(c+6,"jump_E", false,-1);
    tracep->declBit(c+8,"branch_E", false,-1);
    tracep->declBit(c+9,"jalr", false,-1);
    tracep->declBit(c+10,"lui", false,-1);
    tracep->declBus(c+74,"ALUout2", false,-1, 31,0);
    tracep->declBit(c+73,"PCsrc_E", false,-1);
    tracep->declBus(c+93,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+72,"writeData_E", false,-1, 31,0);
    tracep->declBit(c+75,"EQ", false,-1);
    tracep->declBus(c+76,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+77,"ALUout1", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+97,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+76,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+15,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+77,"SUM", false,-1, 31,0);
    tracep->declBit(c+75,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_src ");
    tracep->declBit(c+6,"JumpE", false,-1);
    tracep->declBit(c+8,"BranchE", false,-1);
    tracep->declBit(c+75,"ZeroE", false,-1);
    tracep->declBit(c+73,"PCSrcE", false,-1);
    tracep->declBit(c+78,"and_result", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_fetch ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+73,"PCsrc_E", false,-1);
    tracep->declBus(c+93,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+1,"instr_F", false,-1, 31,0);
    tracep->declBus(c+2,"PC_F", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+96,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+97,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+96,"next_PC", false,-1, 31,0);
    tracep->declBus(c+2,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+97,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+2,"in", false,-1, 31,0);
    tracep->declBus(c+101,"N", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+102,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"A", false,-1, 31,0);
    tracep->declBus(c+1,"RD", false,-1, 31,0);
    tracep->declBus(c+29,"byte1", false,-1, 7,0);
    tracep->declBus(c+30,"byte2", false,-1, 7,0);
    tracep->declBus(c+31,"byte3", false,-1, 7,0);
    tracep->declBus(c+32,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"d_0", false,-1, 31,0);
    tracep->declBus(c+93,"d_1", false,-1, 31,0);
    tracep->declBit(c+73,"s", false,-1);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+33,"sw", false,-1);
    tracep->declBit(c+34,"sh", false,-1);
    tracep->declBit(c+35,"sb", false,-1);
    tracep->declBit(c+36,"lw", false,-1);
    tracep->declBit(c+37,"lh", false,-1);
    tracep->declBit(c+38,"lb", false,-1);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBus(c+74,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+72,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+94,"readData_M", false,-1, 31,0);
    tracep->declBus(c+79,"dout", false,-1, 31,0);
    tracep->pushNamePrefix("hbw ");
    tracep->declBus(c+97,"CPU_WORD", false,-1, 31,0);
    tracep->declBus(c+103,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"BYTE_LEN", false,-1, 31,0);
    tracep->declBit(c+36,"lw", false,-1);
    tracep->declBit(c+38,"lb", false,-1);
    tracep->declBit(c+37,"lh", false,-1);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBus(c+79,"data", false,-1, 31,0);
    tracep->declBus(c+94,"dout", false,-1, 31,0);
    tracep->declBus(c+80,"he", false,-1, 31,0);
    tracep->declBus(c+81,"be", false,-1, 31,0);
    tracep->declBus(c+82,"h", false,-1, 15,0);
    tracep->declBus(c+83,"b", false,-1, 7,0);
    tracep->pushNamePrefix("h_e ");
    tracep->declBus(c+97,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+103,"HALF_LEN", false,-1, 31,0);
    tracep->declBus(c+82,"din", false,-1, 15,0);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBus(c+80,"dout", false,-1, 31,0);
    tracep->declBit(c+84,"sign", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_e ");
    tracep->declBus(c+97,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+102,"BYTE_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"din", false,-1, 7,0);
    tracep->declBit(c+11,"s", false,-1);
    tracep->declBus(c+81,"dout", false,-1, 31,0);
    tracep->declBit(c+85,"sign", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+97,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBus(c+102,"WORD_LENGTH", false,-1, 31,0);
    tracep->declBus(c+72,"wd", false,-1, 31,0);
    tracep->declBit(c+33,"sw", false,-1);
    tracep->declBit(c+34,"sh", false,-1);
    tracep->declBit(c+35,"sb", false,-1);
    tracep->declBus(c+74,"a", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBus(c+79,"rd", false,-1, 31,0);
    tracep->declBus(c+86,"d0", false,-1, 7,0);
    tracep->declBus(c+87,"d1", false,-1, 7,0);
    tracep->declBus(c+88,"d2", false,-1, 7,0);
    tracep->declBus(c+89,"d3", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_writeback ");
    tracep->declBus(c+97,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+94,"readData_W", false,-1, 31,0);
    tracep->declBus(c+3,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+12,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+95,"result_W", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__ImmExt),32);
    bufp->fullBit(oldp+5,((((((((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                                | (2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                               | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                              | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                             | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                            | (8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                           | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+6,(((8U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                           | (9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+7,((((((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr) 
                              | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                             | (4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                            | (5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)) 
                           | (6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr))));
    bufp->fullBit(oldp+8,((7U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+9,((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+10,((5U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__load_extend_s));
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__resultSrc),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__R_size),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__DMem_size),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__ALUctrl),4);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__top_decode__DOT__ImmSrc_D),3);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1),12);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui),20);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal),20);
    bufp->fullCData(oldp+21,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+22,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+23,((vlSelf->top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+24,(((4U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? 0U : ((6U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                        ? 0U : ((7U 
                                                 == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                                  ? 2U
                                                  : 3U))))),2);
    bufp->fullBit(oldp+25,((1U & (vlSelf->top__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr),32);
    bufp->fullCData(oldp+27,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__R_size) 
                                  >> 2U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__R_size) 
                                  >> 1U))));
    bufp->fullBit(oldp+35,((1U & (IData)(vlSelf->top__DOT__R_size))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__DMem_size) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__DMem_size) 
                                  >> 1U))));
    bufp->fullBit(oldp+38,((1U & (IData)(vlSelf->top__DOT__DMem_size))));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__top_decode__DOT__register__DOT__i),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__RD2),32);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__PCsrc));
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__top_execute__DOT__EQ));
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__top_execute__DOT__ALUout1),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__top_execute__DOT__pc_src__DOT__and_result));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__top_memory__DOT__dout),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be),32);
    bufp->fullSData(oldp+82,((0xffffU & vlSelf->top__DOT__top_memory__DOT__dout)),16);
    bufp->fullCData(oldp+83,((0xffU & vlSelf->top__DOT__top_memory__DOT__dout)),8);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign));
    bufp->fullCData(oldp+86,((0xffU & vlSelf->top__DOT__RD2)),8);
    bufp->fullCData(oldp+87,((0xffU & (vlSelf->top__DOT__RD2 
                                       >> 8U))),8);
    bufp->fullCData(oldp+88,((0xffU & (vlSelf->top__DOT__RD2 
                                       >> 0x10U))),8);
    bufp->fullCData(oldp+89,((vlSelf->top__DOT__RD2 
                              >> 0x18U)),8);
    bufp->fullBit(oldp+90,(vlSelf->clk));
    bufp->fullBit(oldp+91,(vlSelf->rst));
    bufp->fullIData(oldp+92,(vlSelf->a0),32);
    bufp->fullIData(oldp+93,(((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                               ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                               : (vlSelf->top__DOT__PC 
                                  + (vlSelf->top__DOT__ImmExt 
                                     << 1U)))),32);
    bufp->fullIData(oldp+94,(((2U & (IData)(vlSelf->top__DOT__DMem_size))
                               ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                               : ((1U & (IData)(vlSelf->top__DOT__DMem_size))
                                   ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                   : ((4U & (IData)(vlSelf->top__DOT__DMem_size))
                                       ? vlSelf->top__DOT__top_memory__DOT__dout
                                       : 0U)))),32);
    bufp->fullIData(oldp+95,(((0U == (IData)(vlSelf->top__DOT__resultSrc))
                               ? vlSelf->top__DOT__ALUResult
                               : ((1U == (IData)(vlSelf->top__DOT__resultSrc))
                                   ? ((2U & (IData)(vlSelf->top__DOT__DMem_size))
                                       ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__he
                                       : ((1U & (IData)(vlSelf->top__DOT__DMem_size))
                                           ? vlSelf->top__DOT__top_memory__DOT__hbw__DOT__be
                                           : ((4U & (IData)(vlSelf->top__DOT__DMem_size))
                                               ? vlSelf->top__DOT__top_memory__DOT__dout
                                               : 0U)))
                                   : ((2U == (IData)(vlSelf->top__DOT__resultSrc))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC)
                                       : 0U)))),32);
    bufp->fullIData(oldp+96,(((IData)(vlSelf->top__DOT__PCsrc)
                               ? ((9U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr)
                                   ? vlSelf->top__DOT__top_execute__DOT__ALUout1
                                   : (vlSelf->top__DOT__PC 
                                      + (vlSelf->top__DOT__ImmExt 
                                         << 1U))) : 
                              ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+97,(0x20U),32);
    bufp->fullIData(oldp+98,(0xcU),32);
    bufp->fullIData(oldp+99,(0x14U),32);
    bufp->fullIData(oldp+100,(5U),32);
    bufp->fullIData(oldp+101,(4U),32);
    bufp->fullIData(oldp+102,(8U),32);
    bufp->fullIData(oldp+103,(0x10U),32);
}
