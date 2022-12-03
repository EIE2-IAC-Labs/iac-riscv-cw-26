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
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBus(c+124,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBus(c+124,"a0", false,-1, 31,0);
    tracep->declBit(c+57,"PCsrc_E", false,-1);
    tracep->declBus(c+58,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+59,"instr_F", false,-1, 31,0);
    tracep->declBus(c+60,"PC_F", false,-1, 31,0);
    tracep->declBus(c+61,"PCPlus4_F", false,-1, 31,0);
    tracep->declBit(c+62,"ALUsrc", false,-1);
    tracep->declBit(c+57,"PCsrc", false,-1);
    tracep->declBit(c+63,"RegWriteSrc", false,-1);
    tracep->declBit(c+62,"RegWrite", false,-1);
    tracep->declBit(c+64,"ImmSrc", false,-1);
    tracep->declBus(c+126,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"rd", false,-1, 4,0);
    tracep->declBit(c+68,"EQ", false,-1);
    tracep->declBus(c+69,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+70,"instr", false,-1, 31,0);
    tracep->declBus(c+60,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("aluTop ");
    tracep->declBus(c+125,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+62,"ALUsrc", false,-1);
    tracep->declBus(c+126,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+63,"RegWriteSrc", false,-1);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"rd", false,-1, 4,0);
    tracep->declBit(c+62,"RegWrite", false,-1);
    tracep->declBus(c+69,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+68,"EQ", false,-1);
    tracep->declBus(c+124,"a0", false,-1, 31,0);
    tracep->declBus(c+71,"ALUout", false,-1, 31,0);
    tracep->declBus(c+72,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+73,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+74,"regOp2", false,-1, 31,0);
    tracep->declBus(c+75,"regWriteData", false,-1, 31,0);
    tracep->declBus(c+76,"memOut", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+125,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+73,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+126,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+71,"SUM", false,-1, 31,0);
    tracep->declBit(c+68,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+127,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+65,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+67,"rd", false,-1, 4,0);
    tracep->declBit(c+62,"WE3", false,-1);
    tracep->declBus(c+75,"WD3", false,-1, 31,0);
    tracep->declBus(c+72,"RD1", false,-1, 31,0);
    tracep->declBus(c+74,"RD2", false,-1, 31,0);
    tracep->declBus(c+124,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+77+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+125,"ADDRESS_LENGTH", false,-1, 31,0);
    tracep->declBit(c+128,"we", false,-1);
    tracep->declBus(c+129,"wd", false,-1, 31,0);
    tracep->declBus(c+71,"a", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+76,"rd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_cme ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"PC", false,-1, 31,0);
    tracep->declBit(c+68,"EQ", false,-1);
    tracep->declBus(c+70,"instr", false,-1, 31,0);
    tracep->declBit(c+62,"RegWrite", false,-1);
    tracep->declBus(c+126,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+62,"ALUsrc", false,-1);
    tracep->declBit(c+64,"ImmSrc", false,-1);
    tracep->declBit(c+57,"PCsrc", false,-1);
    tracep->declBit(c+63,"RegWriteSrc", false,-1);
    tracep->declBus(c+69,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBit(c+68,"EQ", false,-1);
    tracep->declBus(c+109,"funct3", false,-1, 14,12);
    tracep->declBus(c+110,"opcode", false,-1, 6,0);
    tracep->declBit(c+62,"RegWrite", false,-1);
    tracep->declBus(c+126,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+62,"ALUsrc", false,-1);
    tracep->declBit(c+64,"ImmSrc", false,-1);
    tracep->declBit(c+57,"PCsrc", false,-1);
    tracep->declBit(c+63,"RegWriteSrc", false,-1);
    tracep->declBus(c+111,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+130,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"A", false,-1, 31,0);
    tracep->declBus(c+70,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+112,"byte1", false,-1, 7,0);
    tracep->declBus(c+113,"byte2", false,-1, 7,0);
    tracep->declBus(c+114,"byte3", false,-1, 7,0);
    tracep->declBus(c+115,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+125,"data_width", false,-1, 31,0);
    tracep->declBus(c+131,"imm_width", false,-1, 31,0);
    tracep->declBus(c+70,"instruction", false,-1, 31,0);
    tracep->declBit(c+64,"ImmSrc", false,-1);
    tracep->declBus(c+69,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+116,"imm", false,-1, 11,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_fetch ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+57,"PCsrc_E", false,-1);
    tracep->declBus(c+58,"PCTarget_E", false,-1, 31,0);
    tracep->declBus(c+59,"instr_F", false,-1, 31,0);
    tracep->declBus(c+60,"PC_F", false,-1, 31,0);
    tracep->declBus(c+61,"PCPlus4_F", false,-1, 31,0);
    tracep->declBus(c+117,"next_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+125,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBus(c+117,"next_PC", false,-1, 31,0);
    tracep->declBus(c+60,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+125,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+60,"in", false,-1, 31,0);
    tracep->declBus(c+132,"N", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+130,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+125,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"A", false,-1, 31,0);
    tracep->declBus(c+59,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+29+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+118,"byte1", false,-1, 7,0);
    tracep->declBus(c+119,"byte2", false,-1, 7,0);
    tracep->declBus(c+120,"byte3", false,-1, 7,0);
    tracep->declBus(c+121,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"d_0", false,-1, 31,0);
    tracep->declBus(c+58,"d_1", false,-1, 31,0);
    tracep->declBit(c+57,"s", false,-1);
    tracep->declBus(c+117,"dout", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[27]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array[27]),8);
    bufp->fullBit(oldp+57,(((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                            & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                               != vlSelf->top__DOT__aluTop__DOT__ALUop2))));
    bufp->fullIData(oldp+58,((vlSelf->top__DOT__PC_F 
                              + (vlSelf->top__DOT__ImmOp 
                                 << 1U))),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__instr_F),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__PC_F),32);
    bufp->fullIData(oldp+61,(((IData)(4U) + vlSelf->top__DOT__PC_F)),32);
    bufp->fullBit(oldp+62,(((1U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                            | (3U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr))));
    bufp->fullBit(oldp+63,((3U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)));
    bufp->fullBit(oldp+64,((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)));
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+68,((vlSelf->top__DOT__aluTop__DOT__ALUop1 
                            == vlSelf->top__DOT__aluTop__DOT__ALUop2)));
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__aluTop__DOT__ALUout),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__aluTop__DOT__ALUop1),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__aluTop__DOT__ALUop2),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+75,(((3U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)
                               ? ((0x270fU >= (0x3fffU 
                                               & vlSelf->top__DOT__aluTop__DOT__ALUout))
                                   ? vlSelf->top__DOT__aluTop__DOT__ram__DOT__ram_array
                                  [(0x3fffU & vlSelf->top__DOT__aluTop__DOT__ALUout)]
                                   : 0U) : vlSelf->top__DOT__aluTop__DOT__ALUout)),32);
    bufp->fullIData(oldp+76,(((0x270fU >= (0x3fffU 
                                           & vlSelf->top__DOT__aluTop__DOT__ALUout))
                               ? vlSelf->top__DOT__aluTop__DOT__ram__DOT__ram_array
                              [(0x3fffU & vlSelf->top__DOT__aluTop__DOT__ALUout)]
                               : 0U)),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[31]),32);
    bufp->fullCData(oldp+109,((7U & (vlSelf->top__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+110,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr),32);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1),8);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2),8);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3),8);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4),8);
    bufp->fullSData(oldp+116,(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm),12);
    bufp->fullIData(oldp+117,((((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                                & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                   != vlSelf->top__DOT__aluTop__DOT__ALUop2))
                                ? (vlSelf->top__DOT__PC_F 
                                   + (vlSelf->top__DOT__ImmOp 
                                      << 1U)) : ((IData)(4U) 
                                                 + vlSelf->top__DOT__PC_F))),32);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte1),8);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte2),8);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte3),8);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__top_fetch__DOT__instr_mem__DOT__byte4),8);
    bufp->fullBit(oldp+122,(vlSelf->clk));
    bufp->fullBit(oldp+123,(vlSelf->rst));
    bufp->fullIData(oldp+124,(vlSelf->a0),32);
    bufp->fullIData(oldp+125,(0x20U),32);
    bufp->fullCData(oldp+126,(0U),3);
    bufp->fullIData(oldp+127,(5U),32);
    bufp->fullBit(oldp+128,(0U));
    bufp->fullIData(oldp+129,(0U),32);
    bufp->fullIData(oldp+130,(8U),32);
    bufp->fullIData(oldp+131,(0xcU),32);
    bufp->fullIData(oldp+132,(4U),32);
}
