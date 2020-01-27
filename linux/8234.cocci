@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['479']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct sk_buff * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['492']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 const struct ethtool_ops cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['540']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct gbe_priv * * cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['433']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_host_port_regs {  u32 blk_cnt ;  u32 port_vlan ;  u32 tx_pri_map ;  u32 src_id ;  u32 rx_pri_map ;  u32 rx_maxlen ; } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['482', '489']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct hwtstamp_config cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['490']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_host_hw_stats {  u32 rx_good_frames ;  u32 rx_broadcast_frames ;  u32 rx_multicast_frames ;  u32 __rsvd_0 [ 3 ] ;  u32 rx_oversized_frames ;  u32 __rsvd_1 ;  u32 rx_undersized_frames ;  u32 __rsvd_2 ;  u32 overrun_type4 ;  u32 overrun_type5 ;  u32 rx_bytes ;  u32 tx_good_frames ;  u32 tx_broadcast_frames ;  u32 tx_multicast_frames ;  u32 __rsvd_3 [ 9 ] ;  u32 tx_bytes ;  u32 tx_64byte_frames ;  u32 tx_65_to_127byte_frames ;  u32 tx_128_to_255byte_frames ;  u32 tx_256_to_511byte_frames ;  u32 tx_512_to_1023byte_frames ;  u32 tx_1024byte_frames ;  u32 net_bytes ;  u32 rx_sof_overruns ;  u32 rx_mof_overruns ;  u32 rx_dma_overruns ; } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['434', '461']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['390']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct resource cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['391']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_hw_stats {  u32 rx_good_frames ;  u32 rx_broadcast_frames ;  u32 rx_multicast_frames ;  u32 rx_pause_frames ;  u32 rx_crc_errors ;  u32 rx_align_code_errors ;  u32 rx_oversized_frames ;  u32 rx_jabber_frames ;  u32 rx_undersized_frames ;  u32 rx_fragments ;  u32 __pad_0 [ 2 ] ;  u32 rx_bytes ;  u32 tx_good_frames ;  u32 tx_broadcast_frames ;  u32 tx_multicast_frames ;  u32 tx_pause_frames ;  u32 tx_deferred_frames ;  u32 tx_collision_frames ;  u32 tx_single_coll_frames ;  u32 tx_mult_coll_frames ;  u32 tx_excessive_collisions ;  u32 tx_late_collisions ;  u32 tx_underrun ;  u32 tx_carrier_sense_errors ;  u32 tx_bytes ;  u32 tx_64byte_frames ;  u32 tx_65_to_127byte_frames ;  u32 tx_128_to_255byte_frames ;  u32 tx_256_to_511byte_frames ;  u32 tx_512_to_1023byte_frames ;  u32 tx_1024byte_frames ;  u32 net_bytes ;  u32 rx_sof_overruns ;  u32 rx_mof_overruns ;  u32 rx_dma_overruns ; } cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87', '123']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct cpsw_ale * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['480']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_emac_regs {  u32 id_ver ;  u32 mac_control ;  u32 mac_status ;  u32 soft_reset ;  u32 rx_maxlen ;  u32 __reserved_0 ;  u32 rx_pause ;  u32 tx_pause ;  u32 __reserved_1 ;  u32 rx_pri_map ;  u32 rsvd [ 6 ] ; } cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['129', '141']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct net_device * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['537']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_host_port_regs {  u32 __rsvd_0 ;  u32 control ;  u32 flow_id_offset ;  u32 __rsvd_1 ;  u32 blk_cnt ;  u32 port_vlan ;  u32 tx_pri_map ;  u32 pri_ctl ;  u32 rx_pri_map ;  u32 rx_maxlen ;  u32 tx_blks_pri ;  u32 __rsvd_2 ;  u32 idle2lpi ;  u32 lpi2wake ;  u32 eee_status ;  u32 __rsvd_3 ;  u32 __rsvd_4 [ 184 ] ;  u32 host_blks_pri ; } cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['307', '326']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_emac_regs {  u32 mac_control ;  u32 mac_status ;  u32 soft_reset ;  u32 boff_test ;  u32 rx_pause ;  u32 __rsvd_0 [ 11 ] ;  u32 tx_pause ;  u32 __rsvd_1 [ 11 ] ;  u32 em_control ;  u32 tx_gap ; } cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['295', '306']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef u64,u8,bool,u32,spinlock_t;
@@
 struct gbe_priv {  struct device * dev ;  struct netcp_device * netcp_device ;  struct timer_list timer ;  u32 num_slaves ;  u32 ale_entries ;  u32 ale_ports ;  bool enable_ale ;  u8 max_num_slaves ;  u8 max_num_ports ;  u8 num_stats_mods ;  struct netcp_tx_pipe tx_pipe ;  int host_port ;  u32 rx_packet_max ;  u32 ss_version ;  u32 stats_en_mask ;  void __iomem * ss_regs ;  void __iomem * switch_regs ;  void __iomem * host_port_regs ;  void __iomem * ale_reg ;  void __iomem * cpts_reg ;  void __iomem * sgmii_port_regs ;  void __iomem * sgmii_port34_regs ;  void __iomem * xgbe_serdes_regs ;  void __iomem * hw_stats_regs [ GBE_MAX_HW_STAT_MODS ] ;  struct gbe_ss_regs_ofs ss_regs_ofs ;  struct gbe_switch_regs_ofs switch_regs_ofs ;  struct gbe_host_port_regs_ofs host_port_regs_ofs ;  struct cpsw_ale * ale ;  unsigned int tx_queue_id ;  const char * dma_chan_name ;  struct list_head gbe_intf_head ;  struct list_head secondary_slaves ;  struct net_device * dummy_ndev ;  u64 * hw_stats ;  u32 * hw_stats_prev ;  const struct netcp_ethtool_stat * et_stats ;  int num_et_stats ;  spinlock_t hw_stats_lock ;  int cpts_registered ;  struct cpts * cpts ;  int rx_ts_enabled ;  int tx_ts_enabled ; } cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19', '62']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool * cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['538']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct gbe_switch_regs_ofs {  u16 id_ver ;  u16 control ;  u16 soft_reset ;  u16 emcontrol ;  u16 stat_port_en ;  u16 ptype ;  u16 flow_control ; } cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['179', '187']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct ethtool_link_ksettings * cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['544']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 const struct ethtool_link_ksettings * cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['543']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 struct cpsw_ale_params cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['387']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 const struct netcp_ethtool_stat cocci_id@p [ ] ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_port_regs {  u32 __rsvd_0 ;  u32 control ;  u32 max_blks ;  u32 mem_align1 ;  u32 blk_cnt ;  u32 port_vlan ;  u32 tx_pri_map ;  u32 pri_ctl ;  u32 rx_pri_map ;  u32 rx_maxlen ;  u32 tx_blks_pri ;  u32 __rsvd_1 ;  u32 idle2lpi ;  u32 lpi2idle ;  u32 eee_status ;  u32 __rsvd_2 ;  u32 __rsvd_3 [ 176 ] ;  u32 __rsvd_4 [ 2 ] ;  u32 sa_lo ;  u32 sa_hi ;  u32 ts_ctl ;  u32 ts_seq_ltype ;  u32 ts_vlan ;  u32 ts_ctl_ltype2 ;  u32 ts_ctl2 ; } cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['327', '353']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
