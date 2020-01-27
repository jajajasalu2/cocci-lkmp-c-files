@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_KEY_DEFAULT_TYPES ] ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['82']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 enum nl80211_key_type cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['203']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_SCHED_SCAN_MATCH_ATTR_MAX + 1 ] ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct nlmsghdr * cocci_id@p ;

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
 enum nl80211_multicast_groups cocci_id@p ;

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
 struct mesh_setup * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['70']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 struct cfg80211_nan_func * cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['240']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_sta_he_cap * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['204']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 const struct wiphy_coalesce_support * cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['250']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
typedef s8;
@@
 s8 cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['268']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_MESH_SETUP_ATTR_MAX + 1 ] ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['75']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_SCHED_SCAN_MATCH_ATTR_MAX + 1 ] ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['56']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct cfg80211_coalesce * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['252']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 struct cfg80211_ap_settings * cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['105']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 struct cfg80211_sched_scan_request cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['38']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['245']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 struct vif_params * cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['133']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 const struct wiphy_wowlan_support * cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['256']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_REKEY_DATA ] ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['243']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_MESHCONF_ATTR_MAX + 1 ] ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['73']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 struct cfg80211_update_ft_ies_params cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['233']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan_nd_match * cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['183']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 struct survey_info * cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['31']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 const struct cfg80211_beacon_data * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['104']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 struct cfg80211_sched_scan_request * cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['47']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 enum nl80211_tdls_operation cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['181']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 struct nl80211_coalesce_rule_support cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['208']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
typedef s32;
@@
 s32 cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['191']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 struct nl80211_wowlan_tcp_data_seq cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['72']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 struct cfg80211_chan_def * cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['190']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_TXQ_ATTR_MAX + 1 ] ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['159']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
@@
 enum nl80211_dfs_regions cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
@@
 struct key_parse * cocci_id@p ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['257']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_ATTR_COALESCE_RULE ] ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['249']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
@@
 struct cfg80211_connect_resp_params * cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['207']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
@@
 const struct cfg80211_pmsr_capabilities * cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['172']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_SCHED_SCAN_PLAN_MAX + 1 ] ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['43']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
@@
 enum nl80211_rate_info cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['97']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan_nd_info * cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['184']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
@@
 enum nl80211_iftype cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['152']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 struct ieee80211_freq_range * cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 struct cfg80211_bitrate_mask * cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['113']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
@@
 struct ieee80211_supported_band * cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['120']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 enum nl80211_cqm_rssi_threshold_event cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['192']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
@@
 enum nl80211_multicast_groups { NL80211_MCGRP_CONFIG , NL80211_MCGRP_SCAN , NL80211_MCGRP_REGULATORY , NL80211_MCGRP_MLME , NL80211_MCGRP_VENDOR , NL80211_MCGRP_NAN , NL80211_MCGRP_TESTMODE , } cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['117']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 struct key_parse cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['28']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 enum nl80211_radar_event cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['188']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 struct nl80211_wowlan_tcp_data_token cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['71']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
@@
 struct cfg80211_acl_data * cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['121']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 enum nl80211_feature_flags cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['49']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_MESH_SETUP_ATTR_MAX + 1 ] ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['69']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_TXQ_ATTR_MAX + 1 ] ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['148']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 const struct cfg80211_bss_ies * cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['33']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_NAN_SRF_ATTR ] ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['237']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 struct nl80211_dump_wiphy_state cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['140']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 struct station_info * cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['200']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct ieee80211_channel * cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['202']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
@@
 struct cfg80211_assoc_request cocci_id@p ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['26']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 struct cfg80211_external_auth_params * cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['175']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 struct cfg80211_gtk_rekey_data cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['242']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
@@
 struct cfg80211_ftm_responder_stats cocci_id@p ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['219']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
typedef s8;
@@
 s8 * cocci_id@p ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['96']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_REG_RULE_ATTR_MAX + 1 ] ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
@@
 struct get_key_cookie {  struct sk_buff * msg ;  int error ;  int idx ; } cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['127', '131']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 struct cfg80211_nan_match_params * cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['235']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p [ ETH_ALEN ] ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
@@
 struct station_del_parameters cocci_id@p ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['88']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_TXRATE_MAX + 1 ] ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['115']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_NAN_SRF_ATTR_MAX + 1 ] ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['44']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_STA_FLAG_MAX + 1 ] ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['101']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ r73 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_NAN_FUNC_ATTR ] ;

@ script:python depends on r73 @
p << r73.p;
@@

if 73 not in rule_matches:
    rule_matches[73] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['238']:
    rule_matches[73]['correct_lines'].append(p[0].line)
else:
    rule_matches[73]['other_lines'].append(p[0].line)

@ r74 @
symbol cocci_id;
position p;
@@
 enum nl80211_band cocci_id@p ;

@ script:python depends on r74 @
p << r74.p;
@@

if 74 not in rule_matches:
    rule_matches[74] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['55']:
    rule_matches[74]['correct_lines'].append(p[0].line)
else:
    rule_matches[74]['other_lines'].append(p[0].line)

@ r75 @
symbol cocci_id;
position p;
@@
 struct sk_buff * cocci_id@p ;

@ script:python depends on r75 @
p << r75.p;
@@

if 75 not in rule_matches:
    rule_matches[75] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[75]['correct_lines'].append(p[0].line)
else:
    rule_matches[75]['other_lines'].append(p[0].line)

@ r76 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct cfg80211_registered_device * rdev , struct genl_info * info , struct cfg80211_crypto_settings * settings , int cipher_limit ) ;

@ script:python depends on r76 @
p << r76.p;
@@

if 76 not in rule_matches:
    rule_matches[76] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['136', '139']:
    rule_matches[76]['correct_lines'].append(p[0].line)
else:
    rule_matches[76]['other_lines'].append(p[0].line)

@ r77 @
symbol cocci_id;
position p;
@@
 struct nl80211_pattern_support cocci_id@p ;

@ script:python depends on r77 @
p << r77.p;
@@

if 77 not in rule_matches:
    rule_matches[77] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['211']:
    rule_matches[77]['correct_lines'].append(p[0].line)
else:
    rule_matches[77]['other_lines'].append(p[0].line)

@ r78 @
symbol cocci_id;
position p;
@@
 struct rate_info * cocci_id@p ;

@ script:python depends on r78 @
p << r78.p;
@@

if 78 not in rule_matches:
    rule_matches[78] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['98']:
    rule_matches[78]['correct_lines'].append(p[0].line)
else:
    rule_matches[78]['other_lines'].append(p[0].line)

@ r79 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_ATTR_MAX + 1 ] ;

@ script:python depends on r79 @
p << r79.p;
@@

if 79 not in rule_matches:
    rule_matches[79] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['35']:
    rule_matches[79]['correct_lines'].append(p[0].line)
else:
    rule_matches[79]['other_lines'].append(p[0].line)

@ r80 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_PMSR_ATTR_MAX + 1 ] ;

@ script:python depends on r80 @
p << r80.p;
@@

if 80 not in rule_matches:
    rule_matches[80] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['145']:
    rule_matches[80]['correct_lines'].append(p[0].line)
else:
    rule_matches[80]['other_lines'].append(p[0].line)

@ r81 @
symbol cocci_id;
position p;
@@
 enum nl80211_channel_type cocci_id@p ;

@ script:python depends on r81 @
p << r81.p;
@@

if 81 not in rule_matches:
    rule_matches[81] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['155']:
    rule_matches[81]['correct_lines'].append(p[0].line)
else:
    rule_matches[81]['other_lines'].append(p[0].line)

@ r82 @
symbol cocci_id;
position p;
@@
 struct station_parameters cocci_id@p ;

@ script:python depends on r82 @
p << r82.p;
@@

if 82 not in rule_matches:
    rule_matches[82] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89']:
    rule_matches[82]['correct_lines'].append(p[0].line)
else:
    rule_matches[82]['other_lines'].append(p[0].line)

@ r83 @
symbol cocci_id;
position p;
@@
 struct cfg80211_bitrate_mask cocci_id@p ;

@ script:python depends on r83 @
p << r83.p;
@@

if 83 not in rule_matches:
    rule_matches[83] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['275']:
    rule_matches[83]['correct_lines'].append(p[0].line)
else:
    rule_matches[83]['other_lines'].append(p[0].line)

@ r84 @
symbol cocci_id;
position p;
@@
 struct cfg80211_connect_params cocci_id@p ;

@ script:python depends on r84 @
p << r84.p;
@@

if 84 not in rule_matches:
    rule_matches[84] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[84]['correct_lines'].append(p[0].line)
else:
    rule_matches[84]['other_lines'].append(p[0].line)

@ r85 @
symbol cocci_id;
position p;
@@
 struct cfg80211_nan_func_filter * cocci_id@p ;

@ script:python depends on r85 @
p << r85.p;
@@

if 85 not in rule_matches:
    rule_matches[85] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['239']:
    rule_matches[85]['correct_lines'].append(p[0].line)
else:
    rule_matches[85]['other_lines'].append(p[0].line)

