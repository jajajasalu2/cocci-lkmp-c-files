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
if p[0].line in ['17']:
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
 struct intc_desc cocci_id@p ;

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
 struct r8a66597_platdata cocci_id@p ;

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
 struct uio_info cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
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
if p[0].line in ['9']:
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
if p[0].line in ['14']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct sh_timer_config cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 enum { UNUSED = 0 , ENABLED , DISABLED , IRQ0 , IRQ1 , IRQ2 , IRQ3 , IRQ4 , IRQ5 , IRQ6 , IRQ7 , HUDI , DMAC1A_DEI0 , DMAC1A_DEI1 , DMAC1A_DEI2 , DMAC1A_DEI3 , _2DG_TRI , _2DG_INI , _2DG_CEI , DMAC0A_DEI0 , DMAC0A_DEI1 , DMAC0A_DEI2 , DMAC0A_DEI3 , VIO_CEUI , VIO_BEUI , VIO_VEU2HI , VIO_VOUI , SCIFA_SCIFA0 , VPU_VPUI , TPU_TPUI , ADC_ADI , USB_USI0 , RTC_ATI , RTC_PRI , RTC_CUI , DMAC1B_DEI4 , DMAC1B_DEI5 , DMAC1B_DADERR , DMAC0B_DEI4 , DMAC0B_DEI5 , DMAC0B_DADERR , KEYSC_KEYI , SCIF_SCIF0 , SCIF_SCIF1 , SCIF_SCIF2 , MSIOF_MSIOFI0 , MSIOF_MSIOFI1 , SCIFA_SCIFA1 , FLCTL_FLSTEI , FLCTL_FLTENDI , FLCTL_FLTREQ0I , FLCTL_FLTREQ1I , I2C_ALI , I2C_TACKI , I2C_WAITI , I2C_DTEI , CMT_CMTI , TSIF_TSIFI , SIU_SIUI , SCIFA_SCIFA2 , TMU0_TUNI0 , TMU0_TUNI1 , TMU0_TUNI2 , IRDA_IRDAI , ATAPI_ATAPII , VEU2H1_VEU2HI , LCDC_LCDCI , TMU1_TUNI0 , TMU1_TUNI1 , TMU1_TUNI2 , DMAC1A , DMAC0A , VIO , DMAC0B , FLCTL , I2C , _2DG , SDHI1 , RTC , DMAC1B , SDHI0 , } cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9]
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
