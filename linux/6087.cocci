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
 struct imx_pinctrl_soc_info cocci_id@p ;

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
 enum imx8mn_pads { MX8MN_PAD_RESERVE0 = 0 , MX8MN_PAD_RESERVE1 = 1 , MX8MN_PAD_RESERVE2 = 2 , MX8MN_PAD_RESERVE3 = 3 , MX8MN_PAD_RESERVE4 = 4 , MX8MN_PAD_RESERVE5 = 5 , MX8MN_PAD_RESERVE6 = 6 , MX8MN_PAD_RESERVE7 = 7 , MX8MN_IOMUXC_BOOT_MODE2 = 8 , MX8MN_IOMUXC_BOOT_MODE3 = 9 , MX8MN_IOMUXC_GPIO1_IO00 = 10 , MX8MN_IOMUXC_GPIO1_IO01 = 11 , MX8MN_IOMUXC_GPIO1_IO02 = 12 , MX8MN_IOMUXC_GPIO1_IO03 = 13 , MX8MN_IOMUXC_GPIO1_IO04 = 14 , MX8MN_IOMUXC_GPIO1_IO05 = 15 , MX8MN_IOMUXC_GPIO1_IO06 = 16 , MX8MN_IOMUXC_GPIO1_IO07 = 17 , MX8MN_IOMUXC_GPIO1_IO08 = 18 , MX8MN_IOMUXC_GPIO1_IO09 = 19 , MX8MN_IOMUXC_GPIO1_IO10 = 20 , MX8MN_IOMUXC_GPIO1_IO11 = 21 , MX8MN_IOMUXC_GPIO1_IO12 = 22 , MX8MN_IOMUXC_GPIO1_IO13 = 23 , MX8MN_IOMUXC_GPIO1_IO14 = 24 , MX8MN_IOMUXC_GPIO1_IO15 = 25 , MX8MN_IOMUXC_ENET_MDC = 26 , MX8MN_IOMUXC_ENET_MDIO = 27 , MX8MN_IOMUXC_ENET_TD3 = 28 , MX8MN_IOMUXC_ENET_TD2 = 29 , MX8MN_IOMUXC_ENET_TD1 = 30 , MX8MN_IOMUXC_ENET_TD0 = 31 , MX8MN_IOMUXC_ENET_TX_CTL = 32 , MX8MN_IOMUXC_ENET_TXC = 33 , MX8MN_IOMUXC_ENET_RX_CTL = 34 , MX8MN_IOMUXC_ENET_RXC = 35 , MX8MN_IOMUXC_ENET_RD0 = 36 , MX8MN_IOMUXC_ENET_RD1 = 37 , MX8MN_IOMUXC_ENET_RD2 = 38 , MX8MN_IOMUXC_ENET_RD3 = 39 , MX8MN_IOMUXC_SD1_CLK = 40 , MX8MN_IOMUXC_SD1_CMD = 41 , MX8MN_IOMUXC_SD1_DATA0 = 42 , MX8MN_IOMUXC_SD1_DATA1 = 43 , MX8MN_IOMUXC_SD1_DATA2 = 44 , MX8MN_IOMUXC_SD1_DATA3 = 45 , MX8MN_IOMUXC_SD1_DATA4 = 46 , MX8MN_IOMUXC_SD1_DATA5 = 47 , MX8MN_IOMUXC_SD1_DATA6 = 48 , MX8MN_IOMUXC_SD1_DATA7 = 49 , MX8MN_IOMUXC_SD1_RESET_B = 50 , MX8MN_IOMUXC_SD1_STROBE = 51 , MX8MN_IOMUXC_SD2_CD_B = 52 , MX8MN_IOMUXC_SD2_CLK = 53 , MX8MN_IOMUXC_SD2_CMD = 54 , MX8MN_IOMUXC_SD2_DATA0 = 55 , MX8MN_IOMUXC_SD2_DATA1 = 56 , MX8MN_IOMUXC_SD2_DATA2 = 57 , MX8MN_IOMUXC_SD2_DATA3 = 58 , MX8MN_IOMUXC_SD2_RESET_B = 59 , MX8MN_IOMUXC_SD2_WP = 60 , MX8MN_IOMUXC_NAND_ALE = 61 , MX8MN_IOMUXC_NAND_CE0 = 62 , MX8MN_IOMUXC_NAND_CE1 = 63 , MX8MN_IOMUXC_NAND_CE2 = 64 , MX8MN_IOMUXC_NAND_CE3 = 65 , MX8MN_IOMUXC_NAND_CLE = 66 , MX8MN_IOMUXC_NAND_DATA00 = 67 , MX8MN_IOMUXC_NAND_DATA01 = 68 , MX8MN_IOMUXC_NAND_DATA02 = 69 , MX8MN_IOMUXC_NAND_DATA03 = 70 , MX8MN_IOMUXC_NAND_DATA04 = 71 , MX8MN_IOMUXC_NAND_DATA05 = 72 , MX8MN_IOMUXC_NAND_DATA06 = 73 , MX8MN_IOMUXC_NAND_DATA07 = 74 , MX8MN_IOMUXC_NAND_DQS = 75 , MX8MN_IOMUXC_NAND_RE_B = 76 , MX8MN_IOMUXC_NAND_READY_B = 77 , MX8MN_IOMUXC_NAND_WE_B = 78 , MX8MN_IOMUXC_NAND_WP_B = 79 , MX8MN_IOMUXC_SAI5_RXFS = 80 , MX8MN_IOMUXC_SAI5_RXC = 81 , MX8MN_IOMUXC_SAI5_RXD0 = 82 , MX8MN_IOMUXC_SAI5_RXD1 = 83 , MX8MN_IOMUXC_SAI5_RXD2 = 84 , MX8MN_IOMUXC_SAI5_RXD3 = 85 , MX8MN_IOMUXC_SAI5_MCLK = 86 , MX8MN_IOMUXC_SAI1_RXFS = 87 , MX8MN_IOMUXC_SAI1_RXC = 88 , MX8MN_IOMUXC_SAI1_RXD0 = 89 , MX8MN_IOMUXC_SAI1_RXD1 = 90 , MX8MN_IOMUXC_SAI1_RXD2 = 91 , MX8MN_IOMUXC_SAI1_RXD3 = 92 , MX8MN_IOMUXC_SAI1_RXD4 = 93 , MX8MN_IOMUXC_SAI1_RXD5 = 94 , MX8MN_IOMUXC_SAI1_RXD6 = 95 , MX8MN_IOMUXC_SAI1_RXD7 = 96 , MX8MN_IOMUXC_SAI1_TXFS = 97 , MX8MN_IOMUXC_SAI1_TXC = 98 , MX8MN_IOMUXC_SAI1_TXD0 = 99 , MX8MN_IOMUXC_SAI1_TXD1 = 100 , MX8MN_IOMUXC_SAI1_TXD2 = 101 , MX8MN_IOMUXC_SAI1_TXD3 = 102 , MX8MN_IOMUXC_SAI1_TXD4 = 103 , MX8MN_IOMUXC_SAI1_TXD5 = 104 , MX8MN_IOMUXC_SAI1_TXD6 = 105 , MX8MN_IOMUXC_SAI1_TXD7 = 106 , MX8MN_IOMUXC_SAI1_MCLK = 107 , MX8MN_IOMUXC_SAI2_RXFS = 108 , MX8MN_IOMUXC_SAI2_RXC = 109 , MX8MN_IOMUXC_SAI2_RXD0 = 110 , MX8MN_IOMUXC_SAI2_TXFS = 111 , MX8MN_IOMUXC_SAI2_TXC = 112 , MX8MN_IOMUXC_SAI2_TXD0 = 113 , MX8MN_IOMUXC_SAI2_MCLK = 114 , MX8MN_IOMUXC_SAI3_RXFS = 115 , MX8MN_IOMUXC_SAI3_RXC = 116 , MX8MN_IOMUXC_SAI3_RXD = 117 , MX8MN_IOMUXC_SAI3_TXFS = 118 , MX8MN_IOMUXC_SAI3_TXC = 119 , MX8MN_IOMUXC_SAI3_TXD = 120 , MX8MN_IOMUXC_SAI3_MCLK = 121 , MX8MN_IOMUXC_SPDIF_TX = 122 , MX8MN_IOMUXC_SPDIF_RX = 123 , MX8MN_IOMUXC_SPDIF_EXT_CLK = 124 , MX8MN_IOMUXC_ECSPI1_SCLK = 125 , MX8MN_IOMUXC_ECSPI1_MOSI = 126 , MX8MN_IOMUXC_ECSPI1_MISO = 127 , MX8MN_IOMUXC_ECSPI1_SS0 = 128 , MX8MN_IOMUXC_ECSPI2_SCLK = 129 , MX8MN_IOMUXC_ECSPI2_MOSI = 130 , MX8MN_IOMUXC_ECSPI2_MISO = 131 , MX8MN_IOMUXC_ECSPI2_SS0 = 132 , MX8MN_IOMUXC_I2C1_SCL = 133 , MX8MN_IOMUXC_I2C1_SDA = 134 , MX8MN_IOMUXC_I2C2_SCL = 135 , MX8MN_IOMUXC_I2C2_SDA = 136 , MX8MN_IOMUXC_I2C3_SCL = 137 , MX8MN_IOMUXC_I2C3_SDA = 138 , MX8MN_IOMUXC_I2C4_SCL = 139 , MX8MN_IOMUXC_I2C4_SDA = 140 , MX8MN_IOMUXC_UART1_RXD = 141 , MX8MN_IOMUXC_UART1_TXD = 142 , MX8MN_IOMUXC_UART2_RXD = 143 , MX8MN_IOMUXC_UART2_TXD = 144 , MX8MN_IOMUXC_UART3_RXD = 145 , MX8MN_IOMUXC_UART3_TXD = 146 , MX8MN_IOMUXC_UART4_RXD = 147 , MX8MN_IOMUXC_UART4_TXD = 148 , } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
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
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
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
