// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_memory.h for the primary calling header

#ifndef VERILATED_VTOP_MEMORY___024ROOT_H_
#define VERILATED_VTOP_MEMORY___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_memory__Syms;

class Vtop_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(sw,0,0);
    VL_IN8(sh,0,0);
    VL_IN8(sb,0,0);
    VL_IN8(lw,0,0);
    VL_IN8(lh,0,0);
    VL_IN8(lb,0,0);
    VL_IN8(s,0,0);
    CData/*0:0*/ top_memory__DOT__loadIns;
    CData/*0:0*/ top_memory__DOT__storeIns;
    CData/*0:0*/ top_memory__DOT__cache_hit;
    CData/*0:0*/ top_memory__DOT__cache_evict;
    CData/*0:0*/ top_memory__DOT__cache__DOT__target_way;
    CData/*0:0*/ top_memory__DOT__cache__DOT__matching_tag;
    CData/*0:0*/ top_memory__DOT__cache__DOT__valid;
    CData/*0:0*/ top_memory__DOT__cache__DOT__dirty_bit;
    CData/*4:0*/ top_memory__DOT__cache__DOT__set;
    CData/*7:0*/ top_memory__DOT__hbw__DOT__b;
    CData/*0:0*/ top_memory__DOT__hbw__DOT__h_e__DOT__sign;
    CData/*0:0*/ top_memory__DOT__hbw__DOT__s_e__DOT__sign;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ top_memory__DOT__hbw__DOT__h;
    VL_IN(ALUResult_M,31,0);
    VL_IN(writeData_M,31,0);
    VL_OUT(readData_M,31,0);
    IData/*31:0*/ top_memory__DOT__cache_out;
    IData/*31:0*/ top_memory__DOT__cache_addr_out;
    IData/*31:0*/ top_memory__DOT__ram_out;
    IData/*31:0*/ top_memory__DOT__memory_out;
    IData/*24:0*/ top_memory__DOT__cache__DOT__tag_out1;
    IData/*24:0*/ top_memory__DOT__cache__DOT__tag_out2;
    IData/*24:0*/ top_memory__DOT__cache__DOT__tag_out;
    IData/*24:0*/ top_memory__DOT__cache__DOT__tag_in;
    IData/*31:0*/ top_memory__DOT__cache__DOT__din;
    IData/*31:0*/ top_memory__DOT__hbw__DOT__he;
    IData/*31:0*/ top_memory__DOT__hbw__DOT__be;
    QData/*58:0*/ top_memory__DOT__cache__DOT__cache_out1;
    QData/*58:0*/ top_memory__DOT__cache__DOT__cache_out2;
    QData/*58:0*/ top_memory__DOT__cache__DOT__cache_out;
    VlUnpacked<QData/*58:0*/, 64> top_memory__DOT__cache__DOT__cache_array;
    VlUnpacked<CData/*0:0*/, 32> top_memory__DOT__cache__DOT__LRU_array;
    VlUnpacked<CData/*7:0*/, 131072> top_memory__DOT__ram__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_memory___024root(Vtop_memory__Syms* symsp, const char* name);
    ~Vtop_memory___024root();
    VL_UNCOPYABLE(Vtop_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
