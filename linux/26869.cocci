@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
typedef compat_uint_t;
@@
 struct compat_fs_qfilestat {  compat_u64 dqb_bhardlimit ;  compat_u64 qfs_nblks ;  compat_uint_t qfs_nextents ; } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15', '19']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
typedef __u16,compat_uint_t,compat_int_t;
@@
 struct compat_fs_quota_stat {  __s8 qs_version ;  __u16 qs_flags ;  __s8 qs_pad ;  struct compat_fs_qfilestat qs_uquota ;  struct compat_fs_qfilestat qs_gquota ;  compat_uint_t qs_incoredqs ;  compat_int_t qs_btimelimit ;  compat_int_t qs_itimelimit ;  compat_int_t qs_rtbtimelimit ;  __u16 qs_bwarnlimit ;  __u16 qs_iwarnlimit ; } cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2', '14']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
typedef compat_uint_t;
@@
 struct compat_if_dqblk {  compat_u64 dqb_bhardlimit ;  compat_u64 dqb_bsoftlimit ;  compat_u64 dqb_curspace ;  compat_u64 dqb_ihardlimit ;  compat_u64 dqb_isoftlimit ;  compat_u64 dqb_curinodes ;  compat_u64 dqb_btime ;  compat_u64 dqb_itime ;  compat_uint_t dqb_valid ; } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20', '30']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3]
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
