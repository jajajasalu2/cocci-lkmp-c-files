@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct mac_addr {  u32 mac_addr_l ;  u32 mac_addr_u ; } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['186', '189']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct fixed_phy_status * cocci_id@p ;

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
typedef u32;
@@
 struct memac_regs {  u32 res0000 [ 2 ] ;  u32 command_config ;  struct mac_addr mac_addr0 ;  u32 maxfrm ;  u32 res0018 [ 1 ] ;  u32 rx_fifo_sections ;  u32 tx_fifo_sections ;  u32 res0024 [ 2 ] ;  u32 hashtable_ctrl ;  u32 res0030 [ 4 ] ;  u32 ievent ;  u32 tx_ipg_length ;  u32 res0048 ;  u32 imask ;  u32 res0050 ;  u32 pause_quanta [ 4 ] ;  u32 pause_thresh [ 4 ] ;  u32 rx_pause_status ;  u32 res0078 [ 2 ] ;  struct mac_addr mac_addr [ MEMAC_NUM_OF_PADDRS ] ;  u32 lpwake_timer ;  u32 sleep_timer ;  u32 res00c0 [ 8 ] ;  u32 statn_config ;  u32 res00e4 [ 7 ] ;  u32 reoct_l ;  u32 reoct_u ;  u32 roct_l ;  u32 roct_u ;  u32 raln_l ;  u32 raln_u ;  u32 rxpf_l ;  u32 rxpf_u ;  u32 rfrm_l ;  u32 rfrm_u ;  u32 rfcs_l ;  u32 rfcs_u ;  u32 rvlan_l ;  u32 rvlan_u ;  u32 rerr_l ;  u32 rerr_u ;  u32 ruca_l ;  u32 ruca_u ;  u32 rmca_l ;  u32 rmca_u ;  u32 rbca_l ;  u32 rbca_u ;  u32 rdrp_l ;  u32 rdrp_u ;  u32 rpkt_l ;  u32 rpkt_u ;  u32 rund_l ;  u32 rund_u ;  u32 r64_l ;  u32 r64_u ;  u32 r127_l ;  u32 r127_u ;  u32 r255_l ;  u32 r255_u ;  u32 r511_l ;  u32 r511_u ;  u32 r1023_l ;  u32 r1023_u ;  u32 r1518_l ;  u32 r1518_u ;  u32 r1519x_l ;  u32 r1519x_u ;  u32 rovr_l ;  u32 rovr_u ;  u32 rjbr_l ;  u32 rjbr_u ;  u32 rfrg_l ;  u32 rfrg_u ;  u32 rcnp_l ;  u32 rcnp_u ;  u32 rdrntp_l ;  u32 rdrntp_u ;  u32 res01d0 [ 12 ] ;  u32 teoct_l ;  u32 teoct_u ;  u32 toct_l ;  u32 toct_u ;  u32 res0210 [ 2 ] ;  u32 txpf_l ;  u32 txpf_u ;  u32 tfrm_l ;  u32 tfrm_u ;  u32 tfcs_l ;  u32 tfcs_u ;  u32 tvlan_l ;  u32 tvlan_u ;  u32 terr_l ;  u32 terr_u ;  u32 tuca_l ;  u32 tuca_u ;  u32 tmca_l ;  u32 tmca_u ;  u32 tbca_l ;  u32 tbca_u ;  u32 res0258 [ 2 ] ;  u32 tpkt_l ;  u32 tpkt_u ;  u32 tund_l ;  u32 tund_u ;  u32 t64_l ;  u32 t64_u ;  u32 t127_l ;  u32 t127_u ;  u32 t255_l ;  u32 t255_u ;  u32 t511_l ;  u32 t511_u ;  u32 t1023_l ;  u32 t1023_u ;  u32 t1518_l ;  u32 t1518_u ;  u32 t1519x_l ;  u32 t1519x_u ;  u32 res02a8 [ 6 ] ;  u32 tcnp_l ;  u32 tcnp_u ;  u32 res02c8 [ 14 ] ;  u32 if_mode ;  u32 if_status ;  u32 res0308 [ 14 ] ;  u32 hg_config ;  u32 res0344 [ 3 ] ;  u32 hg_pause_quanta ;  u32 res0354 [ 3 ] ;  u32 hg_pause_thresh ;  u32 res0364 [ 3 ] ;  u32 hgrx_pause_status ;  u32 hg_fifos_status ;  u32 rhm ;  u32 thm ; } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['49', '185']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct eth_hash_entry * cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct fman_mac_params * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['191']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 enum comm_mode cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct list_head * cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

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
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
typedef enet_addr_t;
@@
 enet_addr_t * cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 struct fman_mac * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 enum fman_mac_exceptions cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
typedef bool,u32,u16;
@@
 struct memac_cfg {  bool reset_on_init ;  bool pause_ignore ;  bool promiscuous_mode_enable ;  struct fixed_phy_status * fixed_link ;  u16 max_frame_length ;  u16 pause_quanta ;  u32 tx_ipg_length ; } cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40', '48']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
typedef enet_addr_t;
@@
 enet_addr_t cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['192']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
typedef phy_interface_t;
@@
 phy_interface_t cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
typedef u64,u8,bool,u32,u16,phy_interface_t,eth_hash_t;
@@
 struct fman_mac {  struct memac_regs __iomem * regs ;  u64 addr ;  phy_interface_t phy_if ;  u16 max_speed ;  void * dev_id ;  fman_mac_exception_cb * exception_cb ;  fman_mac_exception_cb * event_cb ;  struct eth_hash_t * multicast_addr_hash ;  struct eth_hash_t * unicast_addr_hash ;  u8 mac_id ;  u32 exceptions ;  struct memac_cfg * memac_drv_param ;  void * fm ;  struct fman_rev_info fm_rev_info ;  bool basex_if ;  struct phy_device * pcsphy ;  bool allmulti_enabled ; } cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21', '39']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 * cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct memac_cfg * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24]
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
