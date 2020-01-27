@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct plat_sci_port cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct resource cocci_id@p [ ] ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
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
if p[0].line in ['2']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct sh_timer_config cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
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
if p[0].line in ['10']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct platform_device cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum { UNUSED = 0 , IRL0_LLLL , IRL0_LLLH , IRL0_LLHL , IRL0_LLHH , IRL0_LHLL , IRL0_LHLH , IRL0_LHHL , IRL0_LHHH , IRL0_HLLL , IRL0_HLLH , IRL0_HLHL , IRL0_HLHH , IRL0_HHLL , IRL0_HHLH , IRL0_HHHL , IRQ0 , IRQ1 , IRQ2 , IRQ3 , DU , TMU00 , TMU10 , TMU20 , TMU21 , TMU30 , TMU40 , TMU50 , TMU51 , TMU60 , TMU70 , TMU80 , RESET_WDT , USB , HUDI , SHDMAC , SSI0 , SSI1 , SSI2 , SSI3 , VIN0 , RGPVG , _2DG , MMC , HSPI , LBSCATA , I2C0 , RCAN0 , MIMLB , SCIF0 , SCIF1 , SCIF2 , SCIF3 , SCIF4 , SCIF5 , LBSCDMAC0 , LBSCDMAC1 , LBSCDMAC2 , RCAN1 , SDHI0 , SDHI1 , IEBUS , HPBDMAC0_3 , HPBDMAC4_10 , HPBDMAC11_18 , HPBDMAC19_22 , HPBDMAC23_25_27_28 , RTC , VIN1 , LCDC , SRC0 , SRC1 , GETHER , SDHI2 , GPIO0_3 , GPIO4_5 , STIF0 , STIF1 , ADMAC , HIF , FLCTL , ADC , MTU2 , RSPI , QSPI , HSCIF , VEU3F_VE3 , STIF_M , GPIO_M , HPBDMAC_M , LBSCDMAC_M , RCAN_M , SRC_M , SCIF_M , LCDC_M , _2DG_M , VIN_M , TMU_3_M , TMU_0_M , RCAN_P , LBSCDMAC_P , SDHI , SSI , SPI , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
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