typedef uint8_t;
@@
 uint8_t * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['549']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 struct gbe_slave * cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['430']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_switch_regs {  u32 id_ver ;  u32 control ;  u32 soft_reset ;  u32 stat_port_en ;  u32 ptype ;  u32 soft_idle ;  u32 thru_rate ;  u32 gap_thresh ;  u32 tx_start_wds ;  u32 flow_control ; } cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['188', '199']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_port_regs {  u32 max_blks ;  u32 blk_cnt ;  u32 port_vlan ;  u32 tx_pri_map ;  u32 sa_lo ;  u32 sa_hi ;  u32 ts_ctl ;  u32 ts_seq_ltype ;  u32 ts_vlan ;  u32 ts_ctl_ltype2 ;  u32 ts_ctl2 ; } cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['166', '178']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_ss_regs {  u32 id_ver ;  u32 synce_count ;  u32 synce_mux ;  u32 control ; } cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['527', '532']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['510']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 struct netcp_intf * cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['536']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 struct netcp_module cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
typedef u8;
@@
 struct ts_ctl {  int uni ;  u8 dst_port_map ;  u8 maddr_map ;  u8 ts_mcast_type ; } cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['81', '86']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct gbe_host_port_regs_ofs {  u16 port_vlan ;  u16 tx_pri_map ;  u16 rx_maxlen ; } cocci_id@p ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['142', '146']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 struct gbe_priv * cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['431']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['539']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['525']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 const struct netcp_packet * cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['506']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['507']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 uint32_t cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['548']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['542']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
