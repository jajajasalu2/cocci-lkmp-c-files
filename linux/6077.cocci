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
if p[0].line in ['2']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

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
 struct imx1_pinctrl_soc_info cocci_id@p ;

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
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['147']:
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
 enum imx21_pads { MX21_PAD_LSCLK = PAD_ID ( PA , 5 ) , MX21_PAD_LD0 = PAD_ID ( PA , 6 ) , MX21_PAD_LD1 = PAD_ID ( PA , 7 ) , MX21_PAD_LD2 = PAD_ID ( PA , 8 ) , MX21_PAD_LD3 = PAD_ID ( PA , 9 ) , MX21_PAD_LD4 = PAD_ID ( PA , 10 ) , MX21_PAD_LD5 = PAD_ID ( PA , 11 ) , MX21_PAD_LD6 = PAD_ID ( PA , 12 ) , MX21_PAD_LD7 = PAD_ID ( PA , 13 ) , MX21_PAD_LD8 = PAD_ID ( PA , 14 ) , MX21_PAD_LD9 = PAD_ID ( PA , 15 ) , MX21_PAD_LD10 = PAD_ID ( PA , 16 ) , MX21_PAD_LD11 = PAD_ID ( PA , 17 ) , MX21_PAD_LD12 = PAD_ID ( PA , 18 ) , MX21_PAD_LD13 = PAD_ID ( PA , 19 ) , MX21_PAD_LD14 = PAD_ID ( PA , 20 ) , MX21_PAD_LD15 = PAD_ID ( PA , 21 ) , MX21_PAD_LD16 = PAD_ID ( PA , 22 ) , MX21_PAD_LD17 = PAD_ID ( PA , 23 ) , MX21_PAD_REV = PAD_ID ( PA , 24 ) , MX21_PAD_CLS = PAD_ID ( PA , 25 ) , MX21_PAD_PS = PAD_ID ( PA , 26 ) , MX21_PAD_SPL_SPR = PAD_ID ( PA , 27 ) , MX21_PAD_HSYNC = PAD_ID ( PA , 28 ) , MX21_PAD_VSYNC = PAD_ID ( PA , 29 ) , MX21_PAD_CONTRAST = PAD_ID ( PA , 30 ) , MX21_PAD_OE_ACD = PAD_ID ( PA , 31 ) , MX21_PAD_SD2_D0 = PAD_ID ( PB , 4 ) , MX21_PAD_SD2_D1 = PAD_ID ( PB , 5 ) , MX21_PAD_SD2_D2 = PAD_ID ( PB , 6 ) , MX21_PAD_SD2_D3 = PAD_ID ( PB , 7 ) , MX21_PAD_SD2_CMD = PAD_ID ( PB , 8 ) , MX21_PAD_SD2_CLK = PAD_ID ( PB , 9 ) , MX21_PAD_CSI_D0 = PAD_ID ( PB , 10 ) , MX21_PAD_CSI_D1 = PAD_ID ( PB , 11 ) , MX21_PAD_CSI_D2 = PAD_ID ( PB , 12 ) , MX21_PAD_CSI_D3 = PAD_ID ( PB , 13 ) , MX21_PAD_CSI_D4 = PAD_ID ( PB , 14 ) , MX21_PAD_CSI_MCLK = PAD_ID ( PB , 15 ) , MX21_PAD_CSI_PIXCLK = PAD_ID ( PB , 16 ) , MX21_PAD_CSI_D5 = PAD_ID ( PB , 17 ) , MX21_PAD_CSI_D6 = PAD_ID ( PB , 18 ) , MX21_PAD_CSI_D7 = PAD_ID ( PB , 19 ) , MX21_PAD_CSI_VSYNC = PAD_ID ( PB , 20 ) , MX21_PAD_CSI_HSYNC = PAD_ID ( PB , 21 ) , MX21_PAD_USB_BYP = PAD_ID ( PB , 22 ) , MX21_PAD_USB_PWR = PAD_ID ( PB , 23 ) , MX21_PAD_USB_OC = PAD_ID ( PB , 24 ) , MX21_PAD_USBH_ON = PAD_ID ( PB , 25 ) , MX21_PAD_USBH1_FS = PAD_ID ( PB , 26 ) , MX21_PAD_USBH1_OE = PAD_ID ( PB , 27 ) , MX21_PAD_USBH1_TXDM = PAD_ID ( PB , 28 ) , MX21_PAD_USBH1_TXDP = PAD_ID ( PB , 29 ) , MX21_PAD_USBH1_RXDM = PAD_ID ( PB , 30 ) , MX21_PAD_USBH1_RXDP = PAD_ID ( PB , 31 ) , MX21_PAD_USBG_SDA = PAD_ID ( PC , 5 ) , MX21_PAD_USBG_SCL = PAD_ID ( PC , 6 ) , MX21_PAD_USBG_ON = PAD_ID ( PC , 7 ) , MX21_PAD_USBG_FS = PAD_ID ( PC , 8 ) , MX21_PAD_USBG_OE = PAD_ID ( PC , 9 ) , MX21_PAD_USBG_TXDM = PAD_ID ( PC , 10 ) , MX21_PAD_USBG_TXDP = PAD_ID ( PC , 11 ) , MX21_PAD_USBG_RXDM = PAD_ID ( PC , 12 ) , MX21_PAD_USBG_RXDP = PAD_ID ( PC , 13 ) , MX21_PAD_TOUT = PAD_ID ( PC , 14 ) , MX21_PAD_TIN = PAD_ID ( PC , 15 ) , MX21_PAD_SAP_FS = PAD_ID ( PC , 16 ) , MX21_PAD_SAP_RXD = PAD_ID ( PC , 17 ) , MX21_PAD_SAP_TXD = PAD_ID ( PC , 18 ) , MX21_PAD_SAP_CLK = PAD_ID ( PC , 19 ) , MX21_PAD_SSI1_FS = PAD_ID ( PC , 20 ) , MX21_PAD_SSI1_RXD = PAD_ID ( PC , 21 ) , MX21_PAD_SSI1_TXD = PAD_ID ( PC , 22 ) , MX21_PAD_SSI1_CLK = PAD_ID ( PC , 23 ) , MX21_PAD_SSI2_FS = PAD_ID ( PC , 24 ) , MX21_PAD_SSI2_RXD = PAD_ID ( PC , 25 ) , MX21_PAD_SSI2_TXD = PAD_ID ( PC , 26 ) , MX21_PAD_SSI2_CLK = PAD_ID ( PC , 27 ) , MX21_PAD_SSI3_FS = PAD_ID ( PC , 28 ) , MX21_PAD_SSI3_RXD = PAD_ID ( PC , 29 ) , MX21_PAD_SSI3_TXD = PAD_ID ( PC , 30 ) , MX21_PAD_SSI3_CLK = PAD_ID ( PC , 31 ) , MX21_PAD_I2C_DATA = PAD_ID ( PD , 17 ) , MX21_PAD_I2C_CLK = PAD_ID ( PD , 18 ) , MX21_PAD_CSPI2_SS2 = PAD_ID ( PD , 19 ) , MX21_PAD_CSPI2_SS1 = PAD_ID ( PD , 20 ) , MX21_PAD_CSPI2_SS0 = PAD_ID ( PD , 21 ) , MX21_PAD_CSPI2_SCLK = PAD_ID ( PD , 22 ) , MX21_PAD_CSPI2_MISO = PAD_ID ( PD , 23 ) , MX21_PAD_CSPI2_MOSI = PAD_ID ( PD , 24 ) , MX21_PAD_CSPI1_RDY = PAD_ID ( PD , 25 ) , MX21_PAD_CSPI1_SS2 = PAD_ID ( PD , 26 ) , MX21_PAD_CSPI1_SS1 = PAD_ID ( PD , 27 ) , MX21_PAD_CSPI1_SS0 = PAD_ID ( PD , 28 ) , MX21_PAD_CSPI1_SCLK = PAD_ID ( PD , 29 ) , MX21_PAD_CSPI1_MISO = PAD_ID ( PD , 30 ) , MX21_PAD_CSPI1_MOSI = PAD_ID ( PD , 31 ) , MX21_PAD_TEST_WB2 = PAD_ID ( PE , 0 ) , MX21_PAD_TEST_WB1 = PAD_ID ( PE , 1 ) , MX21_PAD_TEST_WB0 = PAD_ID ( PE , 2 ) , MX21_PAD_UART2_CTS = PAD_ID ( PE , 3 ) , MX21_PAD_UART2_RTS = PAD_ID ( PE , 4 ) , MX21_PAD_PWMO = PAD_ID ( PE , 5 ) , MX21_PAD_UART2_TXD = PAD_ID ( PE , 6 ) , MX21_PAD_UART2_RXD = PAD_ID ( PE , 7 ) , MX21_PAD_UART3_TXD = PAD_ID ( PE , 8 ) , MX21_PAD_UART3_RXD = PAD_ID ( PE , 9 ) , MX21_PAD_UART3_CTS = PAD_ID ( PE , 10 ) , MX21_PAD_UART3_RTS = PAD_ID ( PE , 11 ) , MX21_PAD_UART1_TXD = PAD_ID ( PE , 12 ) , MX21_PAD_UART1_RXD = PAD_ID ( PE , 13 ) , MX21_PAD_UART1_CTS = PAD_ID ( PE , 14 ) , MX21_PAD_UART1_RTS = PAD_ID ( PE , 15 ) , MX21_PAD_RTCK = PAD_ID ( PE , 16 ) , MX21_PAD_RESET_OUT = PAD_ID ( PE , 17 ) , MX21_PAD_SD1_D0 = PAD_ID ( PE , 18 ) , MX21_PAD_SD1_D1 = PAD_ID ( PE , 19 ) , MX21_PAD_SD1_D2 = PAD_ID ( PE , 20 ) , MX21_PAD_SD1_D3 = PAD_ID ( PE , 21 ) , MX21_PAD_SD1_CMD = PAD_ID ( PE , 22 ) , MX21_PAD_SD1_CLK = PAD_ID ( PE , 23 ) , MX21_PAD_NFRB = PAD_ID ( PF , 0 ) , MX21_PAD_NFCE = PAD_ID ( PF , 1 ) , MX21_PAD_NFWP = PAD_ID ( PF , 2 ) , MX21_PAD_NFCLE = PAD_ID ( PF , 3 ) , MX21_PAD_NFALE = PAD_ID ( PF , 4 ) , MX21_PAD_NFRE = PAD_ID ( PF , 5 ) , MX21_PAD_NFWE = PAD_ID ( PF , 6 ) , MX21_PAD_NFIO0 = PAD_ID ( PF , 7 ) , MX21_PAD_NFIO1 = PAD_ID ( PF , 8 ) , MX21_PAD_NFIO2 = PAD_ID ( PF , 9 ) , MX21_PAD_NFIO3 = PAD_ID ( PF , 10 ) , MX21_PAD_NFIO4 = PAD_ID ( PF , 11 ) , MX21_PAD_NFIO5 = PAD_ID ( PF , 12 ) , MX21_PAD_NFIO6 = PAD_ID ( PF , 13 ) , MX21_PAD_NFIO7 = PAD_ID ( PF , 14 ) , MX21_PAD_CLKO = PAD_ID ( PF , 15 ) , MX21_PAD_RESERVED = PAD_ID ( PF , 16 ) , MX21_PAD_CS4 = PAD_ID ( PF , 21 ) , MX21_PAD_CS5 = PAD_ID ( PF , 22 ) , } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7', '146']:
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
