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
if p[0].line in ['246']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 void ( * cocci_id@p ) ( void * src_arg ) ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['248']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
typedef resource_size_t;
@@
 resource_size_t cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['237']:
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
if p[0].line in ['234']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct fman * cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['265']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['258']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum fman_exceptions cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['255']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct fman_bmi_regs {  u32 fmbm_init ;  u32 fmbm_cfg1 ;  u32 fmbm_cfg2 ;  u32 res000c [ 5 ] ;  u32 fmbm_ievr ;  u32 fmbm_ier ;  u32 fmbm_ifr ;  u32 res002c [ 5 ] ;  u32 fmbm_arb [ 8 ] ;  u32 res0060 [ 12 ] ;  u32 fmbm_dtc [ 3 ] ;  u32 res009c ;  u32 fmbm_dcv [ 3 ] [ 4 ] ;  u32 fmbm_dcm [ 3 ] [ 4 ] ;  u32 fmbm_gde ;  u32 fmbm_pp [ 63 ] ;  u32 res0200 ;  u32 fmbm_pfs [ 63 ] ;  u32 res0300 ;  u32 fmbm_spliodn [ 63 ] ; } cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['153', '174']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 enum fman_event_modules cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['250']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['240']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct fman_state_struct * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['266']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct fman_port_init_params * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['247']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct fman_iram_regs {  u32 iadd ;  u32 idata ;  u32 itcfg ;  u32 iready ; } cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['225', '230']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

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
typedef irqreturn_t;
@@
 irqreturn_t cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['264']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['263']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
typedef u8,u32,u16;
@@
 struct fman_cfg {  u8 disp_limit_tsh ;  u8 prs_disp_tsh ;  u8 plcr_disp_tsh ;  u8 kg_disp_tsh ;  u8 bmi_disp_tsh ;  u8 qmi_enq_disp_tsh ;  u8 qmi_deq_disp_tsh ;  u8 fm_ctl1_disp_tsh ;  u8 fm_ctl2_disp_tsh ;  int dma_cache_override ;  enum fman_dma_aid_mode dma_aid_mode ;  u32 dma_axi_dbg_num_of_beats ;  u32 dma_cam_num_of_entries ;  u32 dma_watchdog ;  u8 dma_comm_qtsh_asrt_emer ;  u32 dma_write_buf_tsh_asrt_emer ;  u32 dma_read_buf_tsh_asrt_emer ;  u8 dma_comm_qtsh_clr_emer ;  u32 dma_write_buf_tsh_clr_emer ;  u32 dma_read_buf_tsh_clr_emer ;  u32 dma_sos_emergency ;  int dma_dbg_cnt_mode ;  int catastrophic_err ;  int dma_err ;  u32 exceptions ;  u16 clk_freq ;  u32 cam_base_addr ;  u32 fifo_base_addr ;  u32 total_fifo_size ;  u32 total_num_of_tasks ;  u32 qmi_def_tnums_thresh ; } cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13', '45']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['260']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
typedef phys_addr_t;
@@
 phys_addr_t cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['238']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['242']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct fman_fpm_regs {  u32 fmfp_tnc ;  u32 fmfp_prc ;  u32 fmfp_brkc ;  u32 fmfp_mxd ;  u32 fmfp_dist1 ;  u32 fmfp_dist2 ;  u32 fm_epi ;  u32 fm_rie ;  u32 fmfp_fcev [ 4 ] ;  u32 res0030 [ 4 ] ;  u32 fmfp_cee [ 4 ] ;  u32 res0050 [ 4 ] ;  u32 fmfp_tsc1 ;  u32 fmfp_tsc2 ;  u32 fmfp_tsp ;  u32 fmfp_tsf ;  u32 fm_rcr ;  u32 fmfp_extc ;  u32 fmfp_ext1 ;  u32 fmfp_ext2 ;  u32 fmfp_drd [ 16 ] ;  u32 fmfp_dra ;  u32 fm_ip_rev_1 ;  u32 fm_ip_rev_2 ;  u32 fm_rstc ;  u32 fm_cld ;  u32 fm_npi ;  u32 fmfp_exte ;  u32 fmfp_ee ;  u32 fmfp_cev [ 4 ] ;  u32 res00f0 [ 4 ] ;  u32 fmfp_ps [ 50 ] ;  u32 res01c8 [ 14 ] ;  u32 fmfp_clfabc ;  u32 fmfp_clfcc ;  u32 fmfp_clfaval ;  u32 fmfp_clfbval ;  u32 fmfp_clfcval ;  u32 fmfp_clfamsk ;  u32 fmfp_clfbmsk ;  u32 fmfp_clfcmsk ;  u32 fmfp_clfamc ;  u32 fmfp_clfbmc ;  u32 fmfp_clfcmc ;  u32 fmfp_decceh ;  u32 res0230 [ 116 ] ;  u32 fmfp_ts [ 128 ] ;  u32 res0600 [ 0x400 - 384 ] ; } cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['175', '224']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct fman_cfg * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 struct device_node * cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['252']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct fman_hwp_regs {  u32 res0000 [ 0x844 / 4 ] ;  u32 fmprrpimac ;  u32 res [ ( 0x1000 - 0x848 ) / 4 ] ; } cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['78', '82']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 enum fman_dma_aid_mode { FMAN_DMA_AID_OUT_PORT_ID = 0 , FMAN_DMA_AID_OUT_TNUM , } cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['231']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['236']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
