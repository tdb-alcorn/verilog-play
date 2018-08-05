// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpulsedemo_top__Syms.h"


//======================

void Vpulsedemo_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpulsedemo_top* t=(Vpulsedemo_top*)userthis;
    Vpulsedemo_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vpulsedemo_top::traceChgThis(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpulsedemo_top::traceChgThis__2(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->pulsedemo_top__DOT__counter),11);
	vcdp->chgBit  (c+2,(vlTOPp->pulsedemo_top__DOT__pulse_int));
	vcdp->chgBit  (c+3,(vlTOPp->pulsedemo_top__DOT__pulse2_int));
    }
}

void Vpulsedemo_top::traceChgThis__3(Vpulsedemo_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpulsedemo_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+4,(vlTOPp->CLOCK));
	vcdp->chgBit  (c+5,(vlTOPp->PULSE));
	vcdp->chgBit  (c+6,(vlTOPp->PULSE2));
    }
}
