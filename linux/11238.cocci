@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct dmcu_iram_parameters cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct dmcu * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct abm_parameters {  unsigned char min_reduction ;  unsigned char max_reduction ;  unsigned char bright_pos_gain ;  unsigned char dark_pos_gain ;  unsigned char brightness_gain ;  unsigned char contrast_factor ;  unsigned char deviation_gain ;  unsigned char min_knee ;  unsigned char max_knee ; } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4', '14']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 const struct abm_parameters * const cocci_id@p [ ] ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct abm_parameters cocci_id@p [ abm_defines_max_level ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct iram_table_v_2_2 * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
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
if p[0].line in ['25']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct iram_table_v_2 * cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 const unsigned char cocci_id@p [ 13 ] ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['23']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 const unsigned char cocci_id@p [ abm_defines_max_config ] [ abm_defines_max_level ] ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 unsigned char cocci_id@p [ IRAM_SIZE ] ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef uint16_t,uint8_t;
@@
 struct iram_table_v_2_2 {  uint16_t flags ;  uint8_t min_reduction [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t max_reduction [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t bright_pos_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t dark_pos_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t hybrid_factor [ NUM_AGGR_LEVEL ] ;  uint8_t contrast_factor [ NUM_AGGR_LEVEL ] ;  uint8_t deviation_gain [ NUM_AGGR_LEVEL ] ;  uint8_t iir_curve [ NUM_AMBI_LEVEL ] ;  uint8_t min_knee [ NUM_AGGR_LEVEL ] ;  uint8_t max_knee [ NUM_AGGR_LEVEL ] ;  uint16_t min_abm_backlight ;  uint8_t pad [ 19 ] ;  uint16_t crgb_thresh [ NUM_POWER_FN_SEGS ] ;  uint16_t crgb_offset [ NUM_POWER_FN_SEGS ] ;  uint16_t crgb_slope [ NUM_POWER_FN_SEGS ] ;  uint16_t backlight_thresholds [ NUM_BL_CURVE_SEGS ] ;  uint16_t backlight_offsets [ NUM_BL_CURVE_SEGS ] ;  uint8_t psr_state ;  uint8_t dmcu_mcp_interface_version ;  uint8_t dmcu_abm_feature_version ;  uint8_t dmcu_psr_feature_version ;  uint16_t dmcu_version ;  uint8_t dmcu_state ;  uint8_t dummy1 ;  uint8_t dummy2 ;  uint8_t dummy3 ;  uint8_t dummy4 ;  uint8_t dummy5 ;  uint8_t dummy6 ;  uint8_t dummy7 ;  uint8_t dummy8 ;  uint8_t dummy9 ; } cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['26', '60']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['24']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef uint16_t,uint8_t;
@@
 struct iram_table_v_2 {  uint16_t min_abm_backlight ;  uint8_t min_reduction [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t max_reduction [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t bright_pos_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t bright_neg_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t dark_pos_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t dark_neg_gain [ NUM_AMBI_LEVEL ] [ NUM_AGGR_LEVEL ] ;  uint8_t iir_curve [ NUM_AMBI_LEVEL ] ;  uint8_t deviation_gain ;  uint16_t crgb_thresh [ NUM_POWER_FN_SEGS ] ;  uint16_t crgb_offset [ NUM_POWER_FN_SEGS ] ;  uint16_t crgb_slope [ NUM_POWER_FN_SEGS ] ;  uint16_t backlight_thresholds [ NUM_BL_CURVE_SEGS ] ;  uint16_t backlight_offsets [ NUM_BL_CURVE_SEGS ] ;  uint8_t psr_state ;  uint8_t dmcu_mcp_interface_version ;  uint8_t dmcu_abm_feature_version ;  uint8_t dmcu_psr_feature_version ;  uint16_t dmcu_version ;  uint8_t dmcu_state ;  uint16_t blRampReduction ;  uint16_t blRampStart ;  uint8_t dummy5 ;  uint8_t dummy6 ;  uint8_t dummy7 ;  uint8_t dummy8 ;  uint8_t dummy9 ; } cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61', '89']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
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
