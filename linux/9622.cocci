@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct si_info cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct bcma_device * cocci_id@p ;

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
 struct bcma_bus * cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 uint cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct aidmp {  u32 oobselina30 ;  u32 oobselina74 ;  u32 PAD [ 6 ] ;  u32 oobselinb30 ;  u32 oobselinb74 ;  u32 PAD [ 6 ] ;  u32 oobselinc30 ;  u32 oobselinc74 ;  u32 PAD [ 6 ] ;  u32 oobselind30 ;  u32 oobselind74 ;  u32 PAD [ 38 ] ;  u32 oobselouta30 ;  u32 oobselouta74 ;  u32 PAD [ 6 ] ;  u32 oobseloutb30 ;  u32 oobseloutb74 ;  u32 PAD [ 6 ] ;  u32 oobseloutc30 ;  u32 oobseloutc74 ;  u32 PAD [ 6 ] ;  u32 oobseloutd30 ;  u32 oobseloutd74 ;  u32 PAD [ 38 ] ;  u32 oobsynca ;  u32 oobseloutaen ;  u32 PAD [ 6 ] ;  u32 oobsyncb ;  u32 oobseloutben ;  u32 PAD [ 6 ] ;  u32 oobsyncc ;  u32 oobseloutcen ;  u32 PAD [ 6 ] ;  u32 oobsyncd ;  u32 oobseloutden ;  u32 PAD [ 38 ] ;  u32 oobaextwidth ;  u32 oobainwidth ;  u32 oobaoutwidth ;  u32 PAD [ 5 ] ;  u32 oobbextwidth ;  u32 oobbinwidth ;  u32 oobboutwidth ;  u32 PAD [ 5 ] ;  u32 oobcextwidth ;  u32 oobcinwidth ;  u32 oobcoutwidth ;  u32 PAD [ 5 ] ;  u32 oobdextwidth ;  u32 oobdinwidth ;  u32 oobdoutwidth ;  u32 PAD [ 37 ] ;  u32 ioctrlset ;  u32 ioctrlclear ;  u32 ioctrl ;  u32 PAD [ 61 ] ;  u32 iostatus ;  u32 PAD [ 127 ] ;  u32 ioctrlwidth ;  u32 iostatuswidth ;  u32 PAD [ 62 ] ;  u32 resetctrl ;  u32 resetstatus ;  u32 resetreadid ;  u32 resetwriteid ;  u32 PAD [ 60 ] ;  u32 errlogctrl ;  u32 errlogdone ;  u32 errlogstatus ;  u32 errlogaddrlo ;  u32 errlogaddrhi ;  u32 errlogid ;  u32 errloguser ;  u32 errlogflags ;  u32 PAD [ 56 ] ;  u32 intstatus ;  u32 PAD [ 127 ] ;  u32 config ;  u32 PAD [ 63 ] ;  u32 itcr ;  u32 PAD [ 3 ] ;  u32 itipooba ;  u32 itipoobb ;  u32 itipoobc ;  u32 itipoobd ;  u32 PAD [ 4 ] ;  u32 itipoobaout ;  u32 itipoobbout ;  u32 itipoobcout ;  u32 itipoobdout ;  u32 PAD [ 4 ] ;  u32 itopooba ;  u32 itopoobb ;  u32 itopoobc ;  u32 itopoobd ;  u32 PAD [ 4 ] ;  u32 itopoobain ;  u32 itopoobbin ;  u32 itopoobcin ;  u32 itopoobdin ;  u32 PAD [ 4 ] ;  u32 itopreset ;  u32 PAD [ 15 ] ;  u32 peripherialid4 ;  u32 peripherialid5 ;  u32 peripherialid6 ;  u32 peripherialid7 ;  u32 peripherialid0 ;  u32 peripherialid1 ;  u32 peripherialid2 ;  u32 peripherialid3 ;  u32 componentid0 ;  u32 componentid1 ;  u32 componentid2 ;  u32 componentid3 ; } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13', '129']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum bcma_clkmode cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct si_info * cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct si_pub * cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
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
