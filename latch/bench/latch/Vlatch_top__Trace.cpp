// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlatch_top__Syms.h"


//======================

void Vlatch_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vlatch_top* t=(Vlatch_top*)userthis;
    Vlatch_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vlatch_top::traceChgThis(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vlatch_top::traceChgThis__2(Vlatch_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vlatch_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->CLOCK));
	vcdp->chgBit  (c+2,(vlTOPp->WRITE));
	vcdp->chgBit  (c+3,(vlTOPp->DATA));
	vcdp->chgBit  (c+4,(vlTOPp->OUT));
    }
}
