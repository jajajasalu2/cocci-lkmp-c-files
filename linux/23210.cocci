@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 const struct snd_soc_component_driver cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['107']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 const struct snd_kcontrol_new cocci_id@p [ ] ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['110']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct i2c_client * cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['105']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct i2c_driver cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['101']:
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
if p[0].line in ['93']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct max9768_pdata * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['103']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct regmap_config cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['106']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct snd_kcontrol * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['92']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct max9768 * cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 const  cocci_id@p ( volume_tlv , 
							    0 , 0 , 
							    TLV_DB_SCALE_ITEM ( - 16150 , 0 , 0 ) , 
							    1 , 1 , 
							    TLV_DB_SCALE_ITEM ( - 9280 , 0 , 0 ) , 
							    2 , 2 , 
							    TLV_DB_SCALE_ITEM ( - 9030 , 0 , 0 ) , 
							    3 , 3 , 
							    TLV_DB_SCALE_ITEM ( - 8680 , 0 , 0 ) , 
							    4 , 4 , 
							    TLV_DB_SCALE_ITEM ( - 8430 , 0 , 0 ) , 
							    5 , 5 , 
							    TLV_DB_SCALE_ITEM ( - 8080 , 0 , 0 ) , 
							    6 , 6 , 
							    TLV_DB_SCALE_ITEM ( - 7830 , 0 , 0 ) , 
							    7 , 7 , 
							    TLV_DB_SCALE_ITEM ( - 7470 , 0 , 0 ) , 
							    8 , 8 , 
							    TLV_DB_SCALE_ITEM ( - 7220 , 0 , 0 ) , 
							    9 , 9 , 
							    TLV_DB_SCALE_ITEM ( - 6870 , 0 , 0 ) , 
							    10 , 10 , 
							    TLV_DB_SCALE_ITEM ( - 6620 , 0 , 0 ) , 
							    11 , 11 , 
							    TLV_DB_SCALE_ITEM ( - 6270 , 0 , 0 ) , 
							    12 , 12 , 
							    TLV_DB_SCALE_ITEM ( - 6020 , 0 , 0 ) , 
							    13 , 13 , 
							    TLV_DB_SCALE_ITEM ( - 5670 , 0 , 0 ) , 
							    14 , 14 , 
							    TLV_DB_SCALE_ITEM ( - 5420 , 0 , 0 ) , 
							    15 , 17 , 
							    TLV_DB_SCALE_ITEM ( - 5060 , 250 , 0 ) , 
							    18 , 18 , 
							    TLV_DB_SCALE_ITEM ( - 4370 , 0 , 0 ) , 
							    19 , 19 , 
							    TLV_DB_SCALE_ITEM ( - 4210 , 0 , 0 ) , 
							    20 , 20 , 
							    TLV_DB_SCALE_ITEM ( - 3960 , 0 , 0 ) , 
							    21 , 21 , 
							    TLV_DB_SCALE_ITEM ( - 3760 , 0 , 0 ) , 
							    22 , 22 , 
							    TLV_DB_SCALE_ITEM ( - 3600 , 0 , 0 ) , 
							    23 , 23 , 
							    TLV_DB_SCALE_ITEM ( - 3340 , 0 , 0 ) , 
							    24 , 24 , 
							    TLV_DB_SCALE_ITEM ( - 3150 , 0 , 0 ) , 
							    25 , 25 , 
							    TLV_DB_SCALE_ITEM ( - 2980 , 0 , 0 ) , 
							    26 , 26 , 
							    TLV_DB_SCALE_ITEM ( - 2720 , 0 , 0 ) , 
							    27 , 27 , 
							    TLV_DB_SCALE_ITEM ( - 2520 , 0 , 0 ) , 
							    28 , 30 , 
							    TLV_DB_SCALE_ITEM ( - 2350 , 190 , 0 ) , 
							    31 , 31 , 
							    TLV_DB_SCALE_ITEM ( - 1750 , 0 , 0 ) , 
							    32 , 34 , 
							    TLV_DB_SCALE_ITEM ( - 1640 , 100 , 0 ) , 
							    35 , 37 , 
							    TLV_DB_SCALE_ITEM ( - 1310 , 110 , 0 ) , 
							    38 , 39 , 
							    TLV_DB_SCALE_ITEM ( - 990 , 100 , 0 ) , 
							    40 , 40 , 
							    TLV_DB_SCALE_ITEM ( - 710 , 0 , 0 ) , 
							    41 , 41 , 
							    TLV_DB_SCALE_ITEM ( - 600 , 0 , 0 ) , 
							    42 , 42 , 
							    TLV_DB_SCALE_ITEM ( - 500 , 0 , 0 ) , 
							    43 , 43 , 
							    TLV_DB_SCALE_ITEM ( - 340 , 0 , 0 ) , 
							    44 , 44 , 
							    TLV_DB_SCALE_ITEM ( - 190 , 0 , 0 ) , 
							    45 , 45 , 
							    TLV_DB_SCALE_ITEM ( - 50 , 0 , 0 ) , 
							    46 , 46 , 
							    TLV_DB_SCALE_ITEM ( 50 , 0 , 0 ) , 
							    47 , 50 , 
							    TLV_DB_SCALE_ITEM ( 120 , 40 , 0 ) , 
							    51 , 57 , 
							    TLV_DB_SCALE_ITEM ( 290 , 50 , 0 ) , 
							    58 , 58 , 
							    TLV_DB_SCALE_ITEM ( 650 , 0 , 0 ) , 
							    59 , 62 , 
							    TLV_DB_SCALE_ITEM ( 700 , 60 , 0 ) , 
							    63 , 63 , 
							    TLV_DB_SCALE_ITEM ( 950 , 0 , 0 ) ) ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2', '88']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 const struct i2c_device_id * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['104']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct snd_ctl_elem_value * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['91']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct snd_soc_component * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['90']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 const struct reg_default cocci_id@p [ ] ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['94']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 const struct i2c_device_id cocci_id@p [ ] ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 const struct snd_soc_dapm_route cocci_id@p [ ] ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct max9768 {  struct regmap * regmap ;  int mute_gpio ;  int shdn_gpio ;  u32 flags ; } cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['95', '100']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 const struct snd_soc_dapm_widget cocci_id@p [ ] ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['109']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18]
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
