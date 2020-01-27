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
if p[0].line in ['16']:
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
if p[0].line in ['11']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct usb_ohci_pdata cocci_id@p ;

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
 int cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct sh_timer_config cocci_id@p ;

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
 const unsigned int cocci_id@p [ ] ;

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
 const struct sh_dmae_slave_config cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 enum { UNUSED = 0 , IRL0_LLLL , IRL0_LLLH , IRL0_LLHL , IRL0_LLHH , IRL0_LHLL , IRL0_LHLH , IRL0_LHHL , IRL0_LHHH , IRL0_HLLL , IRL0_HLLH , IRL0_HLHL , IRL0_HLHH , IRL0_HHLL , IRL0_HHLH , IRL0_HHHL , IRL4_LLLL , IRL4_LLLH , IRL4_LLHL , IRL4_LLHH , IRL4_LHLL , IRL4_LHLH , IRL4_LHHL , IRL4_LHHH , IRL4_HLLL , IRL4_HLLH , IRL4_HLHL , IRL4_HLHH , IRL4_HHLL , IRL4_HHLH , IRL4_HHHL , IRQ0 , IRQ1 , IRQ2 , IRQ3 , IRQ4 , IRQ5 , IRQ6 , IRQ7 , SDHI , DVC , IRQ8 , IRQ9 , IRQ11 , IRQ10 , IRQ12 , IRQ13 , IRQ14 , IRQ15 , TMU0 , TMU1 , TMU2 , TMU2_TICPI , TMU3 , TMU4 , TMU5 , HUDI , ARC4 , DMAC0_5 , DMAC6_7 , DMAC8_11 , SCIF0 , SCIF1 , SCIF2 , SCIF3 , SCIF4 , USB0 , USB1 , JMC , SPI0 , SPI1 , TMR01 , TMR23 , TMR45 , FRT , LPC , LPC5 , LPC6 , LPC7 , LPC8 , PECI0 , PECI1 , PECI2 , PECI3 , PECI4 , PECI5 , ETHERC , ADC0 , ADC1 , SIM , IIC0_0 , IIC0_1 , IIC0_2 , IIC0_3 , IIC1_0 , IIC1_1 , IIC1_2 , IIC1_3 , IIC2_0 , IIC2_1 , IIC2_2 , IIC2_3 , IIC3_0 , IIC3_1 , IIC3_2 , IIC3_3 , IIC4_0 , IIC4_1 , IIC4_2 , IIC4_3 , IIC5_0 , IIC5_1 , IIC5_2 , IIC5_3 , IIC6_0 , IIC6_1 , IIC6_2 , IIC6_3 , IIC7_0 , IIC7_1 , IIC7_2 , IIC7_3 , IIC8_0 , IIC8_1 , IIC8_2 , IIC8_3 , IIC9_0 , IIC9_1 , IIC9_2 , IIC9_3 , ONFICTL , MMC1 , MMC2 , ECCU , PCIC , G200 , RSPI , SGPIO , DMINT12 , DMINT13 , DMINT14 , DMINT15 , DMINT16 , DMINT17 , DMINT18 , DMINT19 , DMINT20 , DMINT21 , DMINT22 , DMINT23 , DDRECC , TSIP , PCIE_BRIDGE , WDT0B , WDT1B , WDT2B , WDT3B , WDT4B , WDT5B , WDT6B , WDT7B , WDT8B , GETHER0 , GETHER1 , GETHER2 , PBIA , PBIB , PBIC , DMAE2 , DMAE3 , SERMUX2 , SERMUX3 , TMU012 , TMU345 , } cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct platform_device cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct sh_dmae_pdata cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 const struct sh_dmae_channel cocci_id@p [ ] ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
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
