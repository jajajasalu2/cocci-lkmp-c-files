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
 void cocci_id@p ;

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
if p[0].line in ['5']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct imx1_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 enum imx27_pads { MX27_PAD_USBH2_CLK = PAD_ID ( PA , 0 ) , MX27_PAD_USBH2_DIR = PAD_ID ( PA , 1 ) , MX27_PAD_USBH2_DATA7 = PAD_ID ( PA , 2 ) , MX27_PAD_USBH2_NXT = PAD_ID ( PA , 3 ) , MX27_PAD_USBH2_STP = PAD_ID ( PA , 4 ) , MX27_PAD_LSCLK = PAD_ID ( PA , 5 ) , MX27_PAD_LD0 = PAD_ID ( PA , 6 ) , MX27_PAD_LD1 = PAD_ID ( PA , 7 ) , MX27_PAD_LD2 = PAD_ID ( PA , 8 ) , MX27_PAD_LD3 = PAD_ID ( PA , 9 ) , MX27_PAD_LD4 = PAD_ID ( PA , 10 ) , MX27_PAD_LD5 = PAD_ID ( PA , 11 ) , MX27_PAD_LD6 = PAD_ID ( PA , 12 ) , MX27_PAD_LD7 = PAD_ID ( PA , 13 ) , MX27_PAD_LD8 = PAD_ID ( PA , 14 ) , MX27_PAD_LD9 = PAD_ID ( PA , 15 ) , MX27_PAD_LD10 = PAD_ID ( PA , 16 ) , MX27_PAD_LD11 = PAD_ID ( PA , 17 ) , MX27_PAD_LD12 = PAD_ID ( PA , 18 ) , MX27_PAD_LD13 = PAD_ID ( PA , 19 ) , MX27_PAD_LD14 = PAD_ID ( PA , 20 ) , MX27_PAD_LD15 = PAD_ID ( PA , 21 ) , MX27_PAD_LD16 = PAD_ID ( PA , 22 ) , MX27_PAD_LD17 = PAD_ID ( PA , 23 ) , MX27_PAD_REV = PAD_ID ( PA , 24 ) , MX27_PAD_CLS = PAD_ID ( PA , 25 ) , MX27_PAD_PS = PAD_ID ( PA , 26 ) , MX27_PAD_SPL_SPR = PAD_ID ( PA , 27 ) , MX27_PAD_HSYNC = PAD_ID ( PA , 28 ) , MX27_PAD_VSYNC = PAD_ID ( PA , 29 ) , MX27_PAD_CONTRAST = PAD_ID ( PA , 30 ) , MX27_PAD_OE_ACD = PAD_ID ( PA , 31 ) , MX27_PAD_SD2_D0 = PAD_ID ( PB , 4 ) , MX27_PAD_SD2_D1 = PAD_ID ( PB , 5 ) , MX27_PAD_SD2_D2 = PAD_ID ( PB , 6 ) , MX27_PAD_SD2_D3 = PAD_ID ( PB , 7 ) , MX27_PAD_SD2_CMD = PAD_ID ( PB , 8 ) , MX27_PAD_SD2_CLK = PAD_ID ( PB , 9 ) , MX27_PAD_CSI_D0 = PAD_ID ( PB , 10 ) , MX27_PAD_CSI_D1 = PAD_ID ( PB , 11 ) , MX27_PAD_CSI_D2 = PAD_ID ( PB , 12 ) , MX27_PAD_CSI_D3 = PAD_ID ( PB , 13 ) , MX27_PAD_CSI_D4 = PAD_ID ( PB , 14 ) , MX27_PAD_CSI_MCLK = PAD_ID ( PB , 15 ) , MX27_PAD_CSI_PIXCLK = PAD_ID ( PB , 16 ) , MX27_PAD_CSI_D5 = PAD_ID ( PB , 17 ) , MX27_PAD_CSI_D6 = PAD_ID ( PB , 18 ) , MX27_PAD_CSI_D7 = PAD_ID ( PB , 19 ) , MX27_PAD_CSI_VSYNC = PAD_ID ( PB , 20 ) , MX27_PAD_CSI_HSYNC = PAD_ID ( PB , 21 ) , MX27_PAD_USBH1_SUSP = PAD_ID ( PB , 22 ) , MX27_PAD_USB_PWR = PAD_ID ( PB , 23 ) , MX27_PAD_USB_OC_B = PAD_ID ( PB , 24 ) , MX27_PAD_USBH1_RCV = PAD_ID ( PB , 25 ) , MX27_PAD_USBH1_FS = PAD_ID ( PB , 26 ) , MX27_PAD_USBH1_OE_B = PAD_ID ( PB , 27 ) , MX27_PAD_USBH1_TXDM = PAD_ID ( PB , 28 ) , MX27_PAD_USBH1_TXDP = PAD_ID ( PB , 29 ) , MX27_PAD_USBH1_RXDM = PAD_ID ( PB , 30 ) , MX27_PAD_USBH1_RXDP = PAD_ID ( PB , 31 ) , MX27_PAD_I2C2_SDA = PAD_ID ( PC , 5 ) , MX27_PAD_I2C2_SCL = PAD_ID ( PC , 6 ) , MX27_PAD_USBOTG_DATA5 = PAD_ID ( PC , 7 ) , MX27_PAD_USBOTG_DATA6 = PAD_ID ( PC , 8 ) , MX27_PAD_USBOTG_DATA0 = PAD_ID ( PC , 9 ) , MX27_PAD_USBOTG_DATA2 = PAD_ID ( PC , 10 ) , MX27_PAD_USBOTG_DATA1 = PAD_ID ( PC , 11 ) , MX27_PAD_USBOTG_DATA4 = PAD_ID ( PC , 12 ) , MX27_PAD_USBOTG_DATA3 = PAD_ID ( PC , 13 ) , MX27_PAD_TOUT = PAD_ID ( PC , 14 ) , MX27_PAD_TIN = PAD_ID ( PC , 15 ) , MX27_PAD_SSI4_FS = PAD_ID ( PC , 16 ) , MX27_PAD_SSI4_RXDAT = PAD_ID ( PC , 17 ) , MX27_PAD_SSI4_TXDAT = PAD_ID ( PC , 18 ) , MX27_PAD_SSI4_CLK = PAD_ID ( PC , 19 ) , MX27_PAD_SSI1_FS = PAD_ID ( PC , 20 ) , MX27_PAD_SSI1_RXDAT = PAD_ID ( PC , 21 ) , MX27_PAD_SSI1_TXDAT = PAD_ID ( PC , 22 ) , MX27_PAD_SSI1_CLK = PAD_ID ( PC , 23 ) , MX27_PAD_SSI2_FS = PAD_ID ( PC , 24 ) , MX27_PAD_SSI2_RXDAT = PAD_ID ( PC , 25 ) , MX27_PAD_SSI2_TXDAT = PAD_ID ( PC , 26 ) , MX27_PAD_SSI2_CLK = PAD_ID ( PC , 27 ) , MX27_PAD_SSI3_FS = PAD_ID ( PC , 28 ) , MX27_PAD_SSI3_RXDAT = PAD_ID ( PC , 29 ) , MX27_PAD_SSI3_TXDAT = PAD_ID ( PC , 30 ) , MX27_PAD_SSI3_CLK = PAD_ID ( PC , 31 ) , MX27_PAD_SD3_CMD = PAD_ID ( PD , 0 ) , MX27_PAD_SD3_CLK = PAD_ID ( PD , 1 ) , MX27_PAD_ATA_DATA0 = PAD_ID ( PD , 2 ) , MX27_PAD_ATA_DATA1 = PAD_ID ( PD , 3 ) , MX27_PAD_ATA_DATA2 = PAD_ID ( PD , 4 ) , MX27_PAD_ATA_DATA3 = PAD_ID ( PD , 5 ) , MX27_PAD_ATA_DATA4 = PAD_ID ( PD , 6 ) , MX27_PAD_ATA_DATA5 = PAD_ID ( PD , 7 ) , MX27_PAD_ATA_DATA6 = PAD_ID ( PD , 8 ) , MX27_PAD_ATA_DATA7 = PAD_ID ( PD , 9 ) , MX27_PAD_ATA_DATA8 = PAD_ID ( PD , 10 ) , MX27_PAD_ATA_DATA9 = PAD_ID ( PD , 11 ) , MX27_PAD_ATA_DATA10 = PAD_ID ( PD , 12 ) , MX27_PAD_ATA_DATA11 = PAD_ID ( PD , 13 ) , MX27_PAD_ATA_DATA12 = PAD_ID ( PD , 14 ) , MX27_PAD_ATA_DATA13 = PAD_ID ( PD , 15 ) , MX27_PAD_ATA_DATA14 = PAD_ID ( PD , 16 ) , MX27_PAD_I2C_DATA = PAD_ID ( PD , 17 ) , MX27_PAD_I2C_CLK = PAD_ID ( PD , 18 ) , MX27_PAD_CSPI2_SS2 = PAD_ID ( PD , 19 ) , MX27_PAD_CSPI2_SS1 = PAD_ID ( PD , 20 ) , MX27_PAD_CSPI2_SS0 = PAD_ID ( PD , 21 ) , MX27_PAD_CSPI2_SCLK = PAD_ID ( PD , 22 ) , MX27_PAD_CSPI2_MISO = PAD_ID ( PD , 23 ) , MX27_PAD_CSPI2_MOSI = PAD_ID ( PD , 24 ) , MX27_PAD_CSPI1_RDY = PAD_ID ( PD , 25 ) , MX27_PAD_CSPI1_SS2 = PAD_ID ( PD , 26 ) , MX27_PAD_CSPI1_SS1 = PAD_ID ( PD , 27 ) , MX27_PAD_CSPI1_SS0 = PAD_ID ( PD , 28 ) , MX27_PAD_CSPI1_SCLK = PAD_ID ( PD , 29 ) , MX27_PAD_CSPI1_MISO = PAD_ID ( PD , 30 ) , MX27_PAD_CSPI1_MOSI = PAD_ID ( PD , 31 ) , MX27_PAD_USBOTG_NXT = PAD_ID ( PE , 0 ) , MX27_PAD_USBOTG_STP = PAD_ID ( PE , 1 ) , MX27_PAD_USBOTG_DIR = PAD_ID ( PE , 2 ) , MX27_PAD_UART2_CTS = PAD_ID ( PE , 3 ) , MX27_PAD_UART2_RTS = PAD_ID ( PE , 4 ) , MX27_PAD_PWMO = PAD_ID ( PE , 5 ) , MX27_PAD_UART2_TXD = PAD_ID ( PE , 6 ) , MX27_PAD_UART2_RXD = PAD_ID ( PE , 7 ) , MX27_PAD_UART3_TXD = PAD_ID ( PE , 8 ) , MX27_PAD_UART3_RXD = PAD_ID ( PE , 9 ) , MX27_PAD_UART3_CTS = PAD_ID ( PE , 10 ) , MX27_PAD_UART3_RTS = PAD_ID ( PE , 11 ) , MX27_PAD_UART1_TXD = PAD_ID ( PE , 12 ) , MX27_PAD_UART1_RXD = PAD_ID ( PE , 13 ) , MX27_PAD_UART1_CTS = PAD_ID ( PE , 14 ) , MX27_PAD_UART1_RTS = PAD_ID ( PE , 15 ) , MX27_PAD_RTCK = PAD_ID ( PE , 16 ) , MX27_PAD_RESET_OUT_B = PAD_ID ( PE , 17 ) , MX27_PAD_SD1_D0 = PAD_ID ( PE , 18 ) , MX27_PAD_SD1_D1 = PAD_ID ( PE , 19 ) , MX27_PAD_SD1_D2 = PAD_ID ( PE , 20 ) , MX27_PAD_SD1_D3 = PAD_ID ( PE , 21 ) , MX27_PAD_SD1_CMD = PAD_ID ( PE , 22 ) , MX27_PAD_SD1_CLK = PAD_ID ( PE , 23 ) , MX27_PAD_USBOTG_CLK = PAD_ID ( PE , 24 ) , MX27_PAD_USBOTG_DATA7 = PAD_ID ( PE , 25 ) , MX27_PAD_NFRB = PAD_ID ( PF , 0 ) , MX27_PAD_NFCLE = PAD_ID ( PF , 1 ) , MX27_PAD_NFWP_B = PAD_ID ( PF , 2 ) , MX27_PAD_NFCE_B = PAD_ID ( PF , 3 ) , MX27_PAD_NFALE = PAD_ID ( PF , 4 ) , MX27_PAD_NFRE_B = PAD_ID ( PF , 5 ) , MX27_PAD_NFWE_B = PAD_ID ( PF , 6 ) , MX27_PAD_PC_POE = PAD_ID ( PF , 7 ) , MX27_PAD_PC_RW_B = PAD_ID ( PF , 8 ) , MX27_PAD_IOIS16 = PAD_ID ( PF , 9 ) , MX27_PAD_PC_RST = PAD_ID ( PF , 10 ) , MX27_PAD_PC_BVD2 = PAD_ID ( PF , 11 ) , MX27_PAD_PC_BVD1 = PAD_ID ( PF , 12 ) , MX27_PAD_PC_VS2 = PAD_ID ( PF , 13 ) , MX27_PAD_PC_VS1 = PAD_ID ( PF , 14 ) , MX27_PAD_CLKO = PAD_ID ( PF , 15 ) , MX27_PAD_PC_PWRON = PAD_ID ( PF , 16 ) , MX27_PAD_PC_READY = PAD_ID ( PF , 17 ) , MX27_PAD_PC_WAIT_B = PAD_ID ( PF , 18 ) , MX27_PAD_PC_CD2_B = PAD_ID ( PF , 19 ) , MX27_PAD_PC_CD1_B = PAD_ID ( PF , 20 ) , MX27_PAD_CS4_B = PAD_ID ( PF , 21 ) , MX27_PAD_CS5_B = PAD_ID ( PF , 22 ) , MX27_PAD_ATA_DATA15 = PAD_ID ( PF , 23 ) , } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9', '177']:
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
if p[0].line in ['178']:
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
