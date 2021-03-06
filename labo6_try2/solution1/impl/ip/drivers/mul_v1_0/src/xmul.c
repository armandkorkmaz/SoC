// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xmul.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMul_CfgInitialize(XMul *InstancePtr, XMul_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMul_Start(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL) & 0x80;
    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMul_IsDone(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMul_IsIdle(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMul_IsReady(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMul_EnableAutoRestart(XMul *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XMul_DisableAutoRestart(XMul *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XMul_Get_return(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XMul_Set_a(XMul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_A_DATA, Data);
}

u32 XMul_Get_a(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_A_DATA);
    return Data;
}

void XMul_Set_b(XMul *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_B_DATA, Data);
}

u32 XMul_Get_b(XMul *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_B_DATA);
    return Data;
}

void XMul_InterruptGlobalEnable(XMul *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_GIE, 1);
}

void XMul_InterruptGlobalDisable(XMul *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_GIE, 0);
}

void XMul_InterruptEnable(XMul *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_IER);
    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_IER, Register | Mask);
}

void XMul_InterruptDisable(XMul *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_IER);
    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_IER, Register & (~Mask));
}

void XMul_InterruptClear(XMul *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMul_WriteReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_ISR, Mask);
}

u32 XMul_InterruptGetEnabled(XMul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_IER);
}

u32 XMul_InterruptGetStatus(XMul *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMul_ReadReg(InstancePtr->Axilites_BaseAddress, XMUL_AXILITES_ADDR_ISR);
}

