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
if p[0].line in ['9']:
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
if p[0].line in ['6']:
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
if p[0].line in ['5']:
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
if p[0].line in ['2']:
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
if p[0].line in ['15']:
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
if p[0].line in ['3']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 enum { UNUSED = 0 , IRL_LLLL , IRL_LLLH , IRL_LLHL , IRL_LLHH , IRL_LHLL , IRL_LHLH , IRL_LHHL , IRL_LHHH , IRL_HLLL , IRL_HLLH , IRL_HLHL , IRL_HLHH , IRL_HHLL , IRL_HHLH , IRL_HHHL , IRQ0 , IRQ1 , IRQ2 , IRQ3 , HUDII , TMU0 , TMU1 , TMU2 , TMU3 , TMU4 , TMU5 , PCII0 , PCII1 , PCII2 , PCII3 , PCII4 , PCII5 , PCII6 , PCII7 , PCII8 , PCII9 , SCIF0_ERI , SCIF0_RXI , SCIF0_BRI , SCIF0_TXI , SCIF1_ERI , SCIF1_RXI , SCIF1_BRI , SCIF1_TXI , SCIF2_ERI , SCIF2_RXI , SCIF2_BRI , SCIF2_TXI , SCIF3_ERI , SCIF3_RXI , SCIF3_BRI , SCIF3_TXI , DMAC0_DMINT0 , DMAC0_DMINT1 , DMAC0_DMINT2 , DMAC0_DMINT3 , DMAC0_DMINT4 , DMAC0_DMINT5 , DMAC0_DMAE , DU , DMAC1_DMINT6 , DMAC1_DMINT7 , DMAC1_DMINT8 , DMAC1_DMINT9 , DMAC1_DMINT10 , DMAC1_DMINT11 , DMAC1_DMAE , IIC , VIN0 , VIN1 , VCORE0 , ATAPI , DTU0 , DTU1 , DTU2 , DTU3 , FE0 , FE1 , GPIO0 , GPIO1 , GPIO2 , GPIO3 , PAM , IRM , INTICI0 , INTICI1 , INTICI2 , INTICI3 , INTICI4 , INTICI5 , INTICI6 , INTICI7 , IRL , PCII56789 , SCIF0 , SCIF1 , SCIF2 , SCIF3 , DMAC0 , DMAC1 , } cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
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
