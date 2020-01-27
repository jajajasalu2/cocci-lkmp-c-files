@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 const struct pinmux_func cocci_id@p [ ] ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 const struct pinmux_cfg_reg cocci_id@p [ ] ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 const struct pinmux_data_reg cocci_id@p [ ] ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 const struct sh_pfc_soc_info cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PTA7_DATA , PTA6_DATA , PTA5_DATA , PTA4_DATA , PTA3_DATA , PTA2_DATA , PTA1_DATA , PTA0_DATA , PTB7_DATA , PTB6_DATA , PTB5_DATA , PTB4_DATA , PTB3_DATA , PTB2_DATA , PTB1_DATA , PTB0_DATA , PTC7_DATA , PTC5_DATA , PTC4_DATA , PTC3_DATA , PTC2_DATA , PTC0_DATA , PTD7_DATA , PTD6_DATA , PTD5_DATA , PTD4_DATA , PTD3_DATA , PTD2_DATA , PTD1_DATA , PTD0_DATA , PTE7_DATA , PTE6_DATA , PTE5_DATA , PTE4_DATA , PTE1_DATA , PTE0_DATA , PTF6_DATA , PTF5_DATA , PTF4_DATA , PTF3_DATA , PTF2_DATA , PTF1_DATA , PTF0_DATA , PTG4_DATA , PTG3_DATA , PTG2_DATA , PTG1_DATA , PTG0_DATA , PTH7_DATA , PTH6_DATA , PTH5_DATA , PTH4_DATA , PTH3_DATA , PTH2_DATA , PTH1_DATA , PTH0_DATA , PTJ7_DATA , PTJ6_DATA , PTJ5_DATA , PTJ1_DATA , PTJ0_DATA , PTK6_DATA , PTK5_DATA , PTK4_DATA , PTK3_DATA , PTK2_DATA , PTK1_DATA , PTK0_DATA , PTL7_DATA , PTL6_DATA , PTL5_DATA , PTL4_DATA , PTL3_DATA , PTL2_DATA , PTL1_DATA , PTL0_DATA , PTM7_DATA , PTM6_DATA , PTM5_DATA , PTM4_DATA , PTM3_DATA , PTM2_DATA , PTM1_DATA , PTM0_DATA , PTN7_DATA , PTN6_DATA , PTN5_DATA , PTN4_DATA , PTN3_DATA , PTN2_DATA , PTN1_DATA , PTN0_DATA , PTQ6_DATA , PTQ5_DATA , PTQ4_DATA , PTQ3_DATA , PTQ2_DATA , PTQ1_DATA , PTQ0_DATA , PTR4_DATA , PTR3_DATA , PTR2_DATA , PTR1_DATA , PTR0_DATA , PTS4_DATA , PTS3_DATA , PTS2_DATA , PTS1_DATA , PTS0_DATA , PTT4_DATA , PTT3_DATA , PTT2_DATA , PTT1_DATA , PTT0_DATA , PTU4_DATA , PTU3_DATA , PTU2_DATA , PTU1_DATA , PTU0_DATA , PTV4_DATA , PTV3_DATA , PTV2_DATA , PTV1_DATA , PTV0_DATA , PTW6_DATA , PTW5_DATA , PTW4_DATA , PTW3_DATA , PTW2_DATA , PTW1_DATA , PTW0_DATA , PTX6_DATA , PTX5_DATA , PTX4_DATA , PTX3_DATA , PTX2_DATA , PTX1_DATA , PTX0_DATA , PTY6_DATA , PTY5_DATA , PTY4_DATA , PTY3_DATA , PTY2_DATA , PTY1_DATA , PTY0_DATA , PTZ5_DATA , PTZ4_DATA , PTZ3_DATA , PTZ2_DATA , PTZ1_DATA , PTZ0_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , PTA7_IN , PTA6_IN , PTA5_IN , PTA4_IN , PTA3_IN , PTA2_IN , PTA1_IN , PTA0_IN , PTB7_IN , PTB6_IN , PTB5_IN , PTB4_IN , PTB3_IN , PTB2_IN , PTB1_IN , PTB0_IN , PTC7_IN , PTC5_IN , PTC4_IN , PTC3_IN , PTC2_IN , PTC0_IN , PTD7_IN , PTD6_IN , PTD5_IN , PTD4_IN , PTD3_IN , PTD2_IN , PTD1_IN , PTE7_IN , PTE6_IN , PTE5_IN , PTE4_IN , PTE1_IN , PTE0_IN , PTF6_IN , PTF5_IN , PTF4_IN , PTF3_IN , PTF2_IN , PTF1_IN , PTH6_IN , PTH5_IN , PTH1_IN , PTH0_IN , PTJ1_IN , PTJ0_IN , PTK6_IN , PTK5_IN , PTK4_IN , PTK3_IN , PTK2_IN , PTK0_IN , PTL7_IN , PTL6_IN , PTL5_IN , PTL4_IN , PTL3_IN , PTL2_IN , PTL1_IN , PTL0_IN , PTM7_IN , PTM6_IN , PTM5_IN , PTM4_IN , PTM3_IN , PTM2_IN , PTM1_IN , PTM0_IN , PTN7_IN , PTN6_IN , PTN5_IN , PTN4_IN , PTN3_IN , PTN2_IN , PTN1_IN , PTN0_IN , PTQ5_IN , PTQ4_IN , PTQ3_IN , PTQ2_IN , PTQ0_IN , PTR2_IN , PTS4_IN , PTS2_IN , PTS1_IN , PTT4_IN , PTT3_IN , PTT2_IN , PTT1_IN , PTU4_IN , PTU3_IN , PTU2_IN , PTU1_IN , PTU0_IN , PTV4_IN , PTV3_IN , PTV2_IN , PTV1_IN , PTV0_IN , PTW6_IN , PTW4_IN , PTW3_IN , PTW2_IN , PTW1_IN , PTW0_IN , PTX6_IN , PTX5_IN , PTX4_IN , PTX3_IN , PTX2_IN , PTX1_IN , PTX0_IN , PTY5_IN , PTY4_IN , PTY3_IN , PTY2_IN , PTY0_IN , PTZ5_IN , PTZ4_IN , PTZ3_IN , PTZ2_IN , PTZ1_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , PTA7_OUT , PTA5_OUT , PTB7_OUT , PTB6_OUT , PTB5_OUT , PTB4_OUT , PTB3_OUT , PTB2_OUT , PTB1_OUT , PTB0_OUT , PTC4_OUT , PTC3_OUT , PTC2_OUT , PTC0_OUT , PTD6_OUT , PTD5_OUT , PTD4_OUT , PTD3_OUT , PTD2_OUT , PTD1_OUT , PTD0_OUT , PTE7_OUT , PTE6_OUT , PTE5_OUT , PTE4_OUT , PTE1_OUT , PTE0_OUT , PTF6_OUT , PTF5_OUT , PTF4_OUT , PTF3_OUT , PTF2_OUT , PTF0_OUT , PTG4_OUT , PTG3_OUT , PTG2_OUT , PTG1_OUT , PTG0_OUT , PTH7_OUT , PTH6_OUT , PTH5_OUT , PTH4_OUT , PTH3_OUT , PTH2_OUT , PTH1_OUT , PTH0_OUT , PTJ7_OUT , PTJ6_OUT , PTJ5_OUT , PTJ1_OUT , PTJ0_OUT , PTK6_OUT , PTK5_OUT , PTK4_OUT , PTK3_OUT , PTK1_OUT , PTK0_OUT , PTL7_OUT , PTL6_OUT , PTL5_OUT , PTL4_OUT , PTL3_OUT , PTL2_OUT , PTL1_OUT , PTL0_OUT , PTM7_OUT , PTM6_OUT , PTM5_OUT , PTM4_OUT , PTM3_OUT , PTM2_OUT , PTM1_OUT , PTM0_OUT , PTN7_OUT , PTN6_OUT , PTN5_OUT , PTN4_OUT , PTN3_OUT , PTN2_OUT , PTN1_OUT , PTN0_OUT , PTQ6_OUT , PTQ5_OUT , PTQ4_OUT , PTQ3_OUT , PTQ2_OUT , PTQ1_OUT , PTQ0_OUT , PTR4_OUT , PTR3_OUT , PTR1_OUT , PTR0_OUT , PTS3_OUT , PTS2_OUT , PTS0_OUT , PTT4_OUT , PTT3_OUT , PTT2_OUT , PTT0_OUT , PTU4_OUT , PTU3_OUT , PTU2_OUT , PTU0_OUT , PTV4_OUT , PTV3_OUT , PTV2_OUT , PTV1_OUT , PTV0_OUT , PTW5_OUT , PTW4_OUT , PTW3_OUT , PTW2_OUT , PTW1_OUT , PTW0_OUT , PTX6_OUT , PTX5_OUT , PTX4_OUT , PTX3_OUT , PTX2_OUT , PTX1_OUT , PTX0_OUT , PTY5_OUT , PTY4_OUT , PTY3_OUT , PTY2_OUT , PTY1_OUT , PTY0_OUT , PINMUX_OUTPUT_END , PINMUX_MARK_BEGIN , SCIF0_TXD_MARK , SCIF0_RXD_MARK , SCIF0_RTS_MARK , SCIF0_CTS_MARK , SCIF0_SCK_MARK , SCIF1_TXD_MARK , SCIF1_RXD_MARK , SCIF1_RTS_MARK , SCIF1_CTS_MARK , SCIF1_SCK_MARK , SCIF2_TXD_MARK , SCIF2_RXD_MARK , SCIF2_RTS_MARK , SCIF2_CTS_MARK , SCIF2_SCK_MARK , SIOTXD_MARK , SIORXD_MARK , SIOD_MARK , SIOSTRB0_MARK , SIOSTRB1_MARK , SIOSCK_MARK , SIOMCK_MARK , VIO_D15_MARK , VIO_D14_MARK , VIO_D13_MARK , VIO_D12_MARK , VIO_D11_MARK , VIO_D10_MARK , VIO_D9_MARK , VIO_D8_MARK , VIO_D7_MARK , VIO_D6_MARK , VIO_D5_MARK , VIO_D4_MARK , VIO_D3_MARK , VIO_D2_MARK , VIO_D1_MARK , VIO_D0_MARK , VIO_CLK_MARK , VIO_VD_MARK , VIO_HD_MARK , VIO_FLD_MARK , VIO_CKO_MARK , VIO_STEX_MARK , VIO_STEM_MARK , VIO_VD2_MARK , VIO_HD2_MARK , VIO_CLK2_MARK , LCDD23_MARK , LCDD22_MARK , LCDD21_MARK , LCDD20_MARK , LCDD19_MARK , LCDD18_MARK , LCDD17_MARK , LCDD16_MARK , LCDD15_MARK , LCDD14_MARK , LCDD13_MARK , LCDD12_MARK , LCDD11_MARK , LCDD10_MARK , LCDD9_MARK , LCDD8_MARK , LCDD7_MARK , LCDD6_MARK , LCDD5_MARK , LCDD4_MARK , LCDD3_MARK , LCDD2_MARK , LCDD1_MARK , LCDD0_MARK , LCDLCLK_MARK , LCDDON_MARK , LCDVCPWC_MARK , LCDVEPWC_MARK , LCDVSYN_MARK , LCDDCK_MARK , LCDHSYN_MARK , LCDDISP_MARK , LCDRS_MARK , LCDCS_MARK , LCDWR_MARK , LCDRD_MARK , LCDDON2_MARK , LCDVCPWC2_MARK , LCDVEPWC2_MARK , LCDVSYN2_MARK , LCDCS2_MARK , IOIS16_MARK , A25_MARK , A24_MARK , A23_MARK , A22_MARK , BS_MARK , CS6B_CE1B_MARK , WAIT_MARK , CS6A_CE2B_MARK , HPD63_MARK , HPD62_MARK , HPD61_MARK , HPD60_MARK , HPD59_MARK , HPD58_MARK , HPD57_MARK , HPD56_MARK , HPD55_MARK , HPD54_MARK , HPD53_MARK , HPD52_MARK , HPD51_MARK , HPD50_MARK , HPD49_MARK , HPD48_MARK , HPDQM7_MARK , HPDQM6_MARK , HPDQM5_MARK , HPDQM4_MARK , IRQ0_MARK , IRQ1_MARK , IRQ2_MARK , IRQ3_MARK , IRQ4_MARK , IRQ5_MARK , IRQ6_MARK , IRQ7_MARK , SDHICD_MARK , SDHIWP_MARK , SDHID3_MARK , SDHID2_MARK , SDHID1_MARK , SDHID0_MARK , SDHICMD_MARK , SDHICLK_MARK , SIUAOLR_MARK , SIUAOBT_MARK , SIUAISLD_MARK , SIUAILR_MARK , SIUAIBT_MARK , SIUAOSLD_MARK , SIUMCKA_MARK , SIUFCKA_MARK , SIUBOLR_MARK , SIUBOBT_MARK , SIUBISLD_MARK , SIUBILR_MARK , SIUBIBT_MARK , SIUBOSLD_MARK , SIUMCKB_MARK , SIUFCKB_MARK , AUDSYNC_MARK , AUDATA3_MARK , AUDATA2_MARK , AUDATA1_MARK , AUDATA0_MARK , DACK_MARK , DREQ0_MARK , DV_CLKI_MARK , DV_CLK_MARK , DV_HSYNC_MARK , DV_VSYNC_MARK , DV_D15_MARK , DV_D14_MARK , DV_D13_MARK , DV_D12_MARK , DV_D11_MARK , DV_D10_MARK , DV_D9_MARK , DV_D8_MARK , DV_D7_MARK , DV_D6_MARK , DV_D5_MARK , DV_D4_MARK , DV_D3_MARK , DV_D2_MARK , DV_D1_MARK , DV_D0_MARK , STATUS0_MARK , PDSTATUS_MARK , SIOF0_MCK_MARK , SIOF0_SCK_MARK , SIOF0_SYNC_MARK , SIOF0_SS1_MARK , SIOF0_SS2_MARK , SIOF0_TXD_MARK , SIOF0_RXD_MARK , SIOF1_MCK_MARK , SIOF1_SCK_MARK , SIOF1_SYNC_MARK , SIOF1_SS1_MARK , SIOF1_SS2_MARK , SIOF1_TXD_MARK , SIOF1_RXD_MARK , SIM_D_MARK , SIM_CLK_MARK , SIM_RST_MARK , TS_SDAT_MARK , TS_SCK_MARK , TS_SDEN_MARK , TS_SPSYNC_MARK , IRDA_IN_MARK , IRDA_OUT_MARK , TPUTO_MARK , FCE_MARK , NAF7_MARK , NAF6_MARK , NAF5_MARK , NAF4_MARK , NAF3_MARK , NAF2_MARK , NAF1_MARK , NAF0_MARK , FCDE_MARK , FOE_MARK , FSC_MARK , FWE_MARK , FRB_MARK , KEYIN0_MARK , KEYIN1_MARK , KEYIN2_MARK , KEYIN3_MARK , KEYIN4_MARK , KEYOUT0_MARK , KEYOUT1_MARK , KEYOUT2_MARK , KEYOUT3_MARK , KEYOUT4_IN6_MARK , KEYOUT5_IN5_MARK , PINMUX_MARK_END , PINMUX_FUNCTION_BEGIN , VIO_D7_SCIF1_SCK , VIO_D6_SCIF1_RXD , VIO_D5_SCIF1_TXD , VIO_D4 , VIO_D3 , VIO_D2 , VIO_D1 , VIO_D0_LCDLCLK , HPD55 , HPD54 , HPD53 , HPD52 , HPD51 , HPD50 , HPD49 , HPD48 , IOIS16 , HPDQM7 , HPDQM6 , HPDQM5 , HPDQM4 , SDHICD , SDHIWP , SDHID3 , IRQ2_SDHID2 , SDHID1 , SDHID0 , SDHICMD , SDHICLK , A25 , A24 , A23 , A22 , IRQ5 , IRQ4_BS , PTF6 , SIOSCK_SIUBOBT , SIOSTRB1_SIUBOLR , SIOSTRB0_SIUBIBT , SIOD_SIUBILR , SIORXD_SIUBISLD , SIOTXD_SIUBOSLD , AUDSYNC , AUDATA3 , AUDATA2 , AUDATA1 , AUDATA0 , LCDVCPWC_LCDVCPWC2 , LCDVSYN2_DACK , LCDVSYN , LCDDISP_LCDRS , LCDHSYN_LCDCS , LCDDON_LCDDON2 , LCDD17_DV_HSYNC , LCDD16_DV_VSYNC , STATUS0 , PDSTATUS , IRQ1 , IRQ0 , SIUAILR_SIOF1_SS2 , SIUAIBT_SIOF1_SS1 , SIUAOLR_SIOF1_SYNC , SIUAOBT_SIOF1_SCK , SIUAISLD_SIOF1_RXD , SIUAOSLD_SIOF1_TXD , PTK0 , LCDD15_DV_D15 , LCDD14_DV_D14 , LCDD13_DV_D13 , LCDD12_DV_D12 , LCDD11_DV_D11 , LCDD10_DV_D10 , LCDD9_DV_D9 , LCDD8_DV_D8 , LCDD7_DV_D7 , LCDD6_DV_D6 , LCDD5_DV_D5 , LCDD4_DV_D4 , LCDD3_DV_D3 , LCDD2_DV_D2 , LCDD1_DV_D1 , LCDD0_DV_D0 , HPD63 , HPD62 , HPD61 , HPD60 , HPD59 , HPD58 , HPD57 , HPD56 , SIOF0_SS2_SIM_RST , SIOF0_SS1_TS_SPSYNC , SIOF0_SYNC_TS_SDEN , SIOF0_SCK_TS_SCK , PTQ2 , PTQ1 , PTQ0 , LCDRD , CS6B_CE1B_LCDCS2 , WAIT , LCDDCK_LCDWR , LCDVEPWC_LCDVEPWC2 , SCIF0_CTS_SIUAISPD , SCIF0_RTS_SIUAOSPD , SCIF0_SCK_TPUTO , SCIF0_RXD , SCIF0_TXD , FOE_VIO_VD2 , FWE , FSC , DREQ0 , FCDE , NAF2_VIO_D10 , NAF1_VIO_D9 , NAF0_VIO_D8 , FRB_VIO_CLK2 , FCE_VIO_HD2 , NAF7_VIO_D15 , NAF6_VIO_D14 , NAF5_VIO_D13 , NAF4_VIO_D12 , NAF3_VIO_D11 , VIO_FLD_SCIF2_CTS , VIO_CKO_SCIF2_RTS , VIO_STEX_SCIF2_SCK , VIO_STEM_SCIF2_TXD , VIO_HD_SCIF2_RXD , VIO_VD_SCIF1_CTS , VIO_CLK_SCIF1_RTS , CS6A_CE2B , LCDD23 , LCDD22 , LCDD21 , LCDD20 , LCDD19_DV_CLKI , LCDD18_DV_CLK , KEYOUT5_IN5 , KEYOUT4_IN6 , KEYOUT3 , KEYOUT2 , KEYOUT1 , KEYOUT0 , KEYIN4_IRQ7 , KEYIN3 , KEYIN2 , KEYIN1 , KEYIN0_IRQ6 , PSA15_KEYIN0 , PSA15_IRQ6 , PSA14_KEYIN4 , PSA14_IRQ7 , PSA9_IRQ4 , PSA9_BS , PSA4_IRQ2 , PSA4_SDHID2 , PSB15_SIOTXD , PSB15_SIUBOSLD , PSB14_SIORXD , PSB14_SIUBISLD , PSB13_SIOD , PSB13_SIUBILR , PSB12_SIOSTRB0 , PSB12_SIUBIBT , PSB11_SIOSTRB1 , PSB11_SIUBOLR , PSB10_SIOSCK , PSB10_SIUBOBT , PSB9_SIOMCK , PSB9_SIUMCKB , PSB8_SIOF0_MCK , PSB8_IRQ3 , PSB7_SIOF0_TXD , PSB7_IRDA_OUT , PSB6_SIOF0_RXD , PSB6_IRDA_IN , PSB5_SIOF0_SCK , PSB5_TS_SCK , PSB4_SIOF0_SYNC , PSB4_TS_SDEN , PSB3_SIOF0_SS1 , PSB3_TS_SPSYNC , PSB2_SIOF0_SS2 , PSB2_SIM_RST , PSB1_SIUMCKA , PSB1_SIOF1_MCK , PSB0_SIUAOSLD , PSB0_SIOF1_TXD , PSC15_SIUAISLD , PSC15_SIOF1_RXD , PSC14_SIUAOBT , PSC14_SIOF1_SCK , PSC13_SIUAOLR , PSC13_SIOF1_SYNC , PSC12_SIUAIBT , PSC12_SIOF1_SS1 , PSC11_SIUAILR , PSC11_SIOF1_SS2 , PSC0_NAF , PSC0_VIO , PSD13_VIO , PSD13_SCIF2 , PSD12_VIO , PSD12_SCIF1 , PSD11_VIO , PSD11_SCIF1 , PSD10_VIO_D0 , PSD10_LCDLCLK , PSD9_SIOMCK_SIUMCKB , PSD9_SIUFCKB , PSD8_SCIF0_SCK , PSD8_TPUTO , PSD7_SCIF0_RTS , PSD7_SIUAOSPD , PSD6_SCIF0_CTS , PSD6_SIUAISPD , PSD5_CS6B_CE1B , PSD5_LCDCS2 , PSD3_LCDVEPWC_LCDVCPWC , PSD3_LCDVEPWC2_LCDVCPWC2 , PSD2_LCDDON , PSD2_LCDDON2 , PSD0_LCDD19_LCDD0 , PSD0_DV , PSE15_SIOF0_MCK_IRQ3 , PSE15_SIM_D , PSE14_SIOF0_TXD_IRDA_OUT , PSE14_SIM_CLK , PSE13_SIOF0_RXD_IRDA_IN , PSE13_TS_SDAT , PSE12_LCDVSYN2 , PSE12_DACK , PSE11_SIUMCKA_SIOF1_MCK , PSE11_SIUFCKA , PSE3_FLCTL , PSE3_VIO , PSE2_NAF2 , PSE2_VIO_D10 , PSE1_NAF1 , PSE1_VIO_D9 , PSE0_NAF0 , PSE0_VIO_D8 , HIZA14_KEYSC , HIZA14_HIZ , HIZA10_NAF , HIZA10_HIZ , HIZA9_VIO , HIZA9_HIZ , HIZA8_LCDC , HIZA8_HIZ , HIZA7_LCDC , HIZA7_HIZ , HIZA6_LCDC , HIZA6_HIZ , HIZB4_SIUA , HIZB4_HIZ , HIZB1_VIO , HIZB1_HIZ , HIZB0_VIO , HIZB0_HIZ , HIZC15_IRQ7 , HIZC15_HIZ , HIZC14_IRQ6 , HIZC14_HIZ , HIZC13_IRQ5 , HIZC13_HIZ , HIZC12_IRQ4 , HIZC12_HIZ , HIZC11_IRQ3 , HIZC11_HIZ , HIZC10_IRQ2 , HIZC10_HIZ , HIZC9_IRQ1 , HIZC9_HIZ , HIZC8_IRQ0 , HIZC8_HIZ , MSELB9_VIO , MSELB9_VIO2 , MSELB8_RGB , MSELB8_SYS , PINMUX_FUNCTION_END , } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 const struct sh_pfc_pin cocci_id@p [ ] ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
typedef u16;
@@
 const u16 cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7]
for i in rules:
    if i not in rule_matches:
        print("FAILED %s: NO MATCHES" % (str(i)))
        continue
    elif rule_matches[i]['correct_lines']:
        if rule_matches[i]['other_lines']:
            print("PASSED %s: CORRECT MATCHES: %s INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines']), str(rule_matches[i]['other_lines'])))
        else:
            print("PASSED %s: CORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines'])))
    elif rule_matches[i]['other_lines']:
        print("FAILED %s: INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['other_lines'])))
    else:
        print("UNDEFINED %s" % str(i))

print("Total Number of cases: %s" % str(len(rules)))