// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_top__Syms.h"


//======================

void Vcounter_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vcounter_top* t=(Vcounter_top*)userthis;
    Vcounter_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vcounter_top::traceChgThis(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vcounter_top::traceChgThis__2(Vcounter_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vcounter_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->CONTROL));
	vcdp->chgBit  (c+2,(vlTOPp->CLOCK));
	vcdp->chgBit  (c+3,(vlTOPp->RESET));
	vcdp->chgBus  (c+4,(vlTOPp->OUT),8);
    }
}
