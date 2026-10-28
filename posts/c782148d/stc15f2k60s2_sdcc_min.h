#ifndef STC15F2K60S2_SDCC_MIN_H
#define STC15F2K60S2_SDCC_MIN_H

/* 最小教学适配：仅供本篇LED、T0和串口示例，并非厂商完整设备头。 */
#ifndef __SDCC_mcs51
#error "本头文件仅支持SDCC的MCS-51目标"
#endif
#include <8052.h>

/* STC15F2K60S2辅助寄存器，地址来自官方数据手册。 */
__sfr __at (0x8E) AUXR;

#endif
