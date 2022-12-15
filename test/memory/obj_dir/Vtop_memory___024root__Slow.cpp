// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_memory.h for the primary calling header

#include "verilated.h"

#include "Vtop_memory__Syms.h"
#include "Vtop_memory___024root.h"

void Vtop_memory___024root___ctor_var_reset(Vtop_memory___024root* vlSelf);

Vtop_memory___024root::Vtop_memory___024root(Vtop_memory__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_memory___024root___ctor_var_reset(this);
}

void Vtop_memory___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_memory___024root::~Vtop_memory___024root() {
}
