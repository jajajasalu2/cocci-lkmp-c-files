cocci_test_suite() {
	const u16 cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 526 */[];
	const struct sh_pfc_soc_info cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 2161 */;
	const struct pinmux_data_reg cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 2065 */[];
	enum{PINMUX_RESERVED=0, PINMUX_DATA_BEGIN, PTA7_DATA, PTA6_DATA, PTA5_DATA, PTA4_DATA, PTA3_DATA, PTA2_DATA, PTA1_DATA, PTA0_DATA, PTB7_DATA, PTB6_DATA, PTB5_DATA, PTB4_DATA, PTB3_DATA, PTB2_DATA, PTB1_DATA, PTB0_DATA, PTC7_DATA, PTC6_DATA, PTC5_DATA, PTC4_DATA, PTC3_DATA, PTC2_DATA, PTC1_DATA, PTC0_DATA, PTD7_DATA, PTD6_DATA, PTD5_DATA, PTD4_DATA, PTD3_DATA, PTD2_DATA, PTD1_DATA, PTD0_DATA, PTE7_DATA, PTE6_DATA, PTE5_DATA, PTE4_DATA, PTE3_DATA, PTE2_DATA, PTE1_DATA, PTE0_DATA, PTF7_DATA, PTF6_DATA, PTF5_DATA, PTF4_DATA, PTF3_DATA, PTF2_DATA, PTF1_DATA, PTF0_DATA, PTG5_DATA, PTG4_DATA, PTG3_DATA, PTG2_DATA, PTG1_DATA, PTG0_DATA, PTH7_DATA, PTH6_DATA, PTH5_DATA, PTH4_DATA, PTH3_DATA, PTH2_DATA, PTH1_DATA, PTH0_DATA, PTJ7_DATA, PTJ6_DATA, PTJ5_DATA, PTJ3_DATA, PTJ2_DATA, PTJ1_DATA, PTJ0_DATA, PTK7_DATA, PTK6_DATA, PTK5_DATA, PTK4_DATA, PTK3_DATA, PTK2_DATA, PTK1_DATA, PTK0_DATA, PTL7_DATA, PTL6_DATA, PTL5_DATA, PTL4_DATA, PTL3_DATA, PTL2_DATA, PTL1_DATA, PTL0_DATA, PTM7_DATA, PTM6_DATA, PTM5_DATA, PTM4_DATA, PTM3_DATA, PTM2_DATA, PTM1_DATA, PTM0_DATA, PTN7_DATA, PTN6_DATA, PTN5_DATA, PTN4_DATA, PTN3_DATA, PTN2_DATA, PTN1_DATA, PTN0_DATA, PTQ7_DATA, PTQ6_DATA, PTQ5_DATA, PTQ4_DATA, PTQ3_DATA, PTQ2_DATA, PTQ1_DATA, PTQ0_DATA, PTR7_DATA, PTR6_DATA, PTR5_DATA, PTR4_DATA, PTR3_DATA, PTR2_DATA, PTR1_DATA, PTR0_DATA, PTS6_DATA, PTS5_DATA, PTS4_DATA, PTS3_DATA, PTS2_DATA, PTS1_DATA, PTS0_DATA, PTT7_DATA, PTT6_DATA, PTT5_DATA, PTT4_DATA, PTT3_DATA, PTT2_DATA, PTT1_DATA, PTT0_DATA, PTU7_DATA, PTU6_DATA, PTU5_DATA, PTU4_DATA, PTU3_DATA, PTU2_DATA, PTU1_DATA, PTU0_DATA, PTV7_DATA, PTV6_DATA, PTV5_DATA, PTV4_DATA, PTV3_DATA, PTV2_DATA, PTV1_DATA, PTV0_DATA, PTW7_DATA, PTW6_DATA, PTW5_DATA, PTW4_DATA, PTW3_DATA, PTW2_DATA, PTW1_DATA, PTW0_DATA, PTX7_DATA, PTX6_DATA, PTX5_DATA, PTX4_DATA, PTX3_DATA, PTX2_DATA, PTX1_DATA, PTX0_DATA, PTY7_DATA, PTY6_DATA, PTY5_DATA, PTY4_DATA, PTY3_DATA, PTY2_DATA, PTY1_DATA, PTY0_DATA, PTZ7_DATA, PTZ6_DATA, PTZ5_DATA, PTZ4_DATA, PTZ3_DATA, PTZ2_DATA, PTZ1_DATA, PTZ0_DATA, PINMUX_DATA_END, PINMUX_INPUT_BEGIN, PTA7_IN, PTA6_IN, PTA5_IN, PTA4_IN, PTA3_IN, PTA2_IN, PTA1_IN, PTA0_IN, PTB7_IN, PTB6_IN, PTB5_IN, PTB4_IN, PTB3_IN, PTB2_IN, PTB1_IN, PTB0_IN, PTC7_IN, PTC6_IN, PTC5_IN, PTC4_IN, PTC3_IN, PTC2_IN, PTC1_IN, PTC0_IN, PTD7_IN, PTD6_IN, PTD5_IN, PTD4_IN, PTD3_IN, PTD2_IN, PTD1_IN, PTD0_IN, PTE7_IN, PTE6_IN, PTE5_IN, PTE4_IN, PTE3_IN, PTE2_IN, PTE1_IN, PTE0_IN, PTF7_IN, PTF6_IN, PTF5_IN, PTF4_IN, PTF3_IN, PTF2_IN, PTF1_IN, PTF0_IN, PTH7_IN, PTH6_IN, PTH5_IN, PTH4_IN, PTH3_IN, PTH2_IN, PTH1_IN, PTH0_IN, PTJ3_IN, PTJ2_IN, PTJ1_IN, PTJ0_IN, PTK7_IN, PTK6_IN, PTK5_IN, PTK4_IN, PTK3_IN, PTK2_IN, PTK1_IN, PTK0_IN, PTL7_IN, PTL6_IN, PTL5_IN, PTL4_IN, PTL3_IN, PTL2_IN, PTL1_IN, PTL0_IN, PTM7_IN, PTM6_IN, PTM5_IN, PTM4_IN, PTM3_IN, PTM2_IN, PTM1_IN, PTM0_IN, PTN7_IN, PTN6_IN, PTN5_IN, PTN4_IN, PTN3_IN, PTN2_IN, PTN1_IN, PTN0_IN, PTQ7_IN, PTQ6_IN, PTQ5_IN, PTQ4_IN, PTQ3_IN, PTQ2_IN, PTQ1_IN, PTQ0_IN, PTR7_IN, PTR6_IN, PTR5_IN, PTR4_IN, PTR3_IN, PTR2_IN, PTR1_IN, PTR0_IN, PTS6_IN, PTS5_IN, PTS4_IN, PTS3_IN, PTS2_IN, PTS1_IN, PTS0_IN, PTT7_IN, PTT6_IN, PTT5_IN, PTT4_IN, PTT3_IN, PTT2_IN, PTT1_IN, PTT0_IN, PTU7_IN, PTU6_IN, PTU5_IN, PTU4_IN, PTU3_IN, PTU2_IN, PTU1_IN, PTU0_IN, PTV7_IN, PTV6_IN, PTV5_IN, PTV4_IN, PTV3_IN, PTV2_IN, PTV1_IN, PTV0_IN, PTW7_IN, PTW6_IN, PTW5_IN, PTW4_IN, PTW3_IN, PTW2_IN, PTW1_IN, PTW0_IN, PTX7_IN, PTX6_IN, PTX5_IN, PTX4_IN, PTX3_IN, PTX2_IN, PTX1_IN, PTX0_IN, PTY7_IN, PTY6_IN, PTY5_IN, PTY4_IN, PTY3_IN, PTY2_IN, PTY1_IN, PTY0_IN, PTZ7_IN, PTZ6_IN, PTZ5_IN, PTZ4_IN, PTZ3_IN, PTZ2_IN, PTZ1_IN, PTZ0_IN, PINMUX_INPUT_END, PINMUX_OUTPUT_BEGIN, PTA7_OUT, PTA6_OUT, PTA5_OUT, PTA4_OUT, PTA3_OUT, PTA2_OUT, PTA1_OUT, PTA0_OUT, PTB7_OUT, PTB6_OUT, PTB5_OUT, PTB4_OUT, PTB3_OUT, PTB2_OUT, PTB1_OUT, PTB0_OUT, PTC7_OUT, PTC6_OUT, PTC5_OUT, PTC4_OUT, PTC3_OUT, PTC2_OUT, PTC1_OUT, PTC0_OUT, PTD7_OUT, PTD6_OUT, PTD5_OUT, PTD4_OUT, PTD3_OUT, PTD2_OUT, PTD1_OUT, PTD0_OUT, PTE7_OUT, PTE6_OUT, PTE5_OUT, PTE4_OUT, PTE3_OUT, PTE2_OUT, PTE1_OUT, PTE0_OUT, PTF7_OUT, PTF6_OUT, PTF5_OUT, PTF4_OUT, PTF3_OUT, PTF2_OUT, PTF1_OUT, PTF0_OUT, PTG5_OUT, PTG4_OUT, PTG3_OUT, PTG2_OUT, PTG1_OUT, PTG0_OUT, PTH7_OUT, PTH6_OUT, PTH5_OUT, PTH4_OUT, PTH3_OUT, PTH2_OUT, PTH1_OUT, PTH0_OUT, PTJ7_OUT, PTJ6_OUT, PTJ5_OUT, PTJ3_OUT, PTJ2_OUT, PTJ1_OUT, PTJ0_OUT, PTK7_OUT, PTK6_OUT, PTK5_OUT, PTK4_OUT, PTK3_OUT, PTK2_OUT, PTK1_OUT, PTK0_OUT, PTL7_OUT, PTL6_OUT, PTL5_OUT, PTL4_OUT, PTL3_OUT, PTL2_OUT, PTL1_OUT, PTL0_OUT, PTM7_OUT, PTM6_OUT, PTM5_OUT, PTM4_OUT, PTM3_OUT, PTM2_OUT, PTM1_OUT, PTM0_OUT, PTN7_OUT, PTN6_OUT, PTN5_OUT, PTN4_OUT, PTN3_OUT, PTN2_OUT, PTN1_OUT, PTN0_OUT, PTQ7_OUT, PTQ6_OUT, PTQ5_OUT, PTQ4_OUT, PTQ3_OUT, PTQ2_OUT, PTQ1_OUT, PTQ0_OUT, PTR7_OUT, PTR6_OUT, PTR5_OUT, PTR4_OUT, PTR1_OUT, PTR0_OUT, PTS6_OUT, PTS5_OUT, PTS4_OUT, PTS3_OUT, PTS2_OUT, PTS1_OUT, PTS0_OUT, PTT7_OUT, PTT6_OUT, PTT5_OUT, PTT4_OUT, PTT3_OUT, PTT2_OUT, PTT1_OUT, PTT0_OUT, PTU7_OUT, PTU6_OUT, PTU5_OUT, PTU4_OUT, PTU3_OUT, PTU2_OUT, PTU1_OUT, PTU0_OUT, PTV7_OUT, PTV6_OUT, PTV5_OUT, PTV4_OUT, PTV3_OUT, PTV2_OUT, PTV1_OUT, PTV0_OUT, PTW7_OUT, PTW6_OUT, PTW5_OUT, PTW4_OUT, PTW3_OUT, PTW2_OUT, PTW1_OUT, PTW0_OUT, PTX7_OUT, PTX6_OUT, PTX5_OUT, PTX4_OUT, PTX3_OUT, PTX2_OUT, PTX1_OUT, PTX0_OUT, PTY7_OUT, PTY6_OUT, PTY5_OUT, PTY4_OUT, PTY3_OUT, PTY2_OUT, PTY1_OUT, PTY0_OUT, PTZ7_OUT, PTZ6_OUT, PTZ5_OUT, PTZ4_OUT, PTZ3_OUT, PTZ2_OUT, PTZ1_OUT, PTZ0_OUT, PINMUX_OUTPUT_END, PINMUX_FUNCTION_BEGIN, PTA7_FN, PTA6_FN, PTA5_FN, PTA4_FN, PTA3_FN, PTA2_FN, PTA1_FN, PTA0_FN, PTB7_FN, PTB6_FN, PTB5_FN, PTB4_FN, PTB3_FN, PTB2_FN, PTB1_FN, PTB0_FN, PTC7_FN, PTC6_FN, PTC5_FN, PTC4_FN, PTC3_FN, PTC2_FN, PTC1_FN, PTC0_FN, PTD7_FN, PTD6_FN, PTD5_FN, PTD4_FN, PTD3_FN, PTD2_FN, PTD1_FN, PTD0_FN, PTE7_FN, PTE6_FN, PTE5_FN, PTE4_FN, PTE3_FN, PTE2_FN, PTE1_FN, PTE0_FN, PTF7_FN, PTF6_FN, PTF5_FN, PTF4_FN, PTF3_FN, PTF2_FN, PTF1_FN, PTF0_FN, PTG5_FN, PTG4_FN, PTG3_FN, PTG2_FN, PTG1_FN, PTG0_FN, PTH7_FN, PTH6_FN, PTH5_FN, PTH4_FN, PTH3_FN, PTH2_FN, PTH1_FN, PTH0_FN, PTJ7_FN, PTJ6_FN, PTJ5_FN, PTJ3_FN, PTJ2_FN, PTJ1_FN, PTJ0_FN, PTK7_FN, PTK6_FN, PTK5_FN, PTK4_FN, PTK3_FN, PTK2_FN, PTK1_FN, PTK0_FN, PTL7_FN, PTL6_FN, PTL5_FN, PTL4_FN, PTL3_FN, PTL2_FN, PTL1_FN, PTL0_FN, PTM7_FN, PTM6_FN, PTM5_FN, PTM4_FN, PTM3_FN, PTM2_FN, PTM1_FN, PTM0_FN, PTN7_FN, PTN6_FN, PTN5_FN, PTN4_FN, PTN3_FN, PTN2_FN, PTN1_FN, PTN0_FN, PTQ7_FN, PTQ6_FN, PTQ5_FN, PTQ4_FN, PTQ3_FN, PTQ2_FN, PTQ1_FN, PTQ0_FN, PTR7_FN, PTR6_FN, PTR5_FN, PTR4_FN, PTR3_FN, PTR2_FN, PTR1_FN, PTR0_FN, PTS6_FN, PTS5_FN, PTS4_FN, PTS3_FN, PTS2_FN, PTS1_FN, PTS0_FN, PTT7_FN, PTT6_FN, PTT5_FN, PTT4_FN, PTT3_FN, PTT2_FN, PTT1_FN, PTT0_FN, PTU7_FN, PTU6_FN, PTU5_FN, PTU4_FN, PTU3_FN, PTU2_FN, PTU1_FN, PTU0_FN, PTV7_FN, PTV6_FN, PTV5_FN, PTV4_FN, PTV3_FN, PTV2_FN, PTV1_FN, PTV0_FN, PTW7_FN, PTW6_FN, PTW5_FN, PTW4_FN, PTW3_FN, PTW2_FN, PTW1_FN, PTW0_FN, PTX7_FN, PTX6_FN, PTX5_FN, PTX4_FN, PTX3_FN, PTX2_FN, PTX1_FN, PTX0_FN, PTY7_FN, PTY6_FN, PTY5_FN, PTY4_FN, PTY3_FN, PTY2_FN, PTY1_FN, PTY0_FN, PTZ7_FN, PTZ6_FN, PTZ5_FN, PTZ4_FN, PTZ3_FN, PTZ2_FN, PTZ1_FN, PTZ0_FN, PSA15_0, PSA15_1, PSA14_0, PSA14_1, PSA13_0, PSA13_1, PSA12_0, PSA12_1, PSA10_0, PSA10_1, PSA9_0, PSA9_1, PSA8_0, PSA8_1, PSA7_0, PSA7_1, PSA6_0, PSA6_1, PSA5_0, PSA5_1, PSA3_0, PSA3_1, PSA2_0, PSA2_1, PSA1_0, PSA1_1, PSA0_0, PSA0_1, PSB14_0, PSB14_1, PSB13_0, PSB13_1, PSB12_0, PSB12_1, PSB11_0, PSB11_1, PSB10_0, PSB10_1, PSB9_0, PSB9_1, PSB8_0, PSB8_1, PSB7_0, PSB7_1, PSB6_0, PSB6_1, PSB5_0, PSB5_1, PSB4_0, PSB4_1, PSB3_0, PSB3_1, PSB2_0, PSB2_1, PSB1_0, PSB1_1, PSB0_0, PSB0_1, PSC15_0, PSC15_1, PSC14_0, PSC14_1, PSC13_0, PSC13_1, PSC12_0, PSC12_1, PSC11_0, PSC11_1, PSC10_0, PSC10_1, PSC9_0, PSC9_1, PSC8_0, PSC8_1, PSC7_0, PSC7_1, PSC6_0, PSC6_1, PSC5_0, PSC5_1, PSC4_0, PSC4_1, PSC2_0, PSC2_1, PSC1_0, PSC1_1, PSC0_0, PSC0_1, PSD15_0, PSD15_1, PSD14_0, PSD14_1, PSD13_0, PSD13_1, PSD12_0, PSD12_1, PSD11_0, PSD11_1, PSD10_0, PSD10_1, PSD9_0, PSD9_1, PSD8_0, PSD8_1, PSD7_0, PSD7_1, PSD6_0, PSD6_1, PSD5_0, PSD5_1, PSD4_0, PSD4_1, PSD3_0, PSD3_1, PSD2_0, PSD2_1, PSD1_0, PSD1_1, PSD0_0, PSD0_1, PSE15_0, PSE15_1, PSE14_0, PSE14_1, PSE13_0, PSE13_1, PSE12_0, PSE12_1, PSE11_0, PSE11_1, PSE10_0, PSE10_1, PSE9_0, PSE9_1, PSE8_0, PSE8_1, PSE7_0, PSE7_1, PSE6_0, PSE6_1, PSE5_0, PSE5_1, PSE4_0, PSE4_1, PSE3_0, PSE3_1, PSE2_0, PSE2_1, PSE1_0, PSE1_1, PSE0_0, PSE0_1, PINMUX_FUNCTION_END, PINMUX_MARK_BEGIN, D23_MARK, KEYOUT2_MARK, IDED15_MARK, D22_MARK, KEYOUT1_MARK, IDED14_MARK, D21_MARK, KEYOUT0_MARK, IDED13_MARK, D20_MARK, KEYIN4_MARK, IDED12_MARK, D19_MARK, KEYIN3_MARK, IDED11_MARK, D18_MARK, KEYIN2_MARK, IDED10_MARK, D17_MARK, KEYIN1_MARK, IDED9_MARK, D16_MARK, KEYIN0_MARK, IDED8_MARK, D31_MARK, TPUTO1_MARK, IDEA1_MARK, D30_MARK, TPUTO0_MARK, IDEA0_MARK, D29_MARK, IODREQ_MARK, D28_MARK, IDECS0_MARK, D27_MARK, IDECS1_MARK, D26_MARK, KEYOUT5_IN5_MARK, IDEIORD_MARK, D25_MARK, KEYOUT4_IN6_MARK, IDEIOWR_MARK, D24_MARK, KEYOUT3_MARK, IDEINT_MARK, LCDD7_MARK, LCDD6_MARK, LCDD5_MARK, LCDD4_MARK, LCDD3_MARK, LCDD2_MARK, LCDD1_MARK, LCDD0_MARK, LCDD15_MARK, LCDD14_MARK, LCDD13_MARK, LCDD12_MARK, LCDD11_MARK, LCDD10_MARK, LCDD9_MARK, LCDD8_MARK, FSIMCKB_MARK, FSIMCKA_MARK, LCDD21_MARK, SCIF2_L_TXD_MARK, LCDD20_MARK, SCIF4_SCK_MARK, LCDD19_MARK, SCIF4_RXD_MARK, LCDD18_MARK, SCIF4_TXD_MARK, LCDD17_MARK, LCDD16_MARK, LCDVSYN_MARK, LCDDISP_MARK, LCDRS_MARK, LCDHSYN_MARK, LCDCS_MARK, LCDDON_MARK, LCDDCK_MARK, LCDWR_MARK, LCDVEPWC_MARK, SCIF0_TXD_MARK, LCDD23_MARK, SCIF2_L_SCK_MARK, LCDD22_MARK, SCIF2_L_RXD_MARK, AUDCK_MARK, AUDSYNC_MARK, AUDATA3_MARK, AUDATA2_MARK, AUDATA1_MARK, AUDATA0_MARK, VIO0_VD_MARK, VIO0_CLK_MARK, VIO0_D7_MARK, VIO0_D6_MARK, VIO0_D5_MARK, VIO0_D4_MARK, VIO0_D3_MARK, VIO0_D2_MARK, PDSTATUS_MARK, STATUS2_MARK, STATUS0_MARK, A25_MARK, BS_MARK, A24_MARK, A23_MARK, A22_MARK, VIO1_D5_MARK, VIO0_D13_MARK, IDED5_MARK, VIO1_D4_MARK, VIO0_D12_MARK, IDED4_MARK, VIO1_D3_MARK, VIO0_D11_MARK, IDED3_MARK, VIO1_D2_MARK, VIO0_D10_MARK, IDED2_MARK, VIO1_D1_MARK, VIO0_D9_MARK, IDED1_MARK, VIO1_D0_MARK, VIO0_D8_MARK, IDED0_MARK, VIO0_FLD_MARK, VIO0_HD_MARK, DV_D5_MARK, SCIF3_V_SCK_MARK, RMII_RXD0_MARK, DV_D4_MARK, SCIF3_V_RXD_MARK, RMII_RXD1_MARK, DV_D3_MARK, SCIF3_V_TXD_MARK, RMII_REF_CLK_MARK, DV_D2_MARK, SCIF1_SCK_MARK, RMII_TX_EN_MARK, DV_D1_MARK, SCIF1_RXD_MARK, RMII_TXD0_MARK, DV_D0_MARK, SCIF1_TXD_MARK, RMII_TXD1_MARK, DV_D15_MARK, DV_D14_MARK, MSIOF0_MCK_MARK, DV_D13_MARK, MSIOF0_TSCK_MARK, DV_D12_MARK, MSIOF0_RXD_MARK, DV_D11_MARK, MSIOF0_TXD_MARK, DV_D10_MARK, MSIOF0_TSYNC_MARK, DV_D9_MARK, MSIOF0_SS1_MARK, MSIOF0_RSCK_MARK, DV_D8_MARK, MSIOF0_SS2_MARK, MSIOF0_RSYNC_MARK, LCDVCPWC_MARK, SCIF0_RXD_MARK, LCDRD_MARK, SCIF0_SCK_MARK, VIO0_D1_MARK, VIO0_D0_MARK, DV_CLKI_MARK, DV_CLK_MARK, SCIF2_V_SCK_MARK, DV_VSYNC_MARK, SCIF2_V_RXD_MARK, DV_HSYNC_MARK, SCIF2_V_TXD_MARK, DV_D7_MARK, SCIF3_V_CTS_MARK, RMII_RX_ER_MARK, DV_D6_MARK, SCIF3_V_RTS_MARK, RMII_CRS_DV_MARK, D7_MARK, D6_MARK, D5_MARK, D4_MARK, D3_MARK, D2_MARK, D1_MARK, D0_MARK, CS6B_CE1B_MARK, CS6A_CE2B_MARK, CS5B_CE1A_MARK, CS5A_CE2A_MARK, IOIS16_MARK, LCDLCLK_MARK, WAIT_MARK, WE3_ICIOWR_MARK, TPUTO3_MARK, TPUTI3_MARK, WE2_ICIORD_MARK, TPUTO2_MARK, IDEA2_MARK, VIO_CKO_MARK, VIO1_FLD_MARK, TPUTI2_MARK, IDEIORDY_MARK, VIO1_HD_MARK, SCIF5_SCK_MARK, VIO1_VD_MARK, SCIF5_RXD_MARK, VIO1_CLK_MARK, SCIF5_TXD_MARK, VIO1_D7_MARK, VIO0_D15_MARK, IDED7_MARK, VIO1_D6_MARK, VIO0_D14_MARK, IDED6_MARK, D15_MARK, D14_MARK, D13_MARK, D12_MARK, D11_MARK, D10_MARK, D9_MARK, D8_MARK, DMAC_DACK0_MARK, DMAC_DREQ0_MARK, FSIOASD_MARK, FSIIABCK_MARK, FSIIALRCK_MARK, FSIOABCK_MARK, FSIOALRCK_MARK, CLKAUDIOAO_MARK, FSIIBSD_MARK, MSIOF1_SS2_MARK, MSIOF1_RSYNC_MARK, FSIOBSD_MARK, MSIOF1_SS1_MARK, MSIOF1_RSCK_MARK, FSIIBBCK_MARK, MSIOF1_RXD_MARK, FSIIBLRCK_MARK, MSIOF1_TSYNC_MARK, FSIOBBCK_MARK, MSIOF1_TSCK_MARK, FSIOBLRCK_MARK, MSIOF1_TXD_MARK, CLKAUDIOBO_MARK, MSIOF1_MCK_MARK, FSIIASD_MARK, MMC_D7_MARK, SDHI1CD_MARK, IODACK_MARK, MMC_D6_MARK, SDHI1WP_MARK, IDERST_MARK, MMC_D5_MARK, SDHI1D3_MARK, EXBUF_ENB_MARK, MMC_D4_MARK, SDHI1D2_MARK, DIRECTION_MARK, MMC_D3_MARK, SDHI1D1_MARK, MMC_D2_MARK, SDHI1D0_MARK, MMC_D1_MARK, SDHI1CMD_MARK, MMC_D0_MARK, SDHI1CLK_MARK, DMAC_DACK1_MARK, IRDA_OUT_MARK, DMAC_DREQ1_MARK, IRDA_IN_MARK, TSIF_TS0_SDAT_MARK, LNKSTA_MARK, TSIF_TS0_SCK_MARK, MDIO_MARK, TSIF_TS0_SDEN_MARK, MDC_MARK, TSIF_TS0_SPSYNC_MARK, MMC_CLK_MARK, MMC_CMD_MARK, SDHI0CD_MARK, SDHI0WP_MARK, SDHI0D3_MARK, SDHI0D2_MARK, SDHI0D1_MARK, SDHI0D0_MARK, SDHI0CMD_MARK, SDHI0CLK_MARK, INTC_IRQ7_MARK, SCIF3_I_CTS_MARK, INTC_IRQ6_MARK, SCIF3_I_RTS_MARK, INTC_IRQ5_MARK, SCIF3_I_SCK_MARK, INTC_IRQ4_MARK, SCIF3_I_RXD_MARK, INTC_IRQ3_MARK, SCIF3_I_TXD_MARK, INTC_IRQ2_MARK, INTC_IRQ1_MARK, INTC_IRQ0_MARK, PINMUX_MARK_END,} cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 19 */;
	const struct pinmux_cfg_reg cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 1741 */[];
	const struct pinmux_func cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 1376 */[];
	const struct sh_pfc_pin cocci_id/* drivers/pinctrl/sh-pfc/pfc-sh7724.c 1146 */[];
}