@ r86 @
symbol cocci_id;
position p;
@@
 struct cfg80211_txq_stats * cocci_id@p ;

@ script:python depends on r86 @
p << r86.p;
@@

if 86 not in rule_matches:
    rule_matches[86] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[86]['correct_lines'].append(p[0].line)
else:
    rule_matches[86]['other_lines'].append(p[0].line)

@ r87 @
symbol cocci_id;
position p;
@@
 struct cfg80211_ibss_params cocci_id@p ;

@ script:python depends on r87 @
p << r87.p;
@@

if 87 not in rule_matches:
    rule_matches[87] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['23']:
    rule_matches[87]['correct_lines'].append(p[0].line)
else:
    rule_matches[87]['other_lines'].append(p[0].line)

@ r88 @
symbol cocci_id;
position p;
@@
 struct survey_info cocci_id@p ;

@ script:python depends on r88 @
p << r88.p;
@@

if 88 not in rule_matches:
    rule_matches[88] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['30']:
    rule_matches[88]['correct_lines'].append(p[0].line)
else:
    rule_matches[88]['other_lines'].append(p[0].line)

@ r89 @
symbol cocci_id;
position p;
@@
 struct cfg80211_beacon_registration * cocci_id@p ;

@ script:python depends on r89 @
p << r89.p;
@@

if 89 not in rule_matches:
    rule_matches[89] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['186']:
    rule_matches[89]['correct_lines'].append(p[0].line)
else:
    rule_matches[89]['other_lines'].append(p[0].line)

@ r90 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_PMSR_REQ_ATTR_MAX + 1 ] ;

@ script:python depends on r90 @
p << r90.p;
@@

if 90 not in rule_matches:
    rule_matches[90] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['150']:
    rule_matches[90]['correct_lines'].append(p[0].line)
else:
    rule_matches[90]['other_lines'].append(p[0].line)

@ r91 @
symbol cocci_id;
position p;
@@
 enum nl80211_commands cocci_id@p ;

@ script:python depends on r91 @
p << r91.p;
@@

if 91 not in rule_matches:
    rule_matches[91] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[91]['correct_lines'].append(p[0].line)
else:
    rule_matches[91]['other_lines'].append(p[0].line)

@ r92 @
symbol cocci_id;
position p;
@@
 enum nl80211_tx_power_setting cocci_id@p ;

@ script:python depends on r92 @
p << r92.p;
@@

if 92 not in rule_matches:
    rule_matches[92] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['146']:
    rule_matches[92]['correct_lines'].append(p[0].line)
else:
    rule_matches[92]['other_lines'].append(p[0].line)

@ r93 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_STA_WME_MAX + 1 ] ;

@ script:python depends on r93 @
p << r93.p;
@@

if 93 not in rule_matches:
    rule_matches[93] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['91']:
    rule_matches[93]['correct_lines'].append(p[0].line)
else:
    rule_matches[93]['other_lines'].append(p[0].line)

@ r94 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_sband_iftype_data * cocci_id@p ;

@ script:python depends on r94 @
p << r94.p;
@@

if 94 not in rule_matches:
    rule_matches[94] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['205']:
    rule_matches[94]['correct_lines'].append(p[0].line)
else:
    rule_matches[94]['other_lines'].append(p[0].line)

@ r95 @
symbol cocci_id;
position p;
@@
 struct mesh_config cocci_id@p ;

@ script:python depends on r95 @
p << r95.p;
@@

if 95 not in rule_matches:
    rule_matches[95] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['78']:
    rule_matches[95]['correct_lines'].append(p[0].line)
else:
    rule_matches[95]['other_lines'].append(p[0].line)

@ r96 @
symbol cocci_id;
position p;
@@
 const struct cfg80211_chan_def * cocci_id@p ;

@ script:python depends on r96 @
p << r96.p;
@@

if 96 not in rule_matches:
    rule_matches[96] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['189']:
    rule_matches[96]['correct_lines'].append(p[0].line)
else:
    rule_matches[96]['other_lines'].append(p[0].line)

@ r97 @
symbol cocci_id;
position p;
@@
 long cocci_id@p ;

@ script:python depends on r97 @
p << r97.p;
@@

if 97 not in rule_matches:
    rule_matches[97] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['161']:
    rule_matches[97]['correct_lines'].append(p[0].line)
else:
    rule_matches[97]['other_lines'].append(p[0].line)

@ r98 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_ATTR_COALESCE_RULE ] ;

@ script:python depends on r98 @
p << r98.p;
@@

if 98 not in rule_matches:
    rule_matches[98] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['68']:
    rule_matches[98]['correct_lines'].append(p[0].line)
else:
    rule_matches[98]['other_lines'].append(p[0].line)

@ r99 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_REKEY_DATA ] ;

@ script:python depends on r99 @
p << r99.p;
@@

if 99 not in rule_matches:
    rule_matches[99] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['64']:
    rule_matches[99]['correct_lines'].append(p[0].line)
else:
    rule_matches[99]['other_lines'].append(p[0].line)

@ r100 @
symbol cocci_id;
position p;
@@
 struct cfg80211_chan_def cocci_id@p ;

@ script:python depends on r100 @
p << r100.p;
@@

if 100 not in rule_matches:
    rule_matches[100] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['153']:
    rule_matches[100]['correct_lines'].append(p[0].line)
else:
    rule_matches[100]['other_lines'].append(p[0].line)

@ r101 @
symbol cocci_id;
position p;
@@
 struct cfg80211_beacon_data cocci_id@p ;

@ script:python depends on r101 @
p << r101.p;
@@

if 101 not in rule_matches:
    rule_matches[101] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102']:
    rule_matches[101]['correct_lines'].append(p[0].line)
else:
    rule_matches[101]['other_lines'].append(p[0].line)

@ r102 @
symbol cocci_id;
position p;
@@
 struct cfg80211_csa_settings cocci_id@p ;

@ script:python depends on r102 @
p << r102.p;
@@

if 102 not in rule_matches:
    rule_matches[102] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['36']:
    rule_matches[102]['correct_lines'].append(p[0].line)
else:
    rule_matches[102]['other_lines'].append(p[0].line)

@ r103 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p [ NL80211_VHT_NSS_MAX ] ;

@ script:python depends on r103 @
p << r103.p;
@@

if 103 not in rule_matches:
    rule_matches[103] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['118']:
    rule_matches[103]['correct_lines'].append(p[0].line)
else:
    rule_matches[103]['other_lines'].append(p[0].line)

@ r104 @
symbol cocci_id;
position p;
@@
 enum nl80211_auth_type cocci_id@p ;

@ script:python depends on r104 @
p << r104.p;
@@

if 104 not in rule_matches:
    rule_matches[104] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['29']:
    rule_matches[104]['correct_lines'].append(p[0].line)
else:
    rule_matches[104]['other_lines'].append(p[0].line)

@ r105 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_PKTPAT ] ;

@ script:python depends on r105 @
p << r105.p;
@@

if 105 not in rule_matches:
    rule_matches[105] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['248']:
    rule_matches[105]['correct_lines'].append(p[0].line)
else:
    rule_matches[105]['other_lines'].append(p[0].line)

@ r106 @
symbol cocci_id;
position p;
@@
 struct ocb_setup cocci_id@p ;

@ script:python depends on r106 @
p << r106.p;
@@

if 106 not in rule_matches:
    rule_matches[106] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['263']:
    rule_matches[106]['correct_lines'].append(p[0].line)
else:
    rule_matches[106]['other_lines'].append(p[0].line)

@ r107 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r107 @
p << r107.p;
@@

if 107 not in rule_matches:
    rule_matches[107] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['216']:
    rule_matches[107]['correct_lines'].append(p[0].line)
else:
    rule_matches[107]['other_lines'].append(p[0].line)

@ r108 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r108 @
p << r108.p;
@@

if 108 not in rule_matches:
    rule_matches[108] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['198']:
    rule_matches[108]['correct_lines'].append(p[0].line)
else:
    rule_matches[108]['other_lines'].append(p[0].line)

@ r109 @
symbol cocci_id;
position p;
@@
 struct net * cocci_id@p ;

@ script:python depends on r109 @
p << r109.p;
@@

if 109 not in rule_matches:
    rule_matches[109] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['246']:
    rule_matches[109]['correct_lines'].append(p[0].line)
else:
    rule_matches[109]['other_lines'].append(p[0].line)

@ r110 @
symbol cocci_id;
position p;
@@
 struct cfg80211_bss * cocci_id@p ;

@ script:python depends on r110 @
p << r110.p;
@@

if 110 not in rule_matches:
    rule_matches[110] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['34']:
    rule_matches[110]['correct_lines'].append(p[0].line)
else:
    rule_matches[110]['other_lines'].append(p[0].line)

@ r111 @
symbol cocci_id;
position p;
@@
 struct cfg80211_roam_info * cocci_id@p ;

@ script:python depends on r111 @
p << r111.p;
@@

if 111 not in rule_matches:
    rule_matches[111] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['206']:
    rule_matches[111]['correct_lines'].append(p[0].line)