typedef u8,bool,u32,phy_port_t,atomic_t;
@@
 struct gbe_slave {  void __iomem * port_regs ;  void __iomem * emac_regs ;  struct gbe_port_regs_ofs port_regs_ofs ;  struct gbe_emac_regs_ofs emac_regs_ofs ;  int slave_num ;  int port_num ;  atomic_t link_state ;  bool open ;  struct phy_device * phy ;  u32 link_interface ;  u32 mac_control ;  u8 phy_port_t ;  struct device_node * node ;  struct device_node * phy_node ;  struct ts_ctl ts_ctl ;  struct list_head slave_list ; } cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63', '80']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 struct device_node * cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['356']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_hw_stats {  u32 rx_good_frames ;  u32 rx_broadcast_frames ;  u32 rx_multicast_frames ;  u32 rx_pause_frames ;  u32 rx_crc_errors ;  u32 rx_align_code_errors ;  u32 rx_oversized_frames ;  u32 rx_jabber_frames ;  u32 rx_undersized_frames ;  u32 rx_fragments ;  u32 overrun_type4 ;  u32 overrun_type5 ;  u32 rx_bytes ;  u32 tx_good_frames ;  u32 tx_broadcast_frames ;  u32 tx_multicast_frames ;  u32 tx_pause_frames ;  u32 tx_deferred_frames ;  u32 tx_collision_frames ;  u32 tx_single_coll_frames ;  u32 tx_mult_coll_frames ;  u32 tx_excessive_collisions ;  u32 tx_late_collisions ;  u32 tx_underrun ;  u32 tx_carrier_sense_errors ;  u32 tx_bytes ;  u32 tx_64byte_frames ;  u32 tx_65_to_127byte_frames ;  u32 tx_128_to_255byte_frames ;  u32 tx_256_to_511byte_frames ;  u32 tx_512_to_1023byte_frames ;  u32 tx_1024byte_frames ;  u32 net_bytes ;  u32 rx_sof_overruns ;  u32 rx_mof_overruns ;  u32 rx_dma_overruns ; } cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['392', '429']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 struct phy_device * cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['464']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct netcp_ethtool_stat {  char desc [ ETH_GSTRING_LEN ] ;  int type ;  u32 size ;  int offset ; } cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3', '8']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 struct ethtool_ts_info * cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['541']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_port_regs {  u32 blk_cnt ;  u32 port_vlan ;  u32 tx_pri_map ;  u32 sa_lo ;  u32 sa_hi ;  u32 ts_ctl ;  u32 ts_seq_ltype ;  u32 ts_vlan ;  u32 ts_ctl_ltype2 ;  u32 ts_ctl2 ;  u32 control ; } cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['493', '505']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_hw_stats {  u32 rx_good_frames ;  u32 rx_broadcast_frames ;  u32 rx_multicast_frames ;  u32 rx_pause_frames ;  u32 rx_crc_errors ;  u32 rx_align_code_errors ;  u32 rx_oversized_frames ;  u32 rx_jabber_frames ;  u32 rx_undersized_frames ;  u32 rx_fragments ;  u32 ale_drop ;  u32 ale_overrun_drop ;  u32 rx_bytes ;  u32 tx_good_frames ;  u32 tx_broadcast_frames ;  u32 tx_multicast_frames ;  u32 tx_pause_frames ;  u32 tx_deferred_frames ;  u32 tx_collision_frames ;  u32 tx_single_coll_frames ;  u32 tx_mult_coll_frames ;  u32 tx_excessive_collisions ;  u32 tx_late_collisions ;  u32 rx_ipg_error ;  u32 tx_carrier_sense_errors ;  u32 tx_bytes ;  u32 tx_64B_frames ;  u32 tx_65_to_127B_frames ;  u32 tx_128_to_255B_frames ;  u32 tx_256_to_511B_frames ;  u32 tx_512_to_1023B_frames ;  u32 tx_1024B_frames ;  u32 net_bytes ;  u32 rx_bottom_fifo_drop ;  u32 rx_port_mask_drop ;  u32 rx_top_fifo_drop ;  u32 ale_rate_limit_drop ;  u32 ale_vid_ingress_drop ;  u32 ale_da_eq_sa_drop ;  u32 __rsvd_0 [ 3 ] ;  u32 ale_unknown_ucast ;  u32 ale_unknown_ucast_bytes ;  u32 ale_unknown_mcast ;  u32 ale_unknown_mcast_bytes ;  u32 ale_unknown_bcast ;  u32 ale_unknown_bcast_bytes ;  u32 ale_pol_match ;  u32 ale_pol_match_red ;  u32 ale_pol_match_yellow ;  u32 __rsvd_1 [ 44 ] ;  u32 tx_mem_protect_err ;  u32 tx_pri0 ;  u32 tx_pri1 ;  u32 tx_pri2 ;  u32 tx_pri3 ;  u32 tx_pri4 ;  u32 tx_pri5 ;  u32 tx_pri6 ;  u32 tx_pri7 ;  u32 tx_pri0_bcnt ;  u32 tx_pri1_bcnt ;  u32 tx_pri2_bcnt ;  u32 tx_pri3_bcnt ;  u32 tx_pri4_bcnt ;  u32 tx_pri5_bcnt ;  u32 tx_pri6_bcnt ;  u32 tx_pri7_bcnt ;  u32 tx_pri0_drop ;  u32 tx_pri1_drop ;  u32 tx_pri2_drop ;  u32 tx_pri3_drop ;  u32 tx_pri4_drop ;  u32 tx_pri5_drop ;  u32 tx_pri6_drop ;  u32 tx_pri7_drop ;  u32 tx_pri0_drop_bcnt ;  u32 tx_pri1_drop_bcnt ;  u32 tx_pri2_drop_bcnt ;  u32 tx_pri3_drop_bcnt ;  u32 tx_pri4_drop_bcnt ;  u32 tx_pri5_drop_bcnt ;  u32 tx_pri6_drop_bcnt ;  u32 tx_pri7_drop_bcnt ; } cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['210', '294']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
