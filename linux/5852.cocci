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
if p[0].line in ['5']:
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
if p[0].line in ['4']:
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
if p[0].line in ['3']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PA7_DATA , PA6_DATA , PA5_DATA , PA4_DATA , PA3_DATA , PA2_DATA , PA1_DATA , PA0_DATA , PB7_DATA , PB6_DATA , PB5_DATA , PB4_DATA , PB3_DATA , PB2_DATA , PB1_DATA , PB0_DATA , PC7_DATA , PC6_DATA , PC5_DATA , PC4_DATA , PC3_DATA , PC2_DATA , PC1_DATA , PC0_DATA , PD7_DATA , PD6_DATA , PD5_DATA , PD4_DATA , PD3_DATA , PD2_DATA , PD1_DATA , PD0_DATA , PE7_DATA , PE6_DATA , PF7_DATA , PF6_DATA , PF5_DATA , PF4_DATA , PF3_DATA , PF2_DATA , PF1_DATA , PF0_DATA , PG7_DATA , PG6_DATA , PG5_DATA , PH7_DATA , PH6_DATA , PH5_DATA , PH4_DATA , PH3_DATA , PH2_DATA , PH1_DATA , PH0_DATA , PJ7_DATA , PJ6_DATA , PJ5_DATA , PJ4_DATA , PJ3_DATA , PJ2_DATA , PJ1_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , PA7_IN , PA6_IN , PA5_IN , PA4_IN , PA3_IN , PA2_IN , PA1_IN , PA0_IN , PB7_IN , PB6_IN , PB5_IN , PB4_IN , PB3_IN , PB2_IN , PB1_IN , PB0_IN , PC7_IN , PC6_IN , PC5_IN , PC4_IN , PC3_IN , PC2_IN , PC1_IN , PC0_IN , PD7_IN , PD6_IN , PD5_IN , PD4_IN , PD3_IN , PD2_IN , PD1_IN , PD0_IN , PE7_IN , PE6_IN , PF7_IN , PF6_IN , PF5_IN , PF4_IN , PF3_IN , PF2_IN , PF1_IN , PF0_IN , PG7_IN , PG6_IN , PG5_IN , PH7_IN , PH6_IN , PH5_IN , PH4_IN , PH3_IN , PH2_IN , PH1_IN , PH0_IN , PJ7_IN , PJ6_IN , PJ5_IN , PJ4_IN , PJ3_IN , PJ2_IN , PJ1_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , PA7_OUT , PA6_OUT , PA5_OUT , PA4_OUT , PA3_OUT , PA2_OUT , PA1_OUT , PA0_OUT , PB7_OUT , PB6_OUT , PB5_OUT , PB4_OUT , PB3_OUT , PB2_OUT , PB1_OUT , PB0_OUT , PC7_OUT , PC6_OUT , PC5_OUT , PC4_OUT , PC3_OUT , PC2_OUT , PC1_OUT , PC0_OUT , PD7_OUT , PD6_OUT , PD5_OUT , PD4_OUT , PD3_OUT , PD2_OUT , PD1_OUT , PD0_OUT , PE7_OUT , PE6_OUT , PF7_OUT , PF6_OUT , PF5_OUT , PF4_OUT , PF3_OUT , PF2_OUT , PF1_OUT , PF0_OUT , PG7_OUT , PG6_OUT , PG5_OUT , PH7_OUT , PH6_OUT , PH5_OUT , PH4_OUT , PH3_OUT , PH2_OUT , PH1_OUT , PH0_OUT , PJ7_OUT , PJ6_OUT , PJ5_OUT , PJ4_OUT , PJ3_OUT , PJ2_OUT , PJ1_OUT , PINMUX_OUTPUT_END , PINMUX_FUNCTION_BEGIN , PA7_FN , PA6_FN , PA5_FN , PA4_FN , PA3_FN , PA2_FN , PA1_FN , PA0_FN , PB7_FN , PB6_FN , PB5_FN , PB4_FN , PB3_FN , PB2_FN , PB1_FN , PB0_FN , PC7_FN , PC6_FN , PC5_FN , PC4_FN , PC3_FN , PC2_FN , PC1_FN , PC0_FN , PD7_FN , PD6_FN , PD5_FN , PD4_FN , PD3_FN , PD2_FN , PD1_FN , PD0_FN , PE7_FN , PE6_FN , PF7_FN , PF6_FN , PF5_FN , PF4_FN , PF3_FN , PF2_FN , PF1_FN , PF0_FN , PG7_FN , PG6_FN , PG5_FN , PH7_FN , PH6_FN , PH5_FN , PH4_FN , PH3_FN , PH2_FN , PH1_FN , PH0_FN , PJ7_FN , PJ6_FN , PJ5_FN , PJ4_FN , PJ3_FN , PJ2_FN , PJ1_FN , P1MSEL14_0 , P1MSEL14_1 , P1MSEL13_0 , P1MSEL13_1 , P1MSEL12_0 , P1MSEL12_1 , P1MSEL11_0 , P1MSEL11_1 , P1MSEL10_0 , P1MSEL10_1 , P1MSEL9_0 , P1MSEL9_1 , P1MSEL8_0 , P1MSEL8_1 , P1MSEL7_0 , P1MSEL7_1 , P1MSEL6_0 , P1MSEL6_1 , P1MSEL5_0 , P1MSEL5_1 , P1MSEL4_0 , P1MSEL4_1 , P1MSEL3_0 , P1MSEL3_1 , P1MSEL2_0 , P1MSEL2_1 , P1MSEL1_0 , P1MSEL1_1 , P1MSEL0_0 , P1MSEL0_1 , P2MSEL15_0 , P2MSEL15_1 , P2MSEL14_0 , P2MSEL14_1 , P2MSEL13_0 , P2MSEL13_1 , P2MSEL12_0 , P2MSEL12_1 , P2MSEL11_0 , P2MSEL11_1 , P2MSEL10_0 , P2MSEL10_1 , P2MSEL9_0 , P2MSEL9_1 , P2MSEL8_0 , P2MSEL8_1 , P2MSEL7_0 , P2MSEL7_1 , P2MSEL6_0 , P2MSEL6_1 , P2MSEL5_0 , P2MSEL5_1 , P2MSEL4_0 , P2MSEL4_1 , P2MSEL3_0 , P2MSEL3_1 , P2MSEL2_0 , P2MSEL2_1 , P2MSEL1_0 , P2MSEL1_1 , P2MSEL0_0 , P2MSEL0_1 , PINMUX_FUNCTION_END , PINMUX_MARK_BEGIN , DCLKIN_MARK , DCLKOUT_MARK , ODDF_MARK , VSYNC_MARK , HSYNC_MARK , CDE_MARK , DISP_MARK , DR0_MARK , DR1_MARK , DR2_MARK , DR3_MARK , DR4_MARK , DR5_MARK , DG0_MARK , DG1_MARK , DG2_MARK , DG3_MARK , DG4_MARK , DG5_MARK , DB0_MARK , DB1_MARK , DB2_MARK , DB3_MARK , DB4_MARK , DB5_MARK , ETH_MAGIC_MARK , ETH_LINK_MARK , ETH_TX_ER_MARK , ETH_TX_EN_MARK , ETH_MDIO_MARK , ETH_RX_CLK_MARK , ETH_MDC_MARK , ETH_COL_MARK , ETH_TX_CLK_MARK , ETH_CRS_MARK , ETH_RX_DV_MARK , ETH_RX_ER_MARK , ETH_TXD3_MARK , ETH_TXD2_MARK , ETH_TXD1_MARK , ETH_TXD0_MARK , ETH_RXD3_MARK , ETH_RXD2_MARK , ETH_RXD1_MARK , ETH_RXD0_MARK , HSPI_CLK_MARK , HSPI_CS_MARK , HSPI_RX_MARK , HSPI_TX_MARK , SCIF0_CTS_MARK , SCIF0_RTS_MARK , SCIF0_SCK_MARK , SCIF0_RXD_MARK , SCIF0_TXD_MARK , SCIF1_SCK_MARK , SCIF1_RXD_MARK , SCIF1_TXD_MARK , SCIF3_SCK_MARK , SCIF3_RXD_MARK , SCIF3_TXD_MARK , SCIF4_SCK_MARK , SCIF4_RXD_MARK , SCIF4_TXD_MARK , SCIF5_SCK_MARK , SCIF5_RXD_MARK , SCIF5_TXD_MARK , BREQ_MARK , IOIS16_MARK , CE2B_MARK , CE2A_MARK , BACK_MARK , FALE_MARK , FRB_MARK , FSTATUS_MARK , FSE_MARK , FCLE_MARK , DACK0_MARK , DACK1_MARK , DACK2_MARK , DACK3_MARK , DREQ0_MARK , DREQ1_MARK , DREQ2_MARK , DREQ3_MARK , DRAK0_MARK , DRAK1_MARK , DRAK2_MARK , DRAK3_MARK , USB_OVC1_MARK , USB_OVC0_MARK , USB_PENC1_MARK , USB_PENC0_MARK , HAC_RES_MARK , HAC1_SDOUT_MARK , HAC1_SDIN_MARK , HAC1_SYNC_MARK , HAC1_BITCLK_MARK , HAC0_SDOUT_MARK , HAC0_SDIN_MARK , HAC0_SYNC_MARK , HAC0_BITCLK_MARK , SSI0_SDATA_MARK , SSI0_SCK_MARK , SSI0_WS_MARK , SSI0_CLK_MARK , SSI1_SDATA_MARK , SSI1_SCK_MARK , SSI1_WS_MARK , SSI1_CLK_MARK , SSI2_SDATA_MARK , SSI2_SCK_MARK , SSI2_WS_MARK , SSI3_SDATA_MARK , SSI3_SCK_MARK , SSI3_WS_MARK , SDIF1CMD_MARK , SDIF1CD_MARK , SDIF1WP_MARK , SDIF1CLK_MARK , SDIF1D3_MARK , SDIF1D2_MARK , SDIF1D1_MARK , SDIF1D0_MARK , SDIF0CMD_MARK , SDIF0CD_MARK , SDIF0WP_MARK , SDIF0CLK_MARK , SDIF0D3_MARK , SDIF0D2_MARK , SDIF0D1_MARK , SDIF0D0_MARK , TCLK_MARK , IRL7_MARK , IRL6_MARK , IRL5_MARK , IRL4_MARK , PINMUX_MARK_END , } cocci_id@p ;

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
 const struct sh_pfc_soc_info cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
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
if p[0].line in ['6']:
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
if p[0].line in ['8']:
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