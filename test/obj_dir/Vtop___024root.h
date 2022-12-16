// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__load_extend_s_D;
        CData/*3:0*/ top__DOT__ALUctrl_D;
        CData/*0:0*/ top__DOT__regWrite_E;
        CData/*0:0*/ top__DOT__jump_E;
        CData/*0:0*/ top__DOT__ALUsrc_E;
        CData/*0:0*/ top__DOT__PCsrc_E;
        CData/*0:0*/ top__DOT__branch_E;
        CData/*0:0*/ top__DOT__jalr_E;
        CData/*0:0*/ top__DOT__lui_E;
        CData/*0:0*/ top__DOT__load_extend_s_E;
        CData/*1:0*/ top__DOT__resultSrc_E;
        CData/*2:0*/ top__DOT__R_size_E;
        CData/*2:0*/ top__DOT__DMem_size_E;
        CData/*3:0*/ top__DOT__ALUctrl_E;
        CData/*4:0*/ top__DOT__Rd_E;
        CData/*0:0*/ top__DOT__regWrite_M;
        CData/*0:0*/ top__DOT__load_extend_s_M;
        CData/*1:0*/ top__DOT__resultSrc_M;
        CData/*2:0*/ top__DOT__R_size_M;
        CData/*2:0*/ top__DOT__DMem_size_M;
        CData/*4:0*/ top__DOT__Rd_M;
        CData/*0:0*/ top__DOT__regWrite_W;
        CData/*1:0*/ top__DOT__resultSrc_W;
        CData/*4:0*/ top__DOT__Rd_W;
        CData/*7:0*/ top__DOT__top_fetch__DOT__instr_mem__DOT__byte1;
        CData/*7:0*/ top__DOT__top_fetch__DOT__instr_mem__DOT__byte2;
        CData/*7:0*/ top__DOT__top_fetch__DOT__instr_mem__DOT__byte3;
        CData/*7:0*/ top__DOT__top_fetch__DOT__instr_mem__DOT__byte4;
        CData/*2:0*/ top__DOT__top_decode__DOT__ImmSrc_D;
        CData/*0:0*/ top__DOT__top_execute__DOT__EQ;
        CData/*0:0*/ top__DOT__top_execute__DOT__pc_src__DOT__and_result;
        CData/*0:0*/ top__DOT__top_memory__DOT__loadIns;
        CData/*0:0*/ top__DOT__top_memory__DOT__storeIns;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache_hit;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache_evict;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache__DOT__target_way;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache__DOT__matching_tag;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache__DOT__valid;
        CData/*0:0*/ top__DOT__top_memory__DOT__cache__DOT__dirty_bit;
        CData/*4:0*/ top__DOT__top_memory__DOT__cache__DOT__set;
        CData/*7:0*/ top__DOT__top_memory__DOT__hbw__DOT__b;
        CData/*0:0*/ top__DOT__top_memory__DOT__hbw__DOT__h_e__DOT__sign;
        CData/*0:0*/ top__DOT__top_memory__DOT__hbw__DOT__s_e__DOT__sign;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_1;
        SData/*15:0*/ top__DOT__top_memory__DOT__hbw__DOT__h;
        VL_OUT(a0,31,0);
        IData/*31:0*/ top__DOT__instr_F;
        IData/*31:0*/ top__DOT__PC_F;
        IData/*31:0*/ top__DOT__instr_D;
        IData/*31:0*/ top__DOT__PC_D;
        IData/*31:0*/ top__DOT__PCPlus4_D;
        IData/*31:0*/ top__DOT__ImmExt_D;
        IData/*31:0*/ top__DOT__RD1_E;
        IData/*31:0*/ top__DOT__RD2_E;
        IData/*31:0*/ top__DOT__ImmExt_E;
        IData/*31:0*/ top__DOT__PCPlus4_E;
        IData/*31:0*/ top__DOT__PC_E;
        IData/*31:0*/ top__DOT__ALUResult_M;
        IData/*31:0*/ top__DOT__writeData_M;
        IData/*31:0*/ top__DOT__PCPlus4_M;
        IData/*31:0*/ top__DOT__ALUResult_W;
    };
    struct {
        IData/*31:0*/ top__DOT__readData_W;
        IData/*31:0*/ top__DOT__PCPlus4_W;
        IData/*31:0*/ top__DOT__top_fetch__DOT__next_PC;
        IData/*31:0*/ top__DOT__top_decode__DOT__register__DOT__i;
        IData/*31:0*/ top__DOT__top_decode__DOT__register__DOT____Vlvbound_hdb85cb42__0;
        IData/*31:0*/ top__DOT__top_decode__DOT__control_unit__DOT__main_control__DOT__instr;
        IData/*19:0*/ top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_lui;
        IData/*19:0*/ top__DOT__top_decode__DOT__SignExtend__DOT__unnamedblk1__DOT__imm_type_jal;
        IData/*31:0*/ top__DOT__top_execute__DOT__ALUop2;
        IData/*31:0*/ top__DOT__top_execute__DOT__ALUout1;
        IData/*31:0*/ top__DOT__top_memory__DOT__cache_out;
        IData/*31:0*/ top__DOT__top_memory__DOT__cache_store;
        IData/*31:0*/ top__DOT__top_memory__DOT__cache_addr_out;
        IData/*31:0*/ top__DOT__top_memory__DOT__ram_out;
        IData/*31:0*/ top__DOT__top_memory__DOT__memory_out;
        IData/*24:0*/ top__DOT__top_memory__DOT__cache__DOT__tag_out1;
        IData/*24:0*/ top__DOT__top_memory__DOT__cache__DOT__tag_out2;
        IData/*24:0*/ top__DOT__top_memory__DOT__cache__DOT__tag_out;
        IData/*24:0*/ top__DOT__top_memory__DOT__cache__DOT__tag_in;
        IData/*31:0*/ top__DOT__top_memory__DOT__hbw__DOT__he;
        IData/*31:0*/ top__DOT__top_memory__DOT__hbw__DOT__be;
        QData/*58:0*/ top__DOT__top_memory__DOT__cache__DOT__cache_out1;
        QData/*58:0*/ top__DOT__top_memory__DOT__cache__DOT__cache_out2;
        QData/*58:0*/ top__DOT__top_memory__DOT__cache__DOT__cache_out;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__top_fetch__DOT__instr_mem__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 31> top__DOT__top_decode__DOT__register__DOT__reg_array;
        VlUnpacked<QData/*58:0*/, 64> top__DOT__top_memory__DOT__cache__DOT__cache_array;
        VlUnpacked<CData/*0:0*/, 32> top__DOT__top_memory__DOT__cache__DOT__LRU_array;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__top_memory__DOT__ram__DOT__ram_array;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
