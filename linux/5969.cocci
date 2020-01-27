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
if p[0].line in ['5']:
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
if p[0].line in ['8']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum zx296718_pin { I2C3_SCL = 0 , I2C3_SDA = 1 , AON_RESERVED0 = 2 , AON_RESERVED1 = 3 , SEC_EN = 4 , UART0_RXD = 5 , UART0_TXD = 6 , IR_IN = 7 , SPI0_CLK = 8 , SPI0_CS = 9 , SPI0_TXD = 10 , SPI0_RXD = 11 , KEY_COL0 = 12 , KEY_COL1 = 13 , KEY_COL2 = 14 , KEY_ROW0 = 15 , KEY_ROW1 = 16 , KEY_ROW2 = 17 , HDMI_SCL = 18 , HDMI_SDA = 19 , JTAG_TCK = 20 , JTAG_TRSTN = 21 , JTAG_TMS = 22 , JTAG_TDI = 23 , JTAG_TDO = 24 , I2C0_SCL = 25 , I2C0_SDA = 26 , I2C1_SCL = 27 , I2C1_SDA = 28 , AON_RESERVED2 = 29 , AON_RESERVED3 = 30 , AON_RESERVED4 = 31 , SPI1_CLK = 32 , SPI1_CS = 33 , SPI1_TXD = 34 , SPI1_RXD = 35 , AON_RESERVED5 = 36 , AON_RESERVED6 = 37 , AUDIO_DET = 38 , SPDIF_OUT = 39 , HDMI_CEC = 40 , HDMI_HPD = 41 , GMAC_25M_OUT = 42 , BOOT_SEL0 = 43 , BOOT_SEL1 = 44 , BOOT_SEL2 = 45 , DEEP_SLEEP_OUT_N = 46 , AON_RESERVED7 = 47 , GMII_GTX_CLK = 48 , GMII_TX_CLK = 49 , GMII_TXD0 = 50 , GMII_TXD1 = 51 , GMII_TXD2 = 52 , GMII_TXD3 = 53 , GMII_TXD4 = 54 , GMII_TXD5 = 55 , GMII_TXD6 = 56 , GMII_TXD7 = 57 , GMII_TX_ER = 58 , GMII_TX_EN = 59 , GMII_RX_CLK = 60 , GMII_RXD0 = 61 , GMII_RXD1 = 62 , GMII_RXD2 = 63 , GMII_RXD3 = 64 , GMII_RXD4 = 65 , GMII_RXD5 = 66 , GMII_RXD6 = 67 , GMII_RXD7 = 68 , GMII_RX_ER = 69 , GMII_RX_DV = 70 , GMII_COL = 71 , GMII_CRS = 72 , GMII_MDC = 73 , GMII_MDIO = 74 , SDIO1_CLK = 75 , SDIO1_CMD = 76 , SDIO1_DATA0 = 77 , SDIO1_DATA1 = 78 , SDIO1_DATA2 = 79 , SDIO1_DATA3 = 80 , SDIO1_CD = 81 , SDIO1_WP = 82 , USIM1_CD = 83 , USIM1_CLK = 84 , USIM1_RST = 85 , USIM1_DATA = 86 , SDIO0_CLK = 87 , SDIO0_CMD = 88 , SDIO0_DATA0 = 89 , SDIO0_DATA1 = 90 , SDIO0_DATA2 = 91 , SDIO0_DATA3 = 92 , SDIO0_CD = 93 , SDIO0_WP = 94 , TSI0_DATA0 = 95 , SPINOR_CLK = 96 , TSI2_DATA = 97 , TSI2_CLK = 98 , TSI2_SYNC = 99 , TSI2_VALID = 100 , SPINOR_CS = 101 , SPINOR_DQ0 = 102 , SPINOR_DQ1 = 103 , SPINOR_DQ2 = 104 , SPINOR_DQ3 = 105 , VGA_HS = 106 , VGA_VS = 107 , TSI3_DATA = 108 , TSI3_CLK = 109 , TSI3_SYNC = 110 , TSI3_VALID = 111 , I2S1_WS = 112 , I2S1_BCLK = 113 , I2S1_MCLK = 114 , I2S1_DIN0 = 115 , I2S1_DOUT0 = 116 , SPI3_CLK = 117 , SPI3_CS = 118 , SPI3_TXD = 119 , NAND_LDO_MS18_SEL = 120 , SPI3_RXD = 121 , I2S0_MCLK = 122 , I2S0_BCLK = 123 , I2S0_WS = 124 , I2S0_DIN0 = 125 , I2S0_DOUT0 = 126 , I2C5_SCL = 127 , I2C5_SDA = 128 , SPI2_CLK = 129 , SPI2_CS = 130 , SPI2_TXD = 131 , SPI2_RXD = 132 , NAND_WP_N = 133 , NAND_PAGE_SIZE0 = 134 , NAND_PAGE_SIZE1 = 135 , NAND_ADDR_CYCLE = 136 , NAND_RB0 = 137 , NAND_RB1 = 138 , NAND_RB2 = 139 , NAND_RB3 = 140 , GMAC_125M_IN = 141 , GMAC_50M_OUT = 142 , SPINOR_SSCLK_LOOPBACK = 143 , SPINOR_SDIO1CLK_LOOPBACK = 144 , } cocci_id@p ;

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
 struct platform_device * cocci_id@p ;

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
 struct zx_pinctrl_soc_info cocci_id@p ;

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
 const struct of_device_id cocci_id@p [ ] ;

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
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
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
