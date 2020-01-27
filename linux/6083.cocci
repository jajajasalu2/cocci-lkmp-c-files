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
if p[0].line in ['7']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum imx7d_pads { MX7D_PAD_RESERVE0 = 0 , MX7D_PAD_RESERVE1 = 1 , MX7D_PAD_RESERVE2 = 2 , MX7D_PAD_RESERVE3 = 3 , MX7D_PAD_RESERVE4 = 4 , MX7D_PAD_GPIO1_IO08 = 5 , MX7D_PAD_GPIO1_IO09 = 6 , MX7D_PAD_GPIO1_IO10 = 7 , MX7D_PAD_GPIO1_IO11 = 8 , MX7D_PAD_GPIO1_IO12 = 9 , MX7D_PAD_GPIO1_IO13 = 10 , MX7D_PAD_GPIO1_IO14 = 11 , MX7D_PAD_GPIO1_IO15 = 12 , MX7D_PAD_EPDC_DATA00 = 13 , MX7D_PAD_EPDC_DATA01 = 14 , MX7D_PAD_EPDC_DATA02 = 15 , MX7D_PAD_EPDC_DATA03 = 16 , MX7D_PAD_EPDC_DATA04 = 17 , MX7D_PAD_EPDC_DATA05 = 18 , MX7D_PAD_EPDC_DATA06 = 19 , MX7D_PAD_EPDC_DATA07 = 20 , MX7D_PAD_EPDC_DATA08 = 21 , MX7D_PAD_EPDC_DATA09 = 22 , MX7D_PAD_EPDC_DATA10 = 23 , MX7D_PAD_EPDC_DATA11 = 24 , MX7D_PAD_EPDC_DATA12 = 25 , MX7D_PAD_EPDC_DATA13 = 26 , MX7D_PAD_EPDC_DATA14 = 27 , MX7D_PAD_EPDC_DATA15 = 28 , MX7D_PAD_EPDC_SDCLK = 29 , MX7D_PAD_EPDC_SDLE = 30 , MX7D_PAD_EPDC_SDOE = 31 , MX7D_PAD_EPDC_SDSHR = 32 , MX7D_PAD_EPDC_SDCE0 = 33 , MX7D_PAD_EPDC_SDCE1 = 34 , MX7D_PAD_EPDC_SDCE2 = 35 , MX7D_PAD_EPDC_SDCE3 = 36 , MX7D_PAD_EPDC_GDCLK = 37 , MX7D_PAD_EPDC_GDOE = 38 , MX7D_PAD_EPDC_GDRL = 39 , MX7D_PAD_EPDC_GDSP = 40 , MX7D_PAD_EPDC_BDR0 = 41 , MX7D_PAD_EPDC_BDR1 = 42 , MX7D_PAD_EPDC_PWR_COM = 43 , MX7D_PAD_EPDC_PWR_STAT = 44 , MX7D_PAD_LCD_CLK = 45 , MX7D_PAD_LCD_ENABLE = 46 , MX7D_PAD_LCD_HSYNC = 47 , MX7D_PAD_LCD_VSYNC = 48 , MX7D_PAD_LCD_RESET = 49 , MX7D_PAD_LCD_DATA00 = 50 , MX7D_PAD_LCD_DATA01 = 51 , MX7D_PAD_LCD_DATA02 = 52 , MX7D_PAD_LCD_DATA03 = 53 , MX7D_PAD_LCD_DATA04 = 54 , MX7D_PAD_LCD_DATA05 = 55 , MX7D_PAD_LCD_DATA06 = 56 , MX7D_PAD_LCD_DATA07 = 57 , MX7D_PAD_LCD_DATA08 = 58 , MX7D_PAD_LCD_DATA09 = 59 , MX7D_PAD_LCD_DATA10 = 60 , MX7D_PAD_LCD_DATA11 = 61 , MX7D_PAD_LCD_DATA12 = 62 , MX7D_PAD_LCD_DATA13 = 63 , MX7D_PAD_LCD_DATA14 = 64 , MX7D_PAD_LCD_DATA15 = 65 , MX7D_PAD_LCD_DATA16 = 66 , MX7D_PAD_LCD_DATA17 = 67 , MX7D_PAD_LCD_DATA18 = 68 , MX7D_PAD_LCD_DATA19 = 69 , MX7D_PAD_LCD_DATA20 = 70 , MX7D_PAD_LCD_DATA21 = 71 , MX7D_PAD_LCD_DATA22 = 72 , MX7D_PAD_LCD_DATA23 = 73 , MX7D_PAD_UART1_RX_DATA = 74 , MX7D_PAD_UART1_TX_DATA = 75 , MX7D_PAD_UART2_RX_DATA = 76 , MX7D_PAD_UART2_TX_DATA = 77 , MX7D_PAD_UART3_RX_DATA = 78 , MX7D_PAD_UART3_TX_DATA = 79 , MX7D_PAD_UART3_RTS_B = 80 , MX7D_PAD_UART3_CTS_B = 81 , MX7D_PAD_I2C1_SCL = 82 , MX7D_PAD_I2C1_SDA = 83 , MX7D_PAD_I2C2_SCL = 84 , MX7D_PAD_I2C2_SDA = 85 , MX7D_PAD_I2C3_SCL = 86 , MX7D_PAD_I2C3_SDA = 87 , MX7D_PAD_I2C4_SCL = 88 , MX7D_PAD_I2C4_SDA = 89 , MX7D_PAD_ECSPI1_SCLK = 90 , MX7D_PAD_ECSPI1_MOSI = 91 , MX7D_PAD_ECSPI1_MISO = 92 , MX7D_PAD_ECSPI1_SS0 = 93 , MX7D_PAD_ECSPI2_SCLK = 94 , MX7D_PAD_ECSPI2_MOSI = 95 , MX7D_PAD_ECSPI2_MISO = 96 , MX7D_PAD_ECSPI2_SS0 = 97 , MX7D_PAD_SD1_CD_B = 98 , MX7D_PAD_SD1_WP = 99 , MX7D_PAD_SD1_RESET_B = 100 , MX7D_PAD_SD1_CLK = 101 , MX7D_PAD_SD1_CMD = 102 , MX7D_PAD_SD1_DATA0 = 103 , MX7D_PAD_SD1_DATA1 = 104 , MX7D_PAD_SD1_DATA2 = 105 , MX7D_PAD_SD1_DATA3 = 106 , MX7D_PAD_SD2_CD_B = 107 , MX7D_PAD_SD2_WP = 108 , MX7D_PAD_SD2_RESET_B = 109 , MX7D_PAD_SD2_CLK = 110 , MX7D_PAD_SD2_CMD = 111 , MX7D_PAD_SD2_DATA0 = 112 , MX7D_PAD_SD2_DATA1 = 113 , MX7D_PAD_SD2_DATA2 = 114 , MX7D_PAD_SD2_DATA3 = 115 , MX7D_PAD_SD3_CLK = 116 , MX7D_PAD_SD3_CMD = 117 , MX7D_PAD_SD3_DATA0 = 118 , MX7D_PAD_SD3_DATA1 = 119 , MX7D_PAD_SD3_DATA2 = 120 , MX7D_PAD_SD3_DATA3 = 121 , MX7D_PAD_SD3_DATA4 = 122 , MX7D_PAD_SD3_DATA5 = 123 , MX7D_PAD_SD3_DATA6 = 124 , MX7D_PAD_SD3_DATA7 = 125 , MX7D_PAD_SD3_STROBE = 126 , MX7D_PAD_SD3_RESET_B = 127 , MX7D_PAD_SAI1_RX_DATA = 128 , MX7D_PAD_SAI1_TX_BCLK = 129 , MX7D_PAD_SAI1_TX_SYNC = 130 , MX7D_PAD_SAI1_TX_DATA = 131 , MX7D_PAD_SAI1_RX_SYNC = 132 , MX7D_PAD_SAI1_RX_BCLK = 133 , MX7D_PAD_SAI1_MCLK = 134 , MX7D_PAD_SAI2_TX_SYNC = 135 , MX7D_PAD_SAI2_TX_BCLK = 136 , MX7D_PAD_SAI2_RX_DATA = 137 , MX7D_PAD_SAI2_TX_DATA = 138 , MX7D_PAD_ENET1_RGMII_RD0 = 139 , MX7D_PAD_ENET1_RGMII_RD1 = 140 , MX7D_PAD_ENET1_RGMII_RD2 = 141 , MX7D_PAD_ENET1_RGMII_RD3 = 142 , MX7D_PAD_ENET1_RGMII_RX_CTL = 143 , MX7D_PAD_ENET1_RGMII_RXC = 144 , MX7D_PAD_ENET1_RGMII_TD0 = 145 , MX7D_PAD_ENET1_RGMII_TD1 = 146 , MX7D_PAD_ENET1_RGMII_TD2 = 147 , MX7D_PAD_ENET1_RGMII_TD3 = 148 , MX7D_PAD_ENET1_RGMII_TX_CTL = 149 , MX7D_PAD_ENET1_RGMII_TXC = 150 , MX7D_PAD_ENET1_TX_CLK = 151 , MX7D_PAD_ENET1_RX_CLK = 152 , MX7D_PAD_ENET1_CRS = 153 , MX7D_PAD_ENET1_COL = 154 , } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

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
 struct platform_device * cocci_id@p ;

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
@@
 enum imx7d_lpsr_pads { MX7D_PAD_GPIO1_IO00 = 0 , MX7D_PAD_GPIO1_IO01 = 1 , MX7D_PAD_GPIO1_IO02 = 2 , MX7D_PAD_GPIO1_IO03 = 3 , MX7D_PAD_GPIO1_IO04 = 4 , MX7D_PAD_GPIO1_IO05 = 5 , MX7D_PAD_GPIO1_IO06 = 6 , MX7D_PAD_GPIO1_IO07 = 7 , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
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