else:
    rule_matches[111]['other_lines'].append(p[0].line)

@ r112 @
symbol cocci_id;
position p;
@@
 struct nl80211_bss_select_rssi_adjust cocci_id@p ;

@ script:python depends on r112 @
p << r112.p;
@@

if 112 not in rule_matches:
    rule_matches[112] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['46']:
    rule_matches[112]['correct_lines'].append(p[0].line)
else:
    rule_matches[112]['other_lines'].append(p[0].line)

@ r113 @
symbol cocci_id;
position p;
@@
 int ( * cocci_id@p ) ( struct wiphy * wiphy , struct net_device * dev , struct cfg80211_pmksa * pmksa ) ;

@ script:python depends on r113 @
p << r113.p;
@@

if 113 not in rule_matches:
    rule_matches[113] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['278', '280']:
    rule_matches[113]['correct_lines'].append(p[0].line)
else:
    rule_matches[113]['other_lines'].append(p[0].line)

@ r114 @
symbol cocci_id;
position p;
@@
 enum nl80211_acl_policy cocci_id@p ;

@ script:python depends on r114 @
p << r114.p;
@@

if 114 not in rule_matches:
    rule_matches[114] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['122']:
    rule_matches[114]['correct_lines'].append(p[0].line)
else:
    rule_matches[114]['other_lines'].append(p[0].line)

@ r115 @
symbol cocci_id;
position p;
@@
 enum nl80211_mfp cocci_id@p ;

@ script:python depends on r115 @
p << r115.p;
@@

if 115 not in rule_matches:
    rule_matches[115] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['25']:
    rule_matches[115]['correct_lines'].append(p[0].line)
else:
    rule_matches[115]['other_lines'].append(p[0].line)

@ r116 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_REG_RULE_ATTR_MAX + 1 ] ;

@ script:python depends on r116 @
p << r116.p;
@@

if 116 not in rule_matches:
    rule_matches[116] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['58']:
    rule_matches[116]['correct_lines'].append(p[0].line)
else:
    rule_matches[116]['other_lines'].append(p[0].line)

@ r117 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_FTM_RESP_ATTR_MAX + 1 ] ;

@ script:python depends on r117 @
p << r117.p;
@@

if 117 not in rule_matches:
    rule_matches[117] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['160']:
    rule_matches[117]['correct_lines'].append(p[0].line)
else:
    rule_matches[117]['other_lines'].append(p[0].line)

@ r118 @
symbol cocci_id;
position p;
@@
 struct cfg80211_cached_keys * cocci_id@p ;

@ script:python depends on r118 @
p << r118.p;
@@

if 118 not in rule_matches:
    rule_matches[118] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[118]['correct_lines'].append(p[0].line)
else:
    rule_matches[118]['other_lines'].append(p[0].line)

@ r119 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r119 @
p << r119.p;
@@

if 119 not in rule_matches:
    rule_matches[119] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['193']:
    rule_matches[119]['correct_lines'].append(p[0].line)
else:
    rule_matches[119]['other_lines'].append(p[0].line)

@ r120 @
symbol cocci_id;
position p;
@@
 struct ethhdr cocci_id@p ;

@ script:python depends on r120 @
p << r120.p;
@@

if 120 not in rule_matches:
    rule_matches[120] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['217']:
    rule_matches[120]['correct_lines'].append(p[0].line)
else:
    rule_matches[120]['other_lines'].append(p[0].line)

@ r121 @
symbol cocci_id;
position p;
@@
 void * * cocci_id@p ;

@ script:python depends on r121 @
p << r121.p;
@@

if 121 not in rule_matches:
    rule_matches[121] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[121]['correct_lines'].append(p[0].line)
else:
    rule_matches[121]['other_lines'].append(p[0].line)

@ r122 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_ATTR_CQM_MAX + 1 ] ;

@ script:python depends on r122 @
p << r122.p;
@@

if 122 not in rule_matches:
    rule_matches[122] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['271']:
    rule_matches[122]['correct_lines'].append(p[0].line)
else:
    rule_matches[122]['other_lines'].append(p[0].line)

@ r123 @
symbol cocci_id;
position p;
@@
 struct nlattr * * cocci_id@p ;

@ script:python depends on r123 @
p << r123.p;
@@

if 123 not in rule_matches:
    rule_matches[123] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['247']:
    rule_matches[123]['correct_lines'].append(p[0].line)
else:
    rule_matches[123]['other_lines'].append(p[0].line)

@ r124 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_STA_WME_MAX + 1 ] ;

@ script:python depends on r124 @
p << r124.p;
@@

if 124 not in rule_matches:
    rule_matches[124] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['90']:
    rule_matches[124]['correct_lines'].append(p[0].line)
else:
    rule_matches[124]['other_lines'].append(p[0].line)

@ r125 @
symbol cocci_id;
position p;
@@
 struct nl80211_wowlan_tcp_data_seq * cocci_id@p ;

@ script:python depends on r125 @
p << r125.p;
@@

if 125 not in rule_matches:
    rule_matches[125] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['258']:
    rule_matches[125]['correct_lines'].append(p[0].line)
else:
    rule_matches[125]['other_lines'].append(p[0].line)

@ r126 @
symbol cocci_id;
position p;
@@
 struct nl80211_dump_wiphy_state * cocci_id@p ;

@ script:python depends on r126 @
p << r126.p;
@@

if 126 not in rule_matches:
    rule_matches[126] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['162']:
    rule_matches[126]['correct_lines'].append(p[0].line)
else:
    rule_matches[126]['other_lines'].append(p[0].line)

@ r127 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_BANDS ] ;

@ script:python depends on r127 @
p << r127.p;
@@

if 127 not in rule_matches:
    rule_matches[127] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['59']:
    rule_matches[127]['correct_lines'].append(p[0].line)
else:
    rule_matches[127]['other_lines'].append(p[0].line)

@ r128 @
symbol cocci_id;
position p;
@@
 const struct element * cocci_id@p ;

@ script:python depends on r128 @
p << r128.p;
@@

if 128 not in rule_matches:
    rule_matches[128] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['165']:
    rule_matches[128]['correct_lines'].append(p[0].line)
else:
    rule_matches[128]['other_lines'].append(p[0].line)

@ r129 @
symbol cocci_id;
position p;
@@
 struct wiphy * cocci_id@p ;

@ script:python depends on r129 @
p << r129.p;
@@

if 129 not in rule_matches:
    rule_matches[129] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[129]['correct_lines'].append(p[0].line)
else:
    rule_matches[129]['other_lines'].append(p[0].line)

@ r130 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_KEY_DEFAULT_TYPES ] ;

@ script:python depends on r130 @
p << r130.p;
@@

if 130 not in rule_matches:
    rule_matches[130] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['273']:
    rule_matches[130]['correct_lines'].append(p[0].line)
else:
    rule_matches[130]['other_lines'].append(p[0].line)

@ r131 @
symbol cocci_id;
position p;
@@
 struct nl80211_sta_flag_update cocci_id@p ;

@ script:python depends on r131 @
p << r131.p;
@@

if 131 not in rule_matches:
    rule_matches[131] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['111']:
    rule_matches[131]['correct_lines'].append(p[0].line)
else:
    rule_matches[131]['other_lines'].append(p[0].line)

@ r132 @
symbol cocci_id;
position p;
@@
 struct cfg80211_nan_conf cocci_id@p ;

@ script:python depends on r132 @
p << r132.p;
@@

if 132 not in rule_matches:
    rule_matches[132] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['236']:
    rule_matches[132]['correct_lines'].append(p[0].line)
else:
    rule_matches[132]['other_lines'].append(p[0].line)

@ r133 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 * cocci_id@p ;

@ script:python depends on r133 @
p << r133.p;
@@

if 133 not in rule_matches:
    rule_matches[133] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['269']:
    rule_matches[133]['correct_lines'].append(p[0].line)
else:
    rule_matches[133]['other_lines'].append(p[0].line)

@ r134 @
symbol cocci_id;
position p;
@@
 struct cfg80211_beacon_data * cocci_id@p ;

@ script:python depends on r134 @
p << r134.p;
@@

if 134 not in rule_matches:
    rule_matches[134] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['109']:
    rule_matches[134]['correct_lines'].append(p[0].line)
else:
    rule_matches[134]['other_lines'].append(p[0].line)

@ r135 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_HE_OBSS_PD_ATTR_MAX + 1 ] ;

@ script:python depends on r135 @
p << r135.p;
@@

if 135 not in rule_matches:
    rule_matches[135] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['144']:
    rule_matches[135]['correct_lines'].append(p[0].line)
else:
    rule_matches[135]['other_lines'].append(p[0].line)

@ r136 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_SCHED_SCAN_PLAN_MAX + 1 ] ;

@ script:python depends on r136 @
p << r136.p;
@@

if 136 not in rule_matches:
    rule_matches[136] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['52']:
    rule_matches[136]['correct_lines'].append(p[0].line)
else:
    rule_matches[136]['other_lines'].append(p[0].line)

@ r137 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_PMSR_TYPE_MAX + 1 ] ;

