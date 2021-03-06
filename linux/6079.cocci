@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 enum imx53_pads { MX53_PAD_RESERVE0 = 0 , MX53_PAD_RESERVE1 = 1 , MX53_PAD_RESERVE2 = 2 , MX53_PAD_RESERVE3 = 3 , MX53_PAD_RESERVE4 = 4 , MX53_PAD_RESERVE5 = 5 , MX53_PAD_RESERVE6 = 6 , MX53_PAD_RESERVE7 = 7 , MX53_PAD_GPIO_19 = 8 , MX53_PAD_KEY_COL0 = 9 , MX53_PAD_KEY_ROW0 = 10 , MX53_PAD_KEY_COL1 = 11 , MX53_PAD_KEY_ROW1 = 12 , MX53_PAD_KEY_COL2 = 13 , MX53_PAD_KEY_ROW2 = 14 , MX53_PAD_KEY_COL3 = 15 , MX53_PAD_KEY_ROW3 = 16 , MX53_PAD_KEY_COL4 = 17 , MX53_PAD_KEY_ROW4 = 18 , MX53_PAD_DI0_DISP_CLK = 19 , MX53_PAD_DI0_PIN15 = 20 , MX53_PAD_DI0_PIN2 = 21 , MX53_PAD_DI0_PIN3 = 22 , MX53_PAD_DI0_PIN4 = 23 , MX53_PAD_DISP0_DAT0 = 24 , MX53_PAD_DISP0_DAT1 = 25 , MX53_PAD_DISP0_DAT2 = 26 , MX53_PAD_DISP0_DAT3 = 27 , MX53_PAD_DISP0_DAT4 = 28 , MX53_PAD_DISP0_DAT5 = 29 , MX53_PAD_DISP0_DAT6 = 30 , MX53_PAD_DISP0_DAT7 = 31 , MX53_PAD_DISP0_DAT8 = 32 , MX53_PAD_DISP0_DAT9 = 33 , MX53_PAD_DISP0_DAT10 = 34 , MX53_PAD_DISP0_DAT11 = 35 , MX53_PAD_DISP0_DAT12 = 36 , MX53_PAD_DISP0_DAT13 = 37 , MX53_PAD_DISP0_DAT14 = 38 , MX53_PAD_DISP0_DAT15 = 39 , MX53_PAD_DISP0_DAT16 = 40 , MX53_PAD_DISP0_DAT17 = 41 , MX53_PAD_DISP0_DAT18 = 42 , MX53_PAD_DISP0_DAT19 = 43 , MX53_PAD_DISP0_DAT20 = 44 , MX53_PAD_DISP0_DAT21 = 45 , MX53_PAD_DISP0_DAT22 = 46 , MX53_PAD_DISP0_DAT23 = 47 , MX53_PAD_CSI0_PIXCLK = 48 , MX53_PAD_CSI0_MCLK = 49 , MX53_PAD_CSI0_DATA_EN = 50 , MX53_PAD_CSI0_VSYNC = 51 , MX53_PAD_CSI0_DAT4 = 52 , MX53_PAD_CSI0_DAT5 = 53 , MX53_PAD_CSI0_DAT6 = 54 , MX53_PAD_CSI0_DAT7 = 55 , MX53_PAD_CSI0_DAT8 = 56 , MX53_PAD_CSI0_DAT9 = 57 , MX53_PAD_CSI0_DAT10 = 58 , MX53_PAD_CSI0_DAT11 = 59 , MX53_PAD_CSI0_DAT12 = 60 , MX53_PAD_CSI0_DAT13 = 61 , MX53_PAD_CSI0_DAT14 = 62 , MX53_PAD_CSI0_DAT15 = 63 , MX53_PAD_CSI0_DAT16 = 64 , MX53_PAD_CSI0_DAT17 = 65 , MX53_PAD_CSI0_DAT18 = 66 , MX53_PAD_CSI0_DAT19 = 67 , MX53_PAD_EIM_A25 = 68 , MX53_PAD_EIM_EB2 = 69 , MX53_PAD_EIM_D16 = 70 , MX53_PAD_EIM_D17 = 71 , MX53_PAD_EIM_D18 = 72 , MX53_PAD_EIM_D19 = 73 , MX53_PAD_EIM_D20 = 74 , MX53_PAD_EIM_D21 = 75 , MX53_PAD_EIM_D22 = 76 , MX53_PAD_EIM_D23 = 77 , MX53_PAD_EIM_EB3 = 78 , MX53_PAD_EIM_D24 = 79 , MX53_PAD_EIM_D25 = 80 , MX53_PAD_EIM_D26 = 81 , MX53_PAD_EIM_D27 = 82 , MX53_PAD_EIM_D28 = 83 , MX53_PAD_EIM_D29 = 84 , MX53_PAD_EIM_D30 = 85 , MX53_PAD_EIM_D31 = 86 , MX53_PAD_EIM_A24 = 87 , MX53_PAD_EIM_A23 = 88 , MX53_PAD_EIM_A22 = 89 , MX53_PAD_EIM_A21 = 90 , MX53_PAD_EIM_A20 = 91 , MX53_PAD_EIM_A19 = 92 , MX53_PAD_EIM_A18 = 93 , MX53_PAD_EIM_A17 = 94 , MX53_PAD_EIM_A16 = 95 , MX53_PAD_EIM_CS0 = 96 , MX53_PAD_EIM_CS1 = 97 , MX53_PAD_EIM_OE = 98 , MX53_PAD_EIM_RW = 99 , MX53_PAD_EIM_LBA = 100 , MX53_PAD_EIM_EB0 = 101 , MX53_PAD_EIM_EB1 = 102 , MX53_PAD_EIM_DA0 = 103 , MX53_PAD_EIM_DA1 = 104 , MX53_PAD_EIM_DA2 = 105 , MX53_PAD_EIM_DA3 = 106 , MX53_PAD_EIM_DA4 = 107 , MX53_PAD_EIM_DA5 = 108 , MX53_PAD_EIM_DA6 = 109 , MX53_PAD_EIM_DA7 = 110 , MX53_PAD_EIM_DA8 = 111 , MX53_PAD_EIM_DA9 = 112 , MX53_PAD_EIM_DA10 = 113 , MX53_PAD_EIM_DA11 = 114 , MX53_PAD_EIM_DA12 = 115 , MX53_PAD_EIM_DA13 = 116 , MX53_PAD_EIM_DA14 = 117 , MX53_PAD_EIM_DA15 = 118 , MX53_PAD_NANDF_WE_B = 119 , MX53_PAD_NANDF_RE_B = 120 , MX53_PAD_EIM_WAIT = 121 , MX53_PAD_RESERVE8 = 122 , MX53_PAD_LVDS1_TX3_P = 123 , MX53_PAD_LVDS1_TX2_P = 124 , MX53_PAD_LVDS1_CLK_P = 125 , MX53_PAD_LVDS1_TX1_P = 126 , MX53_PAD_LVDS1_TX0_P = 127 , MX53_PAD_LVDS0_TX3_P = 128 , MX53_PAD_LVDS0_CLK_P = 129 , MX53_PAD_LVDS0_TX2_P = 130 , MX53_PAD_LVDS0_TX1_P = 131 , MX53_PAD_LVDS0_TX0_P = 132 , MX53_PAD_GPIO_10 = 133 , MX53_PAD_GPIO_11 = 134 , MX53_PAD_GPIO_12 = 135 , MX53_PAD_GPIO_13 = 136 , MX53_PAD_GPIO_14 = 137 , MX53_PAD_NANDF_CLE = 138 , MX53_PAD_NANDF_ALE = 139 , MX53_PAD_NANDF_WP_B = 140 , MX53_PAD_NANDF_RB0 = 141 , MX53_PAD_NANDF_CS0 = 142 , MX53_PAD_NANDF_CS1 = 143 , MX53_PAD_NANDF_CS2 = 144 , MX53_PAD_NANDF_CS3 = 145 , MX53_PAD_FEC_MDIO = 146 , MX53_PAD_FEC_REF_CLK = 147 , MX53_PAD_FEC_RX_ER = 148 , MX53_PAD_FEC_CRS_DV = 149 , MX53_PAD_FEC_RXD1 = 150 , MX53_PAD_FEC_RXD0 = 151 , MX53_PAD_FEC_TX_EN = 152 , MX53_PAD_FEC_TXD1 = 153 , MX53_PAD_FEC_TXD0 = 154 , MX53_PAD_FEC_MDC = 155 , MX53_PAD_PATA_DIOW = 156 , MX53_PAD_PATA_DMACK = 157 , MX53_PAD_PATA_DMARQ = 158 , MX53_PAD_PATA_BUFFER_EN = 159 , MX53_PAD_PATA_INTRQ = 160 , MX53_PAD_PATA_DIOR = 161 , MX53_PAD_PATA_RESET_B = 162 , MX53_PAD_PATA_IORDY = 163 , MX53_PAD_PATA_DA_0 = 164 , MX53_PAD_PATA_DA_1 = 165 , MX53_PAD_PATA_DA_2 = 166 , MX53_PAD_PATA_CS_0 = 167 , MX53_PAD_PATA_CS_1 = 168 , MX53_PAD_PATA_DATA0 = 169 , MX53_PAD_PATA_DATA1 = 170 , MX53_PAD_PATA_DATA2 = 171 , MX53_PAD_PATA_DATA3 = 172 , MX53_PAD_PATA_DATA4 = 173 , MX53_PAD_PATA_DATA5 = 174 , MX53_PAD_PATA_DATA6 = 175 , MX53_PAD_PATA_DATA7 = 176 , MX53_PAD_PATA_DATA8 = 177 , MX53_PAD_PATA_DATA9 = 178 , MX53_PAD_PATA_DATA10 = 179 , MX53_PAD_PATA_DATA11 = 180 , MX53_PAD_PATA_DATA12 = 181 , MX53_PAD_PATA_DATA13 = 182 , MX53_PAD_PATA_DATA14 = 183 , MX53_PAD_PATA_DATA15 = 184 , MX53_PAD_SD1_DATA0 = 185 , MX53_PAD_SD1_DATA1 = 186 , MX53_PAD_SD1_CMD = 187 , MX53_PAD_SD1_DATA2 = 188 , MX53_PAD_SD1_CLK = 189 , MX53_PAD_SD1_DATA3 = 190 , MX53_PAD_SD2_CLK = 191 , MX53_PAD_SD2_CMD = 192 , MX53_PAD_SD2_DATA3 = 193 , MX53_PAD_SD2_DATA2 = 194 , MX53_PAD_SD2_DATA1 = 195 , MX53_PAD_SD2_DATA0 = 196 , MX53_PAD_GPIO_0 = 197 , MX53_PAD_GPIO_1 = 198 , MX53_PAD_GPIO_9 = 199 , MX53_PAD_GPIO_3 = 200 , MX53_PAD_GPIO_6 = 201 , MX53_PAD_GPIO_2 = 202 , MX53_PAD_GPIO_4 = 203 , MX53_PAD_GPIO_5 = 204 , MX53_PAD_GPIO_7 = 205 , MX53_PAD_GPIO_8 = 206 , MX53_PAD_GPIO_16 = 207 , MX53_PAD_GPIO_17 = 208 , MX53_PAD_GPIO_18 = 209 , } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

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
 int cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
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
