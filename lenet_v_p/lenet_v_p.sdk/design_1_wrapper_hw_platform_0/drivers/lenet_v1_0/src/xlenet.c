// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xlenet.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XLenet_CfgInitialize(XLenet *InstancePtr, XLenet_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Crtl_BaseAddress = ConfigPtr->Crtl_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XLenet_Start(XLenet *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL) & 0x80;
    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XLenet_IsDone(XLenet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XLenet_IsIdle(XLenet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XLenet_IsReady(XLenet *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XLenet_EnableAutoRestart(XLenet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL, 0x80);
}

void XLenet_DisableAutoRestart(XLenet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_AP_CTRL, 0);
}

void XLenet_InterruptGlobalEnable(XLenet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_GIE, 1);
}

void XLenet_InterruptGlobalDisable(XLenet *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_GIE, 0);
}

void XLenet_InterruptEnable(XLenet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_IER);
    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_IER, Register | Mask);
}

void XLenet_InterruptDisable(XLenet *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_IER);
    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_IER, Register & (~Mask));
}

void XLenet_InterruptClear(XLenet *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLenet_WriteReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_ISR, Mask);
}

u32 XLenet_InterruptGetEnabled(XLenet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_IER);
}

u32 XLenet_InterruptGetStatus(XLenet *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLenet_ReadReg(InstancePtr->Crtl_BaseAddress, XLENET_CRTL_ADDR_ISR);
}