@@
 struct device * cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['389']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 struct ethtool_drvinfo * cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['550']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct gbe_ss_regs_ofs {  u16 id_ver ;  u16 control ;  u16 rgmii_status ; } cocci_id@p ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['200', '204']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_ss_regs {  u32 id_ver ;  u32 synce_count ;  u32 synce_mux ;  u32 control ;  u32 __rsvd_0 [ 2 ] ;  u32 rgmii_status ;  u32 ss_status ; } cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['377', '385']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 struct ifreq * cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['481']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 struct netcp_packet * cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['462']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 struct cpts * cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['491']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 struct netcp_device * cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['388']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct netcp_addr * cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['509']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_emac_regs {  u32 id_ver ;  u32 mac_control ;  u32 mac_status ;  u32 soft_reset ;  u32 rx_maxlen ;  u32 __reserved_0 ;  u32 rx_pause ;  u32 tx_pause ;  u32 em_control ;  u32 __reserved_1 ;  u32 tx_gap ;  u32 rsvd [ 4 ] ; } cocci_id@p ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['465', '478']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_host_port_regs {  u32 src_id ;  u32 port_vlan ;  u32 rx_pri_map ;  u32 rx_maxlen ; } cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['147', '152']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 void * * cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['357']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
@@
 void ( * cocci_id@p ) ( struct net_device * ) ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['533']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