@ script:python depends on r137 @
p << r137.p;
@@

if 137 not in rule_matches:
    rule_matches[137] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['151']:
    rule_matches[137]['correct_lines'].append(p[0].line)
else:
    rule_matches[137]['other_lines'].append(p[0].line)

@ r138 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r138 @
p << r138.p;
@@

if 138 not in rule_matches:
    rule_matches[138] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['179']:
    rule_matches[138]['correct_lines'].append(p[0].line)
else:
    rule_matches[138]['other_lines'].append(p[0].line)

@ r139 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan * cocci_id@p ;

@ script:python depends on r139 @
p << r139.p;
@@

if 139 not in rule_matches:
    rule_matches[139] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['255']:
    rule_matches[139]['correct_lines'].append(p[0].line)
else:
    rule_matches[139]['other_lines'].append(p[0].line)

@ r140 @
symbol cocci_id;
position p;
@@
 struct nl80211_wowlan_tcp_data_token * cocci_id@p ;

@ script:python depends on r140 @
p << r140.p;
@@

if 140 not in rule_matches:
    rule_matches[140] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['259']:
    rule_matches[140]['correct_lines'].append(p[0].line)
else:
    rule_matches[140]['other_lines'].append(p[0].line)

@ r141 @
symbol cocci_id;
position p;
@@
 unsigned long * cocci_id@p ;

@ script:python depends on r141 @
p << r141.p;
@@

if 141 not in rule_matches:
    rule_matches[141] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['228']:
    rule_matches[141]['correct_lines'].append(p[0].line)
else:
    rule_matches[141]['other_lines'].append(p[0].line)

@ r142 @
symbol cocci_id;
position p;
@@
 struct mesh_config * cocci_id@p ;

@ script:python depends on r142 @
p << r142.p;
@@

if 142 not in rule_matches:
    rule_matches[142] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['74']:
    rule_matches[142]['correct_lines'].append(p[0].line)
else:
    rule_matches[142]['other_lines'].append(p[0].line)

@ r143 @
symbol cocci_id;
position p;
@@
 struct ethhdr * cocci_id@p ;

@ script:python depends on r143 @
p << r143.p;
@@

if 143 not in rule_matches:
    rule_matches[143] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['196']:
    rule_matches[143]['correct_lines'].append(p[0].line)
else:
    rule_matches[143]['other_lines'].append(p[0].line)

@ r144 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_KEY_MAX + 1 ] ;

@ script:python depends on r144 @
p << r144.p;
@@

if 144 not in rule_matches:
    rule_matches[144] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['84']:
    rule_matches[144]['correct_lines'].append(p[0].line)
else:
    rule_matches[144]['other_lines'].append(p[0].line)

@ r145 @
symbol cocci_id;
position p;
@@
 struct cfg80211_mgmt_tx_params cocci_id@p ;

@ script:python depends on r145 @
p << r145.p;
@@

if 145 not in rule_matches:
    rule_matches[145] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['274']:
    rule_matches[145]['correct_lines'].append(p[0].line)
else:
    rule_matches[145]['other_lines'].append(p[0].line)

@ r146 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r146 @
p << r146.p;
@@

if 146 not in rule_matches:
    rule_matches[146] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['220']:
    rule_matches[146]['correct_lines'].append(p[0].line)
else:
    rule_matches[146]['other_lines'].append(p[0].line)

@ r147 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r147 @
p << r147.p;
@@

if 147 not in rule_matches:
    rule_matches[147] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['50']:
    rule_matches[147]['correct_lines'].append(p[0].line)
else:
    rule_matches[147]['other_lines'].append(p[0].line)

@ r148 @
symbol cocci_id;
position p;
@@
 struct ieee80211_mgmt cocci_id@p ;

@ script:python depends on r148 @
p << r148.p;
@@

if 148 not in rule_matches:
    rule_matches[148] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['164']:
    rule_matches[148]['correct_lines'].append(p[0].line)
else:
    rule_matches[148]['other_lines'].append(p[0].line)

@ r149 @
symbol cocci_id;
position p;
@@
 struct cfg80211_pmksa cocci_id@p ;

@ script:python depends on r149 @
p << r149.p;
@@

if 149 not in rule_matches:
    rule_matches[149] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['277']:
    rule_matches[149]['correct_lines'].append(p[0].line)
else:
    rule_matches[149]['other_lines'].append(p[0].line)

@ r150 @
symbol cocci_id;
position p;
@@
 struct net_device * cocci_id@p ;

@ script:python depends on r150 @
p << r150.p;
@@

if 150 not in rule_matches:
    rule_matches[150] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['241']:
    rule_matches[150]['correct_lines'].append(p[0].line)
else:
    rule_matches[150]['other_lines'].append(p[0].line)

@ r151 @
symbol cocci_id;
position p;
@@
 enum nl80211_nan_func_term_reason cocci_id@p ;

@ script:python depends on r151 @
p << r151.p;
@@

if 151 not in rule_matches:
    rule_matches[151] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['234']:
    rule_matches[151]['correct_lines'].append(p[0].line)
else:
    rule_matches[151]['other_lines'].append(p[0].line)

@ r152 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan_tcp * cocci_id@p ;

@ script:python depends on r152 @
p << r152.p;
@@

if 152 not in rule_matches:
    rule_matches[152] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['260']:
    rule_matches[152]['correct_lines'].append(p[0].line)
else:
    rule_matches[152]['other_lines'].append(p[0].line)

@ r153 @
symbol cocci_id;
position p;
@@
 struct cfg80211_qos_map * cocci_id@p ;

@ script:python depends on r153 @
p << r153.p;
@@

if 153 not in rule_matches:
    rule_matches[153] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['227']:
    rule_matches[153]['correct_lines'].append(p[0].line)
else:
    rule_matches[153]['other_lines'].append(p[0].line)

@ r154 @
symbol cocci_id;
position p;
@@
 struct cfg80211_internal_bss * cocci_id@p ;

@ script:python depends on r154 @
p << r154.p;
@@

if 154 not in rule_matches:
    rule_matches[154] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['32']:
    rule_matches[154]['correct_lines'].append(p[0].line)
else:
    rule_matches[154]['other_lines'].append(p[0].line)

@ r155 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r155 @
p << r155.p;
@@

if 155 not in rule_matches:
    rule_matches[155] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[155]['correct_lines'].append(p[0].line)
else:
    rule_matches[155]['other_lines'].append(p[0].line)

@ r156 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_regdomain * cocci_id@p ;

@ script:python depends on r156 @
p << r156.p;
@@

if 156 not in rule_matches:
    rule_matches[156] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['65']:
    rule_matches[156]['correct_lines'].append(p[0].line)
else:
    rule_matches[156]['other_lines'].append(p[0].line)

@ r157 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_freq_range * cocci_id@p ;

@ script:python depends on r157 @
p << r157.p;
@@

if 157 not in rule_matches:
    rule_matches[157] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['67']:
    rule_matches[157]['correct_lines'].append(p[0].line)
else:
    rule_matches[157]['other_lines'].append(p[0].line)

@ r158 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_WOWLAN_TCP ] ;

@ script:python depends on r158 @
p << r158.p;
@@

if 158 not in rule_matches:
    rule_matches[158] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['76']:
    rule_matches[158]['correct_lines'].append(p[0].line)
else:
    rule_matches[158]['other_lines'].append(p[0].line)

@ r159 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_MNTR_FLAG_MAX + 1 ] ;

@ script:python depends on r159 @
p << r159.p;
@@

if 159 not in rule_matches:
    rule_matches[159] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['135']:
    rule_matches[159]['correct_lines'].append(p[0].line)
else:
    rule_matches[159]['other_lines'].append(p[0].line)

@ r160 @
symbol cocci_id;
position p;
@@
 struct cfg80211_crypto_settings * cocci_id@p ;

@ script:python depends on r160 @
p << r160.p;
@@

if 160 not in rule_matches:
    rule_matches[160] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['27']:
    rule_matches[160]['correct_lines'].append(p[0].line)
else:
    rule_matches[160]['other_lines'].append(p[0].line)

@ r161 @
symbol cocci_id;
position p;
typedef gfp_t;
@@
 gfp_t cocci_id@p ;

@ script:python depends on r161 @
p << r161.p;
@@

if 161 not in rule_matches:
    rule_matches[161] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[161]['correct_lines'].append(p[0].line)
else:
    rule_matches[161]['other_lines'].append(p[0].line)

@ r162 @
symbol cocci_id;
position p;
@@
 struct ieee80211_reg_rule * cocci_id@p ;

@ script:python depends on r162 @
p << r162.p;
@@

if 162 not in rule_matches:
    rule_matches[162] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[162]['correct_lines'].append(p[0].line)
else:
    rule_matches[162]['other_lines'].append(p[0].line)

@ r163 @
symbol cocci_id;
position p;
@@
 enum nl80211_connect_failed_reason cocci_id@p ;

@ script:python depends on r163 @
p << r163.p;
@@

