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
 const unsigned cocci_id@p [ ] ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct tegra_function cocci_id@p [ ] ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
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
if p[0].line in ['4']:
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
if p[0].line in ['7']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum tegra_mux { TEGRA_MUX_BLINK , TEGRA_MUX_CEC , TEGRA_MUX_CLK_12M_OUT , TEGRA_MUX_CLK_32K_IN , TEGRA_MUX_CORE_PWR_REQ , TEGRA_MUX_CPU_PWR_REQ , TEGRA_MUX_CRT , TEGRA_MUX_DAP , TEGRA_MUX_DDR , TEGRA_MUX_DEV3 , TEGRA_MUX_DISPLAYA , TEGRA_MUX_DISPLAYB , TEGRA_MUX_DTV , TEGRA_MUX_EXTPERIPH1 , TEGRA_MUX_EXTPERIPH2 , TEGRA_MUX_EXTPERIPH3 , TEGRA_MUX_GMI , TEGRA_MUX_GMI_ALT , TEGRA_MUX_HDA , TEGRA_MUX_HDCP , TEGRA_MUX_HDMI , TEGRA_MUX_HSI , TEGRA_MUX_I2C1 , TEGRA_MUX_I2C2 , TEGRA_MUX_I2C3 , TEGRA_MUX_I2C4 , TEGRA_MUX_I2CPWR , TEGRA_MUX_I2S0 , TEGRA_MUX_I2S1 , TEGRA_MUX_I2S2 , TEGRA_MUX_I2S3 , TEGRA_MUX_I2S4 , TEGRA_MUX_INVALID , TEGRA_MUX_KBC , TEGRA_MUX_MIO , TEGRA_MUX_NAND , TEGRA_MUX_NAND_ALT , TEGRA_MUX_OWR , TEGRA_MUX_PCIE , TEGRA_MUX_PWM0 , TEGRA_MUX_PWM1 , TEGRA_MUX_PWM2 , TEGRA_MUX_PWM3 , TEGRA_MUX_PWR_INT_N , TEGRA_MUX_RSVD1 , TEGRA_MUX_RSVD2 , TEGRA_MUX_RSVD3 , TEGRA_MUX_RSVD4 , TEGRA_MUX_RTCK , TEGRA_MUX_SATA , TEGRA_MUX_SDMMC1 , TEGRA_MUX_SDMMC2 , TEGRA_MUX_SDMMC3 , TEGRA_MUX_SDMMC4 , TEGRA_MUX_SPDIF , TEGRA_MUX_SPI1 , TEGRA_MUX_SPI2 , TEGRA_MUX_SPI2_ALT , TEGRA_MUX_SPI3 , TEGRA_MUX_SPI4 , TEGRA_MUX_SPI5 , TEGRA_MUX_SPI6 , TEGRA_MUX_SYSCLK , TEGRA_MUX_TEST , TEGRA_MUX_TRACE , TEGRA_MUX_UARTA , TEGRA_MUX_UARTB , TEGRA_MUX_UARTC , TEGRA_MUX_UARTD , TEGRA_MUX_UARTE , TEGRA_MUX_ULPI , TEGRA_MUX_VGP1 , TEGRA_MUX_VGP2 , TEGRA_MUX_VGP3 , TEGRA_MUX_VGP4 , TEGRA_MUX_VGP5 , TEGRA_MUX_VGP6 , TEGRA_MUX_VI , TEGRA_MUX_VI_ALT1 , TEGRA_MUX_VI_ALT2 , TEGRA_MUX_VI_ALT3 , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct tegra_pingroup cocci_id@p [ ] ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 const struct tegra_pinctrl_soc_data cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
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
