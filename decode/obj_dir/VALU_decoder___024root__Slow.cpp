// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_decoder.h for the primary calling header

#include "verilated.h"

#include "VALU_decoder__Syms.h"
#include "VALU_decoder___024root.h"

void VALU_decoder___024root___ctor_var_reset(VALU_decoder___024root* vlSelf);

VALU_decoder___024root::VALU_decoder___024root(VALU_decoder__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU_decoder___024root___ctor_var_reset(this);
}

void VALU_decoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU_decoder___024root::~VALU_decoder___024root() {
}
