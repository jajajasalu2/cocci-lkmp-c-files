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
 struct imx_pinctrl * cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum vf610_pads { VF610_PAD_PTA6 = 0 , VF610_PAD_PTA8 = 1 , VF610_PAD_PTA9 = 2 , VF610_PAD_PTA10 = 3 , VF610_PAD_PTA11 = 4 , VF610_PAD_PTA12 = 5 , VF610_PAD_PTA16 = 6 , VF610_PAD_PTA17 = 7 , VF610_PAD_PTA18 = 8 , VF610_PAD_PTA19 = 9 , VF610_PAD_PTA20 = 10 , VF610_PAD_PTA21 = 11 , VF610_PAD_PTA22 = 12 , VF610_PAD_PTA23 = 13 , VF610_PAD_PTA24 = 14 , VF610_PAD_PTA25 = 15 , VF610_PAD_PTA26 = 16 , VF610_PAD_PTA27 = 17 , VF610_PAD_PTA28 = 18 , VF610_PAD_PTA29 = 19 , VF610_PAD_PTA30 = 20 , VF610_PAD_PTA31 = 21 , VF610_PAD_PTB0 = 22 , VF610_PAD_PTB1 = 23 , VF610_PAD_PTB2 = 24 , VF610_PAD_PTB3 = 25 , VF610_PAD_PTB4 = 26 , VF610_PAD_PTB5 = 27 , VF610_PAD_PTB6 = 28 , VF610_PAD_PTB7 = 29 , VF610_PAD_PTB8 = 30 , VF610_PAD_PTB9 = 31 , VF610_PAD_PTB10 = 32 , VF610_PAD_PTB11 = 33 , VF610_PAD_PTB12 = 34 , VF610_PAD_PTB13 = 35 , VF610_PAD_PTB14 = 36 , VF610_PAD_PTB15 = 37 , VF610_PAD_PTB16 = 38 , VF610_PAD_PTB17 = 39 , VF610_PAD_PTB18 = 40 , VF610_PAD_PTB19 = 41 , VF610_PAD_PTB20 = 42 , VF610_PAD_PTB21 = 43 , VF610_PAD_PTB22 = 44 , VF610_PAD_PTC0 = 45 , VF610_PAD_PTC1 = 46 , VF610_PAD_PTC2 = 47 , VF610_PAD_PTC3 = 48 , VF610_PAD_PTC4 = 49 , VF610_PAD_PTC5 = 50 , VF610_PAD_PTC6 = 51 , VF610_PAD_PTC7 = 52 , VF610_PAD_PTC8 = 53 , VF610_PAD_PTC9 = 54 , VF610_PAD_PTC10 = 55 , VF610_PAD_PTC11 = 56 , VF610_PAD_PTC12 = 57 , VF610_PAD_PTC13 = 58 , VF610_PAD_PTC14 = 59 , VF610_PAD_PTC15 = 60 , VF610_PAD_PTC16 = 61 , VF610_PAD_PTC17 = 62 , VF610_PAD_PTD31 = 63 , VF610_PAD_PTD30 = 64 , VF610_PAD_PTD29 = 65 , VF610_PAD_PTD28 = 66 , VF610_PAD_PTD27 = 67 , VF610_PAD_PTD26 = 68 , VF610_PAD_PTD25 = 69 , VF610_PAD_PTD24 = 70 , VF610_PAD_PTD23 = 71 , VF610_PAD_PTD22 = 72 , VF610_PAD_PTD21 = 73 , VF610_PAD_PTD20 = 74 , VF610_PAD_PTD19 = 75 , VF610_PAD_PTD18 = 76 , VF610_PAD_PTD17 = 77 , VF610_PAD_PTD16 = 78 , VF610_PAD_PTD0 = 79 , VF610_PAD_PTD1 = 80 , VF610_PAD_PTD2 = 81 , VF610_PAD_PTD3 = 82 , VF610_PAD_PTD4 = 83 , VF610_PAD_PTD5 = 84 , VF610_PAD_PTD6 = 85 , VF610_PAD_PTD7 = 86 , VF610_PAD_PTD8 = 87 , VF610_PAD_PTD9 = 88 , VF610_PAD_PTD10 = 89 , VF610_PAD_PTD11 = 90 , VF610_PAD_PTD12 = 91 , VF610_PAD_PTD13 = 92 , VF610_PAD_PTB23 = 93 , VF610_PAD_PTB24 = 94 , VF610_PAD_PTB25 = 95 , VF610_PAD_PTB26 = 96 , VF610_PAD_PTB27 = 97 , VF610_PAD_PTB28 = 98 , VF610_PAD_PTC26 = 99 , VF610_PAD_PTC27 = 100 , VF610_PAD_PTC28 = 101 , VF610_PAD_PTC29 = 102 , VF610_PAD_PTC30 = 103 , VF610_PAD_PTC31 = 104 , VF610_PAD_PTE0 = 105 , VF610_PAD_PTE1 = 106 , VF610_PAD_PTE2 = 107 , VF610_PAD_PTE3 = 108 , VF610_PAD_PTE4 = 109 , VF610_PAD_PTE5 = 110 , VF610_PAD_PTE6 = 111 , VF610_PAD_PTE7 = 112 , VF610_PAD_PTE8 = 113 , VF610_PAD_PTE9 = 114 , VF610_PAD_PTE10 = 115 , VF610_PAD_PTE11 = 116 , VF610_PAD_PTE12 = 117 , VF610_PAD_PTE13 = 118 , VF610_PAD_PTE14 = 119 , VF610_PAD_PTE15 = 120 , VF610_PAD_PTE16 = 121 , VF610_PAD_PTE17 = 122 , VF610_PAD_PTE18 = 123 , VF610_PAD_PTE19 = 124 , VF610_PAD_PTE20 = 125 , VF610_PAD_PTE21 = 126 , VF610_PAD_PTE22 = 127 , VF610_PAD_PTE23 = 128 , VF610_PAD_PTE24 = 129 , VF610_PAD_PTE25 = 130 , VF610_PAD_PTE26 = 131 , VF610_PAD_PTE27 = 132 , VF610_PAD_PTE28 = 133 , VF610_PAD_PTA7 = 134 , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
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
