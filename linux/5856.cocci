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
if p[0].line in ['6']:
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
if p[0].line in ['5']:
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
if p[0].line in ['4']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum { PINMUX_RESERVED = 0 , PINMUX_DATA_BEGIN , PA1_DATA , PA0_DATA , PB22_DATA , PB21_DATA , PB20_DATA , PB19_DATA , PB18_DATA , PB17_DATA , PB16_DATA , PB15_DATA , PB14_DATA , PB13_DATA , PB12_DATA , PB11_DATA , PB10_DATA , PB9_DATA , PB8_DATA , PB7_DATA , PB6_DATA , PB5_DATA , PB4_DATA , PB3_DATA , PB2_DATA , PB1_DATA , PC8_DATA , PC7_DATA , PC6_DATA , PC5_DATA , PC4_DATA , PC3_DATA , PC2_DATA , PC1_DATA , PC0_DATA , PD15_DATA , PD14_DATA , PD13_DATA , PD12_DATA , PD11_DATA , PD10_DATA , PD9_DATA , PD8_DATA , PD7_DATA , PD6_DATA , PD5_DATA , PD4_DATA , PD3_DATA , PD2_DATA , PD1_DATA , PD0_DATA , PE7_DATA , PE6_DATA , PE5_DATA , PE4_DATA , PE3_DATA , PE2_DATA , PE1_DATA , PE0_DATA , PF23_DATA , PF22_DATA , PF21_DATA , PF20_DATA , PF19_DATA , PF18_DATA , PF17_DATA , PF16_DATA , PF15_DATA , PF14_DATA , PF13_DATA , PF12_DATA , PF11_DATA , PF10_DATA , PF9_DATA , PF8_DATA , PF7_DATA , PF6_DATA , PF5_DATA , PF4_DATA , PF3_DATA , PF2_DATA , PF1_DATA , PF0_DATA , PG27_DATA , PG26_DATA , PG25_DATA , PG24_DATA , PG23_DATA , PG22_DATA , PG21_DATA , PG20_DATA , PG19_DATA , PG18_DATA , PG17_DATA , PG16_DATA , PG15_DATA , PG14_DATA , PG13_DATA , PG12_DATA , PG11_DATA , PG10_DATA , PG9_DATA , PG8_DATA , PG7_DATA , PG6_DATA , PG5_DATA , PG4_DATA , PG3_DATA , PG2_DATA , PG1_DATA , PG0_DATA , PH7_DATA , PH6_DATA , PH5_DATA , PH4_DATA , PH3_DATA , PH2_DATA , PH1_DATA , PH0_DATA , PJ31_DATA , PJ30_DATA , PJ29_DATA , PJ28_DATA , PJ27_DATA , PJ26_DATA , PJ25_DATA , PJ24_DATA , PJ23_DATA , PJ22_DATA , PJ21_DATA , PJ20_DATA , PJ19_DATA , PJ18_DATA , PJ17_DATA , PJ16_DATA , PJ15_DATA , PJ14_DATA , PJ13_DATA , PJ12_DATA , PJ11_DATA , PJ10_DATA , PJ9_DATA , PJ8_DATA , PJ7_DATA , PJ6_DATA , PJ5_DATA , PJ4_DATA , PJ3_DATA , PJ2_DATA , PJ1_DATA , PJ0_DATA , PINMUX_DATA_END , PINMUX_INPUT_BEGIN , FORCE_IN , PA1_IN , PA0_IN , PB22_IN , PB21_IN , PB20_IN , PB19_IN , PB18_IN , PB17_IN , PB16_IN , PB15_IN , PB14_IN , PB13_IN , PB12_IN , PB11_IN , PB10_IN , PB9_IN , PB8_IN , PB7_IN , PB6_IN , PB5_IN , PB4_IN , PB3_IN , PB2_IN , PB1_IN , PC8_IN , PC7_IN , PC6_IN , PC5_IN , PC4_IN , PC3_IN , PC2_IN , PC1_IN , PC0_IN , PD15_IN , PD14_IN , PD13_IN , PD12_IN , PD11_IN , PD10_IN , PD9_IN , PD8_IN , PD7_IN , PD6_IN , PD5_IN , PD4_IN , PD3_IN , PD2_IN , PD1_IN , PD0_IN , PE7_IN , PE6_IN , PE5_IN , PE4_IN , PE3_IN , PE2_IN , PE1_IN , PE0_IN , PF23_IN , PF22_IN , PF21_IN , PF20_IN , PF19_IN , PF18_IN , PF17_IN , PF16_IN , PF15_IN , PF14_IN , PF13_IN , PF12_IN , PF11_IN , PF10_IN , PF9_IN , PF8_IN , PF7_IN , PF6_IN , PF5_IN , PF4_IN , PF3_IN , PF2_IN , PF1_IN , PF0_IN , PG27_IN , PG26_IN , PG25_IN , PG24_IN , PG23_IN , PG22_IN , PG21_IN , PG20_IN , PG19_IN , PG18_IN , PG17_IN , PG16_IN , PG15_IN , PG14_IN , PG13_IN , PG12_IN , PG11_IN , PG10_IN , PG9_IN , PG8_IN , PG7_IN , PG6_IN , PG5_IN , PG4_IN , PG3_IN , PG2_IN , PG1_IN , PG0_IN , PJ31_IN , PJ30_IN , PJ29_IN , PJ28_IN , PJ27_IN , PJ26_IN , PJ25_IN , PJ24_IN , PJ23_IN , PJ22_IN , PJ21_IN , PJ20_IN , PJ19_IN , PJ18_IN , PJ17_IN , PJ16_IN , PJ15_IN , PJ14_IN , PJ13_IN , PJ12_IN , PJ11_IN , PJ10_IN , PJ9_IN , PJ8_IN , PJ7_IN , PJ6_IN , PJ5_IN , PJ4_IN , PJ3_IN , PJ2_IN , PJ1_IN , PJ0_IN , PINMUX_INPUT_END , PINMUX_OUTPUT_BEGIN , FORCE_OUT , PA1_OUT , PA0_OUT , PB22_OUT , PB21_OUT , PB20_OUT , PB19_OUT , PB18_OUT , PB17_OUT , PB16_OUT , PB15_OUT , PB14_OUT , PB13_OUT , PB12_OUT , PB11_OUT , PB10_OUT , PB9_OUT , PB8_OUT , PB7_OUT , PB6_OUT , PB5_OUT , PB4_OUT , PB3_OUT , PB2_OUT , PB1_OUT , PC8_OUT , PC7_OUT , PC6_OUT , PC5_OUT , PC4_OUT , PC3_OUT , PC2_OUT , PC1_OUT , PC0_OUT , PD15_OUT , PD14_OUT , PD13_OUT , PD12_OUT , PD11_OUT , PD10_OUT , PD9_OUT , PD8_OUT , PD7_OUT , PD6_OUT , PD5_OUT , PD4_OUT , PD3_OUT , PD2_OUT , PD1_OUT , PD0_OUT , PE7_OUT , PE6_OUT , PE5_OUT , PE4_OUT , PE3_OUT , PE2_OUT , PE1_OUT , PE0_OUT , PF23_OUT , PF22_OUT , PF21_OUT , PF20_OUT , PF19_OUT , PF18_OUT , PF17_OUT , PF16_OUT , PF15_OUT , PF14_OUT , PF13_OUT , PF12_OUT , PF11_OUT , PF10_OUT , PF9_OUT , PF8_OUT , PF7_OUT , PF6_OUT , PF5_OUT , PF4_OUT , PF3_OUT , PF2_OUT , PF1_OUT , PF0_OUT , PG27_OUT , PG26_OUT , PG25_OUT , PG24_OUT , PG23_OUT , PG22_OUT , PG21_OUT , PG20_OUT , PG19_OUT , PG18_OUT , PG17_OUT , PG16_OUT , PG15_OUT , PG14_OUT , PG13_OUT , PG12_OUT , PG11_OUT , PG10_OUT , PG9_OUT , PG8_OUT , PG7_OUT , PG6_OUT , PG5_OUT , PG4_OUT , PG3_OUT , PG2_OUT , PG1_OUT , PG0_OUT , PJ31_OUT , PJ30_OUT , PJ29_OUT , PJ28_OUT , PJ27_OUT , PJ26_OUT , PJ25_OUT , PJ24_OUT , PJ23_OUT , PJ22_OUT , PJ21_OUT , PJ20_OUT , PJ19_OUT , PJ18_OUT , PJ17_OUT , PJ16_OUT , PJ15_OUT , PJ14_OUT , PJ13_OUT , PJ12_OUT , PJ11_OUT , PJ10_OUT , PJ9_OUT , PJ8_OUT , PJ7_OUT , PJ6_OUT , PJ5_OUT , PJ4_OUT , PJ3_OUT , PJ2_OUT , PJ1_OUT , PJ0_OUT , PINMUX_OUTPUT_END , PINMUX_FUNCTION_BEGIN , PA1_IOR_IN , PA1_IOR_OUT , PA0_IOR_IN , PA0_IOR_OUT , PB22_IOR_IN , PB22_IOR_OUT , PB21_IOR_IN , PB21_IOR_OUT , PB20_IOR_IN , PB20_IOR_OUT , PB19_IOR_IN , PB19_IOR_OUT , PB18_IOR_IN , PB18_IOR_OUT , PB17_IOR_IN , PB17_IOR_OUT , PB16_IOR_IN , PB16_IOR_OUT , PB15_IOR_IN , PB15_IOR_OUT , PB14_IOR_IN , PB14_IOR_OUT , PB13_IOR_IN , PB13_IOR_OUT , PB12_IOR_IN , PB12_IOR_OUT , PB11_IOR_IN , PB11_IOR_OUT , PB10_IOR_IN , PB10_IOR_OUT , PB9_IOR_IN , PB9_IOR_OUT , PB8_IOR_IN , PB8_IOR_OUT , PB7_IOR_IN , PB7_IOR_OUT , PB6_IOR_IN , PB6_IOR_OUT , PB5_IOR_IN , PB5_IOR_OUT , PB4_IOR_IN , PB4_IOR_OUT , PB3_IOR_IN , PB3_IOR_OUT , PB2_IOR_IN , PB2_IOR_OUT , PB1_IOR_IN , PB1_IOR_OUT , PB0_IOR_IN , PB0_IOR_OUT , PB22MD_000 , PB22MD_001 , PB22MD_010 , PB22MD_011 , PB22MD_100 , PB22MD_101 , PB22MD_110 , PB22MD_111 , PB21MD_00 , PB21MD_01 , PB21MD_10 , PB21MD_11 , PB20MD_000 , PB20MD_001 , PB20MD_010 , PB20MD_011 , PB20MD_100 , PB20MD_101 , PB20MD_110 , PB20MD_111 , PB19MD_000 , PB19MD_001 , PB19MD_010 , PB19MD_011 , PB19MD_100 , PB19MD_101 , PB19MD_110 , PB19MD_111 , PB18MD_000 , PB18MD_001 , PB18MD_010 , PB18MD_011 , PB18MD_100 , PB18MD_101 , PB18MD_110 , PB18MD_111 , PB17MD_000 , PB17MD_001 , PB17MD_010 , PB17MD_011 , PB17MD_100 , PB17MD_101 , PB17MD_110 , PB17MD_111 , PB16MD_000 , PB16MD_001 , PB16MD_010 , PB16MD_011 , PB16MD_100 , PB16MD_101 , PB16MD_110 , PB16MD_111 , PB15MD_000 , PB15MD_001 , PB15MD_010 , PB15MD_011 , PB15MD_100 , PB15MD_101 , PB15MD_110 , PB15MD_111 , PB14MD_000 , PB14MD_001 , PB14MD_010 , PB14MD_011 , PB14MD_100 , PB14MD_101 , PB14MD_110 , PB14MD_111 , PB13MD_000 , PB13MD_001 , PB13MD_010 , PB13MD_011 , PB13MD_100 , PB13MD_101 , PB13MD_110 , PB13MD_111 , PB12MD_00 , PB12MD_01 , PB12MD_10 , PB12MD_11 , PB11MD_00 , PB11MD_01 , PB11MD_10 , PB11MD_11 , PB10MD_00 , PB10MD_01 , PB10MD_10 , PB10MD_11 , PB9MD_00 , PB9MD_01 , PB9MD_10 , PB9MD_11 , PB8MD_00 , PB8MD_01 , PB8MD_10 , PB8MD_11 , PB7MD_00 , PB7MD_01 , PB7MD_10 , PB7MD_11 , PB6MD_00 , PB6MD_01 , PB6MD_10 , PB6MD_11 , PB5MD_00 , PB5MD_01 , PB5MD_10 , PB5MD_11 , PB4MD_00 , PB4MD_01 , PB4MD_10 , PB4MD_11 , PB3MD_00 , PB3MD_01 , PB3MD_10 , PB3MD_11 , PB2MD_00 , PB2MD_01 , PB2MD_10 , PB2MD_11 , PB1MD_00 , PB1MD_01 , PB1MD_10 , PB1MD_11 , PC8_IOR_IN , PC8_IOR_OUT , PC7_IOR_IN , PC7_IOR_OUT , PC6_IOR_IN , PC6_IOR_OUT , PC5_IOR_IN , PC5_IOR_OUT , PC4_IOR_IN , PC4_IOR_OUT , PC3_IOR_IN , PC3_IOR_OUT , PC2_IOR_IN , PC2_IOR_OUT , PC1_IOR_IN , PC1_IOR_OUT , PC0_IOR_IN , PC0_IOR_OUT , PC8MD_000 , PC8MD_001 , PC8MD_010 , PC8MD_011 , PC8MD_100 , PC8MD_101 , PC8MD_110 , PC8MD_111 , PC7MD_000 , PC7MD_001 , PC7MD_010 , PC7MD_011 , PC7MD_100 , PC7MD_101 , PC7MD_110 , PC7MD_111 , PC6MD_000 , PC6MD_001 , PC6MD_010 , PC6MD_011 , PC6MD_100 , PC6MD_101 , PC6MD_110 , PC6MD_111 , PC5MD_000 , PC5MD_001 , PC5MD_010 , PC5MD_011 , PC5MD_100 , PC5MD_101 , PC5MD_110 , PC5MD_111 , PC4MD_00 , PC4MD_01 , PC4MD_10 , PC4MD_11 , PC3MD_00 , PC3MD_01 , PC3MD_10 , PC3MD_11 , PC2MD_00 , PC2MD_01 , PC2MD_10 , PC2MD_11 , PC1MD_0 , PC1MD_1 , PC0MD_0 , PC0MD_1 , PD15_IOR_IN , PD15_IOR_OUT , PD14_IOR_IN , PD14_IOR_OUT , PD13_IOR_IN , PD13_IOR_OUT , PD12_IOR_IN , PD12_IOR_OUT , PD11_IOR_IN , PD11_IOR_OUT , PD10_IOR_IN , PD10_IOR_OUT , PD9_IOR_IN , PD9_IOR_OUT , PD8_IOR_IN , PD8_IOR_OUT , PD7_IOR_IN , PD7_IOR_OUT , PD6_IOR_IN , PD6_IOR_OUT , PD5_IOR_IN , PD5_IOR_OUT , PD4_IOR_IN , PD4_IOR_OUT , PD3_IOR_IN , PD3_IOR_OUT , PD2_IOR_IN , PD2_IOR_OUT , PD1_IOR_IN , PD1_IOR_OUT , PD0_IOR_IN , PD0_IOR_OUT , PD15MD_00 , PD15MD_01 , PD15MD_10 , PD15MD_11 , PD14MD_00 , PD14MD_01 , PD14MD_10 , PD14MD_11 , PD13MD_00 , PD13MD_01 , PD13MD_10 , PD13MD_11 , PD12MD_00 , PD12MD_01 , PD12MD_10 , PD12MD_11 , PD11MD_00 , PD11MD_01 , PD11MD_10 , PD11MD_11 , PD10MD_00 , PD10MD_01 , PD10MD_10 , PD10MD_11 , PD9MD_00 , PD9MD_01 , PD9MD_10 , PD9MD_11 , PD8MD_00 , PD8MD_01 , PD8MD_10 , PD8MD_11 , PD7MD_00 , PD7MD_01 , PD7MD_10 , PD7MD_11 , PD6MD_00 , PD6MD_01 , PD6MD_10 , PD6MD_11 , PD5MD_00 , PD5MD_01 , PD5MD_10 , PD5MD_11 , PD4MD_00 , PD4MD_01 , PD4MD_10 , PD4MD_11 , PD3MD_00 , PD3MD_01 , PD3MD_10 , PD3MD_11 , PD2MD_00 , PD2MD_01 , PD2MD_10 , PD2MD_11 , PD1MD_00 , PD1MD_01 , PD1MD_10 , PD1MD_11 , PD0MD_00 , PD0MD_01 , PD0MD_10 , PD0MD_11 , PE7_IOR_IN , PE7_IOR_OUT , PE6_IOR_IN , PE6_IOR_OUT , PE5_IOR_IN , PE5_IOR_OUT , PE4_IOR_IN , PE4_IOR_OUT , PE3_IOR_IN , PE3_IOR_OUT , PE2_IOR_IN , PE2_IOR_OUT , PE1_IOR_IN , PE1_IOR_OUT , PE0_IOR_IN , PE0_IOR_OUT , PE7MD_00 , PE7MD_01 , PE7MD_10 , PE7MD_11 , PE6MD_00 , PE6MD_01 , PE6MD_10 , PE6MD_11 , PE5MD_00 , PE5MD_01 , PE5MD_10 , PE5MD_11 , PE4MD_00 , PE4MD_01 , PE4MD_10 , PE4MD_11 , PE3MD_000 , PE3MD_001 , PE3MD_010 , PE3MD_011 , PE3MD_100 , PE3MD_101 , PE3MD_110 , PE3MD_111 , PE2MD_000 , PE2MD_001 , PE2MD_010 , PE2MD_011 , PE2MD_100 , PE2MD_101 , PE2MD_110 , PE2MD_111 , PE1MD_000 , PE1MD_001 , PE1MD_010 , PE1MD_011 , PE1MD_100 , PE1MD_101 , PE1MD_110 , PE1MD_111 , PE0MD_00 , PE0MD_01 , PE0MD_10 , PE0MD_11 , PF23_IOR_IN , PF23_IOR_OUT , PF22_IOR_IN , PF22_IOR_OUT , PF21_IOR_IN , PF21_IOR_OUT , PF20_IOR_IN , PF20_IOR_OUT , PF19_IOR_IN , PF19_IOR_OUT , PF18_IOR_IN , PF18_IOR_OUT , PF17_IOR_IN , PF17_IOR_OUT , PF16_IOR_IN , PF16_IOR_OUT , PF15_IOR_IN , PF15_IOR_OUT , PF14_IOR_IN , PF14_IOR_OUT , PF13_IOR_IN , PF13_IOR_OUT , PF12_IOR_IN , PF12_IOR_OUT , PF11_IOR_IN , PF11_IOR_OUT , PF10_IOR_IN , PF10_IOR_OUT , PF9_IOR_IN , PF9_IOR_OUT , PF8_IOR_IN , PF8_IOR_OUT , PF7_IOR_IN , PF7_IOR_OUT , PF6_IOR_IN , PF6_IOR_OUT , PF5_IOR_IN , PF5_IOR_OUT , PF4_IOR_IN , PF4_IOR_OUT , PF3_IOR_IN , PF3_IOR_OUT , PF2_IOR_IN , PF2_IOR_OUT , PF1_IOR_IN , PF1_IOR_OUT , PF0_IOR_IN , PF0_IOR_OUT , PF23MD_000 , PF23MD_001 , PF23MD_010 , PF23MD_011 , PF23MD_100 , PF23MD_101 , PF23MD_110 , PF23MD_111 , PF22MD_000 , PF22MD_001 , PF22MD_010 , PF22MD_011 , PF22MD_100 , PF22MD_101 , PF22MD_110 , PF22MD_111 , PF21MD_000 , PF21MD_001 , PF21MD_010 , PF21MD_011 , PF21MD_100 , PF21MD_101 , PF21MD_110 , PF21MD_111 , PF20MD_000 , PF20MD_001 , PF20MD_010 , PF20MD_011 , PF20MD_100 , PF20MD_101 , PF20MD_110 , PF20MD_111 , PF19MD_000 , PF19MD_001 , PF19MD_010 , PF19MD_011 , PF19MD_100 , PF19MD_101 , PF19MD_110 , PF19MD_111 , PF18MD_000 , PF18MD_001 , PF18MD_010 , PF18MD_011 , PF18MD_100 , PF18MD_101 , PF18MD_110 , PF18MD_111 , PF17MD_000 , PF17MD_001 , PF17MD_010 , PF17MD_011 , PF17MD_100 , PF17MD_101 , PF17MD_110 , PF17MD_111 , PF16MD_000 , PF16MD_001 , PF16MD_010 , PF16MD_011 , PF16MD_100 , PF16MD_101 , PF16MD_110 , PF16MD_111 , PF15MD_000 , PF15MD_001 , PF15MD_010 , PF15MD_011 , PF15MD_100 , PF15MD_101 , PF15MD_110 , PF15MD_111 , PF14MD_000 , PF14MD_001 , PF14MD_010 , PF14MD_011 , PF14MD_100 , PF14MD_101 , PF14MD_110 , PF14MD_111 , PF13MD_000 , PF13MD_001 , PF13MD_010 , PF13MD_011 , PF13MD_100 , PF13MD_101 , PF13MD_110 , PF13MD_111 , PF12MD_000 , PF12MD_001 , PF12MD_010 , PF12MD_011 , PF12MD_100 , PF12MD_101 , PF12MD_110 , PF12MD_111 , PF11MD_000 , PF11MD_001 , PF11MD_010 , PF11MD_011 , PF11MD_100 , PF11MD_101 , PF11MD_110 , PF11MD_111 , PF10MD_000 , PF10MD_001 , PF10MD_010 , PF10MD_011 , PF10MD_100 , PF10MD_101 , PF10MD_110 , PF10MD_111 , PF9MD_000 , PF9MD_001 , PF9MD_010 , PF9MD_011 , PF9MD_100 , PF9MD_101 , PF9MD_110 , PF9MD_111 , PF8MD_000 , PF8MD_001 , PF8MD_010 , PF8MD_011 , PF8MD_100 , PF8MD_101 , PF8MD_110 , PF8MD_111 , PF7MD_000 , PF7MD_001 , PF7MD_010 , PF7MD_011 , PF7MD_100 , PF7MD_101 , PF7MD_110 , PF7MD_111 , PF6MD_000 , PF6MD_001 , PF6MD_010 , PF6MD_011 , PF6MD_100 , PF6MD_101 , PF6MD_110 , PF6MD_111 , PF5MD_000 , PF5MD_001 , PF5MD_010 , PF5MD_011 , PF5MD_100 , PF5MD_101 , PF5MD_110 , PF5MD_111 , PF4MD_000 , PF4MD_001 , PF4MD_010 , PF4MD_011 , PF4MD_100 , PF4MD_101 , PF4MD_110 , PF4MD_111 , PF3MD_000 , PF3MD_001 , PF3MD_010 , PF3MD_011 , PF3MD_100 , PF3MD_101 , PF3MD_110 , PF3MD_111 , PF2MD_000 , PF2MD_001 , PF2MD_010 , PF2MD_011 , PF2MD_100 , PF2MD_101 , PF2MD_110 , PF2MD_111 , PF1MD_000 , PF1MD_001 , PF1MD_010 , PF1MD_011 , PF1MD_100 , PF1MD_101 , PF1MD_110 , PF1MD_111 , PF0MD_000 , PF0MD_001 , PF0MD_010 , PF0MD_011 , PF0MD_100 , PF0MD_101 , PF0MD_110 , PF0MD_111 , PG27_IOR_IN , PG27_IOR_OUT , PG26_IOR_IN , PG26_IOR_OUT , PG25_IOR_IN , PG25_IOR_OUT , PG24_IOR_IN , PG24_IOR_OUT , PG23_IOR_IN , PG23_IOR_OUT , PG22_IOR_IN , PG22_IOR_OUT , PG21_IOR_IN , PG21_IOR_OUT , PG20_IOR_IN , PG20_IOR_OUT , PG19_IOR_IN , PG19_IOR_OUT , PG18_IOR_IN , PG18_IOR_OUT , PG17_IOR_IN , PG17_IOR_OUT , PG16_IOR_IN , PG16_IOR_OUT , PG15_IOR_IN , PG15_IOR_OUT , PG14_IOR_IN , PG14_IOR_OUT , PG13_IOR_IN , PG13_IOR_OUT , PG12_IOR_IN , PG12_IOR_OUT , PG11_IOR_IN , PG11_IOR_OUT , PG10_IOR_IN , PG10_IOR_OUT , PG9_IOR_IN , PG9_IOR_OUT , PG8_IOR_IN , PG8_IOR_OUT , PG7_IOR_IN , PG7_IOR_OUT , PG6_IOR_IN , PG6_IOR_OUT , PG5_IOR_IN , PG5_IOR_OUT , PG4_IOR_IN , PG4_IOR_OUT , PG3_IOR_IN , PG3_IOR_OUT , PG2_IOR_IN , PG2_IOR_OUT , PG1_IOR_IN , PG1_IOR_OUT , PG0_IOR_IN , PG0_IOR_OUT , PG27MD_00 , PG27MD_01 , PG27MD_10 , PG27MD_11 , PG26MD_00 , PG26MD_01 , PG26MD_10 , PG26MD_11 , PG25MD_00 , PG25MD_01 , PG25MD_10 , PG25MD_11 , PG24MD_00 , PG24MD_01 , PG24MD_10 , PG24MD_11 , PG23MD_000 , PG23MD_001 , PG23MD_010 , PG23MD_011 , PG23MD_100 , PG23MD_101 , PG23MD_110 , PG23MD_111 , PG22MD_000 , PG22MD_001 , PG22MD_010 , PG22MD_011 , PG22MD_100 , PG22MD_101 , PG22MD_110 , PG22MD_111 , PG21MD_000 , PG21MD_001 , PG21MD_010 , PG21MD_011 , PG21MD_100 , PG21MD_101 , PG21MD_110 , PG21MD_111 , PG20MD_000 , PG20MD_001 , PG20MD_010 , PG20MD_011 , PG20MD_100 , PG20MD_101 , PG20MD_110 , PG20MD_111 , PG19MD_000 , PG19MD_001 , PG19MD_010 , PG19MD_011 , PG19MD_100 , PG19MD_101 , PG19MD_110 , PG19MD_111 , PG18MD_000 , PG18MD_001 , PG18MD_010 , PG18MD_011 , PG18MD_100 , PG18MD_101 , PG18MD_110 , PG18MD_111 , PG17MD_00 , PG17MD_01 , PG17MD_10 , PG17MD_11 , PG16MD_00 , PG16MD_01 , PG16MD_10 , PG16MD_11 , PG15MD_00 , PG15MD_01 , PG15MD_10 , PG15MD_11 , PG14MD_00 , PG14MD_01 , PG14MD_10 , PG14MD_11 , PG13MD_00 , PG13MD_01 , PG13MD_10 , PG13MD_11 , PG12MD_00 , PG12MD_01 , PG12MD_10 , PG12MD_11 , PG11MD_000 , PG11MD_001 , PG11MD_010 , PG11MD_011 , PG11MD_100 , PG11MD_101 , PG11MD_110 , PG11MD_111 , PG10MD_000 , PG10MD_001 , PG10MD_010 , PG10MD_011 , PG10MD_100 , PG10MD_101 , PG10MD_110 , PG10MD_111 , PG9MD_000 , PG9MD_001 , PG9MD_010 , PG9MD_011 , PG9MD_100 , PG9MD_101 , PG9MD_110 , PG9MD_111 , PG8MD_000 , PG8MD_001 , PG8MD_010 , PG8MD_011 , PG8MD_100 , PG8MD_101 , PG8MD_110 , PG8MD_111 , PG7MD_000 , PG7MD_001 , PG7MD_010 , PG7MD_011 , PG7MD_100 , PG7MD_101 , PG7MD_110 , PG7MD_111 , PG6MD_000 , PG6MD_001 , PG6MD_010 , PG6MD_011 , PG6MD_100 , PG6MD_101 , PG6MD_110 , PG6MD_111 , PG5MD_000 , PG5MD_001 , PG5MD_010 , PG5MD_011 , PG5MD_100 , PG5MD_101 , PG5MD_110 , PG5MD_111 , PG4MD_000 , PG4MD_001 , PG4MD_010 , PG4MD_011 , PG4MD_100 , PG4MD_101 , PG4MD_110 , PG4MD_111 , PG3MD_000 , PG3MD_001 , PG3MD_010 , PG3MD_011 , PG3MD_100 , PG3MD_101 , PG3MD_110 , PG3MD_111 , PG2MD_000 , PG2MD_001 , PG2MD_010 , PG2MD_011 , PG2MD_100 , PG2MD_101 , PG2MD_110 , PG2MD_111 , PG1MD_000 , PG1MD_001 , PG1MD_010 , PG1MD_011 , PG1MD_100 , PG1MD_101 , PG1MD_110 , PG1MD_111 , PG0MD_000 , PG0MD_001 , PG0MD_010 , PG0MD_011 , PG0MD_100 , PG0MD_101 , PG0MD_110 , PG0MD_111 , PH7MD_00 , PH7MD_01 , PH7MD_10 , PH7MD_11 , PH6MD_00 , PH6MD_01 , PH6MD_10 , PH6MD_11 , PH5MD_00 , PH5MD_01 , PH5MD_10 , PH5MD_11 , PH4MD_00 , PH4MD_01 , PH4MD_10 , PH4MD_11 , PH3MD_00 , PH3MD_01 , PH3MD_10 , PH3MD_11 , PH2MD_00 , PH2MD_01 , PH2MD_10 , PH2MD_11 , PH1MD_00 , PH1MD_01 , PH1MD_10 , PH1MD_11 , PH0MD_00 , PH0MD_01 , PH0MD_10 , PH0MD_11 , PJ31_IOR_IN , PJ31_IOR_OUT , PJ30_IOR_IN , PJ30_IOR_OUT , PJ29_IOR_IN , PJ29_IOR_OUT , PJ28_IOR_IN , PJ28_IOR_OUT , PJ27_IOR_IN , PJ27_IOR_OUT , PJ26_IOR_IN , PJ26_IOR_OUT , PJ25_IOR_IN , PJ25_IOR_OUT , PJ24_IOR_IN , PJ24_IOR_OUT , PJ23_IOR_IN , PJ23_IOR_OUT , PJ22_IOR_IN , PJ22_IOR_OUT , PJ21_IOR_IN , PJ21_IOR_OUT , PJ20_IOR_IN , PJ20_IOR_OUT , PJ19_IOR_IN , PJ19_IOR_OUT , PJ18_IOR_IN , PJ18_IOR_OUT , PJ17_IOR_IN , PJ17_IOR_OUT , PJ16_IOR_IN , PJ16_IOR_OUT , PJ15_IOR_IN , PJ15_IOR_OUT , PJ14_IOR_IN , PJ14_IOR_OUT , PJ13_IOR_IN , PJ13_IOR_OUT , PJ12_IOR_IN , PJ12_IOR_OUT , PJ11_IOR_IN , PJ11_IOR_OUT , PJ10_IOR_IN , PJ10_IOR_OUT , PJ9_IOR_IN , PJ9_IOR_OUT , PJ8_IOR_IN , PJ8_IOR_OUT , PJ7_IOR_IN , PJ7_IOR_OUT , PJ6_IOR_IN , PJ6_IOR_OUT , PJ5_IOR_IN , PJ5_IOR_OUT , PJ4_IOR_IN , PJ4_IOR_OUT , PJ3_IOR_IN , PJ3_IOR_OUT , PJ2_IOR_IN , PJ2_IOR_OUT , PJ1_IOR_IN , PJ1_IOR_OUT , PJ0_IOR_IN , PJ0_IOR_OUT , PJ31MD_0 , PJ31MD_1 , PJ30MD_000 , PJ30MD_001 , PJ30MD_010 , PJ30MD_011 , PJ30MD_100 , PJ30MD_101 , PJ30MD_110 , PJ30MD_111 , PJ29MD_000 , PJ29MD_001 , PJ29MD_010 , PJ29MD_011 , PJ29MD_100 , PJ29MD_101 , PJ29MD_110 , PJ29MD_111 , PJ28MD_000 , PJ28MD_001 , PJ28MD_010 , PJ28MD_011 , PJ28MD_100 , PJ28MD_101 , PJ28MD_110 , PJ28MD_111 , PJ27MD_000 , PJ27MD_001 , PJ27MD_010 , PJ27MD_011 , PJ27MD_100 , PJ27MD_101 , PJ27MD_110 , PJ27MD_111 , PJ26MD_000 , PJ26MD_001 , PJ26MD_010 , PJ26MD_011 , PJ26MD_100 , PJ26MD_101 , PJ26MD_110 , PJ26MD_111 , PJ25MD_000 , PJ25MD_001 , PJ25MD_010 , PJ25MD_011 , PJ25MD_100 , PJ25MD_101 , PJ25MD_110 , PJ25MD_111 , PJ24MD_000 , PJ24MD_001 , PJ24MD_010 , PJ24MD_011 , PJ24MD_100 , PJ24MD_101 , PJ24MD_110 , PJ24MD_111 , PJ23MD_000 , PJ23MD_001 , PJ23MD_010 , PJ23MD_011 , PJ23MD_100 , PJ23MD_101 , PJ23MD_110 , PJ23MD_111 , PJ22MD_000 , PJ22MD_001 , PJ22MD_010 , PJ22MD_011 , PJ22MD_100 , PJ22MD_101 , PJ22MD_110 , PJ22MD_111 , PJ21MD_000 , PJ21MD_001 , PJ21MD_010 , PJ21MD_011 , PJ21MD_100 , PJ21MD_101 , PJ21MD_110 , PJ21MD_111 , PJ20MD_000 , PJ20MD_001 , PJ20MD_010 , PJ20MD_011 , PJ20MD_100 , PJ20MD_101 , PJ20MD_110 , PJ20MD_111 , PJ19MD_000 , PJ19MD_001 , PJ19MD_010 , PJ19MD_011 , PJ19MD_100 , PJ19MD_101 , PJ19MD_110 , PJ19MD_111 , PJ18MD_000 , PJ18MD_001 , PJ18MD_010 , PJ18MD_011 , PJ18MD_100 , PJ18MD_101 , PJ18MD_110 , PJ18MD_111 , PJ17MD_000 , PJ17MD_001 , PJ17MD_010 , PJ17MD_011 , PJ17MD_100 , PJ17MD_101 , PJ17MD_110 , PJ17MD_111 , PJ16MD_000 , PJ16MD_001 , PJ16MD_010 , PJ16MD_011 , PJ16MD_100 , PJ16MD_101 , PJ16MD_110 , PJ16MD_111 , PJ15MD_000 , PJ15MD_001 , PJ15MD_010 , PJ15MD_011 , PJ15MD_100 , PJ15MD_101 , PJ15MD_110 , PJ15MD_111 , PJ14MD_000 , PJ14MD_001 , PJ14MD_010 , PJ14MD_011 , PJ14MD_100 , PJ14MD_101 , PJ14MD_110 , PJ14MD_111 , PJ13MD_000 , PJ13MD_001 , PJ13MD_010 , PJ13MD_011 , PJ13MD_100 , PJ13MD_101 , PJ13MD_110 , PJ13MD_111 , PJ12MD_000 , PJ12MD_001 , PJ12MD_010 , PJ12MD_011 , PJ12MD_100 , PJ12MD_101 , PJ12MD_110 , PJ12MD_111 , PJ11MD_000 , PJ11MD_001 , PJ11MD_010 , PJ11MD_011 , PJ11MD_100 , PJ11MD_101 , PJ11MD_110 , PJ11MD_111 , PJ10MD_000 , PJ10MD_001 , PJ10MD_010 , PJ10MD_011 , PJ10MD_100 , PJ10MD_101 , PJ10MD_110 , PJ10MD_111 , PJ9MD_000 , PJ9MD_001 , PJ9MD_010 , PJ9MD_011 , PJ9MD_100 , PJ9MD_101 , PJ9MD_110 , PJ9MD_111 , PJ8MD_000 , PJ8MD_001 , PJ8MD_010 , PJ8MD_011 , PJ8MD_100 , PJ8MD_101 , PJ8MD_110 , PJ8MD_111 , PJ7MD_000 , PJ7MD_001 , PJ7MD_010 , PJ7MD_011 , PJ7MD_100 , PJ7MD_101 , PJ7MD_110 , PJ7MD_111 , PJ6MD_000 , PJ6MD_001 , PJ6MD_010 , PJ6MD_011 , PJ6MD_100 , PJ6MD_101 , PJ6MD_110 , PJ6MD_111 , PJ5MD_000 , PJ5MD_001 , PJ5MD_010 , PJ5MD_011 , PJ5MD_100 , PJ5MD_101 , PJ5MD_110 , PJ5MD_111 , PJ4MD_000 , PJ4MD_001 , PJ4MD_010 , PJ4MD_011 , PJ4MD_100 , PJ4MD_101 , PJ4MD_110 , PJ4MD_111 , PJ3MD_000 , PJ3MD_001 , PJ3MD_010 , PJ3MD_011 , PJ3MD_100 , PJ3MD_101 , PJ3MD_110 , PJ3MD_111 , PJ2MD_000 , PJ2MD_001 , PJ2MD_010 , PJ2MD_011 , PJ2MD_100 , PJ2MD_101 , PJ2MD_110 , PJ2MD_111 , PJ1MD_000 , PJ1MD_001 , PJ1MD_010 , PJ1MD_011 , PJ1MD_100 , PJ1MD_101 , PJ1MD_110 , PJ1MD_111 , PJ0MD_000 , PJ0MD_001 , PJ0MD_010 , PJ0MD_011 , PJ0MD_100 , PJ0MD_101 , PJ0MD_110 , PJ0MD_111 , PINMUX_FUNCTION_END , PINMUX_MARK_BEGIN , PHAN7_MARK , PHAN6_MARK , PHAN5_MARK , PHAN4_MARK , PHAN3_MARK , PHAN2_MARK , PHAN1_MARK , PHAN0_MARK , IRQ7_PG_MARK , IRQ6_PG_MARK , IRQ5_PG_MARK , IRQ4_PG_MARK , IRQ3_PG_MARK , IRQ2_PG_MARK , IRQ1_PG_MARK , IRQ0_PG_MARK , IRQ7_PF_MARK , IRQ6_PF_MARK , IRQ5_PF_MARK , IRQ4_PF_MARK , IRQ3_PJ_MARK , IRQ2_PJ_MARK , IRQ1_PJ_MARK , IRQ0_PJ_MARK , IRQ1_PC_MARK , IRQ0_PC_MARK , PINT7_PG_MARK , PINT6_PG_MARK , PINT5_PG_MARK , PINT4_PG_MARK , PINT3_PG_MARK , PINT2_PG_MARK , PINT1_PG_MARK , PINT0_PG_MARK , PINT7_PH_MARK , PINT6_PH_MARK , PINT5_PH_MARK , PINT4_PH_MARK , PINT3_PH_MARK , PINT2_PH_MARK , PINT1_PH_MARK , PINT0_PH_MARK , PINT7_PJ_MARK , PINT6_PJ_MARK , PINT5_PJ_MARK , PINT4_PJ_MARK , PINT3_PJ_MARK , PINT2_PJ_MARK , PINT1_PJ_MARK , PINT0_PJ_MARK , SD_D0_MARK , SD_D1_MARK , SD_D2_MARK , SD_D3_MARK , SD_WP_MARK , SD_CLK_MARK , SD_CMD_MARK , SD_CD_MARK , MMC_D0_MARK , MMC_D1_MARK , MMC_D2_MARK , MMC_D3_MARK , MMC_D4_MARK , MMC_D5_MARK , MMC_D6_MARK , MMC_D7_MARK , MMC_CLK_MARK , MMC_CMD_MARK , MMC_CD_MARK , PWM1A_MARK , PWM1B_MARK , PWM1C_MARK , PWM1D_MARK , PWM1E_MARK , PWM1F_MARK , PWM1G_MARK , PWM1H_MARK , PWM2A_MARK , PWM2B_MARK , PWM2C_MARK , PWM2D_MARK , PWM2E_MARK , PWM2F_MARK , PWM2G_MARK , PWM2H_MARK , IERXD_MARK , IETXD_MARK , WDTOVF_MARK , TEND0_MARK , DACK0_MARK , DREQ0_MARK , TEND1_MARK , DACK1_MARK , DREQ1_MARK , ADTRG_MARK , A25_MARK , A24_MARK , A23_MARK , A22_MARK , A21_MARK , A20_MARK , A19_MARK , A18_MARK , A17_MARK , A16_MARK , A15_MARK , A14_MARK , A13_MARK , A12_MARK , A11_MARK , A10_MARK , A9_MARK , A8_MARK , A7_MARK , A6_MARK , A5_MARK , A4_MARK , A3_MARK , A2_MARK , A1_MARK , A0_MARK , D31_MARK , D30_MARK , D29_MARK , D28_MARK , D27_MARK , D26_MARK , D25_MARK , D24_MARK , D23_MARK , D22_MARK , D21_MARK , D20_MARK , D19_MARK , D18_MARK , D17_MARK , D16_MARK , D15_MARK , D14_MARK , D13_MARK , D12_MARK , D11_MARK , D10_MARK , D9_MARK , D8_MARK , D7_MARK , D6_MARK , D5_MARK , D4_MARK , D3_MARK , D2_MARK , D1_MARK , D0_MARK , BS_MARK , CS4_MARK , CS3_MARK , CS2_MARK , CS1_MARK , CS0_MARK , CS5CE1A_MARK , CE2A_MARK , CE2B_MARK , RD_MARK , RDWR_MARK , WE3ICIOWRAHDQMUU_MARK , WE2ICIORDDQMUL_MARK , WE1DQMUWE_MARK , WE0DQML_MARK , RAS_MARK , CAS_MARK , CKE_MARK , WAIT_MARK , BREQ_MARK , BACK_MARK , IOIS16_MARK , TIOC0A_MARK , TIOC0B_MARK , TIOC0C_MARK , TIOC0D_MARK , TIOC1A_MARK , TIOC1B_MARK , TIOC2A_MARK , TIOC2B_MARK , TIOC3A_MARK , TIOC3B_MARK , TIOC3C_MARK , TIOC3D_MARK , TIOC4A_MARK , TIOC4B_MARK , TIOC4C_MARK , TIOC4D_MARK , TCLKA_MARK , TCLKB_MARK , TCLKC_MARK , TCLKD_MARK , SCK0_MARK , RXD0_MARK , TXD0_MARK , SCK1_MARK , RXD1_MARK , TXD1_MARK , RTS1_MARK , CTS1_MARK , SCK2_MARK , RXD2_MARK , TXD2_MARK , SCK3_MARK , RXD3_MARK , TXD3_MARK , SCK4_MARK , RXD4_MARK , TXD4_MARK , SCK5_MARK , RXD5_MARK , TXD5_MARK , RTS5_MARK , CTS5_MARK , SCK6_MARK , RXD6_MARK , TXD6_MARK , SCK7_MARK , RXD7_MARK , TXD7_MARK , RTS7_MARK , CTS7_MARK , MISO0_PB20_MARK , MOSI0_PB19_MARK , SSL00_PB18_MARK , RSPCK0_PB17_MARK , MISO0_PJ19_MARK , MOSI0_PJ18_MARK , SSL00_PJ17_MARK , RSPCK0_PJ16_MARK , MISO1_MARK , MOSI1_MARK , SSL10_MARK , RSPCK1_MARK , SCL0_MARK , SDA0_MARK , SCL1_MARK , SDA1_MARK , SCL2_MARK , SDA2_MARK , SCL3_MARK , SDA3_MARK , SSISCK0_MARK , SSIWS0_MARK , SSITXD0_MARK , SSIRXD0_MARK , SSISCK1_MARK , SSIWS1_MARK , SSIDATA1_MARK , SSISCK2_MARK , SSIWS2_MARK , SSIDATA2_MARK , SSISCK3_MARK , SSIWS3_MARK , SSIDATA3_MARK , SSISCK4_MARK , SSIWS4_MARK , SSIDATA4_MARK , SSISCK5_MARK , SSIWS5_MARK , SSIDATA5_MARK , AUDIO_CLK_MARK , AUDIO_XOUT_MARK , SIOFTXD_MARK , SIOFRXD_MARK , SIOFSYNC_MARK , SIOFSCK_MARK , SPDIF_IN_MARK , SPDIF_OUT_MARK , SPDIF_IN_PJ24_MARK , SPDIF_OUT_PJ25_MARK , FCE_MARK , FRB_MARK , CRX0_MARK , CTX0_MARK , CRX1_MARK , CTX1_MARK , CRX2_MARK , CTX2_MARK , CRX0_CRX1_MARK , CRX0_CRX1_CRX2_MARK , CTX0CTX1CTX2_MARK , CRX1_PJ22_MARK , CTX1_PJ23_MARK , CRX2_PJ20_MARK , CTX2_PJ21_MARK , CRX0CRX1_PJ22_MARK , CRX0CRX1CRX2_PJ20_MARK , DV_CLK_MARK , DV_VSYNC_MARK , DV_HSYNC_MARK , DV_DATA23_MARK , DV_DATA22_MARK , DV_DATA21_MARK , DV_DATA20_MARK , DV_DATA19_MARK , DV_DATA18_MARK , DV_DATA17_MARK , DV_DATA16_MARK , DV_DATA15_MARK , DV_DATA14_MARK , DV_DATA13_MARK , DV_DATA12_MARK , DV_DATA11_MARK , DV_DATA10_MARK , DV_DATA9_MARK , DV_DATA8_MARK , DV_DATA7_MARK , DV_DATA6_MARK , DV_DATA5_MARK , DV_DATA4_MARK , DV_DATA3_MARK , DV_DATA2_MARK , DV_DATA1_MARK , DV_DATA0_MARK , LCD_CLK_MARK , LCD_EXTCLK_MARK , LCD_VSYNC_MARK , LCD_HSYNC_MARK , LCD_DE_MARK , LCD_DATA23_PG23_MARK , LCD_DATA22_PG22_MARK , LCD_DATA21_PG21_MARK , LCD_DATA20_PG20_MARK , LCD_DATA19_PG19_MARK , LCD_DATA18_PG18_MARK , LCD_DATA17_PG17_MARK , LCD_DATA16_PG16_MARK , LCD_DATA15_PG15_MARK , LCD_DATA14_PG14_MARK , LCD_DATA13_PG13_MARK , LCD_DATA12_PG12_MARK , LCD_DATA11_PG11_MARK , LCD_DATA10_PG10_MARK , LCD_DATA9_PG9_MARK , LCD_DATA8_PG8_MARK , LCD_DATA7_PG7_MARK , LCD_DATA6_PG6_MARK , LCD_DATA5_PG5_MARK , LCD_DATA4_PG4_MARK , LCD_DATA3_PG3_MARK , LCD_DATA2_PG2_MARK , LCD_DATA1_PG1_MARK , LCD_DATA0_PG0_MARK , LCD_DATA23_PJ23_MARK , LCD_DATA22_PJ22_MARK , LCD_DATA21_PJ21_MARK , LCD_DATA20_PJ20_MARK , LCD_DATA19_PJ19_MARK , LCD_DATA18_PJ18_MARK , LCD_DATA17_PJ17_MARK , LCD_DATA16_PJ16_MARK , LCD_DATA15_PJ15_MARK , LCD_DATA14_PJ14_MARK , LCD_DATA13_PJ13_MARK , LCD_DATA12_PJ12_MARK , LCD_DATA11_PJ11_MARK , LCD_DATA10_PJ10_MARK , LCD_DATA9_PJ9_MARK , LCD_DATA8_PJ8_MARK , LCD_DATA7_PJ7_MARK , LCD_DATA6_PJ6_MARK , LCD_DATA5_PJ5_MARK , LCD_DATA4_PJ4_MARK , LCD_DATA3_PJ3_MARK , LCD_DATA2_PJ2_MARK , LCD_DATA1_PJ1_MARK , LCD_DATA0_PJ0_MARK , LCD_TCON6_MARK , LCD_TCON5_MARK , LCD_TCON4_MARK , LCD_TCON3_MARK , LCD_TCON2_MARK , LCD_TCON1_MARK , LCD_TCON0_MARK , LCD_M_DISP_MARK , PINMUX_MARK_END , } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 const struct sh_pfc_soc_info cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
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
if p[0].line in ['8']:
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
if p[0].line in ['2']:
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