@@
 struct gbe_intf * cocci_id@p ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['508']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['511']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
@@
 struct gbe_slave cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['551']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbe_ss_regs {  u32 id_ver ;  u32 synce_count ;  u32 synce_mux ; } cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['205', '209']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 struct gbe_intf {  struct net_device * ndev ;  struct device * dev ;  struct gbe_priv * gbe_dev ;  struct netcp_tx_pipe tx_pipe ;  struct gbe_slave * slave ;  struct list_head gbe_intf_list ;  unsigned long active_vlans [ BITS_TO_LONGS ( VLAN_N_VID ) ] ; } cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10', '18']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
@@
 struct ethtool_stats * cocci_id@p ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['545']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct gbenu_switch_regs {  u32 id_ver ;  u32 control ;  u32 __rsvd_0 [ 2 ] ;  u32 emcontrol ;  u32 stat_port_en ;  u32 ptype ;  u32 soft_idle ;  u32 thru_rate ;  u32 gap_thresh ;  u32 tx_start_wds ;  u32 eee_prescale ;  u32 tx_g_oflow_thresh_set ;  u32 tx_g_oflow_thresh_clr ;  u32 tx_g_buf_thresh_set_l ;  u32 tx_g_buf_thresh_set_h ;  u32 tx_g_buf_thresh_clr_l ;  u32 tx_g_buf_thresh_clr_h ; } cocci_id@p ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['358', '376']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
typedef phy_interface_t;
@@
 phy_interface_t cocci_id@p ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['534']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 struct timer_list * cocci_id@p ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['463']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 * cocci_id@p ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['526']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct xgbe_switch_regs {  u32 id_ver ;  u32 control ;  u32 emcontrol ;  u32 stat_port_en ;  u32 ptype ;  u32 soft_idle ;  u32 thru_rate ;  u32 gap_thresh ;  u32 tx_start_wds ;  u32 flow_control ;  u32 cppi_thresh ; } cocci_id@p ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['512', '524']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ r73 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct gbe_emac_regs_ofs {  u16 mac_control ;  u16 soft_reset ;  u16 rx_maxlen ; } cocci_id@p ;

@ script:python depends on r73 @
p << r73.p;
@@

if 73 not in rule_matches:
    rule_matches[73] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['124', '128']:
    rule_matches[73]['correct_lines'].append(p[0].line)
else:
    rule_matches[73]['other_lines'].append(p[0].line)

@ r74 @
symbol cocci_id;
position p;
@@
 struct gbe_priv cocci_id@p ;

@ script:python depends on r74 @
p << r74.p;
@@

if 74 not in rule_matches:
    rule_matches[74] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['386']:
    rule_matches[74]['correct_lines'].append(p[0].line)
else:
    rule_matches[74]['other_lines'].append(p[0].line)

@ r75 @
symbol cocci_id;
position p;
typedef uint64_t;
@@
 uint64_t * cocci_id@p ;

@ script:python depends on r75 @
p << r75.p;
@@

if 75 not in rule_matches:
    rule_matches[75] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['546']:
    rule_matches[75]['correct_lines'].append(p[0].line)
else:
    rule_matches[75]['other_lines'].append(p[0].line)

@ r76 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct gbe_port_regs_ofs {  u16 port_vlan ;  u16 tx_pri_map ;  u16 rx_pri_map ;  u16 sa_lo ;  u16 sa_hi ;  u16 ts_ctl ;  u16 ts_seq_ltype ;  u16 ts_vlan ;  u16 ts_ctl_ltype2 ;  u16 ts_ctl2 ;  u16 rx_maxlen ; } cocci_id@p ;

@ script:python depends on r76 @
p << r76.p;
@@

if 76 not in rule_matches:
    rule_matches[76] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['153', '165']:
    rule_matches[76]['correct_lines'].append(p[0].line)
else:
    rule_matches[76]['other_lines'].append(p[0].line)

@ r77 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r77 @
p << r77.p;
@@

if 77 not in rule_matches:
    rule_matches[77] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['432']:
    rule_matches[77]['correct_lines'].append(p[0].line)
else:
    rule_matches[77]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77]
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
