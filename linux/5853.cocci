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
if p[0].line in ['3']:
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
if p[0].line in ['2']:
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
if p[0].line in ['8']:
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
if p[0].line in ['7']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PTA7_DATA , PTA6_DATA , PTA5_DATA , PTA4_DATA , PTA3_DATA , PTA2_DATA , PTA1_DATA , PTA0_DATA , PTB7_DATA , PTB6_DATA , PTB5_DATA , PTB4_DATA , PTB3_DATA , PTB2_DATA , PTB1_DATA , PTB0_DATA , PTC7_DATA , PTC6_DATA , PTC5_DATA , PTC4_DATA , PTC3_DATA , PTC2_DATA , PTC1_DATA , PTC0_DATA , PTD7_DATA , PTD6_DATA , PTD5_DATA , PTD4_DATA , PTD3_DATA , PTD2_DATA , PTD1_DATA , PTD0_DATA , PTE6_DATA , PTE5_DATA , PTE4_DATA , PTE3_DATA , PTE2_DATA , PTE1_DATA , PTE0_DATA , PTF6_DATA , PTF5_DATA , PTF4_DATA , PTF3_DATA , PTF2_DATA , PTF1_DATA , PTF0_DATA , PTG6_DATA , PTG5_DATA , PTG4_DATA , PTG3_DATA , PTG2_DATA , PTG1_DATA , PTG0_DATA , PTH6_DATA , PTH5_DATA , PTH4_DATA , PTH3_DATA , PTH2_DATA , PTH1_DATA , PTH0_DATA , PTJ6_DATA , PTJ5_DATA , PTJ4_DATA , PTJ3_DATA , PTJ2_DATA , PTJ1_DATA , PTJ0_DATA , PTK3_DATA , PTK2_DATA , PTK1_DATA , PTK0_DATA , PTL7_DATA , PTL6_DATA , PTL5_DATA , PTL4_DATA , PTL3_DATA , PTM7_DATA , PTM6_DATA , PTM5_DATA , PTM4_DATA , PTM3_DATA , PTM2_DATA , PTM1_DATA , PTM0_DATA , PTP4_DATA , PTP3_DATA , PTP2_DATA , PTP1_DATA , PTP0_DATA , PTR7_DATA , PTR6_DATA , PTR5_DATA , PTR4_DATA , PTR3_DATA , PTR2_DATA , PTR1_DATA , PTR0_DATA , PTS4_DATA , PTS3_DATA , PTS2_DATA , PTS1_DATA , PTS0_DATA , PTT4_DATA , PTT3_DATA , PTT2_DATA , PTT1_DATA , PTT0_DATA , PTU4_DATA , PTU3_DATA , PTU2_DATA , PTU1_DATA , PTU0_DATA , PTV4_DATA , PTV3_DATA , PTV2_DATA , PTV1_DATA , PTV0_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , PTA7_IN , PTA6_IN , PTA5_IN , PTA4_IN , PTA3_IN , PTA2_IN , PTA1_IN , PTA0_IN , PTB7_IN , PTB6_IN , PTB5_IN , PTB4_IN , PTB3_IN , PTB2_IN , PTB1_IN , PTB0_IN , PTC7_IN , PTC6_IN , PTC5_IN , PTC4_IN , PTC3_IN , PTC2_IN , PTC1_IN , PTC0_IN , PTD7_IN , PTD6_IN , PTD5_IN , PTD4_IN , PTD3_IN , PTD2_IN , PTD1_IN , PTD0_IN , PTE6_IN , PTE5_IN , PTE4_IN , PTE3_IN , PTE2_IN , PTE1_IN , PTE0_IN , PTF6_IN , PTF5_IN , PTF4_IN , PTF3_IN , PTF2_IN , PTF1_IN , PTF0_IN , PTG6_IN , PTG5_IN , PTG4_IN , PTG3_IN , PTG2_IN , PTG1_IN , PTG0_IN , PTH6_IN , PTH5_IN , PTH4_IN , PTH3_IN , PTH2_IN , PTH1_IN , PTH0_IN , PTJ6_IN , PTJ5_IN , PTJ4_IN , PTJ3_IN , PTJ2_IN , PTJ1_IN , PTJ0_IN , PTK3_IN , PTK2_IN , PTK1_IN , PTK0_IN , PTL7_IN , PTL6_IN , PTL5_IN , PTL4_IN , PTL3_IN , PTM7_IN , PTM6_IN , PTM5_IN , PTM4_IN , PTM3_IN , PTM2_IN , PTM1_IN , PTM0_IN , PTP4_IN , PTP3_IN , PTP2_IN , PTP1_IN , PTP0_IN , PTR7_IN , PTR6_IN , PTR5_IN , PTR4_IN , PTR3_IN , PTR2_IN , PTR1_IN , PTR0_IN , PTS4_IN , PTS3_IN , PTS2_IN , PTS1_IN , PTS0_IN , PTT4_IN , PTT3_IN , PTT2_IN , PTT1_IN , PTT0_IN , PTU4_IN , PTU3_IN , PTU2_IN , PTU1_IN , PTU0_IN , PTV4_IN , PTV3_IN , PTV2_IN , PTV1_IN , PTV0_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , PTA7_OUT , PTA6_OUT , PTA5_OUT , PTA4_OUT , PTA3_OUT , PTA2_OUT , PTA1_OUT , PTA0_OUT , PTB7_OUT , PTB6_OUT , PTB5_OUT , PTB4_OUT , PTB3_OUT , PTB2_OUT , PTB1_OUT , PTB0_OUT , PTC7_OUT , PTC6_OUT , PTC5_OUT , PTC4_OUT , PTC3_OUT , PTC2_OUT , PTC1_OUT , PTC0_OUT , PTD7_OUT , PTD6_OUT , PTD5_OUT , PTD4_OUT , PTD3_OUT , PTD2_OUT , PTD1_OUT , PTD0_OUT , PTE4_OUT , PTE3_OUT , PTE2_OUT , PTE1_OUT , PTE0_OUT , PTF0_OUT , PTG6_OUT , PTG5_OUT , PTG4_OUT , PTG3_OUT , PTG2_OUT , PTG1_OUT , PTG0_OUT , PTH6_OUT , PTH5_OUT , PTH4_OUT , PTH3_OUT , PTH2_OUT , PTH1_OUT , PTH0_OUT , PTJ6_OUT , PTJ5_OUT , PTJ4_OUT , PTJ3_OUT , PTJ2_OUT , PTJ1_OUT , PTJ0_OUT , PTK3_OUT , PTK2_OUT , PTK1_OUT , PTK0_OUT , PTL7_OUT , PTL6_OUT , PTL5_OUT , PTL4_OUT , PTL3_OUT , PTM7_OUT , PTM6_OUT , PTM5_OUT , PTM4_OUT , PTM3_OUT , PTM2_OUT , PTM1_OUT , PTM0_OUT , PTP4_OUT , PTP3_OUT , PTP2_OUT , PTP1_OUT , PTP0_OUT , PTR7_OUT , PTR6_OUT , PTR5_OUT , PTR4_OUT , PTR3_OUT , PTR2_OUT , PTR1_OUT , PTR0_OUT , PTS4_OUT , PTS3_OUT , PTS2_OUT , PTS1_OUT , PTS0_OUT , PTT4_OUT , PTT3_OUT , PTT2_OUT , PTT1_OUT , PTT0_OUT , PTU4_OUT , PTU3_OUT , PTU2_OUT , PTU1_OUT , PTU0_OUT , PTV4_OUT , PTV3_OUT , PTV2_OUT , PTV1_OUT , PTV0_OUT , PINMUX_OUTPUT_END , PINMUX_FUNCTION_BEGIN , PTA7_FN , PTA6_FN , PTA5_FN , PTA4_FN , PTA3_FN , PTA2_FN , PTA1_FN , PTA0_FN , PTB7_FN , PTB6_FN , PTB5_FN , PTB4_FN , PTB3_FN , PTB2_FN , PTB1_FN , PTB0_FN , PTC7_FN , PTC6_FN , PTC5_FN , PTC4_FN , PTC3_FN , PTC2_FN , PTC1_FN , PTC0_FN , PTD7_FN , PTD6_FN , PTD5_FN , PTD4_FN , PTD3_FN , PTD2_FN , PTD1_FN , PTD0_FN , PTE6_FN , PTE5_FN , PTE4_FN , PTE3_FN , PTE2_FN , PTE1_FN , PTE0_FN , PTF6_FN , PTF5_FN , PTF4_FN , PTF3_FN , PTF2_FN , PTF1_FN , PTF0_FN , PTG6_FN , PTG5_FN , PTG4_FN , PTG3_FN , PTG2_FN , PTG1_FN , PTG0_FN , PTH6_FN , PTH5_FN , PTH4_FN , PTH3_FN , PTH2_FN , PTH1_FN , PTH0_FN , PTJ6_FN , PTJ5_FN , PTJ4_FN , PTJ3_FN , PTJ2_FN , PTJ1_FN , PTJ0_FN , PTK3_FN , PTK2_FN , PTK1_FN , PTK0_FN , PTL7_FN , PTL6_FN , PTL5_FN , PTL4_FN , PTL3_FN , PTM7_FN , PTM6_FN , PTM5_FN , PTM4_FN , PTM3_FN , PTM2_FN , PTM1_FN , PTM0_FN , PTP4_FN , PTP3_FN , PTP2_FN , PTP1_FN , PTP0_FN , PTR7_FN , PTR6_FN , PTR5_FN , PTR4_FN , PTR3_FN , PTR2_FN , PTR1_FN , PTR0_FN , PTS4_FN , PTS3_FN , PTS2_FN , PTS1_FN , PTS0_FN , PTT4_FN , PTT3_FN , PTT2_FN , PTT1_FN , PTT0_FN , PTU4_FN , PTU3_FN , PTU2_FN , PTU1_FN , PTU0_FN , PTV4_FN , PTV3_FN , PTV2_FN , PTV1_FN , PTV0_FN , PSELA_1_0_00 , PSELA_1_0_01 , PSELA_1_0_10 , PSELA_3_2_00 , PSELA_3_2_01 , PSELA_3_2_10 , PSELA_3_2_11 , PSELA_5_4_00 , PSELA_5_4_01 , PSELA_5_4_10 , PSELA_5_4_11 , PSELA_7_6_00 , PSELA_7_6_01 , PSELA_7_6_10 , PSELA_9_8_00 , PSELA_9_8_01 , PSELA_9_8_10 , PSELA_11_10_00 , PSELA_11_10_01 , PSELA_11_10_10 , PSELA_13_12_00 , PSELA_13_12_10 , PSELA_15_14_00 , PSELA_15_14_10 , PSELB_9_8_00 , PSELB_9_8_11 , PSELB_11_10_00 , PSELB_11_10_01 , PSELB_11_10_10 , PSELB_11_10_11 , PSELB_13_12_00 , PSELB_13_12_01 , PSELB_13_12_10 , PSELB_13_12_11 , PSELB_15_14_00 , PSELB_15_14_11 , PSELC_9_8_00 , PSELC_9_8_10 , PSELC_11_10_00 , PSELC_11_10_10 , PSELC_13_12_00 , PSELC_13_12_01 , PSELC_13_12_10 , PSELC_15_14_00 , PSELC_15_14_01 , PSELC_15_14_10 , PSELD_1_0_00 , PSELD_1_0_10 , PSELD_11_10_00 , PSELD_11_10_01 , PSELD_15_14_00 , PSELD_15_14_01 , PSELD_15_14_10 , PINMUX_FUNCTION_END , PINMUX_MARK_BEGIN , D31_MARK , D30_MARK , D29_MARK , D28_MARK , D27_MARK , D26_MARK , D25_MARK , D24_MARK , D23_MARK , D22_MARK , D21_MARK , D20_MARK , D19_MARK , D18_MARK , D17_MARK , D16_MARK , IOIS16_MARK , RAS_MARK , CAS_MARK , CKE_MARK , CS5B_CE1A_MARK , CS6B_CE1B_MARK , A25_MARK , A24_MARK , A23_MARK , A22_MARK , A21_MARK , A20_MARK , A19_MARK , A0_MARK , REFOUT_MARK , IRQOUT_MARK , LCD_DATA15_MARK , LCD_DATA14_MARK , LCD_DATA13_MARK , LCD_DATA12_MARK , LCD_DATA11_MARK , LCD_DATA10_MARK , LCD_DATA9_MARK , LCD_DATA8_MARK , LCD_DATA7_MARK , LCD_DATA6_MARK , LCD_DATA5_MARK , LCD_DATA4_MARK , LCD_DATA3_MARK , LCD_DATA2_MARK , LCD_DATA1_MARK , LCD_DATA0_MARK , LCD_M_DISP_MARK , LCD_CL1_MARK , LCD_CL2_MARK , LCD_DON_MARK , LCD_FLM_MARK , LCD_VEPWC_MARK , LCD_VCPWC_MARK , AFE_RXIN_MARK , AFE_RDET_MARK , AFE_FS_MARK , AFE_TXOUT_MARK , AFE_SCLK_MARK , AFE_RLYCNT_MARK , AFE_HC1_MARK , IIC_SCL_MARK , IIC_SDA_MARK , DA1_MARK , DA0_MARK , AN3_MARK , AN2_MARK , AN1_MARK , AN0_MARK , ADTRG_MARK , USB1D_RCV_MARK , USB1D_TXSE0_MARK , USB1D_TXDPLS_MARK , USB1D_DMNS_MARK , USB1D_DPLS_MARK , USB1D_SPEED_MARK , USB1D_TXENL_MARK , USB2_PWR_EN_MARK , USB1_PWR_EN_USBF_UPLUP_MARK , USB1D_SUSPEND_MARK , IRQ5_MARK , IRQ4_MARK , IRQ3_IRL3_MARK , IRQ2_IRL2_MARK , IRQ1_IRL1_MARK , IRQ0_IRL0_MARK , PCC_REG_MARK , PCC_DRV_MARK , PCC_BVD2_MARK , PCC_BVD1_MARK , PCC_CD2_MARK , PCC_CD1_MARK , PCC_RESET_MARK , PCC_RDY_MARK , PCC_VS2_MARK , PCC_VS1_MARK , AUDATA3_MARK , AUDATA2_MARK , AUDATA1_MARK , AUDATA0_MARK , AUDCK_MARK , AUDSYNC_MARK , ASEBRKAK_MARK , TRST_MARK , TMS_MARK , TDO_MARK , TDI_MARK , TCK_MARK , DACK1_MARK , DREQ1_MARK , DACK0_MARK , DREQ0_MARK , TEND1_MARK , TEND0_MARK , SIOF0_SYNC_MARK , SIOF0_MCLK_MARK , SIOF0_TXD_MARK , SIOF0_RXD_MARK , SIOF0_SCK_MARK , SIOF1_SYNC_MARK , SIOF1_MCLK_MARK , SIOF1_TXD_MARK , SIOF1_RXD_MARK , SIOF1_SCK_MARK , SCIF0_TXD_MARK , SCIF0_RXD_MARK , SCIF0_RTS_MARK , SCIF0_CTS_MARK , SCIF0_SCK_MARK , SCIF1_TXD_MARK , SCIF1_RXD_MARK , SCIF1_RTS_MARK , SCIF1_CTS_MARK , SCIF1_SCK_MARK , TPU_TO1_MARK , TPU_TO0_MARK , TPU_TI3B_MARK , TPU_TI3A_MARK , TPU_TI2B_MARK , TPU_TI2A_MARK , TPU_TO3_MARK , TPU_TO2_MARK , SIM_D_MARK , SIM_CLK_MARK , SIM_RST_MARK , MMC_DAT_MARK , MMC_CMD_MARK , MMC_CLK_MARK , MMC_VDDON_MARK , MMC_ODMOD_MARK , STATUS0_MARK , STATUS1_MARK , PINMUX_MARK_END , } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
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
