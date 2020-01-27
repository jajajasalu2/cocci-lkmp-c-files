@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 enum imx23_pin_enum { GPMI_D00 = PINID ( 0 , 0 ) , GPMI_D01 = PINID ( 0 , 1 ) , GPMI_D02 = PINID ( 0 , 2 ) , GPMI_D03 = PINID ( 0 , 3 ) , GPMI_D04 = PINID ( 0 , 4 ) , GPMI_D05 = PINID ( 0 , 5 ) , GPMI_D06 = PINID ( 0 , 6 ) , GPMI_D07 = PINID ( 0 , 7 ) , GPMI_D08 = PINID ( 0 , 8 ) , GPMI_D09 = PINID ( 0 , 9 ) , GPMI_D10 = PINID ( 0 , 10 ) , GPMI_D11 = PINID ( 0 , 11 ) , GPMI_D12 = PINID ( 0 , 12 ) , GPMI_D13 = PINID ( 0 , 13 ) , GPMI_D14 = PINID ( 0 , 14 ) , GPMI_D15 = PINID ( 0 , 15 ) , GPMI_CLE = PINID ( 0 , 16 ) , GPMI_ALE = PINID ( 0 , 17 ) , GPMI_CE2N = PINID ( 0 , 18 ) , GPMI_RDY0 = PINID ( 0 , 19 ) , GPMI_RDY1 = PINID ( 0 , 20 ) , GPMI_RDY2 = PINID ( 0 , 21 ) , GPMI_RDY3 = PINID ( 0 , 22 ) , GPMI_WPN = PINID ( 0 , 23 ) , GPMI_WRN = PINID ( 0 , 24 ) , GPMI_RDN = PINID ( 0 , 25 ) , AUART1_CTS = PINID ( 0 , 26 ) , AUART1_RTS = PINID ( 0 , 27 ) , AUART1_RX = PINID ( 0 , 28 ) , AUART1_TX = PINID ( 0 , 29 ) , I2C_SCL = PINID ( 0 , 30 ) , I2C_SDA = PINID ( 0 , 31 ) , LCD_D00 = PINID ( 1 , 0 ) , LCD_D01 = PINID ( 1 , 1 ) , LCD_D02 = PINID ( 1 , 2 ) , LCD_D03 = PINID ( 1 , 3 ) , LCD_D04 = PINID ( 1 , 4 ) , LCD_D05 = PINID ( 1 , 5 ) , LCD_D06 = PINID ( 1 , 6 ) , LCD_D07 = PINID ( 1 , 7 ) , LCD_D08 = PINID ( 1 , 8 ) , LCD_D09 = PINID ( 1 , 9 ) , LCD_D10 = PINID ( 1 , 10 ) , LCD_D11 = PINID ( 1 , 11 ) , LCD_D12 = PINID ( 1 , 12 ) , LCD_D13 = PINID ( 1 , 13 ) , LCD_D14 = PINID ( 1 , 14 ) , LCD_D15 = PINID ( 1 , 15 ) , LCD_D16 = PINID ( 1 , 16 ) , LCD_D17 = PINID ( 1 , 17 ) , LCD_RESET = PINID ( 1 , 18 ) , LCD_RS = PINID ( 1 , 19 ) , LCD_WR = PINID ( 1 , 20 ) , LCD_CS = PINID ( 1 , 21 ) , LCD_DOTCK = PINID ( 1 , 22 ) , LCD_ENABLE = PINID ( 1 , 23 ) , LCD_HSYNC = PINID ( 1 , 24 ) , LCD_VSYNC = PINID ( 1 , 25 ) , PWM0 = PINID ( 1 , 26 ) , PWM1 = PINID ( 1 , 27 ) , PWM2 = PINID ( 1 , 28 ) , PWM3 = PINID ( 1 , 29 ) , PWM4 = PINID ( 1 , 30 ) , SSP1_CMD = PINID ( 2 , 0 ) , SSP1_DETECT = PINID ( 2 , 1 ) , SSP1_DATA0 = PINID ( 2 , 2 ) , SSP1_DATA1 = PINID ( 2 , 3 ) , SSP1_DATA2 = PINID ( 2 , 4 ) , SSP1_DATA3 = PINID ( 2 , 5 ) , SSP1_SCK = PINID ( 2 , 6 ) , ROTARYA = PINID ( 2 , 7 ) , ROTARYB = PINID ( 2 , 8 ) , EMI_A00 = PINID ( 2 , 9 ) , EMI_A01 = PINID ( 2 , 10 ) , EMI_A02 = PINID ( 2 , 11 ) , EMI_A03 = PINID ( 2 , 12 ) , EMI_A04 = PINID ( 2 , 13 ) , EMI_A05 = PINID ( 2 , 14 ) , EMI_A06 = PINID ( 2 , 15 ) , EMI_A07 = PINID ( 2 , 16 ) , EMI_A08 = PINID ( 2 , 17 ) , EMI_A09 = PINID ( 2 , 18 ) , EMI_A10 = PINID ( 2 , 19 ) , EMI_A11 = PINID ( 2 , 20 ) , EMI_A12 = PINID ( 2 , 21 ) , EMI_BA0 = PINID ( 2 , 22 ) , EMI_BA1 = PINID ( 2 , 23 ) , EMI_CASN = PINID ( 2 , 24 ) , EMI_CE0N = PINID ( 2 , 25 ) , EMI_CE1N = PINID ( 2 , 26 ) , GPMI_CE1N = PINID ( 2 , 27 ) , GPMI_CE0N = PINID ( 2 , 28 ) , EMI_CKE = PINID ( 2 , 29 ) , EMI_RASN = PINID ( 2 , 30 ) , EMI_WEN = PINID ( 2 , 31 ) , EMI_D00 = PINID ( 3 , 0 ) , EMI_D01 = PINID ( 3 , 1 ) , EMI_D02 = PINID ( 3 , 2 ) , EMI_D03 = PINID ( 3 , 3 ) , EMI_D04 = PINID ( 3 , 4 ) , EMI_D05 = PINID ( 3 , 5 ) , EMI_D06 = PINID ( 3 , 6 ) , EMI_D07 = PINID ( 3 , 7 ) , EMI_D08 = PINID ( 3 , 8 ) , EMI_D09 = PINID ( 3 , 9 ) , EMI_D10 = PINID ( 3 , 10 ) , EMI_D11 = PINID ( 3 , 11 ) , EMI_D12 = PINID ( 3 , 12 ) , EMI_D13 = PINID ( 3 , 13 ) , EMI_D14 = PINID ( 3 , 14 ) , EMI_D15 = PINID ( 3 , 15 ) , EMI_DQM0 = PINID ( 3 , 16 ) , EMI_DQM1 = PINID ( 3 , 17 ) , EMI_DQS0 = PINID ( 3 , 18 ) , EMI_DQS1 = PINID ( 3 , 19 ) , EMI_CLK = PINID ( 3 , 20 ) , EMI_CLKN = PINID ( 3 , 21 ) , } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11', '126']:
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
 const struct mxs_regs cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
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
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct mxs_pinctrl_soc_data cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9]
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
