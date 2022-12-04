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
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+94,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+94,"a0", false,-1, 31,0);
    tracep->declBit(c+29,"PCsrc", false,-1);
    tracep->declBit(c+30,"ALUsrc", false,-1);
    tracep->declBit(c+31,"resultSrc", false,-1);
    tracep->declBit(c+30,"regWrite", false,-1);
    tracep->declBit(c+96,"ImmSrc", false,-1);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBit(c+97,"memWrite", false,-1);
    tracep->declBit(c+97,"jump", false,-1);
    tracep->declBus(c+33,"branch", false,-1, 2,0);
    tracep->declBus(c+98,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+34,"Rd", false,-1, 4,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+36,"PC", false,-1, 31,0);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+38,"RD1", false,-1, 31,0);
    tracep->declBus(c+39,"RD2", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4", false,-1, 31,0);
    tracep->declBus(c+41,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+42,"readData", false,-1, 31,0);
    tracep->declBus(c+39,"writeData", false,-1, 31,0);
    tracep->declBus(c+35,"instr_F", false,-1, 31,0);
    tracep->declBus(c+36,"PC_F", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_F", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_D", false,-1);
    tracep->declBus(c+43,"resultSrc_D", false,-1, 1,0);
    tracep->declBit(c+97,"memWrite_D", false,-1);
    tracep->declBit(c+97,"jump_D", false,-1);
    tracep->declBus(c+33,"branch_D", false,-1, 2,0);
    tracep->declBus(c+98,"ALUctrl_D", false,-1, 3,0);
    tracep->declBit(c+30,"ALUsrc_D", false,-1);
    tracep->declBit(c+99,"PCsrc_D", false,-1);
    tracep->declBus(c+34,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+35,"instr_D", false,-1, 31,0);
    tracep->declBus(c+38,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+39,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+37,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+36,"PC_D", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_D", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_E", false,-1);
    tracep->declBus(c+43,"resultSrc_E", false,-1, 1,0);
    tracep->declBit(c+97,"memWrite_E", false,-1);
    tracep->declBit(c+97,"jump_E", false,-1);
    tracep->declBus(c+33,"branch_E", false,-1, 2,0);
    tracep->declBus(c+98,"ALUctrl_E", false,-1, 3,0);
    tracep->declBit(c+30,"ALUsrc_E", false,-1);
    tracep->declBit(c+44,"PCsrc_E", false,-1);
    tracep->declBus(c+34,"Rd_E", false,-1, 4,0);
    tracep->declBus(c+38,"RD1_E", false,-1, 31,0);
    tracep->declBus(c+39,"RD2_E", false,-1, 31,0);
    tracep->declBus(c+36,"PC_E", false,-1, 31,0);
    tracep->declBus(c+37,"ImmExt_E", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_E", false,-1, 31,0);
    tracep->declBus(c+41,"ALUResult_E", false,-1, 31,0);
    tracep->declBus(c+39,"writeData_E", false,-1, 31,0);
    tracep->declBus(c+45,"PCTarget_E", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_M", false,-1);
    tracep->declBus(c+43,"resultSrc_M", false,-1, 1,0);
    tracep->declBit(c+97,"memWrite_M", false,-1);
    tracep->declBus(c+34,"Rd_M", false,-1, 4,0);
    tracep->declBus(c+41,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+39,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_M", false,-1, 31,0);
    tracep->declBus(c+42,"readData_M", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_W", false,-1);
    tracep->declBus(c+43,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+34,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+41,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+42,"readData_W", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+46,"result_W", false,-1, 31,0);
    tracep->pushNamePrefix("top_decode ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBus(c+35,"instr_D", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_W", false,-1);
    tracep->declBus(c+34,"Rd_W", false,-1, 4,0);
    tracep->declBus(c+46,"result_W", false,-1, 31,0);
    tracep->declBit(c+30,"regWrite_D", false,-1);
    tracep->declBus(c+43,"resultSrc_D", false,-1, 1,0);
    tracep->declBus(c+33,"branch_D", false,-1, 2,0);
    tracep->declBus(c+98,"ALUctrl_D", false,-1, 3,0);
    tracep->declBit(c+30,"ALUsrc_D", false,-1);
    tracep->declBus(c+34,"Rd_D", false,-1, 4,0);
    tracep->declBus(c+38,"RD1_D", false,-1, 31,0);
    tracep->declBus(c+39,"RD2_D", false,-1, 31,0);
    tracep->declBus(c+37,"ImmExt_D", false,-1, 31,0);
    tracep->declBus(c+94,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"ImmSrc_D", false,-1, 2,0);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+95,"data_width", false,-1, 31,0);
    tracep->declBus(c+100,"imm_width", false,-1, 31,0);
    tracep->declBus(c+35,"instruction", false,-1, 31,0);
    tracep->declBit(c+47,"ImmSrc", false,-1);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+48,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBus(c+49,"funct3", false,-1, 14,12);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBit(c+30,"RegWrite", false,-1);
    tracep->declBus(c+101,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+30,"ALUsrc", false,-1);
    tracep->declBit(c+47,"ImmSrc", false,-1);
    tracep->declBit(c+31,"RegWriteSrc", false,-1);
    tracep->declBus(c+33,"branch", false,-1, 2,0);
    tracep->declBus(c+51,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBus(c+102,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBus(c+52,"rs1", false,-1, 4,0);
    tracep->declBus(c+53,"rs2", false,-1, 4,0);
    tracep->declBus(c+34,"rd", false,-1, 4,0);
    tracep->declBit(c+30,"WE3", false,-1);
    tracep->declBus(c+46,"WD3", false,-1, 31,0);
    tracep->declBus(c+38,"RD1", false,-1, 31,0);
    tracep->declBus(c+39,"RD2", false,-1, 31,0);
    tracep->declBus(c+94,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+54+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_execute ");
    tracep->declBus(c+95,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+30,"ALUsrc", false,-1);
    tracep->declBus(c+98,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+38,"RD1", false,-1, 31,0);
    tracep->declBus(c+39,"RD2", false,-1, 31,0);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->declBus(c+94,"a0", false,-1, 31,0);
    tracep->declBus(c+41,"ALUout", false,-1, 31,0);
    tracep->declBus(c+86,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+95,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+86,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+101,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+41,"SUM", false,-1, 31,0);
    tracep->declBit(c+32,"EQ", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_fetch ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+29,"PCsrc_E", false,-1);
    tracep->declBus(c+45,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+35,"instr_F", false,-1, 31,0);
    tracep->declBus(c+36,"PC_F", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+87,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+95,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+87,"next_PC", false,-1, 31,0);
    tracep->declBus(c+36,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+95,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+36,"in", false,-1, 31,0);
    tracep->declBus(c+103,"N", false,-1, 31,0);
    tracep->declBus(c+40,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+104,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+35,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+88,"byte1", false,-1, 7,0);
    tracep->declBus(c+89,"byte2", false,-1, 7,0);
    tracep->declBus(c+90,"byte3", false,-1, 7,0);
    tracep->declBus(c+91,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+40,"d_0", false,-1, 31,0);
    tracep->declBus(c+45,"d_1", false,-1, 31,0);
    tracep->declBit(c+29,"s", false,-1);
    tracep->declBus(c+87,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_memory ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+105,"memWrite_M", false,-1, 31,0);
    tracep->declBus(c+41,"ALUResult_M", false,-1, 31,0);
    tracep->declBus(c+39,"writeData_M", false,-1, 31,0);
    tracep->declBus(c+42,"readData_M", false,-1, 31,0);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+95,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBit(c+97,"we", false,-1);
    tracep->declBus(c+39,"wd", false,-1, 31,0);
    tracep->declBus(c+41,"a", false,-1, 31,0);
    tracep->declBit(c+92,"clk", false,-1);
    tracep->declBus(c+42,"rd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_writeback ");
    tracep->declBus(c+95,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"ALUResult_W", false,-1, 31,0);
    tracep->declBus(c+42,"readData_W", false,-1, 31,0);
    tracep->declBus(c+40,"PCPlus4_W", false,-1, 31,0);
    tracep->declBus(c+43,"resultSrc_W", false,-1, 1,0);
    tracep->declBus(c+46,"result_W", false,-1, 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[27]),8);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__PCsrc));
    bufp->fullBit(oldp+30,(((1U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                            | (3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr))));
    bufp->fullBit(oldp+31,((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)));
    bufp->fullBit(oldp+32,((vlSelf->top__DOT__RD1_D 
                            == vlSelf->top__DOT__top_execute__DOT__ALUop2)));
    bufp->fullCData(oldp+33,((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)),3);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->top__DOT__instr_F 
                                       >> 7U))),5);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__instr_F),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__PC_F),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ImmExt_D),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__RD1_D),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array
                             [(0x1fU & (vlSelf->top__DOT__instr_F 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+40,(((IData)(4U) + vlSelf->top__DOT__PC_F)),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ALUResult_E),32);
    bufp->fullIData(oldp+42,(((0x270fU >= (0x3fffU 
                                           & vlSelf->top__DOT__ALUResult_E))
                               ? vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                              [(0x3fffU & vlSelf->top__DOT__ALUResult_E)]
                               : 0U)),32);
    bufp->fullCData(oldp+43,((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)),2);
    bufp->fullBit(oldp+44,(((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr) 
                            & (vlSelf->top__DOT__RD1_D 
                               != vlSelf->top__DOT__top_execute__DOT__ALUop2))));
    bufp->fullIData(oldp+45,((vlSelf->top__DOT__PC_F 
                              + (vlSelf->top__DOT__ImmExt_D 
                                 << 1U))),32);
    bufp->fullIData(oldp+46,(((3U != vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)
                               ? vlSelf->top__DOT__ALUResult_E
                               : ((3U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)
                                   ? ((0x270fU >= (0x3fffU 
                                                   & vlSelf->top__DOT__ALUResult_E))
                                       ? vlSelf->top__DOT__top_memory__DOT__ram__DOT__ram_array
                                      [(0x3fffU & vlSelf->top__DOT__ALUResult_E)]
                                       : 0U) : 0U))),32);
    bufp->fullBit(oldp+47,((2U == vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr)));
    bufp->fullSData(oldp+48,(vlSelf->top__DOT__top_decode__DOT__SignExtend__DOT__imm),12);
    bufp->fullCData(oldp+49,((7U & (vlSelf->top__DOT__instr_F 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+50,((0x7fU & vlSelf->top__DOT__instr_F)),7);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__top_decode__DOT__control_unit__DOT__instr),32);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->top__DOT__instr_F 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->top__DOT__instr_F 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__top_decode__DOT__register__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__top_execute__DOT__ALUop2),32);
    bufp->fullIData(oldp+87,(((IData)(vlSelf->top__DOT__PCsrc)
                               ? (vlSelf->top__DOT__PC_F 
                                  + (vlSelf->top__DOT__ImmExt_D 
                                     << 1U)) : ((IData)(4U) 
                                                + vlSelf->top__DOT__PC_F))),32);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    bufp->fullBit(oldp+92,(vlSelf->clk));
    bufp->fullBit(oldp+93,(vlSelf->rst));
    bufp->fullIData(oldp+94,(vlSelf->a0),32);
    bufp->fullIData(oldp+95,(0x20U),32);
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__ImmSrc));
    bufp->fullBit(oldp+97,(0U));
    bufp->fullCData(oldp+98,(0U),4);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__PCsrc_D));
    bufp->fullIData(oldp+100,(0xcU),32);
    bufp->fullCData(oldp+101,(0U),3);
    bufp->fullIData(oldp+102,(5U),32);
    bufp->fullIData(oldp+103,(4U),32);
    bufp->fullIData(oldp+104,(8U),32);
    bufp->fullIData(oldp+105,(0U),32);
}