if 163 not in rule_matches:
    rule_matches[163] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['199']:
    rule_matches[163]['correct_lines'].append(p[0].line)
else:
    rule_matches[163]['other_lines'].append(p[0].line)

@ r164 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r164 @
p << r164.p;
@@

if 164 not in rule_matches:
    rule_matches[164] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[164]['correct_lines'].append(p[0].line)
else:
    rule_matches[164]['other_lines'].append(p[0].line)

@ r165 @
symbol cocci_id;
position p;
@@
 struct ieee80211_he_obss_pd * cocci_id@p ;

@ script:python depends on r165 @
p << r165.p;
@@

if 165 not in rule_matches:
    rule_matches[165] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['107']:
    rule_matches[165]['correct_lines'].append(p[0].line)
else:
    rule_matches[165]['other_lines'].append(p[0].line)

@ r166 @
symbol cocci_id;
position p;
@@
 const struct nlattr * cocci_id@p ;

@ script:python depends on r166 @
p << r166.p;
@@

if 166 not in rule_matches:
    rule_matches[166] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['224']:
    rule_matches[166]['correct_lines'].append(p[0].line)
else:
    rule_matches[166]['other_lines'].append(p[0].line)

@ r167 @
symbol cocci_id;
position p;
@@
 struct mpath_info cocci_id@p ;

@ script:python depends on r167 @
p << r167.p;
@@

if 167 not in rule_matches:
    rule_matches[167] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['86']:
    rule_matches[167]['correct_lines'].append(p[0].line)
else:
    rule_matches[167]['other_lines'].append(p[0].line)

@ r168 @
symbol cocci_id;
position p;
@@
 struct cfg80211_cqm_config * cocci_id@p ;

@ script:python depends on r168 @
p << r168.p;
@@

if 168 not in rule_matches:
    rule_matches[168] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['267']:
    rule_matches[168]['correct_lines'].append(p[0].line)
else:
    rule_matches[168]['other_lines'].append(p[0].line)

@ r169 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_TXRATE_MAX + 1 ] ;

@ script:python depends on r169 @
p << r169.p;
@@

if 169 not in rule_matches:
    rule_matches[169] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['112']:
    rule_matches[169]['correct_lines'].append(p[0].line)
else:
    rule_matches[169]['other_lines'].append(p[0].line)

@ r170 @
symbol cocci_id;
position p;
@@
 struct cfg80211_dscp_exception cocci_id@p ;

@ script:python depends on r170 @
p << r170.p;
@@

if 170 not in rule_matches:
    rule_matches[170] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['225']:
    rule_matches[170]['correct_lines'].append(p[0].line)
else:
    rule_matches[170]['other_lines'].append(p[0].line)

@ r171 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r171 @
p << r171.p;
@@

if 171 not in rule_matches:
    rule_matches[171] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22']:
    rule_matches[171]['correct_lines'].append(p[0].line)
else:
    rule_matches[171]['other_lines'].append(p[0].line)

@ r172 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan cocci_id@p ;

@ script:python depends on r172 @
p << r172.p;
@@

if 172 not in rule_matches:
    rule_matches[172] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['253']:
    rule_matches[172]['correct_lines'].append(p[0].line)
else:
    rule_matches[172]['other_lines'].append(p[0].line)

@ r173 @
symbol cocci_id;
position p;
@@
 struct mpath_info * cocci_id@p ;

@ script:python depends on r173 @
p << r173.p;
@@

if 173 not in rule_matches:
    rule_matches[173] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87']:
    rule_matches[173]['correct_lines'].append(p[0].line)
else:
    rule_matches[173]['other_lines'].append(p[0].line)

@ r174 @
symbol cocci_id;
position p;
@@
 struct cfg80211_registered_device * cocci_id@p ;

@ script:python depends on r174 @
p << r174.p;
@@

if 174 not in rule_matches:
    rule_matches[174] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[174]['correct_lines'].append(p[0].line)
else:
    rule_matches[174]['other_lines'].append(p[0].line)

@ r175 @
symbol cocci_id;
position p;
@@
 struct get_key_cookie * cocci_id@p ;

@ script:python depends on r175 @
p << r175.p;
@@

if 175 not in rule_matches:
    rule_matches[175] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['125']:
    rule_matches[175]['correct_lines'].append(p[0].line)
else:
    rule_matches[175]['other_lines'].append(p[0].line)

@ r176 @
symbol cocci_id;
position p;
@@
 struct nl80211_sta_flag_update * cocci_id@p ;

@ script:python depends on r176 @
p << r176.p;
@@

if 176 not in rule_matches:
    rule_matches[176] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['99']:
    rule_matches[176]['correct_lines'].append(p[0].line)
else:
    rule_matches[176]['other_lines'].append(p[0].line)

@ r177 @
symbol cocci_id;
position p;
@@
 struct notifier_block cocci_id@p ;

@ script:python depends on r177 @
p << r177.p;
@@

if 177 not in rule_matches:
    rule_matches[177] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['177']:
    rule_matches[177]['correct_lines'].append(p[0].line)
else:
    rule_matches[177]['other_lines'].append(p[0].line)

@ r178 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_WOWLAN_TCP ] ;

@ script:python depends on r178 @
p << r178.p;
@@

if 178 not in rule_matches:
    rule_matches[178] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['261']:
    rule_matches[178]['correct_lines'].append(p[0].line)
else:
    rule_matches[178]['other_lines'].append(p[0].line)

@ r179 @
symbol cocci_id;
position p;
@@
 enum nl80211_attrs cocci_id@p ;

@ script:python depends on r179 @
p << r179.p;
@@

if 179 not in rule_matches:
    rule_matches[179] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[179]['correct_lines'].append(p[0].line)
else:
    rule_matches[179]['other_lines'].append(p[0].line)

@ r180 @
symbol cocci_id;
position p;
@@
 struct regulatory_request * cocci_id@p ;

@ script:python depends on r180 @
p << r180.p;
@@

if 180 not in rule_matches:
    rule_matches[180] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['210']:
    rule_matches[180]['correct_lines'].append(p[0].line)
else:
    rule_matches[180]['other_lines'].append(p[0].line)

@ r181 @
symbol cocci_id;
position p;
@@
 struct cfg80211_scan_request * cocci_id@p ;

@ script:python depends on r181 @
p << r181.p;
@@

if 181 not in rule_matches:
    rule_matches[181] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['212']:
    rule_matches[181]['correct_lines'].append(p[0].line)
else:
    rule_matches[181]['other_lines'].append(p[0].line)

@ r182 @
symbol cocci_id;
position p;
@@
 const struct genl_ops * cocci_id@p ;

@ script:python depends on r182 @
p << r182.p;
@@

if 182 not in rule_matches:
    rule_matches[182] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['215']:
    rule_matches[182]['correct_lines'].append(p[0].line)
else:
    rule_matches[182]['other_lines'].append(p[0].line)

@ r183 @
symbol cocci_id;
position p;
@@
 struct genl_family cocci_id@p ;

@ script:python depends on r183 @
p << r183.p;
@@

if 183 not in rule_matches:
    rule_matches[183] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['123']:
    rule_matches[183]['correct_lines'].append(p[0].line)
else:
    rule_matches[183]['other_lines'].append(p[0].line)

@ r184 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_reg_rule * cocci_id@p ;

@ script:python depends on r184 @
p << r184.p;
@@

if 184 not in rule_matches:
    rule_matches[184] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[184]['correct_lines'].append(p[0].line)
else:
    rule_matches[184]['other_lines'].append(p[0].line)

@ r185 @
symbol cocci_id;
position p;
@@
 struct mesh_setup cocci_id@p ;

@ script:python depends on r185 @
p << r185.p;
@@

if 185 not in rule_matches:
    rule_matches[185] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['262']:
    rule_matches[185]['correct_lines'].append(p[0].line)
else:
    rule_matches[185]['other_lines'].append(p[0].line)

@ r186 @
symbol cocci_id;
position p;
@@
 struct cfg80211_external_auth_params cocci_id@p ;

@ script:python depends on r186 @
p << r186.p;
@@

if 186 not in rule_matches:
    rule_matches[186] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['221']:
    rule_matches[186]['correct_lines'].append(p[0].line)
else:
    rule_matches[186]['other_lines'].append(p[0].line)

@ r187 @
symbol cocci_id;
position p;
@@
 struct ieee80211_power_rule * cocci_id@p ;

@ script:python depends on r187 @
p << r187.p;
@@

if 187 not in rule_matches:
    rule_matches[187] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['60']:
    rule_matches[187]['correct_lines'].append(p[0].line)
else:
    rule_matches[187]['other_lines'].append(p[0].line)

@ r188 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_FTM_RESP_ATTR_MAX + 1 ] ;

@ script:python depends on r188 @
p << r188.p;
@@

if 188 not in rule_matches:
    rule_matches[188] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108']:
    rule_matches[188]['correct_lines'].append(p[0].line)
else:
    rule_matches[188]['other_lines'].append(p[0].line)

@ r189 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_BSS_SELECT_ATTR_MAX + 1 ] ;

@ script:python depends on r189 @
p << r189.p;
@@

