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
 enum imx25_pads { MX25_PAD_RESERVE0 = 0 , MX25_PAD_RESERVE1 = 1 , MX25_PAD_A10 = 2 , MX25_PAD_A13 = 3 , MX25_PAD_A14 = 4 , MX25_PAD_A15 = 5 , MX25_PAD_A16 = 6 , MX25_PAD_A17 = 7 , MX25_PAD_A18 = 8 , MX25_PAD_A19 = 9 , MX25_PAD_A20 = 10 , MX25_PAD_A21 = 11 , MX25_PAD_A22 = 12 , MX25_PAD_A23 = 13 , MX25_PAD_A24 = 14 , MX25_PAD_A25 = 15 , MX25_PAD_EB0 = 16 , MX25_PAD_EB1 = 17 , MX25_PAD_OE = 18 , MX25_PAD_CS0 = 19 , MX25_PAD_CS1 = 20 , MX25_PAD_CS4 = 21 , MX25_PAD_CS5 = 22 , MX25_PAD_NF_CE0 = 23 , MX25_PAD_ECB = 24 , MX25_PAD_LBA = 25 , MX25_PAD_BCLK = 26 , MX25_PAD_RW = 27 , MX25_PAD_NFWE_B = 28 , MX25_PAD_NFRE_B = 29 , MX25_PAD_NFALE = 30 , MX25_PAD_NFCLE = 31 , MX25_PAD_NFWP_B = 32 , MX25_PAD_NFRB = 33 , MX25_PAD_D15 = 34 , MX25_PAD_D14 = 35 , MX25_PAD_D13 = 36 , MX25_PAD_D12 = 37 , MX25_PAD_D11 = 38 , MX25_PAD_D10 = 39 , MX25_PAD_D9 = 40 , MX25_PAD_D8 = 41 , MX25_PAD_D7 = 42 , MX25_PAD_D6 = 43 , MX25_PAD_D5 = 44 , MX25_PAD_D4 = 45 , MX25_PAD_D3 = 46 , MX25_PAD_D2 = 47 , MX25_PAD_D1 = 48 , MX25_PAD_D0 = 49 , MX25_PAD_LD0 = 50 , MX25_PAD_LD1 = 51 , MX25_PAD_LD2 = 52 , MX25_PAD_LD3 = 53 , MX25_PAD_LD4 = 54 , MX25_PAD_LD5 = 55 , MX25_PAD_LD6 = 56 , MX25_PAD_LD7 = 57 , MX25_PAD_LD8 = 58 , MX25_PAD_LD9 = 59 , MX25_PAD_LD10 = 60 , MX25_PAD_LD11 = 61 , MX25_PAD_LD12 = 62 , MX25_PAD_LD13 = 63 , MX25_PAD_LD14 = 64 , MX25_PAD_LD15 = 65 , MX25_PAD_HSYNC = 66 , MX25_PAD_VSYNC = 67 , MX25_PAD_LSCLK = 68 , MX25_PAD_OE_ACD = 69 , MX25_PAD_CONTRAST = 70 , MX25_PAD_PWM = 71 , MX25_PAD_CSI_D2 = 72 , MX25_PAD_CSI_D3 = 73 , MX25_PAD_CSI_D4 = 74 , MX25_PAD_CSI_D5 = 75 , MX25_PAD_CSI_D6 = 76 , MX25_PAD_CSI_D7 = 77 , MX25_PAD_CSI_D8 = 78 , MX25_PAD_CSI_D9 = 79 , MX25_PAD_CSI_MCLK = 80 , MX25_PAD_CSI_VSYNC = 81 , MX25_PAD_CSI_HSYNC = 82 , MX25_PAD_CSI_PIXCLK = 83 , MX25_PAD_I2C1_CLK = 84 , MX25_PAD_I2C1_DAT = 85 , MX25_PAD_CSPI1_MOSI = 86 , MX25_PAD_CSPI1_MISO = 87 , MX25_PAD_CSPI1_SS0 = 88 , MX25_PAD_CSPI1_SS1 = 89 , MX25_PAD_CSPI1_SCLK = 90 , MX25_PAD_CSPI1_RDY = 91 , MX25_PAD_UART1_RXD = 92 , MX25_PAD_UART1_TXD = 93 , MX25_PAD_UART1_RTS = 94 , MX25_PAD_UART1_CTS = 95 , MX25_PAD_UART2_RXD = 96 , MX25_PAD_UART2_TXD = 97 , MX25_PAD_UART2_RTS = 98 , MX25_PAD_UART2_CTS = 99 , MX25_PAD_SD1_CMD = 100 , MX25_PAD_SD1_CLK = 101 , MX25_PAD_SD1_DATA0 = 102 , MX25_PAD_SD1_DATA1 = 103 , MX25_PAD_SD1_DATA2 = 104 , MX25_PAD_SD1_DATA3 = 105 , MX25_PAD_KPP_ROW0 = 106 , MX25_PAD_KPP_ROW1 = 107 , MX25_PAD_KPP_ROW2 = 108 , MX25_PAD_KPP_ROW3 = 109 , MX25_PAD_KPP_COL0 = 110 , MX25_PAD_KPP_COL1 = 111 , MX25_PAD_KPP_COL2 = 112 , MX25_PAD_KPP_COL3 = 113 , MX25_PAD_FEC_MDC = 114 , MX25_PAD_FEC_MDIO = 115 , MX25_PAD_FEC_TDATA0 = 116 , MX25_PAD_FEC_TDATA1 = 117 , MX25_PAD_FEC_TX_EN = 118 , MX25_PAD_FEC_RDATA0 = 119 , MX25_PAD_FEC_RDATA1 = 120 , MX25_PAD_FEC_RX_DV = 121 , MX25_PAD_FEC_TX_CLK = 122 , MX25_PAD_RTCK = 123 , MX25_PAD_DE_B = 124 , MX25_PAD_GPIO_A = 125 , MX25_PAD_GPIO_B = 126 , MX25_PAD_GPIO_C = 127 , MX25_PAD_GPIO_D = 128 , MX25_PAD_GPIO_E = 129 , MX25_PAD_GPIO_F = 130 , MX25_PAD_EXT_ARMCLK = 131 , MX25_PAD_UPLL_BYPCLK = 132 , MX25_PAD_VSTBY_REQ = 133 , MX25_PAD_VSTBY_ACK = 134 , MX25_PAD_POWER_FAIL = 135 , MX25_PAD_CLKO = 136 , MX25_PAD_BOOT_MODE0 = 137 , MX25_PAD_BOOT_MODE1 = 138 , } cocci_id@p ;

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
if p[0].line in ['10']:
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
