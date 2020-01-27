@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 const struct pinmux_func cocci_id@p [ ] ;

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
 const struct pinmux_cfg_reg cocci_id@p [ ] ;

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
 const struct pinmux_data_reg cocci_id@p [ ] ;

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
 const struct sh_pfc_soc_info cocci_id@p ;

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
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PA7_DATA , PA6_DATA , PA5_DATA , PA4_DATA , PA3_DATA , PA2_DATA , PA1_DATA , PA0_DATA , PB7_DATA , PB6_DATA , PB5_DATA , PB4_DATA , PB3_DATA , PB2_DATA , PB1_DATA , PB0_DATA , PC7_DATA , PC6_DATA , PC5_DATA , PC4_DATA , PC3_DATA , PC2_DATA , PC1_DATA , PC0_DATA , PD7_DATA , PD6_DATA , PD5_DATA , PD4_DATA , PD3_DATA , PD2_DATA , PD1_DATA , PD0_DATA , PE7_DATA , PE6_DATA , PE5_DATA , PE4_DATA , PE3_DATA , PE2_DATA , PE1_DATA , PE0_DATA , PF7_DATA , PF6_DATA , PF5_DATA , PF4_DATA , PF3_DATA , PF2_DATA , PF1_DATA , PF0_DATA , PG7_DATA , PG6_DATA , PG5_DATA , PG4_DATA , PG3_DATA , PG2_DATA , PG1_DATA , PG0_DATA , PH5_DATA , PH4_DATA , PH3_DATA , PH2_DATA , PH1_DATA , PH0_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , PA7_IN , PA6_IN , PA5_IN , PA4_IN , PA3_IN , PA2_IN , PA1_IN , PA0_IN , PB7_IN , PB6_IN , PB5_IN , PB4_IN , PB3_IN , PB2_IN , PB1_IN , PB0_IN , PC7_IN , PC6_IN , PC5_IN , PC4_IN , PC3_IN , PC2_IN , PC1_IN , PC0_IN , PD7_IN , PD6_IN , PD5_IN , PD4_IN , PD3_IN , PD2_IN , PD1_IN , PD0_IN , PE7_IN , PE6_IN , PE5_IN , PE4_IN , PE3_IN , PE2_IN , PE1_IN , PE0_IN , PF7_IN , PF6_IN , PF5_IN , PF4_IN , PF3_IN , PF2_IN , PF1_IN , PF0_IN , PG7_IN , PG6_IN , PG5_IN , PG4_IN , PG3_IN , PG2_IN , PG1_IN , PG0_IN , PH5_IN , PH4_IN , PH3_IN , PH2_IN , PH1_IN , PH0_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , PA7_OUT , PA6_OUT , PA5_OUT , PA4_OUT , PA3_OUT , PA2_OUT , PA1_OUT , PA0_OUT , PB7_OUT , PB6_OUT , PB5_OUT , PB4_OUT , PB3_OUT , PB2_OUT , PB1_OUT , PB0_OUT , PC7_OUT , PC6_OUT , PC5_OUT , PC4_OUT , PC3_OUT , PC2_OUT , PC1_OUT , PC0_OUT , PD7_OUT , PD6_OUT , PD5_OUT , PD4_OUT , PD3_OUT , PD2_OUT , PD1_OUT , PD0_OUT , PE7_OUT , PE6_OUT , PE5_OUT , PE4_OUT , PE3_OUT , PE2_OUT , PE1_OUT , PE0_OUT , PF7_OUT , PF6_OUT , PF5_OUT , PF4_OUT , PF3_OUT , PF2_OUT , PF1_OUT , PF0_OUT , PG7_OUT , PG6_OUT , PG5_OUT , PG4_OUT , PG3_OUT , PG2_OUT , PG1_OUT , PG0_OUT , PH5_OUT , PH4_OUT , PH3_OUT , PH2_OUT , PH1_OUT , PH0_OUT , PINMUX_OUTPUT_END , PINMUX_FUNCTION_BEGIN , PA7_FN , PA6_FN , PA5_FN , PA4_FN , PA3_FN , PA2_FN , PA1_FN , PA0_FN , PB7_FN , PB6_FN , PB5_FN , PB4_FN , PB3_FN , PB2_FN , PB1_FN , PB0_FN , PC7_FN , PC6_FN , PC5_FN , PC4_FN , PC3_FN , PC2_FN , PC1_FN , PC0_FN , PD7_FN , PD6_FN , PD5_FN , PD4_FN , PD3_FN , PD2_FN , PD1_FN , PD0_FN , PE7_FN , PE6_FN , PE5_FN , PE4_FN , PE3_FN , PE2_FN , PE1_FN , PE0_FN , PF7_FN , PF6_FN , PF5_FN , PF4_FN , PF3_FN , PF2_FN , PF1_FN , PF0_FN , PG7_FN , PG6_FN , PG5_FN , PG4_FN , PG3_FN , PG2_FN , PG1_FN , PG0_FN , PH5_FN , PH4_FN , PH3_FN , PH2_FN , PH1_FN , PH0_FN , PINMUX_FUNCTION_END , PINMUX_MARK_BEGIN , D31_MARK , D30_MARK , D29_MARK , D28_MARK , D27_MARK , D26_MARK , D25_MARK , D24_MARK , D23_MARK , D22_MARK , D21_MARK , D20_MARK , D19_MARK , D18_MARK , D17_MARK , D16_MARK , BACK_MARK , BREQ_MARK , WE3_MARK , WE2_MARK , CS6_MARK , CS5_MARK , CS4_MARK , CLKOUTENB_MARK , DACK3_MARK , DACK2_MARK , DACK1_MARK , DACK0_MARK , DREQ3_MARK , DREQ2_MARK , DREQ1_MARK , DREQ0_MARK , IRQ3_MARK , IRQ2_MARK , IRQ1_MARK , IRQ0_MARK , DRAK3_MARK , DRAK2_MARK , DRAK1_MARK , DRAK0_MARK , SCK3_MARK , SCK2_MARK , SCK1_MARK , SCK0_MARK , IRL3_MARK , IRL2_MARK , IRL1_MARK , IRL0_MARK , TXD3_MARK , TXD2_MARK , TXD1_MARK , TXD0_MARK , RXD3_MARK , RXD2_MARK , RXD1_MARK , RXD0_MARK , CE2B_MARK , CE2A_MARK , IOIS16_MARK , STATUS1_MARK , STATUS0_MARK , IRQOUT_MARK , PINMUX_MARK_END , } cocci_id@p ;

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
 const struct sh_pfc_pin cocci_id@p [ ] ;

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
typedef u16;
@@
 const u16 cocci_id@p [ ] ;

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
