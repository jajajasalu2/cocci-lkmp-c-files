@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 enum imx1_pads { MX1_PAD_A24 = PAD_ID ( PA , 0 ) , MX1_PAD_TIN = PAD_ID ( PA , 1 ) , MX1_PAD_PWMO = PAD_ID ( PA , 2 ) , MX1_PAD_CSI_MCLK = PAD_ID ( PA , 3 ) , MX1_PAD_CSI_D0 = PAD_ID ( PA , 4 ) , MX1_PAD_CSI_D1 = PAD_ID ( PA , 5 ) , MX1_PAD_CSI_D2 = PAD_ID ( PA , 6 ) , MX1_PAD_CSI_D3 = PAD_ID ( PA , 7 ) , MX1_PAD_CSI_D4 = PAD_ID ( PA , 8 ) , MX1_PAD_CSI_D5 = PAD_ID ( PA , 9 ) , MX1_PAD_CSI_D6 = PAD_ID ( PA , 10 ) , MX1_PAD_CSI_D7 = PAD_ID ( PA , 11 ) , MX1_PAD_CSI_VSYNC = PAD_ID ( PA , 12 ) , MX1_PAD_CSI_HSYNC = PAD_ID ( PA , 13 ) , MX1_PAD_CSI_PIXCLK = PAD_ID ( PA , 14 ) , MX1_PAD_I2C_SDA = PAD_ID ( PA , 15 ) , MX1_PAD_I2C_SCL = PAD_ID ( PA , 16 ) , MX1_PAD_DTACK = PAD_ID ( PA , 17 ) , MX1_PAD_BCLK = PAD_ID ( PA , 18 ) , MX1_PAD_LBA = PAD_ID ( PA , 19 ) , MX1_PAD_ECB = PAD_ID ( PA , 20 ) , MX1_PAD_A0 = PAD_ID ( PA , 21 ) , MX1_PAD_CS4 = PAD_ID ( PA , 22 ) , MX1_PAD_CS5 = PAD_ID ( PA , 23 ) , MX1_PAD_A16 = PAD_ID ( PA , 24 ) , MX1_PAD_A17 = PAD_ID ( PA , 25 ) , MX1_PAD_A18 = PAD_ID ( PA , 26 ) , MX1_PAD_A19 = PAD_ID ( PA , 27 ) , MX1_PAD_A20 = PAD_ID ( PA , 28 ) , MX1_PAD_A21 = PAD_ID ( PA , 29 ) , MX1_PAD_A22 = PAD_ID ( PA , 30 ) , MX1_PAD_A23 = PAD_ID ( PA , 31 ) , MX1_PAD_SD_DAT0 = PAD_ID ( PB , 8 ) , MX1_PAD_SD_DAT1 = PAD_ID ( PB , 9 ) , MX1_PAD_SD_DAT2 = PAD_ID ( PB , 10 ) , MX1_PAD_SD_DAT3 = PAD_ID ( PB , 11 ) , MX1_PAD_SD_SCLK = PAD_ID ( PB , 12 ) , MX1_PAD_SD_CMD = PAD_ID ( PB , 13 ) , MX1_PAD_SIM_SVEN = PAD_ID ( PB , 14 ) , MX1_PAD_SIM_PD = PAD_ID ( PB , 15 ) , MX1_PAD_SIM_TX = PAD_ID ( PB , 16 ) , MX1_PAD_SIM_RX = PAD_ID ( PB , 17 ) , MX1_PAD_SIM_RST = PAD_ID ( PB , 18 ) , MX1_PAD_SIM_CLK = PAD_ID ( PB , 19 ) , MX1_PAD_USBD_AFE = PAD_ID ( PB , 20 ) , MX1_PAD_USBD_OE = PAD_ID ( PB , 21 ) , MX1_PAD_USBD_RCV = PAD_ID ( PB , 22 ) , MX1_PAD_USBD_SUSPND = PAD_ID ( PB , 23 ) , MX1_PAD_USBD_VP = PAD_ID ( PB , 24 ) , MX1_PAD_USBD_VM = PAD_ID ( PB , 25 ) , MX1_PAD_USBD_VPO = PAD_ID ( PB , 26 ) , MX1_PAD_USBD_VMO = PAD_ID ( PB , 27 ) , MX1_PAD_UART2_CTS = PAD_ID ( PB , 28 ) , MX1_PAD_UART2_RTS = PAD_ID ( PB , 29 ) , MX1_PAD_UART2_TXD = PAD_ID ( PB , 30 ) , MX1_PAD_UART2_RXD = PAD_ID ( PB , 31 ) , MX1_PAD_SSI_RXFS = PAD_ID ( PC , 3 ) , MX1_PAD_SSI_RXCLK = PAD_ID ( PC , 4 ) , MX1_PAD_SSI_RXDAT = PAD_ID ( PC , 5 ) , MX1_PAD_SSI_TXDAT = PAD_ID ( PC , 6 ) , MX1_PAD_SSI_TXFS = PAD_ID ( PC , 7 ) , MX1_PAD_SSI_TXCLK = PAD_ID ( PC , 8 ) , MX1_PAD_UART1_CTS = PAD_ID ( PC , 9 ) , MX1_PAD_UART1_RTS = PAD_ID ( PC , 10 ) , MX1_PAD_UART1_TXD = PAD_ID ( PC , 11 ) , MX1_PAD_UART1_RXD = PAD_ID ( PC , 12 ) , MX1_PAD_SPI1_RDY = PAD_ID ( PC , 13 ) , MX1_PAD_SPI1_SCLK = PAD_ID ( PC , 14 ) , MX1_PAD_SPI1_SS = PAD_ID ( PC , 15 ) , MX1_PAD_SPI1_MISO = PAD_ID ( PC , 16 ) , MX1_PAD_SPI1_MOSI = PAD_ID ( PC , 17 ) , MX1_PAD_BT13 = PAD_ID ( PC , 19 ) , MX1_PAD_BT12 = PAD_ID ( PC , 20 ) , MX1_PAD_BT11 = PAD_ID ( PC , 21 ) , MX1_PAD_BT10 = PAD_ID ( PC , 22 ) , MX1_PAD_BT9 = PAD_ID ( PC , 23 ) , MX1_PAD_BT8 = PAD_ID ( PC , 24 ) , MX1_PAD_BT7 = PAD_ID ( PC , 25 ) , MX1_PAD_BT6 = PAD_ID ( PC , 26 ) , MX1_PAD_BT5 = PAD_ID ( PC , 27 ) , MX1_PAD_BT4 = PAD_ID ( PC , 28 ) , MX1_PAD_BT3 = PAD_ID ( PC , 29 ) , MX1_PAD_BT2 = PAD_ID ( PC , 30 ) , MX1_PAD_BT1 = PAD_ID ( PC , 31 ) , MX1_PAD_LSCLK = PAD_ID ( PD , 6 ) , MX1_PAD_REV = PAD_ID ( PD , 7 ) , MX1_PAD_CLS = PAD_ID ( PD , 8 ) , MX1_PAD_PS = PAD_ID ( PD , 9 ) , MX1_PAD_SPL_SPR = PAD_ID ( PD , 10 ) , MX1_PAD_CONTRAST = PAD_ID ( PD , 11 ) , MX1_PAD_ACD_OE = PAD_ID ( PD , 12 ) , MX1_PAD_LP_HSYNC = PAD_ID ( PD , 13 ) , MX1_PAD_FLM_VSYNC = PAD_ID ( PD , 14 ) , MX1_PAD_LD0 = PAD_ID ( PD , 15 ) , MX1_PAD_LD1 = PAD_ID ( PD , 16 ) , MX1_PAD_LD2 = PAD_ID ( PD , 17 ) , MX1_PAD_LD3 = PAD_ID ( PD , 18 ) , MX1_PAD_LD4 = PAD_ID ( PD , 19 ) , MX1_PAD_LD5 = PAD_ID ( PD , 20 ) , MX1_PAD_LD6 = PAD_ID ( PD , 21 ) , MX1_PAD_LD7 = PAD_ID ( PD , 22 ) , MX1_PAD_LD8 = PAD_ID ( PD , 23 ) , MX1_PAD_LD9 = PAD_ID ( PD , 24 ) , MX1_PAD_LD10 = PAD_ID ( PD , 25 ) , MX1_PAD_LD11 = PAD_ID ( PD , 26 ) , MX1_PAD_LD12 = PAD_ID ( PD , 27 ) , MX1_PAD_LD13 = PAD_ID ( PD , 28 ) , MX1_PAD_LD14 = PAD_ID ( PD , 29 ) , MX1_PAD_LD15 = PAD_ID ( PD , 30 ) , MX1_PAD_TMR2OUT = PAD_ID ( PD , 31 ) , } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7', '115']:
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
if p[0].line in ['2']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

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
 struct imx1_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

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
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['116']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6]
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
