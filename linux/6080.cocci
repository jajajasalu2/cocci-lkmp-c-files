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
if p[0].line in ['6']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum imx6sx_pads { MX6Sx_PAD_RESERVE0 = 0 , MX6Sx_PAD_RESERVE1 = 1 , MX6Sx_PAD_RESERVE2 = 2 , MX6Sx_PAD_RESERVE3 = 3 , MX6Sx_PAD_RESERVE4 = 4 , MX6SX_PAD_GPIO1_IO00 = 5 , MX6SX_PAD_GPIO1_IO01 = 6 , MX6SX_PAD_GPIO1_IO02 = 7 , MX6SX_PAD_GPIO1_IO03 = 8 , MX6SX_PAD_GPIO1_IO04 = 9 , MX6SX_PAD_GPIO1_IO05 = 10 , MX6SX_PAD_GPIO1_IO06 = 11 , MX6SX_PAD_GPIO1_IO07 = 12 , MX6SX_PAD_GPIO1_IO08 = 13 , MX6SX_PAD_GPIO1_IO09 = 14 , MX6SX_PAD_GPIO1_IO10 = 15 , MX6SX_PAD_GPIO1_IO11 = 16 , MX6SX_PAD_GPIO1_IO12 = 17 , MX6SX_PAD_GPIO1_IO13 = 18 , MX6SX_PAD_CSI_DATA00 = 19 , MX6SX_PAD_CSI_DATA01 = 20 , MX6SX_PAD_CSI_DATA02 = 21 , MX6SX_PAD_CSI_DATA03 = 22 , MX6SX_PAD_CSI_DATA04 = 23 , MX6SX_PAD_CSI_DATA05 = 24 , MX6SX_PAD_CSI_DATA06 = 25 , MX6SX_PAD_CSI_DATA07 = 26 , MX6SX_PAD_CSI_HSYNC = 27 , MX6SX_PAD_CSI_MCLK = 28 , MX6SX_PAD_CSI_PIXCLK = 29 , MX6SX_PAD_CSI_VSYNC = 30 , MX6SX_PAD_ENET1_COL = 31 , MX6SX_PAD_ENET1_CRS = 32 , MX6SX_PAD_ENET1_MDC = 33 , MX6SX_PAD_ENET1_MDIO = 34 , MX6SX_PAD_ENET1_RX_CLK = 35 , MX6SX_PAD_ENET1_TX_CLK = 36 , MX6SX_PAD_ENET2_COL = 37 , MX6SX_PAD_ENET2_CRS = 38 , MX6SX_PAD_ENET2_RX_CLK = 39 , MX6SX_PAD_ENET2_TX_CLK = 40 , MX6SX_PAD_KEY_COL0 = 41 , MX6SX_PAD_KEY_COL1 = 42 , MX6SX_PAD_KEY_COL2 = 43 , MX6SX_PAD_KEY_COL3 = 44 , MX6SX_PAD_KEY_COL4 = 45 , MX6SX_PAD_KEY_ROW0 = 46 , MX6SX_PAD_KEY_ROW1 = 47 , MX6SX_PAD_KEY_ROW2 = 48 , MX6SX_PAD_KEY_ROW3 = 49 , MX6SX_PAD_KEY_ROW4 = 50 , MX6SX_PAD_LCD1_CLK = 51 , MX6SX_PAD_LCD1_DATA00 = 52 , MX6SX_PAD_LCD1_DATA01 = 53 , MX6SX_PAD_LCD1_DATA02 = 54 , MX6SX_PAD_LCD1_DATA03 = 55 , MX6SX_PAD_LCD1_DATA04 = 56 , MX6SX_PAD_LCD1_DATA05 = 57 , MX6SX_PAD_LCD1_DATA06 = 58 , MX6SX_PAD_LCD1_DATA07 = 59 , MX6SX_PAD_LCD1_DATA08 = 60 , MX6SX_PAD_LCD1_DATA09 = 61 , MX6SX_PAD_LCD1_DATA10 = 62 , MX6SX_PAD_LCD1_DATA11 = 63 , MX6SX_PAD_LCD1_DATA12 = 64 , MX6SX_PAD_LCD1_DATA13 = 65 , MX6SX_PAD_LCD1_DATA14 = 66 , MX6SX_PAD_LCD1_DATA15 = 67 , MX6SX_PAD_LCD1_DATA16 = 68 , MX6SX_PAD_LCD1_DATA17 = 69 , MX6SX_PAD_LCD1_DATA18 = 70 , MX6SX_PAD_LCD1_DATA19 = 71 , MX6SX_PAD_LCD1_DATA20 = 72 , MX6SX_PAD_LCD1_DATA21 = 73 , MX6SX_PAD_LCD1_DATA22 = 74 , MX6SX_PAD_LCD1_DATA23 = 75 , MX6SX_PAD_LCD1_ENABLE = 76 , MX6SX_PAD_LCD1_HSYNC = 77 , MX6SX_PAD_LCD1_RESET = 78 , MX6SX_PAD_LCD1_VSYNC = 79 , MX6SX_PAD_NAND_ALE = 80 , MX6SX_PAD_NAND_CE0_B = 81 , MX6SX_PAD_NAND_CE1_B = 82 , MX6SX_PAD_NAND_CLE = 83 , MX6SX_PAD_NAND_DATA00 = 84 , MX6SX_PAD_NAND_DATA01 = 85 , MX6SX_PAD_NAND_DATA02 = 86 , MX6SX_PAD_NAND_DATA03 = 87 , MX6SX_PAD_NAND_DATA04 = 88 , MX6SX_PAD_NAND_DATA05 = 89 , MX6SX_PAD_NAND_DATA06 = 90 , MX6SX_PAD_NAND_DATA07 = 91 , MX6SX_PAD_NAND_RE_B = 92 , MX6SX_PAD_NAND_READY_B = 93 , MX6SX_PAD_NAND_WE_B = 94 , MX6SX_PAD_NAND_WP_B = 95 , MX6SX_PAD_QSPI1A_DATA0 = 96 , MX6SX_PAD_QSPI1A_DATA1 = 97 , MX6SX_PAD_QSPI1A_DATA2 = 98 , MX6SX_PAD_QSPI1A_DATA3 = 99 , MX6SX_PAD_QSPI1A_DQS = 100 , MX6SX_PAD_QSPI1A_SCLK = 101 , MX6SX_PAD_QSPI1A_SS0_B = 102 , MX6SX_PAD_QSPI1A_SS1_B = 103 , MX6SX_PAD_QSPI1B_DATA0 = 104 , MX6SX_PAD_QSPI1B_DATA1 = 105 , MX6SX_PAD_QSPI1B_DATA2 = 106 , MX6SX_PAD_QSPI1B_DATA3 = 107 , MX6SX_PAD_QSPI1B_DQS = 108 , MX6SX_PAD_QSPI1B_SCLK = 109 , MX6SX_PAD_QSPI1B_SS0_B = 110 , MX6SX_PAD_QSPI1B_SS1_B = 111 , MX6SX_PAD_RGMII1_RD0 = 112 , MX6SX_PAD_RGMII1_RD1 = 113 , MX6SX_PAD_RGMII1_RD2 = 114 , MX6SX_PAD_RGMII1_RD3 = 115 , MX6SX_PAD_RGMII1_RX_CTL = 116 , MX6SX_PAD_RGMII1_RXC = 117 , MX6SX_PAD_RGMII1_TD0 = 118 , MX6SX_PAD_RGMII1_TD1 = 119 , MX6SX_PAD_RGMII1_TD2 = 120 , MX6SX_PAD_RGMII1_TD3 = 121 , MX6SX_PAD_RGMII1_TX_CTL = 122 , MX6SX_PAD_RGMII1_TXC = 123 , MX6SX_PAD_RGMII2_RD0 = 124 , MX6SX_PAD_RGMII2_RD1 = 125 , MX6SX_PAD_RGMII2_RD2 = 126 , MX6SX_PAD_RGMII2_RD3 = 127 , MX6SX_PAD_RGMII2_RX_CTL = 128 , MX6SX_PAD_RGMII2_RXC = 129 , MX6SX_PAD_RGMII2_TD0 = 130 , MX6SX_PAD_RGMII2_TD1 = 131 , MX6SX_PAD_RGMII2_TD2 = 132 , MX6SX_PAD_RGMII2_TD3 = 133 , MX6SX_PAD_RGMII2_TX_CTL = 134 , MX6SX_PAD_RGMII2_TXC = 135 , MX6SX_PAD_SD1_CLK = 136 , MX6SX_PAD_SD1_CMD = 137 , MX6SX_PAD_SD1_DATA0 = 138 , MX6SX_PAD_SD1_DATA1 = 139 , MX6SX_PAD_SD1_DATA2 = 140 , MX6SX_PAD_SD1_DATA3 = 141 , MX6SX_PAD_SD2_CLK = 142 , MX6SX_PAD_SD2_CMD = 143 , MX6SX_PAD_SD2_DATA0 = 144 , MX6SX_PAD_SD2_DATA1 = 145 , MX6SX_PAD_SD2_DATA2 = 146 , MX6SX_PAD_SD2_DATA3 = 147 , MX6SX_PAD_SD3_CLK = 148 , MX6SX_PAD_SD3_CMD = 149 , MX6SX_PAD_SD3_DATA0 = 150 , MX6SX_PAD_SD3_DATA1 = 151 , MX6SX_PAD_SD3_DATA2 = 152 , MX6SX_PAD_SD3_DATA3 = 153 , MX6SX_PAD_SD3_DATA4 = 154 , MX6SX_PAD_SD3_DATA5 = 155 , MX6SX_PAD_SD3_DATA6 = 156 , MX6SX_PAD_SD3_DATA7 = 157 , MX6SX_PAD_SD4_CLK = 158 , MX6SX_PAD_SD4_CMD = 159 , MX6SX_PAD_SD4_DATA0 = 160 , MX6SX_PAD_SD4_DATA1 = 161 , MX6SX_PAD_SD4_DATA2 = 162 , MX6SX_PAD_SD4_DATA3 = 163 , MX6SX_PAD_SD4_DATA4 = 164 , MX6SX_PAD_SD4_DATA5 = 165 , MX6SX_PAD_SD4_DATA6 = 166 , MX6SX_PAD_SD4_DATA7 = 167 , MX6SX_PAD_SD4_RESET_B = 168 , MX6SX_PAD_USB_H_DATA = 169 , MX6SX_PAD_USB_H_STROBE = 170 , } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
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
if p[0].line in ['5']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
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
if p[0].line in ['7']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct imx_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8]
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