if 189 not in rule_matches:
    rule_matches[189] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['53']:
    rule_matches[189]['correct_lines'].append(p[0].line)
else:
    rule_matches[189]['other_lines'].append(p[0].line)

@ r190 @
symbol cocci_id;
position p;
@@
 size_t cocci_id@p ;

@ script:python depends on r190 @
p << r190.p;
@@

if 190 not in rule_matches:
    rule_matches[190] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['197']:
    rule_matches[190]['correct_lines'].append(p[0].line)
else:
    rule_matches[190]['other_lines'].append(p[0].line)

@ r191 @
symbol cocci_id;
position p;
@@
 const struct genl_ops cocci_id@p [ ] ;

@ script:python depends on r191 @
p << r191.p;
@@

if 191 not in rule_matches:
    rule_matches[191] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['214']:
    rule_matches[191]['correct_lines'].append(p[0].line)
else:
    rule_matches[191]['other_lines'].append(p[0].line)

@ r192 @
symbol cocci_id;
position p;
@@
 struct cfg80211_wowlan_wakeup * cocci_id@p ;

@ script:python depends on r192 @
p << r192.p;
@@

if 192 not in rule_matches:
    rule_matches[192] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['185']:
    rule_matches[192]['correct_lines'].append(p[0].line)
else:
    rule_matches[192]['other_lines'].append(p[0].line)

@ r193 @
symbol cocci_id;
position p;
@@
 struct netlink_notify * cocci_id@p ;

@ script:python depends on r193 @
p << r193.p;
@@

if 193 not in rule_matches:
    rule_matches[193] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['178']:
    rule_matches[193]['correct_lines'].append(p[0].line)
else:
    rule_matches[193]['other_lines'].append(p[0].line)

@ r194 @
symbol cocci_id;
position p;
@@
 struct cfg80211_registered_device * * cocci_id@p ;

@ script:python depends on r194 @
p << r194.p;
@@

if 194 not in rule_matches:
    rule_matches[194] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['231']:
    rule_matches[194]['correct_lines'].append(p[0].line)
else:
    rule_matches[194]['other_lines'].append(p[0].line)

@ r195 @
symbol cocci_id;
position p;
@@
 struct cfg80211_qos_map cocci_id@p ;

@ script:python depends on r195 @
p << r195.p;
@@

if 195 not in rule_matches:
    rule_matches[195] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['226']:
    rule_matches[195]['correct_lines'].append(p[0].line)
else:
    rule_matches[195]['other_lines'].append(p[0].line)

@ r196 @
symbol cocci_id;
position p;
@@
 const struct genl_multicast_group cocci_id@p [ ] ;

@ script:python depends on r196 @
p << r196.p;
@@

if 196 not in rule_matches:
    rule_matches[196] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['95']:
    rule_matches[196]['correct_lines'].append(p[0].line)
else:
    rule_matches[196]['other_lines'].append(p[0].line)

@ r197 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NUM_NL80211_WOWLAN_TRIG ] ;

@ script:python depends on r197 @
p << r197.p;
@@

if 197 not in rule_matches:
    rule_matches[197] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['254']:
    rule_matches[197]['correct_lines'].append(p[0].line)
else:
    rule_matches[197]['other_lines'].append(p[0].line)

@ r198 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_power_rule * cocci_id@p ;

@ script:python depends on r198 @
p << r198.p;
@@

if 198 not in rule_matches:
    rule_matches[198] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['66']:
    rule_matches[198]['correct_lines'].append(p[0].line)
else:
    rule_matches[198]['other_lines'].append(p[0].line)

@ r199 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_PMSR_FTM_REQ_ATTR_MAX + 1 ] ;

@ script:python depends on r199 @
p << r199.p;
@@

if 199 not in rule_matches:
    rule_matches[199] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['157']:
    rule_matches[199]['correct_lines'].append(p[0].line)
else:
    rule_matches[199]['other_lines'].append(p[0].line)

@ r200 @
symbol cocci_id;
position p;
@@
 struct ieee80211_rate * cocci_id@p ;

@ script:python depends on r200 @
p << r200.p;
@@

if 200 not in rule_matches:
    rule_matches[200] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['201']:
    rule_matches[200]['correct_lines'].append(p[0].line)
else:
    rule_matches[200]['other_lines'].append(p[0].line)

@ r201 @
symbol cocci_id;
position p;
@@
 struct nl80211_txrate_vht cocci_id@p ;

@ script:python depends on r201 @
p << r201.p;
@@

if 201 not in rule_matches:
    rule_matches[201] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['114']:
    rule_matches[201]['correct_lines'].append(p[0].line)
else:
    rule_matches[201]['other_lines'].append(p[0].line)

@ r202 @
symbol cocci_id;
position p;
@@
 struct ieee80211_txq_params cocci_id@p ;

@ script:python depends on r202 @
p << r202.p;
@@

if 202 not in rule_matches:
    rule_matches[202] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['149']:
    rule_matches[202]['correct_lines'].append(p[0].line)
else:
    rule_matches[202]['other_lines'].append(p[0].line)

@ r203 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_ATTR ] ;

@ script:python depends on r203 @
p << r203.p;
@@

if 203 not in rule_matches:
    rule_matches[203] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['143']:
    rule_matches[203]['correct_lines'].append(p[0].line)
else:
    rule_matches[203]['other_lines'].append(p[0].line)

@ r204 @
symbol cocci_id;
position p;
@@
 struct station_parameters * cocci_id@p ;

@ script:python depends on r204 @
p << r204.p;
@@

if 204 not in rule_matches:
    rule_matches[204] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['93']:
    rule_matches[204]['correct_lines'].append(p[0].line)
else:
    rule_matches[204]['other_lines'].append(p[0].line)

@ r205 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_ATTR_CQM_MAX + 1 ] ;

@ script:python depends on r205 @
p << r205.p;
@@

if 205 not in rule_matches:
    rule_matches[205] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['265']:
    rule_matches[205]['correct_lines'].append(p[0].line)
else:
    rule_matches[205]['other_lines'].append(p[0].line)

@ r206 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_NAN_FUNC_ATTR_MAX + 1 ] ;

@ script:python depends on r206 @
p << r206.p;
@@

if 206 not in rule_matches:
    rule_matches[206] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['45']:
    rule_matches[206]['correct_lines'].append(p[0].line)
else:
    rule_matches[206]['other_lines'].append(p[0].line)

@ r207 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r207 @
p << r207.p;
@@

if 207 not in rule_matches:
    rule_matches[207] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['81']:
    rule_matches[207]['correct_lines'].append(p[0].line)
else:
    rule_matches[207]['other_lines'].append(p[0].line)

@ r208 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_MNTR_FLAG_MAX + 1 ] ;

@ script:python depends on r208 @
p << r208.p;
@@

if 208 not in rule_matches:
    rule_matches[208] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['134']:
    rule_matches[208]['correct_lines'].append(p[0].line)
else:
    rule_matches[208]['other_lines'].append(p[0].line)

@ r209 @
symbol cocci_id;
position p;
typedef s32;
@@
 const s32 * cocci_id@p ;

@ script:python depends on r209 @
p << r209.p;
@@

if 209 not in rule_matches:
    rule_matches[209] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['264']:
    rule_matches[209]['correct_lines'].append(p[0].line)
else:
    rule_matches[209]['other_lines'].append(p[0].line)

@ r210 @
symbol cocci_id;
position p;
@@
 struct notifier_block * cocci_id@p ;

@ script:python depends on r210 @
p << r210.p;
@@

if 210 not in rule_matches:
    rule_matches[210] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['180']:
    rule_matches[210]['correct_lines'].append(p[0].line)
else:
    rule_matches[210]['other_lines'].append(p[0].line)

@ r211 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 * cocci_id@p ;

@ script:python depends on r211 @
p << r211.p;
@@

if 211 not in rule_matches:
    rule_matches[211] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['195']:
    rule_matches[211]['correct_lines'].append(p[0].line)
else:
    rule_matches[211]['other_lines'].append(p[0].line)

@ r212 @
symbol cocci_id;
position p;
@@
 struct cfg80211_pmk_conf cocci_id@p ;

@ script:python depends on r212 @
p << r212.p;
@@

if 212 not in rule_matches:
    rule_matches[212] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['223']:
    rule_matches[212]['correct_lines'].append(p[0].line)
else:
    rule_matches[212]['other_lines'].append(p[0].line)

@ r213 @
symbol cocci_id;
position p;
@@
 struct wireless_dev * cocci_id@p ;

@ script:python depends on r213 @
p << r213.p;
@@

if 213 not in rule_matches:
    rule_matches[213] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[213]['correct_lines'].append(p[0].line)
else:
    rule_matches[213]['other_lines'].append(p[0].line)

@ r214 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_STA_FLAG_MAX + 1 ] ;

@ script:python depends on r214 @
p << r214.p;
@@

if 214 not in rule_matches:
    rule_matches[214] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['100']:
    rule_matches[214]['correct_lines'].append(p[0].line)
