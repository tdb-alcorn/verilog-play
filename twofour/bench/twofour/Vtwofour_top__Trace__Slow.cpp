// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwofour_top__Syms.h"


//======================

void Vtwofour_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtwofour_top::traceInit, &Vtwofour_top::traceFull, &Vtwofour_top::traceChg, this);
}
void Vtwofour_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtwofour_top* t=(Vtwofour_top*)userthis;
    Vtwofour_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtwofour_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtwofour_top* t=(Vtwofour_top*)userthis;
    Vtwofour_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtwofour_top::traceInitThis(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtwofour_top::traceFullThis(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtwofour_top::traceInitThis__1(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+1,"N",-1,2,0);
	vcdp->declBus  (c+2,"I",-1,4,0);
	vcdp->declBus  (c+1,"twofour N",-1,2,0);
	vcdp->declBus  (c+2,"twofour I",-1,4,0);
    }
}

void Vtwofour_top::traceFullThis__1(Vtwofour_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtwofour_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->N),3);
	vcdp->fullBus  (c+2,(vlTOPp->I),5);
    }
}
