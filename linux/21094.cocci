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
if p[0].line in ['11']:
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
if p[0].line in ['9']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum { UNUSED = 0 , IRQ0 , IRQ1 , IRQ2 , IRQ3 , IRQ4 , IRQ5 , IRQ6 , IRQ7 , PINT0 , PINT1 , PINT2 , PINT3 , PINT4 , PINT5 , PINT6 , PINT7 , DMAC0 , DMAC1 , DMAC2 , DMAC3 , DMAC4 , DMAC5 , DMAC6 , DMAC7 , DMAC8 , DMAC9 , DMAC10 , DMAC11 , DMAC12 , DMAC13 , DMAC14 , DMAC15 , USB , VDC4 , CMT0 , CMT1 , BSC , WDT , MTU0_ABCD , MTU0_VEF , MTU1_AB , MTU1_VU , MTU2_AB , MTU2_VU , MTU3_ABCD , MTU3_TCI3V , MTU4_ABCD , MTU4_TCI4V , PWMT1 , PWMT2 , ADC_ADI , SSIF0 , SSII1 , SSII2 , SSII3 , SSII4 , SSII5 , RSPDIF , IIC30 , IIC31 , IIC32 , IIC33 , SCIF0_BRI , SCIF0_ERI , SCIF0_RXI , SCIF0_TXI , SCIF1_BRI , SCIF1_ERI , SCIF1_RXI , SCIF1_TXI , SCIF2_BRI , SCIF2_ERI , SCIF2_RXI , SCIF2_TXI , SCIF3_BRI , SCIF3_ERI , SCIF3_RXI , SCIF3_TXI , SCIF4_BRI , SCIF4_ERI , SCIF4_RXI , SCIF4_TXI , SCIF5_BRI , SCIF5_ERI , SCIF5_RXI , SCIF5_TXI , SCIF6_BRI , SCIF6_ERI , SCIF6_RXI , SCIF6_TXI , SCIF7_BRI , SCIF7_ERI , SCIF7_RXI , SCIF7_TXI , RCAN0 , RCAN1 , RCAN2 , RSPIC0 , RSPIC1 , IEBC , CD_ROMD , NFMC , SDHI0 , SDHI1 , RTC , SRCC0 , SRCC1 , SRCC2 , PINT , SCIF0 , SCIF1 , SCIF2 , SCIF3 , SCIF4 , SCIF5 , SCIF6 , SCIF7 , } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
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
if p[0].line in ['10']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct r8a66597_platdata cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 struct platform_device cocci_id@p ;

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