else:
    rule_matches[214]['other_lines'].append(p[0].line)

@ r215 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_HE_OBSS_PD_ATTR_MAX + 1 ] ;

@ script:python depends on r215 @
p << r215.p;
@@

if 215 not in rule_matches:
    rule_matches[215] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['106']:
    rule_matches[215]['correct_lines'].append(p[0].line)
else:
    rule_matches[215]['other_lines'].append(p[0].line)

@ r216 @
symbol cocci_id;
position p;
@@
 struct cfg80211_coalesce_rules * cocci_id@p ;

@ script:python depends on r216 @
p << r216.p;
@@

if 216 not in rule_matches:
    rule_matches[216] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['251']:
    rule_matches[216]['correct_lines'].append(p[0].line)
else:
    rule_matches[216]['other_lines'].append(p[0].line)

@ r217 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_txrx_stypes * cocci_id@p ;

@ script:python depends on r217 @
p << r217.p;
@@

if 217 not in rule_matches:
    rule_matches[217] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['182']:
    rule_matches[217]['correct_lines'].append(p[0].line)
else:
    rule_matches[217]['other_lines'].append(p[0].line)

@ r218 @
symbol cocci_id;
position p;
@@
 const struct wiphy_iftype_ext_capab * cocci_id@p ;

@ script:python depends on r218 @
p << r218.p;
@@

if 218 not in rule_matches:
    rule_matches[218] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['163']:
    rule_matches[218]['correct_lines'].append(p[0].line)
else:
    rule_matches[218]['other_lines'].append(p[0].line)

@ r219 @
symbol cocci_id;
position p;
@@
 const struct wiphy_vendor_command * cocci_id@p ;

@ script:python depends on r219 @
p << r219.p;
@@

if 219 not in rule_matches:
    rule_matches[219] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['229']:
    rule_matches[219]['correct_lines'].append(p[0].line)
else:
    rule_matches[219]['other_lines'].append(p[0].line)

@ r220 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ ] ;

@ script:python depends on r220 @
p << r220.p;
@@

if 220 not in rule_matches:
    rule_matches[220] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['110']:
    rule_matches[220]['correct_lines'].append(p[0].line)
else:
    rule_matches[220]['other_lines'].append(p[0].line)

@ r221 @
symbol cocci_id;
position p;
@@
 struct sta_opmode_info * cocci_id@p ;

@ script:python depends on r221 @
p << r221.p;
@@

if 221 not in rule_matches:
    rule_matches[221] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['187']:
    rule_matches[221]['correct_lines'].append(p[0].line)
else:
    rule_matches[221]['other_lines'].append(p[0].line)

@ r222 @
symbol cocci_id;
position p;
@@
 struct station_info cocci_id@p ;

@ script:python depends on r222 @
p << r222.p;
@@

if 222 not in rule_matches:
    rule_matches[222] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['270']:
    rule_matches[222]['correct_lines'].append(p[0].line)
else:
    rule_matches[222]['other_lines'].append(p[0].line)

@ r223 @
symbol cocci_id;
position p;
@@
 struct netlink_ext_ack * cocci_id@p ;

@ script:python depends on r223 @
p << r223.p;
@@

if 223 not in rule_matches:
    rule_matches[223] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['156']:
    rule_matches[223]['correct_lines'].append(p[0].line)
else:
    rule_matches[223]['other_lines'].append(p[0].line)

@ r224 @
symbol cocci_id;
position p;
@@
 struct bss_parameters cocci_id@p ;

@ script:python depends on r224 @
p << r224.p;
@@

if 224 not in rule_matches:
    rule_matches[224] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['83']:
    rule_matches[224]['correct_lines'].append(p[0].line)
else:
    rule_matches[224]['other_lines'].append(p[0].line)

@ r225 @
symbol cocci_id;
position p;
@@
 struct nl80211_bss_select_rssi_adjust * cocci_id@p ;

@ script:python depends on r225 @
p << r225.p;
@@

if 225 not in rule_matches:
    rule_matches[225] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['39']:
    rule_matches[225]['correct_lines'].append(p[0].line)
else:
    rule_matches[225]['other_lines'].append(p[0].line)

@ r226 @
symbol cocci_id;
position p;
@@
 enum nl80211_ext_feature_index cocci_id@p ;

@ script:python depends on r226 @
p << r226.p;
@@

if 226 not in rule_matches:
    rule_matches[226] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['51']:
    rule_matches[226]['correct_lines'].append(p[0].line)
else:
    rule_matches[226]['other_lines'].append(p[0].line)

@ r227 @
symbol cocci_id;
position p;
@@
 struct cfg80211_coalesce cocci_id@p ;

@ script:python depends on r227 @
p << r227.p;
@@

if 227 not in rule_matches:
    rule_matches[227] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['244']:
    rule_matches[227]['correct_lines'].append(p[0].line)
else:
    rule_matches[227]['other_lines'].append(p[0].line)

@ r228 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r228 @
p << r228.p;
@@

if 228 not in rule_matches:
    rule_matches[228] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['194']:
    rule_matches[228]['correct_lines'].append(p[0].line)
else:
    rule_matches[228]['other_lines'].append(p[0].line)

@ r229 @
symbol cocci_id;
position p;
@@
 struct cfg80211_update_owe_info * cocci_id@p ;

@ script:python depends on r229 @
p << r229.p;
@@

if 229 not in rule_matches:
    rule_matches[229] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['174']:
    rule_matches[229]['correct_lines'].append(p[0].line)
else:
    rule_matches[229]['other_lines'].append(p[0].line)

@ r230 @
symbol cocci_id;
position p;
@@
 const struct wiphy_wowlan_tcp_support * cocci_id@p ;

@ script:python depends on r230 @
p << r230.p;
@@

if 230 not in rule_matches:
    rule_matches[230] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['213']:
    rule_matches[230]['correct_lines'].append(p[0].line)
else:
    rule_matches[230]['other_lines'].append(p[0].line)

@ r231 @
symbol cocci_id;
position p;
@@
 struct cfg80211_txq_stats cocci_id@p ;

@ script:python depends on r231 @
p << r231.p;
@@

if 231 not in rule_matches:
    rule_matches[231] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['142']:
    rule_matches[231]['correct_lines'].append(p[0].line)
else:
    rule_matches[231]['other_lines'].append(p[0].line)

@ r232 @
symbol cocci_id;
position p;
@@
 struct nl80211_txrate_vht * cocci_id@p ;

@ script:python depends on r232 @
p << r232.p;
@@

if 232 not in rule_matches:
    rule_matches[232] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['116']:
    rule_matches[232]['correct_lines'].append(p[0].line)
else:
    rule_matches[232]['other_lines'].append(p[0].line)

@ r233 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_PMSR_PEER_ATTR_MAX + 1 ] ;

@ script:python depends on r233 @
p << r233.p;
@@

if 233 not in rule_matches:
    rule_matches[233] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['147']:
    rule_matches[233]['correct_lines'].append(p[0].line)
else:
    rule_matches[233]['other_lines'].append(p[0].line)

@ r234 @
symbol cocci_id;
position p;
@@
 enum nl80211_crit_proto_id cocci_id@p ;

@ script:python depends on r234 @
p << r234.p;
@@

if 234 not in rule_matches:
    rule_matches[234] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['232']:
    rule_matches[234]['correct_lines'].append(p[0].line)
else:
    rule_matches[234]['other_lines'].append(p[0].line)

@ r235 @
symbol cocci_id;
position p;
@@
 struct get_key_cookie cocci_id@p ;

@ script:python depends on r235 @
p << r235.p;
@@

if 235 not in rule_matches:
    rule_matches[235] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['124']:
    rule_matches[235]['correct_lines'].append(p[0].line)
else:
    rule_matches[235]['other_lines'].append(p[0].line)

@ r236 @
symbol cocci_id;
position p;
@@
 int cocci_id@p [ NUM_NL80211_BANDS ] ;

@ script:python depends on r236 @
p << r236.p;
@@

if 236 not in rule_matches:
    rule_matches[236] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['24']:
    rule_matches[236]['correct_lines'].append(p[0].line)
else:
    rule_matches[236]['other_lines'].append(p[0].line)

@ r237 @
symbol cocci_id;
position p;
@@
 struct cfg80211_tid_stats * cocci_id@p ;

@ script:python depends on r237 @
p << r237.p;
@@

if 237 not in rule_matches:
    rule_matches[237] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['94']:
    rule_matches[237]['correct_lines'].append(p[0].line)
else:
    rule_matches[237]['other_lines'].append(p[0].line)

@ r238 @
symbol cocci_id;
position p;
@@
 struct cfg80211_bss_selection * cocci_id@p ;

@ script:python depends on r238 @
p << r238.p;
@@

if 238 not in rule_matches:
    rule_matches[238] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['54']:
    rule_matches[238]['correct_lines'].append(p[0].line)
else:
    rule_matches[238]['other_lines'].append(p[0].line)

@ r239 @
symbol cocci_id;
position p;
@@
 struct cfg80211_match_set * cocci_id@p ;

@ script:python depends on r239 @
p << r239.p;
@@

