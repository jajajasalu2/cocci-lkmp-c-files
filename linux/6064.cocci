@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 unsigned cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum imx7ulp_pads { IMX7ULP_PAD_PTC0 = 0 , IMX7ULP_PAD_PTC1 , IMX7ULP_PAD_PTC2 , IMX7ULP_PAD_PTC3 , IMX7ULP_PAD_PTC4 , IMX7ULP_PAD_PTC5 , IMX7ULP_PAD_PTC6 , IMX7ULP_PAD_PTC7 , IMX7ULP_PAD_PTC8 , IMX7ULP_PAD_PTC9 , IMX7ULP_PAD_PTC10 , IMX7ULP_PAD_PTC11 , IMX7ULP_PAD_PTC12 , IMX7ULP_PAD_PTC13 , IMX7ULP_PAD_PTC14 , IMX7ULP_PAD_PTC15 , IMX7ULP_PAD_PTC16 , IMX7ULP_PAD_PTC17 , IMX7ULP_PAD_PTC18 , IMX7ULP_PAD_PTC19 , IMX7ULP_PAD_RESERVE0 , IMX7ULP_PAD_RESERVE1 , IMX7ULP_PAD_RESERVE2 , IMX7ULP_PAD_RESERVE3 , IMX7ULP_PAD_RESERVE4 , IMX7ULP_PAD_RESERVE5 , IMX7ULP_PAD_RESERVE6 , IMX7ULP_PAD_RESERVE7 , IMX7ULP_PAD_RESERVE8 , IMX7ULP_PAD_RESERVE9 , IMX7ULP_PAD_RESERVE10 , IMX7ULP_PAD_RESERVE11 , IMX7ULP_PAD_PTD0 , IMX7ULP_PAD_PTD1 , IMX7ULP_PAD_PTD2 , IMX7ULP_PAD_PTD3 , IMX7ULP_PAD_PTD4 , IMX7ULP_PAD_PTD5 , IMX7ULP_PAD_PTD6 , IMX7ULP_PAD_PTD7 , IMX7ULP_PAD_PTD8 , IMX7ULP_PAD_PTD9 , IMX7ULP_PAD_PTD10 , IMX7ULP_PAD_PTD11 , IMX7ULP_PAD_RESERVE12 , IMX7ULP_PAD_RESERVE13 , IMX7ULP_PAD_RESERVE14 , IMX7ULP_PAD_RESERVE15 , IMX7ULP_PAD_RESERVE16 , IMX7ULP_PAD_RESERVE17 , IMX7ULP_PAD_RESERVE18 , IMX7ULP_PAD_RESERVE19 , IMX7ULP_PAD_RESERVE20 , IMX7ULP_PAD_RESERVE21 , IMX7ULP_PAD_RESERVE22 , IMX7ULP_PAD_RESERVE23 , IMX7ULP_PAD_RESERVE24 , IMX7ULP_PAD_RESERVE25 , IMX7ULP_PAD_RESERVE26 , IMX7ULP_PAD_RESERVE27 , IMX7ULP_PAD_RESERVE28 , IMX7ULP_PAD_RESERVE29 , IMX7ULP_PAD_RESERVE30 , IMX7ULP_PAD_RESERVE31 , IMX7ULP_PAD_PTE0 , IMX7ULP_PAD_PTE1 , IMX7ULP_PAD_PTE2 , IMX7ULP_PAD_PTE3 , IMX7ULP_PAD_PTE4 , IMX7ULP_PAD_PTE5 , IMX7ULP_PAD_PTE6 , IMX7ULP_PAD_PTE7 , IMX7ULP_PAD_PTE8 , IMX7ULP_PAD_PTE9 , IMX7ULP_PAD_PTE10 , IMX7ULP_PAD_PTE11 , IMX7ULP_PAD_PTE12 , IMX7ULP_PAD_PTE13 , IMX7ULP_PAD_PTE14 , IMX7ULP_PAD_PTE15 , IMX7ULP_PAD_RESERVE32 , IMX7ULP_PAD_RESERVE33 , IMX7ULP_PAD_RESERVE34 , IMX7ULP_PAD_RESERVE35 , IMX7ULP_PAD_RESERVE36 , IMX7ULP_PAD_RESERVE37 , IMX7ULP_PAD_RESERVE38 , IMX7ULP_PAD_RESERVE39 , IMX7ULP_PAD_RESERVE40 , IMX7ULP_PAD_RESERVE41 , IMX7ULP_PAD_RESERVE42 , IMX7ULP_PAD_RESERVE43 , IMX7ULP_PAD_RESERVE44 , IMX7ULP_PAD_RESERVE45 , IMX7ULP_PAD_RESERVE46 , IMX7ULP_PAD_RESERVE47 , IMX7ULP_PAD_PTF0 , IMX7ULP_PAD_PTF1 , IMX7ULP_PAD_PTF2 , IMX7ULP_PAD_PTF3 , IMX7ULP_PAD_PTF4 , IMX7ULP_PAD_PTF5 , IMX7ULP_PAD_PTF6 , IMX7ULP_PAD_PTF7 , IMX7ULP_PAD_PTF8 , IMX7ULP_PAD_PTF9 , IMX7ULP_PAD_PTF10 , IMX7ULP_PAD_PTF11 , IMX7ULP_PAD_PTF12 , IMX7ULP_PAD_PTF13 , IMX7ULP_PAD_PTF14 , IMX7ULP_PAD_PTF15 , IMX7ULP_PAD_PTF16 , IMX7ULP_PAD_PTF17 , IMX7ULP_PAD_PTF18 , IMX7ULP_PAD_PTF19 , } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct imx_pinctrl * cocci_id@p ;

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
 struct platform_driver cocci_id@p ;

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
 int cocci_id@p ;

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
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct imx_pin_reg * cocci_id@p ;

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
 void cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct pinctrl_dev * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct pinctrl_gpio_range * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 const struct imx_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
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