typedef u8,bool,u32,u16;
@@
 struct fman_state_struct {  u8 fm_id ;  u16 fm_clk_freq ;  struct fman_rev_info rev_info ;  bool enabled_time_stamp ;  u8 count1_micro_bit ;  u8 total_num_of_tasks ;  u8 accumulated_num_of_tasks ;  u32 accumulated_fifo_size ;  u8 accumulated_num_of_open_dmas ;  u8 accumulated_num_of_deq_tnums ;  u32 exceptions ;  u32 extra_fifo_pool_size ;  u8 extra_tasks_pool_size ;  u8 extra_open_dmas_pool_size ;  u16 port_mfl [ MAX_NUM_OF_MACS ] ;  u16 mac_mfl [ MAX_NUM_OF_MACS ] ;  u32 fm_iram_size ;  u32 dma_thresh_max_commq ;  u32 dma_thresh_max_buf ;  u32 max_num_of_open_dmas ;  u32 qmi_max_num_of_tnums ;  u32 qmi_def_tnums_thresh ;  u32 bmi_max_num_of_tasks ;  u32 bmi_max_fifo_size ;  u32 fm_port_num_of_cg ;  u32 num_of_rx_ports ;  u32 total_fifo_size ;  u32 qman_channel_base ;  u32 num_of_qman_channels ;  struct resource * res ; } cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['46', '77']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 struct fman_cfg cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 struct device * cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['241']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
@@
 enum fman_intr_type cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['249']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
typedef u32;
@@
 const u32 cocci_id@p [ ] ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['244']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['257']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['235']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
@@
 struct resource * cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['243']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
typedef u8,u32;
@@
 struct fman_qmi_regs {  u32 fmqm_gc ;  u32 res0004 ;  u32 fmqm_eie ;  u32 fmqm_eien ;  u32 fmqm_eif ;  u32 fmqm_ie ;  u32 fmqm_ien ;  u32 fmqm_if ;  u32 fmqm_gs ;  u32 fmqm_ts ;  u32 fmqm_etfc ;  u32 fmqm_dtfc ;  u32 fmqm_dc0 ;  u32 fmqm_dc1 ;  u32 fmqm_dc2 ;  u32 fmqm_dc3 ;  u32 fmqm_dfdc ;  u32 fmqm_dfcc ;  u32 fmqm_dffc ;  u32 fmqm_dcc ;  u32 res0050 [ 7 ] ;  u32 fmqm_tapc ;  u32 fmqm_dmcvc ;  u32 fmqm_difdcc ;  u32 fmqm_da1v ;  u32 res007c ;  u32 fmqm_dtc ;  u32 fmqm_efddd ;  u32 res0088 [ 2 ] ;  struct {  u32 fmqm_dtcfg1 ;  u32 fmqm_dtval1 ;  u32 fmqm_dtm1 ;  u32 fmqm_dtc1 ;  u32 fmqm_dtcfg2 ;  u32 fmqm_dtval2 ;  u32 fmqm_dtm2 ;  u32 res001c ; } dbg_traps [ 3 ] ;  u8 res00f0 [ 0x400 - 0xf0 ] ; } cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['111', '152']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 * cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['254']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
@@
 struct fman_rev_info * cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['245']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct fman_dma_regs {  u32 fmdmsr ;  u32 fmdmmr ;  u32 fmdmtr ;  u32 fmdmhy ;  u32 fmdmsetr ;  u32 fmdmtah ;  u32 fmdmtal ;  u32 fmdmtcid ;  u32 fmdmra ;  u32 fmdmrd ;  u32 fmdmwcr ;  u32 fmdmebcr ;  u32 fmdmccqdr ;  u32 fmdmccqvr1 ;  u32 fmdmccqvr2 ;  u32 fmdmcqvr3 ;  u32 fmdmcqvr4 ;  u32 fmdmcqvr5 ;  u32 fmdmsefrc ;  u32 fmdmsqfrc ;  u32 fmdmssrc ;  u32 fmdmdcr ;  u32 fmdmemsr ;  u32 res005c ;  u32 fmdmplr [ FMAN_LIODN_TBL / 2 ] ;  u32 res00e0 [ 0x400 - 56 ] ; } cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['83', '110']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 struct clk * cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['239']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41]
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
