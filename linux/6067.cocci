@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 const struct mxs_regs cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

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
 enum imx28_pin_enum { GPMI_D00 = PINID ( 0 , 0 ) , GPMI_D01 = PINID ( 0 , 1 ) , GPMI_D02 = PINID ( 0 , 2 ) , GPMI_D03 = PINID ( 0 , 3 ) , GPMI_D04 = PINID ( 0 , 4 ) , GPMI_D05 = PINID ( 0 , 5 ) , GPMI_D06 = PINID ( 0 , 6 ) , GPMI_D07 = PINID ( 0 , 7 ) , GPMI_CE0N = PINID ( 0 , 16 ) , GPMI_CE1N = PINID ( 0 , 17 ) , GPMI_CE2N = PINID ( 0 , 18 ) , GPMI_CE3N = PINID ( 0 , 19 ) , GPMI_RDY0 = PINID ( 0 , 20 ) , GPMI_RDY1 = PINID ( 0 , 21 ) , GPMI_RDY2 = PINID ( 0 , 22 ) , GPMI_RDY3 = PINID ( 0 , 23 ) , GPMI_RDN = PINID ( 0 , 24 ) , GPMI_WRN = PINID ( 0 , 25 ) , GPMI_ALE = PINID ( 0 , 26 ) , GPMI_CLE = PINID ( 0 , 27 ) , GPMI_RESETN = PINID ( 0 , 28 ) , LCD_D00 = PINID ( 1 , 0 ) , LCD_D01 = PINID ( 1 , 1 ) , LCD_D02 = PINID ( 1 , 2 ) , LCD_D03 = PINID ( 1 , 3 ) , LCD_D04 = PINID ( 1 , 4 ) , LCD_D05 = PINID ( 1 , 5 ) , LCD_D06 = PINID ( 1 , 6 ) , LCD_D07 = PINID ( 1 , 7 ) , LCD_D08 = PINID ( 1 , 8 ) , LCD_D09 = PINID ( 1 , 9 ) , LCD_D10 = PINID ( 1 , 10 ) , LCD_D11 = PINID ( 1 , 11 ) , LCD_D12 = PINID ( 1 , 12 ) , LCD_D13 = PINID ( 1 , 13 ) , LCD_D14 = PINID ( 1 , 14 ) , LCD_D15 = PINID ( 1 , 15 ) , LCD_D16 = PINID ( 1 , 16 ) , LCD_D17 = PINID ( 1 , 17 ) , LCD_D18 = PINID ( 1 , 18 ) , LCD_D19 = PINID ( 1 , 19 ) , LCD_D20 = PINID ( 1 , 20 ) , LCD_D21 = PINID ( 1 , 21 ) , LCD_D22 = PINID ( 1 , 22 ) , LCD_D23 = PINID ( 1 , 23 ) , LCD_RD_E = PINID ( 1 , 24 ) , LCD_WR_RWN = PINID ( 1 , 25 ) , LCD_RS = PINID ( 1 , 26 ) , LCD_CS = PINID ( 1 , 27 ) , LCD_VSYNC = PINID ( 1 , 28 ) , LCD_HSYNC = PINID ( 1 , 29 ) , LCD_DOTCLK = PINID ( 1 , 30 ) , LCD_ENABLE = PINID ( 1 , 31 ) , SSP0_DATA0 = PINID ( 2 , 0 ) , SSP0_DATA1 = PINID ( 2 , 1 ) , SSP0_DATA2 = PINID ( 2 , 2 ) , SSP0_DATA3 = PINID ( 2 , 3 ) , SSP0_DATA4 = PINID ( 2 , 4 ) , SSP0_DATA5 = PINID ( 2 , 5 ) , SSP0_DATA6 = PINID ( 2 , 6 ) , SSP0_DATA7 = PINID ( 2 , 7 ) , SSP0_CMD = PINID ( 2 , 8 ) , SSP0_DETECT = PINID ( 2 , 9 ) , SSP0_SCK = PINID ( 2 , 10 ) , SSP1_SCK = PINID ( 2 , 12 ) , SSP1_CMD = PINID ( 2 , 13 ) , SSP1_DATA0 = PINID ( 2 , 14 ) , SSP1_DATA3 = PINID ( 2 , 15 ) , SSP2_SCK = PINID ( 2 , 16 ) , SSP2_MOSI = PINID ( 2 , 17 ) , SSP2_MISO = PINID ( 2 , 18 ) , SSP2_SS0 = PINID ( 2 , 19 ) , SSP2_SS1 = PINID ( 2 , 20 ) , SSP2_SS2 = PINID ( 2 , 21 ) , SSP3_SCK = PINID ( 2 , 24 ) , SSP3_MOSI = PINID ( 2 , 25 ) , SSP3_MISO = PINID ( 2 , 26 ) , SSP3_SS0 = PINID ( 2 , 27 ) , AUART0_RX = PINID ( 3 , 0 ) , AUART0_TX = PINID ( 3 , 1 ) , AUART0_CTS = PINID ( 3 , 2 ) , AUART0_RTS = PINID ( 3 , 3 ) , AUART1_RX = PINID ( 3 , 4 ) , AUART1_TX = PINID ( 3 , 5 ) , AUART1_CTS = PINID ( 3 , 6 ) , AUART1_RTS = PINID ( 3 , 7 ) , AUART2_RX = PINID ( 3 , 8 ) , AUART2_TX = PINID ( 3 , 9 ) , AUART2_CTS = PINID ( 3 , 10 ) , AUART2_RTS = PINID ( 3 , 11 ) , AUART3_RX = PINID ( 3 , 12 ) , AUART3_TX = PINID ( 3 , 13 ) , AUART3_CTS = PINID ( 3 , 14 ) , AUART3_RTS = PINID ( 3 , 15 ) , PWM0 = PINID ( 3 , 16 ) , PWM1 = PINID ( 3 , 17 ) , PWM2 = PINID ( 3 , 18 ) , SAIF0_MCLK = PINID ( 3 , 20 ) , SAIF0_LRCLK = PINID ( 3 , 21 ) , SAIF0_BITCLK = PINID ( 3 , 22 ) , SAIF0_SDATA0 = PINID ( 3 , 23 ) , I2C0_SCL = PINID ( 3 , 24 ) , I2C0_SDA = PINID ( 3 , 25 ) , SAIF1_SDATA0 = PINID ( 3 , 26 ) , SPDIF = PINID ( 3 , 27 ) , PWM3 = PINID ( 3 , 28 ) , PWM4 = PINID ( 3 , 29 ) , LCD_RESET = PINID ( 3 , 30 ) , ENET0_MDC = PINID ( 4 , 0 ) , ENET0_MDIO = PINID ( 4 , 1 ) , ENET0_RX_EN = PINID ( 4 , 2 ) , ENET0_RXD0 = PINID ( 4 , 3 ) , ENET0_RXD1 = PINID ( 4 , 4 ) , ENET0_TX_CLK = PINID ( 4 , 5 ) , ENET0_TX_EN = PINID ( 4 , 6 ) , ENET0_TXD0 = PINID ( 4 , 7 ) , ENET0_TXD1 = PINID ( 4 , 8 ) , ENET0_RXD2 = PINID ( 4 , 9 ) , ENET0_RXD3 = PINID ( 4 , 10 ) , ENET0_TXD2 = PINID ( 4 , 11 ) , ENET0_TXD3 = PINID ( 4 , 12 ) , ENET0_RX_CLK = PINID ( 4 , 13 ) , ENET0_COL = PINID ( 4 , 14 ) , ENET0_CRS = PINID ( 4 , 15 ) , ENET_CLK = PINID ( 4 , 16 ) , JTAG_RTCK = PINID ( 4 , 20 ) , EMI_D00 = PINID ( 5 , 0 ) , EMI_D01 = PINID ( 5 , 1 ) , EMI_D02 = PINID ( 5 , 2 ) , EMI_D03 = PINID ( 5 , 3 ) , EMI_D04 = PINID ( 5 , 4 ) , EMI_D05 = PINID ( 5 , 5 ) , EMI_D06 = PINID ( 5 , 6 ) , EMI_D07 = PINID ( 5 , 7 ) , EMI_D08 = PINID ( 5 , 8 ) , EMI_D09 = PINID ( 5 , 9 ) , EMI_D10 = PINID ( 5 , 10 ) , EMI_D11 = PINID ( 5 , 11 ) , EMI_D12 = PINID ( 5 , 12 ) , EMI_D13 = PINID ( 5 , 13 ) , EMI_D14 = PINID ( 5 , 14 ) , EMI_D15 = PINID ( 5 , 15 ) , EMI_ODT0 = PINID ( 5 , 16 ) , EMI_DQM0 = PINID ( 5 , 17 ) , EMI_ODT1 = PINID ( 5 , 18 ) , EMI_DQM1 = PINID ( 5 , 19 ) , EMI_DDR_OPEN_FB = PINID ( 5 , 20 ) , EMI_CLK = PINID ( 5 , 21 ) , EMI_DQS0 = PINID ( 5 , 22 ) , EMI_DQS1 = PINID ( 5 , 23 ) , EMI_DDR_OPEN = PINID ( 5 , 26 ) , EMI_A00 = PINID ( 6 , 0 ) , EMI_A01 = PINID ( 6 , 1 ) , EMI_A02 = PINID ( 6 , 2 ) , EMI_A03 = PINID ( 6 , 3 ) , EMI_A04 = PINID ( 6 , 4 ) , EMI_A05 = PINID ( 6 , 5 ) , EMI_A06 = PINID ( 6 , 6 ) , EMI_A07 = PINID ( 6 , 7 ) , EMI_A08 = PINID ( 6 , 8 ) , EMI_A09 = PINID ( 6 , 9 ) , EMI_A10 = PINID ( 6 , 10 ) , EMI_A11 = PINID ( 6 , 11 ) , EMI_A12 = PINID ( 6 , 12 ) , EMI_A13 = PINID ( 6 , 13 ) , EMI_A14 = PINID ( 6 , 14 ) , EMI_BA0 = PINID ( 6 , 16 ) , EMI_BA1 = PINID ( 6 , 17 ) , EMI_BA2 = PINID ( 6 , 18 ) , EMI_CASN = PINID ( 6 , 19 ) , EMI_RASN = PINID ( 6 , 20 ) , EMI_WEN = PINID ( 6 , 21 ) , EMI_CE0N = PINID ( 6 , 22 ) , EMI_CE1N = PINID ( 6 , 23 ) , EMI_CKE = PINID ( 6 , 24 ) , } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11', '184']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct mxs_pinctrl_soc_data cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9]
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
