/*
 * NOTE: Autogenerated file by kinetis_signal2dts.py
 *       for MKV58F1M0VLL24/signal_configuration.xml
 *
 * Copyright (c) 2022, NXP
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_MKV58F1M0VLL24_
#define _ZEPHYR_DTS_BINDING_MKV58F1M0VLL24_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define UART0_CTS_b_PTA0 KINETIS_MUX('A',0,2) /* PTA0 */
#define UART0_COL_b_PTA0 KINETIS_MUX('A',0,2) /* PTA0 */
#define FTM0_CH5_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define XB_IN4_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define XB_IN4_PTA0_PTA0_PTA0_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define XB_IN4/EWM_IN_PTA0_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define XB_IN4_PTA0_PTA0 KINETIS_MUX('A',0,4) /* PTA0 */
#define JTAG_TCLK_PTA0 KINETIS_MUX('A',0,7) /* PTA0 */
#define PTA1 KINETIS_MUX('A',1,1) /* PTA1 */
#define UART0_RX_PTA1 KINETIS_MUX('A',1,2) /* PTA1 */
#define FTM0_CH6_PTA1 KINETIS_MUX('A',1,3) /* PTA1 */
#define CMP0_OUT_PTA1 KINETIS_MUX('A',1,4) /* PTA1 */
#define FTM2_QD_PHA_PTA1 KINETIS_MUX('A',1,5) /* PTA1 */
#define FTM1_CH1_PTA1 KINETIS_MUX('A',1,6) /* PTA1 */
#define JTAG_TDI_PTA1 KINETIS_MUX('A',1,7) /* PTA1 */
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define UART0_TX_PTA2 KINETIS_MUX('A',2,2) /* PTA2 */
#define FTM0_CH7_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define CMP1_OUT_PTA2 KINETIS_MUX('A',2,4) /* PTA2 */
#define FTM2_QD_PHB_PTA2 KINETIS_MUX('A',2,5) /* PTA2 */
#define FTM1_CH0_PTA2 KINETIS_MUX('A',2,6) /* PTA2 */
#define JTAG_TDO_PTA2 KINETIS_MUX('A',2,7) /* PTA2 */
#define TRACE_SWO_PTA2 KINETIS_MUX('A',2,7) /* PTA2 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define UART0_RTS_b_PTA3 KINETIS_MUX('A',3,2) /* PTA3 */
#define FTM0_CH0_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define XB_IN9_PTA3_PTA3_PTA3_PTA3 KINETIS_MUX('A',3,4) /* PTA3 */
#define XB_IN9_PTA3 KINETIS_MUX('A',3,4) /* PTA3 */
#define XB_IN9_PTA3_PTA3 KINETIS_MUX('A',3,4) /* PTA3 */
#define EWM_OUT_b_PTA3 KINETIS_MUX('A',3,5) /* PTA3 */
#define FLEXPWM0_A0_PTA3 KINETIS_MUX('A',3,6) /* PTA3 */
#define JTAG_TMS_PTA3 KINETIS_MUX('A',3,7) /* PTA3 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define LLWU_P3_PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define FTM0_CH1_PTA4 KINETIS_MUX('A',4,3) /* PTA4 */
#define XB_IN10_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define XB_IN10/FTM0_FLT3_PTA4_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define XB_IN10_PTA4_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define XB_IN10_PTA4_PTA4_PTA4_PTA4 KINETIS_MUX('A',4,4) /* PTA4 */
#define FLEXPWM0_B0_PTA4 KINETIS_MUX('A',4,6) /* PTA4 */
#define NMI_b_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define FTM0_CH2_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define MII0_RXER_PTA5 KINETIS_MUX('A',5,4) /* PTA5 */
#define RMII0_RXER_PTA5 KINETIS_MUX('A',5,4) /* PTA5 */
#define CMP2_OUT_PTA5 KINETIS_MUX('A',5,5) /* PTA5 */
#define JTAG_TRST_b_PTA5 KINETIS_MUX('A',5,7) /* PTA5 */
#define CMP2_IN0_PTA12 KINETIS_MUX('A',12,0) /* PTA12 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define CAN0_TX_PTA12 KINETIS_MUX('A',12,2) /* PTA12 */
#define FTM1_CH0_PTA12 KINETIS_MUX('A',12,3) /* PTA12 */
#define RMII0_RXD1_PTA12 KINETIS_MUX('A',12,5) /* PTA12 */
#define MII0_RXD1_PTA12 KINETIS_MUX('A',12,5) /* PTA12 */
#define FTM1_QD_PHA_PTA12 KINETIS_MUX('A',12,7) /* PTA12 */
#define I2C0_SCL_PTA12 KINETIS_MUX('A',12,8) /* PTA12 */
#define CMP2_IN1_PTA13 KINETIS_MUX('A',13,0) /* PTA13 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define LLWU_P4_PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define CAN0_RX_PTA13 KINETIS_MUX('A',13,2) /* PTA13 */
#define FTM1_CH1_PTA13 KINETIS_MUX('A',13,3) /* PTA13 */
#define RMII0_RXD0_PTA13 KINETIS_MUX('A',13,5) /* PTA13 */
#define MII0_RXD0_PTA13 KINETIS_MUX('A',13,5) /* PTA13 */
#define FTM1_QD_PHB_PTA13 KINETIS_MUX('A',13,7) /* PTA13 */
#define I2C1_SDA_PTA13 KINETIS_MUX('A',13,8) /* PTA13 */
#define CMP3_IN0_PTA14 KINETIS_MUX('A',14,0) /* PTA14 */
#define PTA14 KINETIS_MUX('A',14,1) /* PTA14 */
#define SPI0_PCS0_PTA14 KINETIS_MUX('A',14,2) /* PTA14 */
#define UART0_TX_PTA14 KINETIS_MUX('A',14,3) /* PTA14 */
#define CAN2_TX_PTA14 KINETIS_MUX('A',14,4) /* PTA14 */
#define MII0_RXDV_PTA14 KINETIS_MUX('A',14,5) /* PTA14 */
#define RMII0_CRS_DV_PTA14 KINETIS_MUX('A',14,5) /* PTA14 */
#define I2C1_SCL_PTA14 KINETIS_MUX('A',14,8) /* PTA14 */
#define CMP3_IN1_PTA15 KINETIS_MUX('A',15,0) /* PTA15 */
#define PTA15 KINETIS_MUX('A',15,1) /* PTA15 */
#define SPI0_SCK_PTA15 KINETIS_MUX('A',15,2) /* PTA15 */
#define UART0_RX_PTA15 KINETIS_MUX('A',15,3) /* PTA15 */
#define CAN2_RX_PTA15 KINETIS_MUX('A',15,4) /* PTA15 */
#define RMII0_TXEN_PTA15 KINETIS_MUX('A',15,5) /* PTA15 */
#define MII0_TXEN_PTA15 KINETIS_MUX('A',15,5) /* PTA15 */
#define CMP3_IN2_PTA16 KINETIS_MUX('A',16,0) /* PTA16 */
#define PTA16 KINETIS_MUX('A',16,1) /* PTA16 */
#define SPI0_SOUT_PTA16 KINETIS_MUX('A',16,2) /* PTA16 */
#define UART0_COL_b_PTA16 KINETIS_MUX('A',16,3) /* PTA16 */
#define UART0_CTS_b_PTA16 KINETIS_MUX('A',16,3) /* PTA16 */
#define MII0_TXD0_PTA16 KINETIS_MUX('A',16,5) /* PTA16 */
#define RMII0_TXD0_PTA16 KINETIS_MUX('A',16,5) /* PTA16 */
#define HSADC0A_CH15_PTA17 KINETIS_MUX('A',17,0) /* PTA17 */
#define PTA17 KINETIS_MUX('A',17,1) /* PTA17 */
#define SPI0_SIN_PTA17 KINETIS_MUX('A',17,2) /* PTA17 */
#define UART0_RTS_b_PTA17 KINETIS_MUX('A',17,3) /* PTA17 */
#define MII0_TXD1_PTA17 KINETIS_MUX('A',17,5) /* PTA17 */
#define RMII0_TXD1_PTA17 KINETIS_MUX('A',17,5) /* PTA17 */
#define EXTAL0_PTA18 KINETIS_MUX('A',18,0) /* PTA18 */
#define PTA18 KINETIS_MUX('A',18,1) /* PTA18 */
#define XB_IN7_PTA18_PTA18_PTA18_PTA18 KINETIS_MUX('A',18,2) /* PTA18 */
#define XB_IN7_PTA18 KINETIS_MUX('A',18,2) /* PTA18 */
#define XB_IN7_PTA18_PTA18 KINETIS_MUX('A',18,2) /* PTA18 */
#define FTM0_FLT2_PTA18 KINETIS_MUX('A',18,3) /* PTA18 */
#define FTM_CLKIN0_PTA18 KINETIS_MUX('A',18,4) /* PTA18 */
#define XB_OUT8_PTA18 KINETIS_MUX('A',18,5) /* PTA18 */
#define FTM3_CH2_PTA18 KINETIS_MUX('A',18,6) /* PTA18 */
#define XTAL0_PTA19 KINETIS_MUX('A',19,0) /* PTA19 */
#define PTA19 KINETIS_MUX('A',19,1) /* PTA19 */
#define XB_IN8_PTA19_PTA19_PTA19_PTA19 KINETIS_MUX('A',19,2) /* PTA19 */
#define XB_IN8_PTA19 KINETIS_MUX('A',19,2) /* PTA19 */
#define XB_IN8/FTM1_FLT0_PTA19_PTA19 KINETIS_MUX('A',19,2) /* PTA19 */
#define XB_IN8_PTA19_PTA19 KINETIS_MUX('A',19,2) /* PTA19 */
#define FTM1_FLT0_PTA19 KINETIS_MUX('A',19,3) /* PTA19 */
#define FTM_CLKIN1_PTA19 KINETIS_MUX('A',19,4) /* PTA19 */
#define XB_OUT9_PTA19 KINETIS_MUX('A',19,5) /* PTA19 */
#define LPTMR0_ALT1_PTA19 KINETIS_MUX('A',19,6) /* PTA19 */
#define HSADC0B_CH2_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define LLWU_P5_PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define I2C0_SCL_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define FTM1_CH0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define FTM1_QD_PHA_PTB0 KINETIS_MUX('B',0,6) /* PTB0 */
#define UART0_RX_PTB0 KINETIS_MUX('B',0,7) /* PTB0 */
#define MII0_MDIO_PTB0 KINETIS_MUX('B',0,8) /* PTB0 */
#define RMII0_MDIO_PTB0 KINETIS_MUX('B',0,8) /* PTB0 */
#define HSADC0B_CH3_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define I2C0_SDA_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define FTM1_CH1_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define FTM0_FLT2_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define EWM_IN_PTB1 KINETIS_MUX('B',1,5) /* PTB1 */
#define FTM1_QD_PHB_PTB1 KINETIS_MUX('B',1,6) /* PTB1 */
#define UART0_TX_PTB1 KINETIS_MUX('B',1,7) /* PTB1 */
#define RMII0_MDC_PTB1 KINETIS_MUX('B',1,8) /* PTB1 */
#define MII0_MDC_PTB1 KINETIS_MUX('B',1,8) /* PTB1 */
#define CMP2_IN2_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define HSADC0A_CH14_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define PTB2 KINETIS_MUX('B',2,1) /* PTB2 */
#define I2C0_SCL_PTB2 KINETIS_MUX('B',2,2) /* PTB2 */
#define UART0_RTS_b_PTB2 KINETIS_MUX('B',2,3) /* PTB2 */
#define FTM0_FLT1_PTB2 KINETIS_MUX('B',2,4) /* PTB2 */
#define ENET0_1588_TMR0_PTB2 KINETIS_MUX('B',2,5) /* PTB2 */
#define FTM0_FLT3_PTB2 KINETIS_MUX('B',2,6) /* PTB2 */
#define CMP3_IN5_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define HSADC0B_CH15_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define PTB3 KINETIS_MUX('B',3,1) /* PTB3 */
#define I2C0_SDA_PTB3 KINETIS_MUX('B',3,2) /* PTB3 */
#define UART0_COL_b_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define UART0_CTS_b_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define ENET0_1588_TMR1_PTB3 KINETIS_MUX('B',3,5) /* PTB3 */
#define FTM0_FLT0_PTB3 KINETIS_MUX('B',3,6) /* PTB3 */
#define PTB9 KINETIS_MUX('B',9,1) /* PTB9 */
#define SPI1_PCS1_PTB9 KINETIS_MUX('B',9,2) /* PTB9 */
#define UART3_CTS_b_PTB9 KINETIS_MUX('B',9,3) /* PTB9 */
#define ENET0_1588_TMR2_PTB9 KINETIS_MUX('B',9,5) /* PTB9 */
#define HSADC0B_CH6_PTB10 KINETIS_MUX('B',10,0) /* PTB10 */
#define PTB10 KINETIS_MUX('B',10,1) /* PTB10 */
#define SPI1_PCS0_PTB10 KINETIS_MUX('B',10,2) /* PTB10 */
#define UART3_RX_PTB10 KINETIS_MUX('B',10,3) /* PTB10 */
#define ENET0_1588_TMR3_PTB10 KINETIS_MUX('B',10,5) /* PTB10 */
#define FTM0_FLT1_PTB10 KINETIS_MUX('B',10,6) /* PTB10 */
#define HSADC0B_CH7_PTB11 KINETIS_MUX('B',11,0) /* PTB11 */
#define PTB11 KINETIS_MUX('B',11,1) /* PTB11 */
#define SPI1_SCK_PTB11 KINETIS_MUX('B',11,2) /* PTB11 */
#define UART3_TX_PTB11 KINETIS_MUX('B',11,3) /* PTB11 */
#define FTM0_FLT2_PTB11 KINETIS_MUX('B',11,6) /* PTB11 */
#define PTB16 KINETIS_MUX('B',16,1) /* PTB16 */
#define SPI1_SOUT_PTB16 KINETIS_MUX('B',16,2) /* PTB16 */
#define UART0_RX_PTB16 KINETIS_MUX('B',16,3) /* PTB16 */
#define FTM_CLKIN2_PTB16 KINETIS_MUX('B',16,4) /* PTB16 */
#define CAN0_TX_PTB16 KINETIS_MUX('B',16,5) /* PTB16 */
#define XB_IN5_PTB16_PTB16 KINETIS_MUX('B',16,7) /* PTB16 */
#define EWM_IN/XB_IN5_PTB16_PTB16 KINETIS_MUX('B',16,7) /* PTB16 */
#define XB_IN5_PTB16 KINETIS_MUX('B',16,7) /* PTB16 */
#define XB_IN5_PTB16_PTB16_PTB16_PTB16 KINETIS_MUX('B',16,7) /* PTB16 */
#define PTB17 KINETIS_MUX('B',17,1) /* PTB17 */
#define SPI1_SIN_PTB17 KINETIS_MUX('B',17,2) /* PTB17 */
#define UART0_TX_PTB17 KINETIS_MUX('B',17,3) /* PTB17 */
#define FTM_CLKIN1_PTB17 KINETIS_MUX('B',17,4) /* PTB17 */
#define CAN0_RX_PTB17 KINETIS_MUX('B',17,5) /* PTB17 */
#define EWM_OUT_b_PTB17 KINETIS_MUX('B',17,6) /* PTB17 */
#define PTB18 KINETIS_MUX('B',18,1) /* PTB18 */
#define CAN0_TX_PTB18 KINETIS_MUX('B',18,2) /* PTB18 */
#define FTM2_CH0_PTB18 KINETIS_MUX('B',18,3) /* PTB18 */
#define FTM3_CH2_PTB18 KINETIS_MUX('B',18,4) /* PTB18 */
#define FLEXPWM1_A1_PTB18 KINETIS_MUX('B',18,5) /* PTB18 */
#define FTM2_QD_PHA_PTB18 KINETIS_MUX('B',18,6) /* PTB18 */
#define PTB19 KINETIS_MUX('B',19,1) /* PTB19 */
#define CAN0_RX_PTB19 KINETIS_MUX('B',19,2) /* PTB19 */
#define FTM2_CH1_PTB19 KINETIS_MUX('B',19,3) /* PTB19 */
#define FTM3_CH3_PTB19 KINETIS_MUX('B',19,4) /* PTB19 */
#define FLEXPWM1_B1_PTB19 KINETIS_MUX('B',19,5) /* PTB19 */
#define FTM2_QD_PHB_PTB19 KINETIS_MUX('B',19,6) /* PTB19 */
#define PTB20 KINETIS_MUX('B',20,1) /* PTB20 */
#define SPI2_PCS0_PTB20 KINETIS_MUX('B',20,2) /* PTB20 */
#define FLEXPWM0_X0_PTB20 KINETIS_MUX('B',20,5) /* PTB20 */
#define CMP0_OUT_PTB20 KINETIS_MUX('B',20,6) /* PTB20 */
#define PTB21 KINETIS_MUX('B',21,1) /* PTB21 */
#define SPI2_SCK_PTB21 KINETIS_MUX('B',21,2) /* PTB21 */
#define FLEXPWM0_X1_PTB21 KINETIS_MUX('B',21,5) /* PTB21 */
#define CMP1_OUT_PTB21 KINETIS_MUX('B',21,6) /* PTB21 */
#define PTB22 KINETIS_MUX('B',22,1) /* PTB22 */
#define SPI2_SOUT_PTB22 KINETIS_MUX('B',22,2) /* PTB22 */
#define FLEXPWM0_X2_PTB22 KINETIS_MUX('B',22,5) /* PTB22 */
#define CMP2_OUT_PTB22 KINETIS_MUX('B',22,6) /* PTB22 */
#define PTB23 KINETIS_MUX('B',23,1) /* PTB23 */
#define SPI2_SIN_PTB23 KINETIS_MUX('B',23,2) /* PTB23 */
#define SPI0_PCS5_PTB23 KINETIS_MUX('B',23,3) /* PTB23 */
#define FLEXPWM0_X3_PTB23 KINETIS_MUX('B',23,5) /* PTB23 */
#define CMP3_OUT_PTB23 KINETIS_MUX('B',23,6) /* PTB23 */
#define HSADC0B_CH8_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define PTC0 KINETIS_MUX('C',0,1) /* PTC0 */
#define SPI0_PCS4_PTC0 KINETIS_MUX('C',0,2) /* PTC0 */
#define PDB0_EXTRG_PTC0 KINETIS_MUX('C',0,3) /* PTC0 */
#define FTM0_FLT1_PTC0 KINETIS_MUX('C',0,6) /* PTC0 */
#define SPI0_PCS0_PTC0 KINETIS_MUX('C',0,7) /* PTC0 */
#define HSADC0B_CH9_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define LLWU_P6_PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define SPI0_PCS3_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define UART1_RTS_b_PTC1 KINETIS_MUX('C',1,3) /* PTC1 */
#define FTM0_CH0_PTC1 KINETIS_MUX('C',1,4) /* PTC1 */
#define FLEXPWM0_A3_PTC1 KINETIS_MUX('C',1,5) /* PTC1 */
#define XB_IN11_PTC1_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define XB_IN11_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define XB_IN11_PTC1_PTC1_PTC1_PTC1 KINETIS_MUX('C',1,6) /* PTC1 */
#define HSADC1B_CH10_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define CMP1_IN0_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define SPI0_PCS2_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define UART1_CTS_b_PTC2 KINETIS_MUX('C',2,3) /* PTC2 */
#define FTM0_CH1_PTC2 KINETIS_MUX('C',2,4) /* PTC2 */
#define FLEXPWM0_B3_PTC2 KINETIS_MUX('C',2,5) /* PTC2 */
#define XB_IN6_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define XB_IN6_PTC2_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define XB_IN6_PTC2_PTC2_PTC2_PTC2 KINETIS_MUX('C',2,6) /* PTC2 */
#define CMP1_IN1_PTC3 KINETIS_MUX('C',3,0) /* PTC3 */
#define LLWU_P7_PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define SPI0_PCS1_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define UART1_RX_PTC3 KINETIS_MUX('C',3,3) /* PTC3 */
#define FTM0_CH2_PTC3 KINETIS_MUX('C',3,4) /* PTC3 */
#define CLKOUT_PTC3 KINETIS_MUX('C',3,5) /* PTC3 */
#define FTM3_FLT0_PTC3 KINETIS_MUX('C',3,6) /* PTC3 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define LLWU_P8_PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define SPI0_PCS0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define UART1_TX_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define FTM0_CH3_PTC4 KINETIS_MUX('C',4,4) /* PTC4 */
#define CMP1_OUT_PTC4 KINETIS_MUX('C',4,6) /* PTC4 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define LLWU_P9_PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define SPI0_SCK_PTC5 KINETIS_MUX('C',5,2) /* PTC5 */
#define LPTMR0_ALT2_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define XB_IN2_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define XB_IN2_PTC5_PTC5_PTC5_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define XB_IN2_PTC5_PTC5 KINETIS_MUX('C',5,4) /* PTC5 */
#define CMP0_OUT_PTC5 KINETIS_MUX('C',5,6) /* PTC5 */
#define FTM0_CH2_PTC5 KINETIS_MUX('C',5,7) /* PTC5 */
#define CMP2_IN4_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define CMP0_IN0_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define LLWU_P10_PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define SPI0_SOUT_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define PDB0_EXTRG_PTC6 KINETIS_MUX('C',6,3) /* PTC6 */
#define PDB0_EXTRG/XB_IN3_PTC6_PTC6_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define XB_IN3_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define XB_IN3_PTC6_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define XB_IN3_PTC6_PTC6_PTC6_PTC6 KINETIS_MUX('C',6,4) /* PTC6 */
#define UART0_RX_PTC6 KINETIS_MUX('C',6,5) /* PTC6 */
#define XB_OUT6_PTC6 KINETIS_MUX('C',6,6) /* PTC6 */
#define I2C0_SCL_PTC6 KINETIS_MUX('C',6,7) /* PTC6 */
#define CMP3_IN4_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define CMP0_IN1_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define SPI0_SIN_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define XB_IN4_PTC7 KINETIS_MUX('C',7,4) /* PTC7 */
#define XB_IN4_PTC7_PTC7_PTC7_PTC7 KINETIS_MUX('C',7,4) /* PTC7 */
#define XB_IN4_PTC7_PTC7 KINETIS_MUX('C',7,4) /* PTC7 */
#define UART0_TX_PTC7 KINETIS_MUX('C',7,5) /* PTC7 */
#define XB_OUT7_PTC7 KINETIS_MUX('C',7,6) /* PTC7 */
#define I2C0_SDA_PTC7 KINETIS_MUX('C',7,7) /* PTC7 */
#define HSADC1B_CH11_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define CMP0_IN2_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define FTM3_CH4_PTC8 KINETIS_MUX('C',8,3) /* PTC8 */
#define FLEXPWM1_A2_PTC8 KINETIS_MUX('C',8,4) /* PTC8 */
#define HSADC1B_CH12_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define CMP0_IN3_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define FTM3_CH5_PTC9 KINETIS_MUX('C',9,3) /* PTC9 */
#define FLEXPWM1_B2_PTC9 KINETIS_MUX('C',9,4) /* PTC9 */
#define HSADC1B_CH13_PTC10 KINETIS_MUX('C',10,0) /* PTC10 */
#define PTC10 KINETIS_MUX('C',10,1) /* PTC10 */
#define I2C1_SCL_PTC10 KINETIS_MUX('C',10,2) /* PTC10 */
#define FTM3_CH6_PTC10 KINETIS_MUX('C',10,3) /* PTC10 */
#define FLEXPWM1_A3_PTC10 KINETIS_MUX('C',10,4) /* PTC10 */
#define HSADC1B_CH14_PTC11 KINETIS_MUX('C',11,0) /* PTC11 */
#define PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define LLWU_P11_PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define I2C1_SDA_PTC11 KINETIS_MUX('C',11,2) /* PTC11 */
#define FTM3_CH7_PTC11 KINETIS_MUX('C',11,3) /* PTC11 */
#define FLEXPWM1_B3_PTC11 KINETIS_MUX('C',11,4) /* PTC11 */
#define PTC12 KINETIS_MUX('C',12,1) /* PTC12 */
#define CAN2_TX_PTC12 KINETIS_MUX('C',12,2) /* PTC12 */
#define FTM_CLKIN0_PTC12 KINETIS_MUX('C',12,4) /* PTC12 */
#define FLEXPWM1_A1_PTC12 KINETIS_MUX('C',12,5) /* PTC12 */
#define FTM3_FLT0_PTC12 KINETIS_MUX('C',12,6) /* PTC12 */
#define SPI2_PCS1_PTC12 KINETIS_MUX('C',12,7) /* PTC12 */
#define UART4_RTS_b_PTC12 KINETIS_MUX('C',12,9) /* PTC12 */
#define PTC13 KINETIS_MUX('C',13,1) /* PTC13 */
#define CAN2_RX_PTC13 KINETIS_MUX('C',13,2) /* PTC13 */
#define FTM_CLKIN1_PTC13 KINETIS_MUX('C',13,4) /* PTC13 */
#define FLEXPWM1_B1_PTC13 KINETIS_MUX('C',13,5) /* PTC13 */
#define UART4_CTS_b_PTC13 KINETIS_MUX('C',13,9) /* PTC13 */
#define PTC14 KINETIS_MUX('C',14,1) /* PTC14 */
#define I2C1_SCL_PTC14 KINETIS_MUX('C',14,2) /* PTC14 */
#define I2C0_SCL_PTC14 KINETIS_MUX('C',14,3) /* PTC14 */
#define FLEXPWM1_A0_PTC14 KINETIS_MUX('C',14,5) /* PTC14 */
#define UART4_RX_PTC14 KINETIS_MUX('C',14,9) /* PTC14 */
#define PTC15 KINETIS_MUX('C',15,1) /* PTC15 */
#define I2C1_SDA_PTC15 KINETIS_MUX('C',15,2) /* PTC15 */
#define I2C0_SDA_PTC15 KINETIS_MUX('C',15,3) /* PTC15 */
#define FLEXPWM1_B0_PTC15 KINETIS_MUX('C',15,5) /* PTC15 */
#define UART4_TX_PTC15 KINETIS_MUX('C',15,9) /* PTC15 */
#define PTC16 KINETIS_MUX('C',16,1) /* PTC16 */
#define CAN1_RX_PTC16 KINETIS_MUX('C',16,2) /* PTC16 */
#define UART3_RX_PTC16 KINETIS_MUX('C',16,3) /* PTC16 */
#define ENET0_1588_TMR0_PTC16 KINETIS_MUX('C',16,4) /* PTC16 */
#define FLEXPWM1_A2_PTC16 KINETIS_MUX('C',16,5) /* PTC16 */
#define PTC17 KINETIS_MUX('C',17,1) /* PTC17 */
#define CAN1_TX_PTC17 KINETIS_MUX('C',17,2) /* PTC17 */
#define UART3_TX_PTC17 KINETIS_MUX('C',17,3) /* PTC17 */
#define ENET0_1588_TMR1_PTC17 KINETIS_MUX('C',17,4) /* PTC17 */
#define FLEXPWM1_B2_PTC17 KINETIS_MUX('C',17,5) /* PTC17 */
#define PTC18 KINETIS_MUX('C',18,1) /* PTC18 */
#define UART3_RTS_b_PTC18 KINETIS_MUX('C',18,3) /* PTC18 */
#define ENET0_1588_TMR2_PTC18 KINETIS_MUX('C',18,4) /* PTC18 */
#define FLEXPWM1_A3_PTC18 KINETIS_MUX('C',18,5) /* PTC18 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define LLWU_P12_PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define SPI0_PCS0_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define UART2_RTS_b_PTD0 KINETIS_MUX('D',0,3) /* PTD0 */
#define FTM3_CH0_PTD0 KINETIS_MUX('D',0,4) /* PTD0 */
#define FTM0_CH0_PTD0 KINETIS_MUX('D',0,5) /* PTD0 */
#define FLEXPWM0_A0_PTD0 KINETIS_MUX('D',0,6) /* PTD0 */
#define FLEXPWM1_A0_PTD0 KINETIS_MUX('D',0,9) /* PTD0 */
#define HSADC1A_CH11_PTD1 KINETIS_MUX('D',1,0) /* PTD1 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define SPI0_SCK_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define UART2_CTS_b_PTD1 KINETIS_MUX('D',1,3) /* PTD1 */
#define FTM3_CH1_PTD1 KINETIS_MUX('D',1,4) /* PTD1 */
#define FTM0_CH1_PTD1 KINETIS_MUX('D',1,5) /* PTD1 */
#define FLEXPWM0_B0_PTD1 KINETIS_MUX('D',1,6) /* PTD1 */
#define FLEXPWM1_B0_PTD1 KINETIS_MUX('D',1,9) /* PTD1 */
#define LLWU_P13_PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define SPI0_SOUT_PTD2 KINETIS_MUX('D',2,2) /* PTD2 */
#define UART2_RX_PTD2 KINETIS_MUX('D',2,3) /* PTD2 */
#define FTM3_CH2_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define FTM0_CH2_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define FLEXPWM0_A1_PTD2 KINETIS_MUX('D',2,6) /* PTD2 */
#define I2C0_SCL_PTD2 KINETIS_MUX('D',2,7) /* PTD2 */
#define FLEXPWM1_A1_PTD2 KINETIS_MUX('D',2,9) /* PTD2 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define SPI0_SIN_PTD3 KINETIS_MUX('D',3,2) /* PTD3 */
#define UART2_TX_PTD3 KINETIS_MUX('D',3,3) /* PTD3 */
#define FTM3_CH3_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define FTM0_CH3_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define FLEXPWM0_B1_PTD3 KINETIS_MUX('D',3,6) /* PTD3 */
#define I2C0_SDA_PTD3 KINETIS_MUX('D',3,7) /* PTD3 */
#define FLEXPWM1_B1_PTD3 KINETIS_MUX('D',3,9) /* PTD3 */
#define LLWU_P14_PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define SPI0_PCS1_PTD4 KINETIS_MUX('D',4,2) /* PTD4 */
#define UART0_RTS_b_PTD4 KINETIS_MUX('D',4,3) /* PTD4 */
#define FTM0_CH4_PTD4 KINETIS_MUX('D',4,4) /* PTD4 */
#define FLEXPWM0_A2_PTD4 KINETIS_MUX('D',4,5) /* PTD4 */
#define EWM_IN_PTD4 KINETIS_MUX('D',4,6) /* PTD4 */
#define SPI1_PCS0_PTD4 KINETIS_MUX('D',4,7) /* PTD4 */
#define HSADC1A_CH8_PTD5 KINETIS_MUX('D',5,0) /* PTD5 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define SPI0_PCS2_PTD5 KINETIS_MUX('D',5,2) /* PTD5 */
#define UART0_CTS_b_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define UART0_COL_b_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define FTM0_CH5_PTD5 KINETIS_MUX('D',5,4) /* PTD5 */
#define FLEXPWM0_B2_PTD5 KINETIS_MUX('D',5,5) /* PTD5 */
#define EWM_OUT_b_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define SPI1_SCK_PTD5 KINETIS_MUX('D',5,7) /* PTD5 */
#define HSADC1A_CH9_PTD6 KINETIS_MUX('D',6,0) /* PTD6 */
#define PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define LLWU_P15_PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define SPI0_PCS3_PTD6 KINETIS_MUX('D',6,2) /* PTD6 */
#define UART0_RX_PTD6 KINETIS_MUX('D',6,3) /* PTD6 */
#define FTM0_CH6_PTD6 KINETIS_MUX('D',6,4) /* PTD6 */
#define FTM1_CH0_PTD6 KINETIS_MUX('D',6,5) /* PTD6 */
#define FTM0_FLT0_PTD6 KINETIS_MUX('D',6,6) /* PTD6 */
#define SPI1_SOUT_PTD6 KINETIS_MUX('D',6,7) /* PTD6 */
#define PTD7 KINETIS_MUX('D',7,1) /* PTD7 */
#define UART0_TX_PTD7 KINETIS_MUX('D',7,3) /* PTD7 */
#define FTM0_CH7_PTD7 KINETIS_MUX('D',7,4) /* PTD7 */
#define FTM1_CH1_PTD7 KINETIS_MUX('D',7,5) /* PTD7 */
#define FTM0_FLT1_PTD7 KINETIS_MUX('D',7,6) /* PTD7 */
#define SPI1_SIN_PTD7 KINETIS_MUX('D',7,7) /* PTD7 */
#define HSADC1A_CH0_PTE0 KINETIS_MUX('E',0,0) /* PTE0 */
#define HSADC0B_CH16_PTE0 KINETIS_MUX('E',0,0) /* PTE0 */
#define PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define SPI1_PCS1_PTE0 KINETIS_MUX('E',0,2) /* PTE0 */
#define UART1_TX_PTE0 KINETIS_MUX('E',0,3) /* PTE0 */
#define XB_OUT10_PTE0 KINETIS_MUX('E',0,4) /* PTE0 */
#define XB_IN11_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define XB_IN11_PTE0_PTE0_PTE0_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define XB_IN11_PTE0_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define I2C1_SDA_PTE0 KINETIS_MUX('E',0,6) /* PTE0 */
#define TRACE_CLKOUT_PTE0 KINETIS_MUX('E',0,8) /* PTE0 */
#define HSADC0B_CH17_PTE1 KINETIS_MUX('E',1,0) /* PTE1 */
#define HSADC1A_CH1_PTE1 KINETIS_MUX('E',1,0) /* PTE1 */
#define PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define LLWU_P0_PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define SPI1_SOUT_PTE1 KINETIS_MUX('E',1,2) /* PTE1 */
#define UART1_RX_PTE1 KINETIS_MUX('E',1,3) /* PTE1 */
#define XB_OUT11_PTE1 KINETIS_MUX('E',1,4) /* PTE1 */
#define XB_IN7_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define XB_IN7_PTE1_PTE1_PTE1_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define XB_IN7_PTE1_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define I2C1_SCL_PTE1 KINETIS_MUX('E',1,6) /* PTE1 */
#define TRACE_D3_PTE1 KINETIS_MUX('E',1,8) /* PTE1 */
#define HSADC1B_CH0_PTE2 KINETIS_MUX('E',2,0) /* PTE2 */
#define HSADC0B_CH10_PTE2 KINETIS_MUX('E',2,0) /* PTE2 */
#define LLWU_P1_PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define PTE2 KINETIS_MUX('E',2,1) /* PTE2 */
#define SPI1_SCK_PTE2 KINETIS_MUX('E',2,2) /* PTE2 */
#define UART1_CTS_b_PTE2 KINETIS_MUX('E',2,3) /* PTE2 */
#define TRACE_D2_PTE2 KINETIS_MUX('E',2,8) /* PTE2 */
#define HSADC1B_CH1_PTE3 KINETIS_MUX('E',3,0) /* PTE3 */
#define HSADC0B_CH11_PTE3 KINETIS_MUX('E',3,0) /* PTE3 */
#define PTE3 KINETIS_MUX('E',3,1) /* PTE3 */
#define SPI1_SIN_PTE3 KINETIS_MUX('E',3,2) /* PTE3 */
#define UART1_RTS_b_PTE3 KINETIS_MUX('E',3,3) /* PTE3 */
#define TRACE_D1_PTE3 KINETIS_MUX('E',3,8) /* PTE3 */
#define ADC0_DP2_PTE4 KINETIS_MUX('E',4,0) /* PTE4 */
#define ADC0_SE2_PTE4 KINETIS_MUX('E',4,0) /* PTE4 */
#define HSADC1A_CH4_PTE4 KINETIS_MUX('E',4,0) /* PTE4 */
#define LLWU_P2_PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define PTE4 KINETIS_MUX('E',4,1) /* PTE4 */
#define SPI1_PCS0_PTE4 KINETIS_MUX('E',4,2) /* PTE4 */
#define UART3_TX_PTE4 KINETIS_MUX('E',4,3) /* PTE4 */
#define TRACE_D0_PTE4 KINETIS_MUX('E',4,8) /* PTE4 */
#define ADC0_DM2_PTE5 KINETIS_MUX('E',5,0) /* PTE5 */
#define HSADC1A_CH5_PTE5 KINETIS_MUX('E',5,0) /* PTE5 */
#define ADC0_SE10_PTE5 KINETIS_MUX('E',5,0) /* PTE5 */
#define PTE5 KINETIS_MUX('E',5,1) /* PTE5 */
#define SPI1_PCS2_PTE5 KINETIS_MUX('E',5,2) /* PTE5 */
#define UART3_RX_PTE5 KINETIS_MUX('E',5,3) /* PTE5 */
#define FLEXPWM1_A0_PTE5 KINETIS_MUX('E',5,5) /* PTE5 */
#define FTM3_CH0_PTE5 KINETIS_MUX('E',5,6) /* PTE5 */
#define HSADC1B_CH7_PTE6 KINETIS_MUX('E',6,0) /* PTE6 */
#define ADC0_SE4a_PTE6 KINETIS_MUX('E',6,0) /* PTE6 */
#define PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define LLWU_P16_PTE6 KINETIS_MUX('E',6,1) /* PTE6 */
#define SPI1_PCS3_PTE6 KINETIS_MUX('E',6,2) /* PTE6 */
#define UART3_CTS_b_PTE6 KINETIS_MUX('E',6,3) /* PTE6 */
#define FLEXPWM1_B0_PTE6 KINETIS_MUX('E',6,5) /* PTE6 */
#define FTM3_CH1_PTE6 KINETIS_MUX('E',6,6) /* PTE6 */
#define ADC0_DP1_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define ADC0_SE1_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define HSADC0A_CH0_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define PTE16 KINETIS_MUX('E',16,1) /* PTE16 */
#define SPI0_PCS0_PTE16 KINETIS_MUX('E',16,2) /* PTE16 */
#define UART2_TX_PTE16 KINETIS_MUX('E',16,3) /* PTE16 */
#define FTM_CLKIN0_PTE16 KINETIS_MUX('E',16,4) /* PTE16 */
#define FTM0_FLT3_PTE16 KINETIS_MUX('E',16,6) /* PTE16 */
#define HSADC0A_CH1_PTE17 KINETIS_MUX('E',17,0) /* PTE17 */
#define ADC0_DM1_PTE17 KINETIS_MUX('E',17,0) /* PTE17 */
#define ADC0_SE9_PTE17 KINETIS_MUX('E',17,0) /* PTE17 */
#define LLWU_P19_PTE17 KINETIS_MUX('E',17,1) /* PTE17 */
#define PTE17 KINETIS_MUX('E',17,1) /* PTE17 */
#define SPI0_SCK_PTE17 KINETIS_MUX('E',17,2) /* PTE17 */
#define UART2_RX_PTE17 KINETIS_MUX('E',17,3) /* PTE17 */
#define FTM_CLKIN1_PTE17 KINETIS_MUX('E',17,4) /* PTE17 */
#define LPTMR0_ALT3_PTE17 KINETIS_MUX('E',17,6) /* PTE17 */
#define HSADC0B_CH0_PTE18 KINETIS_MUX('E',18,0) /* PTE18 */
#define ADC0_SE5a_PTE18 KINETIS_MUX('E',18,0) /* PTE18 */
#define LLWU_P20_PTE18 KINETIS_MUX('E',18,1) /* PTE18 */
#define PTE18 KINETIS_MUX('E',18,1) /* PTE18 */
#define SPI0_SOUT_PTE18 KINETIS_MUX('E',18,2) /* PTE18 */
#define UART2_CTS_b_PTE18 KINETIS_MUX('E',18,3) /* PTE18 */
#define I2C0_SDA_PTE18 KINETIS_MUX('E',18,4) /* PTE18 */
#define HSADC0B_CH1_PTE19 KINETIS_MUX('E',19,0) /* PTE19 */
#define ADC0_SE6a_PTE19 KINETIS_MUX('E',19,0) /* PTE19 */
#define PTE19 KINETIS_MUX('E',19,1) /* PTE19 */
#define SPI0_SIN_PTE19 KINETIS_MUX('E',19,2) /* PTE19 */
#define UART2_RTS_b_PTE19 KINETIS_MUX('E',19,3) /* PTE19 */
#define I2C0_SCL_PTE19 KINETIS_MUX('E',19,4) /* PTE19 */
#define CMP3_OUT_PTE19 KINETIS_MUX('E',19,6) /* PTE19 */
#define HSADC0A_CH8_PTE20 KINETIS_MUX('E',20,0) /* PTE20 */
#define ADC0_SE5b_PTE20 KINETIS_MUX('E',20,0) /* PTE20 */
#define PTE20 KINETIS_MUX('E',20,1) /* PTE20 */
#define FTM1_CH0_PTE20 KINETIS_MUX('E',20,3) /* PTE20 */
#define UART0_TX_PTE20 KINETIS_MUX('E',20,4) /* PTE20 */
#define FTM1_QD_PHA_PTE20 KINETIS_MUX('E',20,5) /* PTE20 */
#define HSADC0A_CH9_PTE21 KINETIS_MUX('E',21,0) /* PTE21 */
#define HSADC1A_CH7_PTE21 KINETIS_MUX('E',21,0) /* PTE21 */
#define PTE21 KINETIS_MUX('E',21,1) /* PTE21 */
#define XB_IN9_PTE21 KINETIS_MUX('E',21,2) /* PTE21 */
#define XB_IN9_PTE21_PTE21_PTE21_PTE21 KINETIS_MUX('E',21,2) /* PTE21 */
#define XB_IN9_PTE21_PTE21 KINETIS_MUX('E',21,2) /* PTE21 */
#define FTM1_CH1_PTE21 KINETIS_MUX('E',21,3) /* PTE21 */
#define UART0_RX_PTE21 KINETIS_MUX('E',21,4) /* PTE21 */
#define FTM1_QD_PHB_PTE21 KINETIS_MUX('E',21,5) /* PTE21 */
#define HSADC0B_CH4_PTE24 KINETIS_MUX('E',24,0) /* PTE24 */
#define HSADC1B_CH4_PTE24 KINETIS_MUX('E',24,0) /* PTE24 */
#define PTE24 KINETIS_MUX('E',24,1) /* PTE24 */
#define CAN1_TX_PTE24 KINETIS_MUX('E',24,2) /* PTE24 */
#define FTM0_CH0_PTE24 KINETIS_MUX('E',24,3) /* PTE24 */
#define XB_IN2_PTE24 KINETIS_MUX('E',24,4) /* PTE24 */
#define XB_IN2_PTE24_PTE24_PTE24_PTE24 KINETIS_MUX('E',24,4) /* PTE24 */
#define XB_IN2_PTE24_PTE24 KINETIS_MUX('E',24,4) /* PTE24 */
#define I2C0_SCL_PTE24 KINETIS_MUX('E',24,5) /* PTE24 */
#define EWM_OUT_b_PTE24 KINETIS_MUX('E',24,6) /* PTE24 */
#define XB_OUT4_PTE24 KINETIS_MUX('E',24,7) /* PTE24 */
#define UART4_TX_PTE24 KINETIS_MUX('E',24,8) /* PTE24 */
#define HSADC1B_CH5_PTE25 KINETIS_MUX('E',25,0) /* PTE25 */
#define HSADC0B_CH5_PTE25 KINETIS_MUX('E',25,0) /* PTE25 */
#define LLWU_P21_PTE25 KINETIS_MUX('E',25,1) /* PTE25 */
#define PTE25 KINETIS_MUX('E',25,1) /* PTE25 */
#define CAN1_RX_PTE25 KINETIS_MUX('E',25,2) /* PTE25 */
#define FTM0_CH1_PTE25 KINETIS_MUX('E',25,3) /* PTE25 */
#define XB_IN3_PTE25 KINETIS_MUX('E',25,4) /* PTE25 */
#define XB_IN3_PTE25_PTE25_PTE25_PTE25 KINETIS_MUX('E',25,4) /* PTE25 */
#define XB_IN3_PTE25_PTE25 KINETIS_MUX('E',25,4) /* PTE25 */
#define XB_IN3/EWM_IN_PTE25_PTE25 KINETIS_MUX('E',25,4) /* PTE25 */
#define I2C0_SDA_PTE25 KINETIS_MUX('E',25,5) /* PTE25 */
#define XB_OUT5_PTE25 KINETIS_MUX('E',25,7) /* PTE25 */
#define UART4_RX_PTE25 KINETIS_MUX('E',25,8) /* PTE25 */
#define PTE26 KINETIS_MUX('E',26,1) /* PTE26 */
#define ENET_1588_CLKIN_PTE26 KINETIS_MUX('E',26,2) /* PTE26 */
#define FTM0_CH4_PTE26 KINETIS_MUX('E',26,3) /* PTE26 */
#define UART4_CTS_b_PTE26 KINETIS_MUX('E',26,8) /* PTE26 */
#define CMP1_IN5_PTE29 KINETIS_MUX('E',29,0) /* PTE29 */
#define CMP0_IN5_PTE29 KINETIS_MUX('E',29,0) /* PTE29 */
#define HSADC0A_CH4_PTE29 KINETIS_MUX('E',29,0) /* PTE29 */
#define PTE29 KINETIS_MUX('E',29,1) /* PTE29 */
#define FTM0_CH2_PTE29 KINETIS_MUX('E',29,3) /* PTE29 */
#define FTM_CLKIN0_PTE29 KINETIS_MUX('E',29,5) /* PTE29 */
#define DAC0_OUT_PTE30 KINETIS_MUX('E',30,0) /* PTE30 */
#define HSADC0A_CH5_PTE30 KINETIS_MUX('E',30,0) /* PTE30 */
#define CMP1_IN3_PTE30 KINETIS_MUX('E',30,0) /* PTE30 */
#define PTE30 KINETIS_MUX('E',30,1) /* PTE30 */
#define FTM0_CH3_PTE30 KINETIS_MUX('E',30,3) /* PTE30 */
#define FTM_CLKIN1_PTE30 KINETIS_MUX('E',30,5) /* PTE30 */
#endif