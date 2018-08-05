// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwofour_top__Syms.h"


//======================

void Vtwofour_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtwofour_top* t=(Vtwofour_top*)userthis;
    Vtwofour_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtwofour_top::traceChgThis(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtwofour_top::traceChgThis__2(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->N),3);
	vcdp->chgBus  (c+2,(vlTOPp->I),5);
    }
}
