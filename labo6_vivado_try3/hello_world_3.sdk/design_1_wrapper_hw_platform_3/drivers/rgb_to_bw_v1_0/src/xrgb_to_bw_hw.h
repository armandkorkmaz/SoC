// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// AXILiteS
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 7~0 - ap_return[7:0] (Read)
//        others  - reserved
// 0x18 : Data signal of red
//        bit 7~0 - red[7:0] (Read/Write)
//        others  - reserved
// 0x1c : reserved
// 0x20 : Data signal of green
//        bit 7~0 - green[7:0] (Read/Write)
//        others  - reserved
// 0x24 : reserved
// 0x28 : Data signal of blue
//        bit 7~0 - blue[7:0] (Read/Write)
//        others  - reserved
// 0x2c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XRGB_TO_BW_AXILITES_ADDR_AP_CTRL    0x00
#define XRGB_TO_BW_AXILITES_ADDR_GIE        0x04
#define XRGB_TO_BW_AXILITES_ADDR_IER        0x08
#define XRGB_TO_BW_AXILITES_ADDR_ISR        0x0c
#define XRGB_TO_BW_AXILITES_ADDR_AP_RETURN  0x10
#define XRGB_TO_BW_AXILITES_BITS_AP_RETURN  8
#define XRGB_TO_BW_AXILITES_ADDR_RED_DATA   0x18
#define XRGB_TO_BW_AXILITES_BITS_RED_DATA   8
#define XRGB_TO_BW_AXILITES_ADDR_GREEN_DATA 0x20
#define XRGB_TO_BW_AXILITES_BITS_GREEN_DATA 8
#define XRGB_TO_BW_AXILITES_ADDR_BLUE_DATA  0x28
#define XRGB_TO_BW_AXILITES_BITS_BLUE_DATA  8

