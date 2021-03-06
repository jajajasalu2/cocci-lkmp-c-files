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
 enum imx50_pads { MX50_PAD_RESERVE0 = 0 , MX50_PAD_RESERVE1 = 1 , MX50_PAD_RESERVE2 = 2 , MX50_PAD_RESERVE3 = 3 , MX50_PAD_RESERVE4 = 4 , MX50_PAD_RESERVE5 = 5 , MX50_PAD_RESERVE6 = 6 , MX50_PAD_RESERVE7 = 7 , MX50_PAD_KEY_COL0 = 8 , MX50_PAD_KEY_ROW0 = 9 , MX50_PAD_KEY_COL1 = 10 , MX50_PAD_KEY_ROW1 = 11 , MX50_PAD_KEY_COL2 = 12 , MX50_PAD_KEY_ROW2 = 13 , MX50_PAD_KEY_COL3 = 14 , MX50_PAD_KEY_ROW3 = 15 , MX50_PAD_I2C1_SCL = 16 , MX50_PAD_I2C1_SDA = 17 , MX50_PAD_I2C2_SCL = 18 , MX50_PAD_I2C2_SDA = 19 , MX50_PAD_I2C3_SCL = 20 , MX50_PAD_I2C3_SDA = 21 , MX50_PAD_PWM1 = 22 , MX50_PAD_PWM2 = 23 , MX50_PAD_0WIRE = 24 , MX50_PAD_EPITO = 25 , MX50_PAD_WDOG = 26 , MX50_PAD_SSI_TXFS = 27 , MX50_PAD_SSI_TXC = 28 , MX50_PAD_SSI_TXD = 29 , MX50_PAD_SSI_RXD = 30 , MX50_PAD_SSI_RXF = 31 , MX50_PAD_SSI_RXC = 32 , MX50_PAD_UART1_TXD = 33 , MX50_PAD_UART1_RXD = 34 , MX50_PAD_UART1_CTS = 35 , MX50_PAD_UART1_RTS = 36 , MX50_PAD_UART2_TXD = 37 , MX50_PAD_UART2_RXD = 38 , MX50_PAD_UART2_CTS = 39 , MX50_PAD_UART2_RTS = 40 , MX50_PAD_UART3_TXD = 41 , MX50_PAD_UART3_RXD = 42 , MX50_PAD_UART4_TXD = 43 , MX50_PAD_UART4_RXD = 44 , MX50_PAD_CSPI_CLK = 45 , MX50_PAD_CSPI_MOSI = 46 , MX50_PAD_CSPI_MISO = 47 , MX50_PAD_CSPI_SS0 = 48 , MX50_PAD_ECSPI1_CLK = 49 , MX50_PAD_ECSPI1_MOSI = 50 , MX50_PAD_ECSPI1_MISO = 51 , MX50_PAD_ECSPI1_SS0 = 52 , MX50_PAD_ECSPI2_CLK = 53 , MX50_PAD_ECSPI2_MOSI = 54 , MX50_PAD_ECSPI2_MISO = 55 , MX50_PAD_ECSPI2_SS0 = 56 , MX50_PAD_SD1_CLK = 57 , MX50_PAD_SD1_CMD = 58 , MX50_PAD_SD1_D0 = 59 , MX50_PAD_SD1_D1 = 60 , MX50_PAD_SD1_D2 = 61 , MX50_PAD_SD1_D3 = 62 , MX50_PAD_SD2_CLK = 63 , MX50_PAD_SD2_CMD = 64 , MX50_PAD_SD2_D0 = 65 , MX50_PAD_SD2_D1 = 66 , MX50_PAD_SD2_D2 = 67 , MX50_PAD_SD2_D3 = 68 , MX50_PAD_SD2_D4 = 69 , MX50_PAD_SD2_D5 = 70 , MX50_PAD_SD2_D6 = 71 , MX50_PAD_SD2_D7 = 72 , MX50_PAD_SD2_WP = 73 , MX50_PAD_SD2_CD = 74 , MX50_PAD_DISP_D0 = 75 , MX50_PAD_DISP_D1 = 76 , MX50_PAD_DISP_D2 = 77 , MX50_PAD_DISP_D3 = 78 , MX50_PAD_DISP_D4 = 79 , MX50_PAD_DISP_D5 = 80 , MX50_PAD_DISP_D6 = 81 , MX50_PAD_DISP_D7 = 82 , MX50_PAD_DISP_WR = 83 , MX50_PAD_DISP_RD = 84 , MX50_PAD_DISP_RS = 85 , MX50_PAD_DISP_CS = 86 , MX50_PAD_DISP_BUSY = 87 , MX50_PAD_DISP_RESET = 88 , MX50_PAD_SD3_CLK = 89 , MX50_PAD_SD3_CMD = 90 , MX50_PAD_SD3_D0 = 91 , MX50_PAD_SD3_D1 = 92 , MX50_PAD_SD3_D2 = 93 , MX50_PAD_SD3_D3 = 94 , MX50_PAD_SD3_D4 = 95 , MX50_PAD_SD3_D5 = 96 , MX50_PAD_SD3_D6 = 97 , MX50_PAD_SD3_D7 = 98 , MX50_PAD_SD3_WP = 99 , MX50_PAD_DISP_D8 = 100 , MX50_PAD_DISP_D9 = 101 , MX50_PAD_DISP_D10 = 102 , MX50_PAD_DISP_D11 = 103 , MX50_PAD_DISP_D12 = 104 , MX50_PAD_DISP_D13 = 105 , MX50_PAD_DISP_D14 = 106 , MX50_PAD_DISP_D15 = 107 , MX50_PAD_EPDC_D0 = 108 , MX50_PAD_EPDC_D1 = 109 , MX50_PAD_EPDC_D2 = 110 , MX50_PAD_EPDC_D3 = 111 , MX50_PAD_EPDC_D4 = 112 , MX50_PAD_EPDC_D5 = 113 , MX50_PAD_EPDC_D6 = 114 , MX50_PAD_EPDC_D7 = 115 , MX50_PAD_EPDC_D8 = 116 , MX50_PAD_EPDC_D9 = 117 , MX50_PAD_EPDC_D10 = 118 , MX50_PAD_EPDC_D11 = 119 , MX50_PAD_EPDC_D12 = 120 , MX50_PAD_EPDC_D13 = 121 , MX50_PAD_EPDC_D14 = 122 , MX50_PAD_EPDC_D15 = 123 , MX50_PAD_EPDC_GDCLK = 124 , MX50_PAD_EPDC_GDSP = 125 , MX50_PAD_EPDC_GDOE = 126 , MX50_PAD_EPDC_GDRL = 127 , MX50_PAD_EPDC_SDCLK = 128 , MX50_PAD_EPDC_SDOEZ = 129 , MX50_PAD_EPDC_SDOED = 130 , MX50_PAD_EPDC_SDOE = 131 , MX50_PAD_EPDC_SDLE = 132 , MX50_PAD_EPDC_SDCLKN = 133 , MX50_PAD_EPDC_SDSHR = 134 , MX50_PAD_EPDC_PWRCOM = 135 , MX50_PAD_EPDC_PWRSTAT = 136 , MX50_PAD_EPDC_PWRCTRL0 = 137 , MX50_PAD_EPDC_PWRCTRL1 = 138 , MX50_PAD_EPDC_PWRCTRL2 = 139 , MX50_PAD_EPDC_PWRCTRL3 = 140 , MX50_PAD_EPDC_VCOM0 = 141 , MX50_PAD_EPDC_VCOM1 = 142 , MX50_PAD_EPDC_BDR0 = 143 , MX50_PAD_EPDC_BDR1 = 144 , MX50_PAD_EPDC_SDCE0 = 145 , MX50_PAD_EPDC_SDCE1 = 146 , MX50_PAD_EPDC_SDCE2 = 147 , MX50_PAD_EPDC_SDCE3 = 148 , MX50_PAD_EPDC_SDCE4 = 149 , MX50_PAD_EPDC_SDCE5 = 150 , MX50_PAD_EIM_DA0 = 151 , MX50_PAD_EIM_DA1 = 152 , MX50_PAD_EIM_DA2 = 153 , MX50_PAD_EIM_DA3 = 154 , MX50_PAD_EIM_DA4 = 155 , MX50_PAD_EIM_DA5 = 156 , MX50_PAD_EIM_DA6 = 157 , MX50_PAD_EIM_DA7 = 158 , MX50_PAD_EIM_DA8 = 159 , MX50_PAD_EIM_DA9 = 160 , MX50_PAD_EIM_DA10 = 161 , MX50_PAD_EIM_DA11 = 162 , MX50_PAD_EIM_DA12 = 163 , MX50_PAD_EIM_DA13 = 164 , MX50_PAD_EIM_DA14 = 165 , MX50_PAD_EIM_DA15 = 166 , MX50_PAD_EIM_CS2 = 167 , MX50_PAD_EIM_CS1 = 168 , MX50_PAD_EIM_CS0 = 169 , MX50_PAD_EIM_EB0 = 170 , MX50_PAD_EIM_EB1 = 171 , MX50_PAD_EIM_WAIT = 172 , MX50_PAD_EIM_BCLK = 173 , MX50_PAD_EIM_RDY = 174 , MX50_PAD_EIM_OE = 175 , MX50_PAD_EIM_RW = 176 , MX50_PAD_EIM_LBA = 177 , MX50_PAD_EIM_CRE = 178 , } cocci_id@p ;

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
