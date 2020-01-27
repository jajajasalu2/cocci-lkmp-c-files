@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 enum imx6ul_pads { MX6UL_PAD_RESERVE0 = 0 , MX6UL_PAD_RESERVE1 = 1 , MX6UL_PAD_RESERVE2 = 2 , MX6UL_PAD_RESERVE3 = 3 , MX6UL_PAD_RESERVE4 = 4 , MX6UL_PAD_RESERVE5 = 5 , MX6UL_PAD_RESERVE6 = 6 , MX6UL_PAD_RESERVE7 = 7 , MX6UL_PAD_RESERVE8 = 8 , MX6UL_PAD_RESERVE9 = 9 , MX6UL_PAD_RESERVE10 = 10 , MX6UL_PAD_SNVS_TAMPER4 = 11 , MX6UL_PAD_RESERVE12 = 12 , MX6UL_PAD_RESERVE13 = 13 , MX6UL_PAD_RESERVE14 = 14 , MX6UL_PAD_RESERVE15 = 15 , MX6UL_PAD_RESERVE16 = 16 , MX6UL_PAD_JTAG_MOD = 17 , MX6UL_PAD_JTAG_TMS = 18 , MX6UL_PAD_JTAG_TDO = 19 , MX6UL_PAD_JTAG_TDI = 20 , MX6UL_PAD_JTAG_TCK = 21 , MX6UL_PAD_JTAG_TRST_B = 22 , MX6UL_PAD_GPIO1_IO00 = 23 , MX6UL_PAD_GPIO1_IO01 = 24 , MX6UL_PAD_GPIO1_IO02 = 25 , MX6UL_PAD_GPIO1_IO03 = 26 , MX6UL_PAD_GPIO1_IO04 = 27 , MX6UL_PAD_GPIO1_IO05 = 28 , MX6UL_PAD_GPIO1_IO06 = 29 , MX6UL_PAD_GPIO1_IO07 = 30 , MX6UL_PAD_GPIO1_IO08 = 31 , MX6UL_PAD_GPIO1_IO09 = 32 , MX6UL_PAD_UART1_TX_DATA = 33 , MX6UL_PAD_UART1_RX_DATA = 34 , MX6UL_PAD_UART1_CTS_B = 35 , MX6UL_PAD_UART1_RTS_B = 36 , MX6UL_PAD_UART2_TX_DATA = 37 , MX6UL_PAD_UART2_RX_DATA = 38 , MX6UL_PAD_UART2_CTS_B = 39 , MX6UL_PAD_UART2_RTS_B = 40 , MX6UL_PAD_UART3_TX_DATA = 41 , MX6UL_PAD_UART3_RX_DATA = 42 , MX6UL_PAD_UART3_CTS_B = 43 , MX6UL_PAD_UART3_RTS_B = 44 , MX6UL_PAD_UART4_TX_DATA = 45 , MX6UL_PAD_UART4_RX_DATA = 46 , MX6UL_PAD_UART5_TX_DATA = 47 , MX6UL_PAD_UART5_RX_DATA = 48 , MX6UL_PAD_ENET1_RX_DATA0 = 49 , MX6UL_PAD_ENET1_RX_DATA1 = 50 , MX6UL_PAD_ENET1_RX_EN = 51 , MX6UL_PAD_ENET1_TX_DATA0 = 52 , MX6UL_PAD_ENET1_TX_DATA1 = 53 , MX6UL_PAD_ENET1_TX_EN = 54 , MX6UL_PAD_ENET1_TX_CLK = 55 , MX6UL_PAD_ENET1_RX_ER = 56 , MX6UL_PAD_ENET2_RX_DATA0 = 57 , MX6UL_PAD_ENET2_RX_DATA1 = 58 , MX6UL_PAD_ENET2_RX_EN = 59 , MX6UL_PAD_ENET2_TX_DATA0 = 60 , MX6UL_PAD_ENET2_TX_DATA1 = 61 , MX6UL_PAD_ENET2_TX_EN = 62 , MX6UL_PAD_ENET2_TX_CLK = 63 , MX6UL_PAD_ENET2_RX_ER = 64 , MX6UL_PAD_LCD_CLK = 65 , MX6UL_PAD_LCD_ENABLE = 66 , MX6UL_PAD_LCD_HSYNC = 67 , MX6UL_PAD_LCD_VSYNC = 68 , MX6UL_PAD_LCD_RESET = 69 , MX6UL_PAD_LCD_DATA00 = 70 , MX6UL_PAD_LCD_DATA01 = 71 , MX6UL_PAD_LCD_DATA02 = 72 , MX6UL_PAD_LCD_DATA03 = 73 , MX6UL_PAD_LCD_DATA04 = 74 , MX6UL_PAD_LCD_DATA05 = 75 , MX6UL_PAD_LCD_DATA06 = 76 , MX6UL_PAD_LCD_DATA07 = 77 , MX6UL_PAD_LCD_DATA08 = 78 , MX6UL_PAD_LCD_DATA09 = 79 , MX6UL_PAD_LCD_DATA10 = 80 , MX6UL_PAD_LCD_DATA11 = 81 , MX6UL_PAD_LCD_DATA12 = 82 , MX6UL_PAD_LCD_DATA13 = 83 , MX6UL_PAD_LCD_DATA14 = 84 , MX6UL_PAD_LCD_DATA15 = 85 , MX6UL_PAD_LCD_DATA16 = 86 , MX6UL_PAD_LCD_DATA17 = 87 , MX6UL_PAD_LCD_DATA18 = 88 , MX6UL_PAD_LCD_DATA19 = 89 , MX6UL_PAD_LCD_DATA20 = 90 , MX6UL_PAD_LCD_DATA21 = 91 , MX6UL_PAD_LCD_DATA22 = 92 , MX6UL_PAD_LCD_DATA23 = 93 , MX6UL_PAD_NAND_RE_B = 94 , MX6UL_PAD_NAND_WE_B = 95 , MX6UL_PAD_NAND_DATA00 = 96 , MX6UL_PAD_NAND_DATA01 = 97 , MX6UL_PAD_NAND_DATA02 = 98 , MX6UL_PAD_NAND_DATA03 = 99 , MX6UL_PAD_NAND_DATA04 = 100 , MX6UL_PAD_NAND_DATA05 = 101 , MX6UL_PAD_NAND_DATA06 = 102 , MX6UL_PAD_NAND_DATA07 = 103 , MX6UL_PAD_NAND_ALE = 104 , MX6UL_PAD_NAND_WP_B = 105 , MX6UL_PAD_NAND_READY_B = 106 , MX6UL_PAD_NAND_CE0_B = 107 , MX6UL_PAD_NAND_CE1_B = 108 , MX6UL_PAD_NAND_CLE = 109 , MX6UL_PAD_NAND_DQS = 110 , MX6UL_PAD_SD1_CMD = 111 , MX6UL_PAD_SD1_CLK = 112 , MX6UL_PAD_SD1_DATA0 = 113 , MX6UL_PAD_SD1_DATA1 = 114 , MX6UL_PAD_SD1_DATA2 = 115 , MX6UL_PAD_SD1_DATA3 = 116 , MX6UL_PAD_CSI_MCLK = 117 , MX6UL_PAD_CSI_PIXCLK = 118 , MX6UL_PAD_CSI_VSYNC = 119 , MX6UL_PAD_CSI_HSYNC = 120 , MX6UL_PAD_CSI_DATA00 = 121 , MX6UL_PAD_CSI_DATA01 = 122 , MX6UL_PAD_CSI_DATA02 = 123 , MX6UL_PAD_CSI_DATA03 = 124 , MX6UL_PAD_CSI_DATA04 = 125 , MX6UL_PAD_CSI_DATA05 = 126 , MX6UL_PAD_CSI_DATA06 = 127 , MX6UL_PAD_CSI_DATA07 = 128 , } cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

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
 enum imx6ull_lpsr_pads { MX6ULL_PAD_BOOT_MODE0 = 0 , MX6ULL_PAD_BOOT_MODE1 = 1 , MX6ULL_PAD_SNVS_TAMPER0 = 2 , MX6ULL_PAD_SNVS_TAMPER1 = 3 , MX6ULL_PAD_SNVS_TAMPER2 = 4 , MX6ULL_PAD_SNVS_TAMPER3 = 5 , MX6ULL_PAD_SNVS_TAMPER4 = 6 , MX6ULL_PAD_SNVS_TAMPER5 = 7 , MX6ULL_PAD_SNVS_TAMPER6 = 8 , MX6ULL_PAD_SNVS_TAMPER7 = 9 , MX6ULL_PAD_SNVS_TAMPER8 = 10 , MX6ULL_PAD_SNVS_TAMPER9 = 11 , } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct imx_pinctrl_soc_info * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 const struct imx_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
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
