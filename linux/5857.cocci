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
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PA7_DATA , PA6_DATA , PA5_DATA , PA4_DATA , PA3_DATA , PA2_DATA , PA1_DATA , PA0_DATA , PB7_DATA , PB6_DATA , PB5_DATA , PB4_DATA , PB3_DATA , PB2_DATA , PB1_DATA , PB0_DATA , PC7_DATA , PC6_DATA , PC5_DATA , PC4_DATA , PC3_DATA , PC2_DATA , PC1_DATA , PC0_DATA , PD7_DATA , PD6_DATA , PD5_DATA , PD4_DATA , PD3_DATA , PD2_DATA , PD1_DATA , PD0_DATA , PE5_DATA , PE4_DATA , PE3_DATA , PE2_DATA , PE1_DATA , PE0_DATA , PF7_DATA , PF6_DATA , PF5_DATA , PF4_DATA , PF3_DATA , PF2_DATA , PF1_DATA , PF0_DATA , PG7_DATA , PG6_DATA , PG5_DATA , PG4_DATA , PG3_DATA , PG2_DATA , PG1_DATA , PG0_DATA , PH7_DATA , PH6_DATA , PH5_DATA , PH4_DATA , PH3_DATA , PH2_DATA , PH1_DATA , PH0_DATA , PJ7_DATA , PJ6_DATA , PJ5_DATA , PJ4_DATA , PJ3_DATA , PJ2_DATA , PJ1_DATA , PJ0_DATA , PK7_DATA , PK6_DATA , PK5_DATA , PK4_DATA , PK3_DATA , PK2_DATA , PK1_DATA , PK0_DATA , PL7_DATA , PL6_DATA , PL5_DATA , PL4_DATA , PL3_DATA , PL2_DATA , PL1_DATA , PL0_DATA , PM1_DATA , PM0_DATA , PN7_DATA , PN6_DATA , PN5_DATA , PN4_DATA , PN3_DATA , PN2_DATA , PN1_DATA , PN0_DATA , PP5_DATA , PP4_DATA , PP3_DATA , PP2_DATA , PP1_DATA , PP0_DATA , PQ4_DATA , PQ3_DATA , PQ2_DATA , PQ1_DATA , PQ0_DATA , PR3_DATA , PR2_DATA , PR1_DATA , PR0_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , PA7_IN , PA6_IN , PA5_IN , PA4_IN , PA3_IN , PA2_IN , PA1_IN , PA0_IN , PB7_IN , PB6_IN , PB5_IN , PB4_IN , PB3_IN , PB2_IN , PB1_IN , PB0_IN , PC7_IN , PC6_IN , PC5_IN , PC4_IN , PC3_IN , PC2_IN , PC1_IN , PC0_IN , PD7_IN , PD6_IN , PD5_IN , PD4_IN , PD3_IN , PD2_IN , PD1_IN , PD0_IN , PE5_IN , PE4_IN , PE3_IN , PE2_IN , PE1_IN , PE0_IN , PF7_IN , PF6_IN , PF5_IN , PF4_IN , PF3_IN , PF2_IN , PF1_IN , PF0_IN , PG7_IN , PG6_IN , PG5_IN , PG4_IN , PG3_IN , PG2_IN , PG1_IN , PG0_IN , PH7_IN , PH6_IN , PH5_IN , PH4_IN , PH3_IN , PH2_IN , PH1_IN , PH0_IN , PJ7_IN , PJ6_IN , PJ5_IN , PJ4_IN , PJ3_IN , PJ2_IN , PJ1_IN , PJ0_IN , PK7_IN , PK6_IN , PK5_IN , PK4_IN , PK3_IN , PK2_IN , PK1_IN , PK0_IN , PL7_IN , PL6_IN , PL5_IN , PL4_IN , PL3_IN , PL2_IN , PL1_IN , PL0_IN , PM1_IN , PM0_IN , PN7_IN , PN6_IN , PN5_IN , PN4_IN , PN3_IN , PN2_IN , PN1_IN , PN0_IN , PP5_IN , PP4_IN , PP3_IN , PP2_IN , PP1_IN , PP0_IN , PQ4_IN , PQ3_IN , PQ2_IN , PQ1_IN , PQ0_IN , PR3_IN , PR2_IN , PR1_IN , PR0_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , PA7_OUT , PA6_OUT , PA5_OUT , PA4_OUT , PA3_OUT , PA2_OUT , PA1_OUT , PA0_OUT , PB7_OUT , PB6_OUT , PB5_OUT , PB4_OUT , PB3_OUT , PB2_OUT , PB1_OUT , PB0_OUT , PC7_OUT , PC6_OUT , PC5_OUT , PC4_OUT , PC3_OUT , PC2_OUT , PC1_OUT , PC0_OUT , PD7_OUT , PD6_OUT , PD5_OUT , PD4_OUT , PD3_OUT , PD2_OUT , PD1_OUT , PD0_OUT , PE5_OUT , PE4_OUT , PE3_OUT , PE2_OUT , PE1_OUT , PE0_OUT , PF7_OUT , PF6_OUT , PF5_OUT , PF4_OUT , PF3_OUT , PF2_OUT , PF1_OUT , PF0_OUT , PG7_OUT , PG6_OUT , PG5_OUT , PG4_OUT , PG3_OUT , PG2_OUT , PG1_OUT , PG0_OUT , PH7_OUT , PH6_OUT , PH5_OUT , PH4_OUT , PH3_OUT , PH2_OUT , PH1_OUT , PH0_OUT , PJ7_OUT , PJ6_OUT , PJ5_OUT , PJ4_OUT , PJ3_OUT , PJ2_OUT , PJ1_OUT , PJ0_OUT , PK7_OUT , PK6_OUT , PK5_OUT , PK4_OUT , PK3_OUT , PK2_OUT , PK1_OUT , PK0_OUT , PL7_OUT , PL6_OUT , PL5_OUT , PL4_OUT , PL3_OUT , PL2_OUT , PL1_OUT , PL0_OUT , PM1_OUT , PM0_OUT , PN7_OUT , PN6_OUT , PN5_OUT , PN4_OUT , PN3_OUT , PN2_OUT , PN1_OUT , PN0_OUT , PP5_OUT , PP4_OUT , PP3_OUT , PP2_OUT , PP1_OUT , PP0_OUT , PQ4_OUT , PQ3_OUT , PQ2_OUT , PQ1_OUT , PQ0_OUT , PR3_OUT , PR2_OUT , PR1_OUT , PR0_OUT , PINMUX_OUTPUT_END , PINMUX_FUNCTION_BEGIN , PA7_FN , PA6_FN , PA5_FN , PA4_FN , PA3_FN , PA2_FN , PA1_FN , PA0_FN , PB7_FN , PB6_FN , PB5_FN , PB4_FN , PB3_FN , PB2_FN , PB1_FN , PB0_FN , PC7_FN , PC6_FN , PC5_FN , PC4_FN , PC3_FN , PC2_FN , PC1_FN , PC0_FN , PD7_FN , PD6_FN , PD5_FN , PD4_FN , PD3_FN , PD2_FN , PD1_FN , PD0_FN , PE5_FN , PE4_FN , PE3_FN , PE2_FN , PE1_FN , PE0_FN , PF7_FN , PF6_FN , PF5_FN , PF4_FN , PF3_FN , PF2_FN , PF1_FN , PF0_FN , PG7_FN , PG6_FN , PG5_FN , PG4_FN , PG3_FN , PG2_FN , PG1_FN , PG0_FN , PH7_FN , PH6_FN , PH5_FN , PH4_FN , PH3_FN , PH2_FN , PH1_FN , PH0_FN , PJ7_FN , PJ6_FN , PJ5_FN , PJ4_FN , PJ3_FN , PJ2_FN , PJ1_FN , PJ0_FN , PK7_FN , PK6_FN , PK5_FN , PK4_FN , PK3_FN , PK2_FN , PK1_FN , PK0_FN , PL7_FN , PL6_FN , PL5_FN , PL4_FN , PL3_FN , PL2_FN , PL1_FN , PL0_FN , PM1_FN , PM0_FN , PN7_FN , PN6_FN , PN5_FN , PN4_FN , PN3_FN , PN2_FN , PN1_FN , PN0_FN , PP5_FN , PP4_FN , PP3_FN , PP2_FN , PP1_FN , PP0_FN , PQ4_FN , PQ3_FN , PQ2_FN , PQ1_FN , PQ0_FN , PR3_FN , PR2_FN , PR1_FN , PR0_FN , P1MSEL15_0 , P1MSEL15_1 , P1MSEL14_0 , P1MSEL14_1 , P1MSEL13_0 , P1MSEL13_1 , P1MSEL12_0 , P1MSEL12_1 , P1MSEL11_0 , P1MSEL11_1 , P1MSEL10_0 , P1MSEL10_1 , P1MSEL9_0 , P1MSEL9_1 , P1MSEL8_0 , P1MSEL8_1 , P1MSEL7_0 , P1MSEL7_1 , P1MSEL6_0 , P1MSEL6_1 , P1MSEL5_0 , P1MSEL4_0 , P1MSEL4_1 , P1MSEL3_0 , P1MSEL3_1 , P1MSEL2_0 , P1MSEL2_1 , P1MSEL1_0 , P1MSEL1_1 , P1MSEL0_0 , P1MSEL0_1 , P2MSEL2_0 , P2MSEL2_1 , P2MSEL1_0 , P2MSEL1_1 , P2MSEL0_0 , P2MSEL0_1 , PINMUX_FUNCTION_END , PINMUX_MARK_BEGIN , D63_AD31_MARK , D62_AD30_MARK , D61_AD29_MARK , D60_AD28_MARK , D59_AD27_MARK , D58_AD26_MARK , D57_AD25_MARK , D56_AD24_MARK , D55_AD23_MARK , D54_AD22_MARK , D53_AD21_MARK , D52_AD20_MARK , D51_AD19_MARK , D50_AD18_MARK , D49_AD17_DB5_MARK , D48_AD16_DB4_MARK , D47_AD15_DB3_MARK , D46_AD14_DB2_MARK , D45_AD13_DB1_MARK , D44_AD12_DB0_MARK , D43_AD11_DG5_MARK , D42_AD10_DG4_MARK , D41_AD9_DG3_MARK , D40_AD8_DG2_MARK , D39_AD7_DG1_MARK , D38_AD6_DG0_MARK , D37_AD5_DR5_MARK , D36_AD4_DR4_MARK , D35_AD3_DR3_MARK , D34_AD2_DR2_MARK , D33_AD1_DR1_MARK , D32_AD0_DR0_MARK , REQ1_MARK , REQ2_MARK , REQ3_MARK , GNT1_MARK , GNT2_MARK , GNT3_MARK , MMCCLK_MARK , D31_MARK , D30_MARK , D29_MARK , D28_MARK , D27_MARK , D26_MARK , D25_MARK , D24_MARK , D23_MARK , D22_MARK , D21_MARK , D20_MARK , D19_MARK , D18_MARK , D17_MARK , D16_MARK , SCIF1_SCK_MARK , SCIF1_RXD_MARK , SCIF1_TXD_MARK , SCIF0_CTS_MARK , INTD_MARK , FCE_MARK , SCIF0_RTS_MARK , HSPI_CS_MARK , FSE_MARK , SCIF0_SCK_MARK , HSPI_CLK_MARK , FRE_MARK , SCIF0_RXD_MARK , HSPI_RX_MARK , FRB_MARK , SCIF0_TXD_MARK , HSPI_TX_MARK , FWE_MARK , SCIF5_TXD_MARK , HAC1_SYNC_MARK , SSI1_WS_MARK , SIOF_TXD_PJ_MARK , HAC0_SDOUT_MARK , SSI0_SDATA_MARK , SIOF_RXD_PJ_MARK , HAC0_SDIN_MARK , SSI0_SCK_MARK , SIOF_SYNC_PJ_MARK , HAC0_SYNC_MARK , SSI0_WS_MARK , SIOF_MCLK_PJ_MARK , HAC_RES_MARK , SIOF_SCK_PJ_MARK , HAC0_BITCLK_MARK , SSI0_CLK_MARK , HAC1_BITCLK_MARK , SSI1_CLK_MARK , TCLK_MARK , IOIS16_MARK , STATUS0_MARK , DRAK0_PK3_MARK , STATUS1_MARK , DRAK1_PK2_MARK , DACK2_MARK , SCIF2_TXD_MARK , MMCCMD_MARK , SIOF_TXD_PK_MARK , DACK3_MARK , SCIF2_SCK_MARK , MMCDAT_MARK , SIOF_SCK_PK_MARK , DREQ0_MARK , DREQ1_MARK , DRAK0_PK1_MARK , DRAK1_PK0_MARK , DREQ2_MARK , INTB_MARK , DREQ3_MARK , INTC_MARK , DRAK2_MARK , CE2A_MARK , IRL4_MARK , FD4_MARK , IRL5_MARK , FD5_MARK , IRL6_MARK , FD6_MARK , IRL7_MARK , FD7_MARK , DRAK3_MARK , CE2B_MARK , BREQ_BSACK_MARK , BACK_BSREQ_MARK , SCIF5_RXD_MARK , HAC1_SDIN_MARK , SSI1_SCK_MARK , SCIF5_SCK_MARK , HAC1_SDOUT_MARK , SSI1_SDATA_MARK , SCIF3_TXD_MARK , FCLE_MARK , SCIF3_RXD_MARK , FALE_MARK , SCIF3_SCK_MARK , FD0_MARK , SCIF4_TXD_MARK , FD1_MARK , SCIF4_RXD_MARK , FD2_MARK , SCIF4_SCK_MARK , FD3_MARK , DEVSEL_DCLKOUT_MARK , STOP_CDE_MARK , LOCK_ODDF_MARK , TRDY_DISPL_MARK , IRDY_HSYNC_MARK , PCIFRAME_VSYNC_MARK , INTA_MARK , GNT0_GNTIN_MARK , REQ0_REQOUT_MARK , PERR_MARK , SERR_MARK , WE7_CBE3_MARK , WE6_CBE2_MARK , WE5_CBE1_MARK , WE4_CBE0_MARK , SCIF2_RXD_MARK , SIOF_RXD_MARK , MRESETOUT_MARK , IRQOUT_MARK , PINMUX_MARK_END , } cocci_id@p ;

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