if 239 not in rule_matches:
    rule_matches[239] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['42']:
    rule_matches[239]['correct_lines'].append(p[0].line)
else:
    rule_matches[239]['other_lines'].append(p[0].line)

@ r240 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_BSS_SELECT_ATTR_MAX + 1 ] ;

@ script:python depends on r240 @
p << r240.p;
@@

if 240 not in rule_matches:
    rule_matches[240] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['48']:
    rule_matches[240]['correct_lines'].append(p[0].line)
else:
    rule_matches[240]['other_lines'].append(p[0].line)

@ r241 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ MAX_NL80211_PKTPAT + 1 ] ;

@ script:python depends on r241 @
p << r241.p;
@@

if 241 not in rule_matches:
    rule_matches[241] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['41']:
    rule_matches[241]['correct_lines'].append(p[0].line)
else:
    rule_matches[241]['other_lines'].append(p[0].line)

@ r242 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p [ NL80211_KEY_MAX + 1 ] ;

@ script:python depends on r242 @
p << r242.p;
@@

if 242 not in rule_matches:
    rule_matches[242] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['276']:
    rule_matches[242]['correct_lines'].append(p[0].line)
else:
    rule_matches[242]['other_lines'].append(p[0].line)

@ r243 @
symbol cocci_id;
position p;
@@
 struct ieee80211_txq_params * cocci_id@p ;

@ script:python depends on r243 @
p << r243.p;
@@

if 243 not in rule_matches:
    rule_matches[243] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['158']:
    rule_matches[243]['correct_lines'].append(p[0].line)
else:
    rule_matches[243]['other_lines'].append(p[0].line)

@ r244 @
symbol cocci_id;
position p;
@@
 struct ieee80211_regdomain * cocci_id@p ;

@ script:python depends on r244 @
p << r244.p;
@@

if 244 not in rule_matches:
    rule_matches[244] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['57']:
    rule_matches[244]['correct_lines'].append(p[0].line)
else:
    rule_matches[244]['other_lines'].append(p[0].line)

@ r245 @
symbol cocci_id;
position p;
@@
 struct wireless_dev * * cocci_id@p ;

@ script:python depends on r245 @
p << r245.p;
@@

if 245 not in rule_matches:
    rule_matches[245] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['230']:
    rule_matches[245]['correct_lines'].append(p[0].line)
else:
    rule_matches[245]['other_lines'].append(p[0].line)

@ r246 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_iface_combination * cocci_id@p ;

@ script:python depends on r246 @
p << r246.p;
@@

if 246 not in rule_matches:
    rule_matches[246] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['222']:
    rule_matches[246]['correct_lines'].append(p[0].line)
else:
    rule_matches[246]['other_lines'].append(p[0].line)

@ r247 @
symbol cocci_id;
position p;
@@
 enum nl80211_ps_state cocci_id@p ;

@ script:python depends on r247 @
p << r247.p;
@@

if 247 not in rule_matches:
    rule_matches[247] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['272']:
    rule_matches[247]['correct_lines'].append(p[0].line)
else:
    rule_matches[247]['other_lines'].append(p[0].line)

@ r248 @
symbol cocci_id;
position p;
@@
 struct key_params * cocci_id@p ;

@ script:python depends on r248 @
p << r248.p;
@@

if 248 not in rule_matches:
    rule_matches[248] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['126']:
    rule_matches[248]['correct_lines'].append(p[0].line)
else:
    rule_matches[248]['other_lines'].append(p[0].line)

@ r249 @
symbol cocci_id;
position p;
@@
 const struct ieee80211_mgmt * cocci_id@p ;

@ script:python depends on r249 @
p << r249.p;
@@

if 249 not in rule_matches:
    rule_matches[249] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['209']:
    rule_matches[249]['correct_lines'].append(p[0].line)
else:
    rule_matches[249]['other_lines'].append(p[0].line)

@ r250 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p [ IEEE80211_HT_MCS_MASK_LEN ] ;

@ script:python depends on r250 @
p << r250.p;
@@

if 250 not in rule_matches:
    rule_matches[250] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['119']:
    rule_matches[250]['correct_lines'].append(p[0].line)
else:
    rule_matches[250]['other_lines'].append(p[0].line)

@ r251 @
symbol cocci_id;
position p;
@@
 struct cfg80211_cqm_config cocci_id@p ;

@ script:python depends on r251 @
p << r251.p;
@@

if 251 not in rule_matches:
    rule_matches[251] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['266']:
    rule_matches[251]['correct_lines'].append(p[0].line)
else:
    rule_matches[251]['other_lines'].append(p[0].line)

@ r252 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NL80211_MESHCONF_ATTR_MAX + 1 ] ;

@ script:python depends on r252 @
p << r252.p;
@@

if 252 not in rule_matches:
    rule_matches[252] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['77']:
    rule_matches[252]['correct_lines'].append(p[0].line)
else:
    rule_matches[252]['other_lines'].append(p[0].line)

@ r253 @
symbol cocci_id;
position p;
@@
 const struct nla_policy cocci_id@p [ NUM_NL80211_WOWLAN_TRIG ] ;

@ script:python depends on r253 @
p << r253.p;
@@

if 253 not in rule_matches:
    rule_matches[253] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['79']:
    rule_matches[253]['correct_lines'].append(p[0].line)
else:
    rule_matches[253]['other_lines'].append(p[0].line)

@ r254 @
symbol cocci_id;
position p;
@@
 struct vif_params cocci_id@p ;

@ script:python depends on r254 @
p << r254.p;
@@

if 254 not in rule_matches:
    rule_matches[254] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['132']:
    rule_matches[254]['correct_lines'].append(p[0].line)
else:
    rule_matches[254]['other_lines'].append(p[0].line)

@ r255 @
symbol cocci_id;
position p;
@@
 struct cfg80211_update_owe_info cocci_id@p ;

@ script:python depends on r255 @
p << r255.p;
@@

if 255 not in rule_matches:
    rule_matches[255] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['218']:
    rule_matches[255]['correct_lines'].append(p[0].line)
else:
    rule_matches[255]['other_lines'].append(p[0].line)

@ r256 @
symbol cocci_id;
position p;
@@
 struct nlattr * cocci_id@p ;

@ script:python depends on r256 @
p << r256.p;
@@

if 256 not in rule_matches:
    rule_matches[256] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[256]['correct_lines'].append(p[0].line)
else:
    rule_matches[256]['other_lines'].append(p[0].line)

@ r257 @
symbol cocci_id;
position p;
@@
 enum cfg80211_station_type cocci_id@p ;

@ script:python depends on r257 @
p << r257.p;
@@

if 257 not in rule_matches:
    rule_matches[257] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['92']:
    rule_matches[257]['correct_lines'].append(p[0].line)
else:
    rule_matches[257]['other_lines'].append(p[0].line)

@ r258 @
symbol cocci_id;
position p;
@@
 struct cfg80211_ap_settings cocci_id@p ;

@ script:python depends on r258 @
p << r258.p;
@@

if 258 not in rule_matches:
    rule_matches[258] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['103']:
    rule_matches[258]['correct_lines'].append(p[0].line)
else:
    rule_matches[258]['other_lines'].append(p[0].line)

@ r259 @
symbol cocci_id;
position p;
@@
 const struct nl80211_vendor_cmd_info * cocci_id@p ;

@ script:python depends on r259 @
p << r259.p;
@@

if 259 not in rule_matches:
    rule_matches[259] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[259]['correct_lines'].append(p[0].line)
else:
    rule_matches[259]['other_lines'].append(p[0].line)

@ r260 @
symbol cocci_id;
position p;
@@
 enum nl80211_user_reg_hint_type cocci_id@p ;

@ script:python depends on r260 @
p << r260.p;
@@

if 260 not in rule_matches:
    rule_matches[260] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['80']:
    rule_matches[260]['correct_lines'].append(p[0].line)
else:
    rule_matches[260]['other_lines'].append(p[0].line)

@ r261 @
symbol cocci_id;
position p;
@@
 struct genl_info * cocci_id@p ;

@ script:python depends on r261 @
p << r261.p;
@@

if 261 not in rule_matches:
    rule_matches[261] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['154']:
    rule_matches[261]['correct_lines'].append(p[0].line)
else:
    rule_matches[261]['other_lines'].append(p[0].line)

@ r262 @
symbol cocci_id;
position p;
@@
 struct netlink_callback * cocci_id@p ;

@ script:python depends on r262 @
p << r262.p;
@@

if 262 not in rule_matches:
    rule_matches[262] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['141']:
    rule_matches[262]['correct_lines'].append(p[0].line)
else:
    rule_matches[262]['other_lines'].append(p[0].line)

@ r263 @
symbol cocci_id;
position p;
@@
 struct cfg80211_ft_event_params * cocci_id@p ;

@ script:python depends on r263 @
p << r263.p;
@@

if 263 not in rule_matches:
    rule_matches[263] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['176']:
    rule_matches[263]['correct_lines'].append(p[0].line)
else:
    rule_matches[263]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263]
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
