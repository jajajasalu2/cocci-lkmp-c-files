cocci_test_suite() {
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 98 */(struct bfa_s *bfa,
							 struct bfa_fcxp_s *fcxp,
							 struct bfi_fcxp_send_rsp_s *fcxp_rsp);
	struct bfa_fcxp_rsp_info_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 797 */;
	struct bfa_fcxp_req_info_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 796 */;
	struct bfi_fcxp_send_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 782 */;
	struct fchs_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 735 */;
	struct bfa_diag_dport_result_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6871 */;
	struct bfa_fcdiag_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6755 */;
	bfa_cb_diag_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 6753 */;
	struct bfa_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6753 */;
	enum bfa_fcport_ln_sm_event{BFA_FCPORT_LN_SM_LINKUP=1, BFA_FCPORT_LN_SM_LINKDOWN=2, BFA_FCPORT_LN_SM_NOTIFICATION=3,} cocci_id/* drivers/scsi/bfa/bfa_svc.c 67 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_svc.c 6640 */;
	struct bfa_fcxp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 660 */;
	struct bfa_diag_dport_result_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 6596 */;
	uint8_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 6557 */;
	int cocci_id/* drivers/scsi/bfa/bfa_svc.c 6556 */;
	struct bfi_diag_dport_scn_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6554 */;
	struct fchs_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 652 */;
	struct bfi_diag_dport_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6517 */;
	struct bfi_diag_dport_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6481 */;
	enum bfi_dport_req cocci_id/* drivers/scsi/bfa/bfa_svc.c 6479 */;
	struct bfa_fcxp_wqe_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 621 */;
	enum bfa_dport_sm_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 6146 */;
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 6136 */;
	struct bfa_dport_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6136 */;
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 6133 */(struct bfa_dport_s *dport,
								    enum bfi_dport_req req);
	u8 cocci_id/* drivers/scsi/bfa/bfa_svc.c 6087 */;
	struct bfa_diag_qtest_result_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 6057 */;
	struct bfa_diag_loopback_result_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 6035 */;
	struct bfa_port_attr_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 5950 */;
	struct bfa_diag_loopback_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 5949 */;
	struct bfa_diag_loopback_result_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5946 */;
	enum bfa_port_speed cocci_id/* drivers/scsi/bfa/bfa_svc.c 5945 */;
	enum bfa_port_opmode cocci_id/* drivers/scsi/bfa/bfa_svc.c 5944 */;
	bfa_fcxp_get_sglen_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 594 */;
	bfa_fcxp_get_sgaddr_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 593 */;
	bfi_diag_qtest_rsp_t *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5913 */;
	struct bfi_diag_lb_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5910 */;
	struct bfi_msg_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5903 */;
	struct bfi_diag_lb_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5874 */;
	struct bfa_diag_loopback_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5872 */;
	struct bfi_diag_qtest_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5774 */;
	struct bfa_pcidev_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5714 */;
	struct bfa_iocfc_cfg_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5713 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 5690 */(struct bfa_dport_s *dport,
							   struct bfi_diag_dport_scn_s *msg);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 5688 */(struct bfa_dport_s *dport,
							   struct bfi_diag_dport_rsp_s *msg);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 5687 */(void *cbarg);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 5667 */(struct bfa_dport_s *dport,
							   enum bfa_dport_sm_event event);
	enum bfa_dport_sm_event{BFA_DPORT_SM_ENABLE=1, BFA_DPORT_SM_DISABLE=2, BFA_DPORT_SM_FWRSP=3, BFA_DPORT_SM_QRESUME=4, BFA_DPORT_SM_HWFAIL=5, BFA_DPORT_SM_START=6, BFA_DPORT_SM_REQFAIL=7, BFA_DPORT_SM_SCN=8,} cocci_id/* drivers/scsi/bfa/bfa_svc.c 5656 */;
	enum bfa_dport_test_state_e{BFA_DPORT_ST_DISABLED=0, BFA_DPORT_ST_INP=1, BFA_DPORT_ST_COMP=2, BFA_DPORT_ST_NO_SFP=3, BFA_DPORT_ST_NOTSTART=4,} cocci_id/* drivers/scsi/bfa/bfa_svc.c 5645 */;
	struct bfi_uf_frm_rcvd_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5619 */;
	bfa_cb_uf_recv_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 5585 */;
	bfa_fcxp_get_sglen_t *cocci_id/* drivers/scsi/bfa/bfa_svc.c 558 */;
	bfa_fcxp_get_sgaddr_t *cocci_id/* drivers/scsi/bfa/bfa_svc.c 557 */;
	uint8_t *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5519 */;
	struct bfa_uf_buf_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5518 */;
	struct bfi_uf_buf_post_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 5492 */;
	struct bfi_uf_buf_post_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5485 */;
	struct bfa_uf_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 5402 */;
	struct bfa_uf_buf_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 5374 */;
	struct bfa_uf_mod_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5353 */;
	struct bfa_uf_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5352 */;
	void (*cocci_id/* drivers/scsi/bfa/bfa_svc.c 5333 */)(void *cbarg);
	struct bfa_sgpg_wqe_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5265 */;
	struct bfa_sgpg_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5245 */;
	struct bfa_sgpg_mod_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5244 */;
	struct bfa_fcs_rport_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5112 */;
	struct bfa_rport_info_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 5075 */;
	union bfi_rport_i2h_msg_u cocci_id/* drivers/scsi/bfa/bfa_svc.c 4986 */;
	struct bfa_rport_speed_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4951 */;
	struct bfa_fcxp_mod_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 493 */;
	struct bfi_rport_delete_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4926 */;
	struct bfi_rport_create_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4893 */;
	struct bfa_rport_mod_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4869 */;
	struct bfa_rport_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 4832 */;
	struct bfa_rport_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4784 */;
	enum bfa_fcport_sm_event{BFA_FCPORT_SM_START=1, BFA_FCPORT_SM_STOP=2, BFA_FCPORT_SM_ENABLE=3, BFA_FCPORT_SM_DISABLE=4, BFA_FCPORT_SM_FWRSP=5, BFA_FCPORT_SM_LINKUP=6, BFA_FCPORT_SM_LINKDOWN=7, BFA_FCPORT_SM_QRESUME=8, BFA_FCPORT_SM_HWFAIL=9, BFA_FCPORT_SM_DPORTENABLE=10, BFA_FCPORT_SM_DPORTDISABLE=11, BFA_FCPORT_SM_FAA_MISCONFIG=12, BFA_FCPORT_SM_DDPORTENABLE=13, BFA_FCPORT_SM_DDPORTDISABLE=14,} cocci_id/* drivers/scsi/bfa/bfa_svc.c 46 */;
	struct bfi_rport_qos_scn_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4445 */;
	enum bfa_rport_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 4330 */;
	struct bfa_bbcr_attr_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4252 */;
	struct bfa_fcxp_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 420 */;
	enum bfa_ioc_type_e cocci_id/* drivers/scsi/bfa/bfa_svc.c 4098 */;
	struct bfa_qos_bw_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 4095 */;
	struct bfa_port_cfg_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 3971 */;
	struct bfa_port_attr_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3958 */;
	wwn_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 3947 */;
	u16 cocci_id/* drivers/scsi/bfa/bfa_svc.c 3898 */;
	u8 *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3881 */;
	enum bfa_port_topology cocci_id/* drivers/scsi/bfa/bfa_svc.c 3789 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_svc.c 374 */[BFA_PL_INT_LOG_SZ];
	struct bfi_iocfc_cfgrsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3720 */;
	struct bfa_iocfc_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3719 */;
	enum bfa_plog_eid cocci_id/* drivers/scsi/bfa/bfa_svc.c 369 */;
	enum bfa_plog_mid cocci_id/* drivers/scsi/bfa/bfa_svc.c 368 */;
	void (*cocci_id/* drivers/scsi/bfa/bfa_svc.c 3673 */)(void *cbarg,
							      enum bfa_port_linkstate event);
	union bfi_fcport_i2h_msg_u cocci_id/* drivers/scsi/bfa/bfa_svc.c 3548 */;
	enum bfa_trunk_state cocci_id/* drivers/scsi/bfa/bfa_svc.c 3418 */;
	struct bfa_trunk_link_attr_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3417 */;
	struct bfi_fcport_trunk_link_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3416 */;
	struct bfi_fcport_trunk_scn_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3413 */;
	struct bfi_fcport_req_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 3403 */;
	struct list_head *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3349 */;
	struct bfa_cb_pending_q_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3348 */;
	struct bfa_fcport_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3347 */;
	time64_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 3276 */;
	union bfa_fcport_stats_u *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3273 */;
	struct bfa_fcoe_stats_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 3255 */;
	__be32 *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3252 */;
	u32 *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3251 */;
	struct bfa_fcoe_stats_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3248 */;
	struct bfa_qos_stats_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 3243 */;
	struct bfa_qos_stats_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3235 */;
	struct bfi_fcport_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3194 */;
	struct bfi_fcport_enable_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3151 */;
	struct bfa_plog_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 313 */;
	char *cocci_id/* drivers/scsi/bfa/bfa_svc.c 313 */;
	struct bfa_fcport_trunk_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3103 */;
	struct fc_alpabm_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 3096 */;
	struct bfa_fcport_loop_info_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3089 */;
	struct bfa_port_cfg_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3028 */;
	struct bfa_mem_dma_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 3012 */;
	struct bfa_plog_rec_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 301 */;
	struct bfa_meminfo_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2993 */;
	union bfa_fcport_stats_u cocci_id/* drivers/scsi/bfa/bfa_svc.c 2989 */;
	enum bfa_port_linkstate cocci_id/* drivers/scsi/bfa/bfa_svc.c 2975 */;
	struct bfa_fcport_ln_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2943 */;
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 2941 */;
	void *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2941 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 2940 */;
	struct bfa_plog_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 284 */;
	struct bfa_plog_rec_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 284 */;
	enum bfa_fcport_ln_sm_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 2787 */;
	enum bfa_fcport_sm_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 2707 */;
	char cocci_id/* drivers/scsi/bfa/bfa_svc.c 2545 */[BFA_STRING_32];
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 241 */(struct bfa_rport_s *rp,
							  enum bfa_rport_event event);
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 228 */(struct bfa_rport_s *rp);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 227 */(struct bfa_rport_s *rport);
	struct bfa_rport_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 226 */(struct bfa_rport_mod_s *rp_mod);
	struct bfi_fcport_event_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2201 */;
	struct bfa_sm_table_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 204 */[];
	struct bfa_aen_entry_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2006 */;
	struct bfad_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 2005 */;
	enum bfa_port_aen_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 2003 */;
	union bfi_lps_i2h_msg_u cocci_id/* drivers/scsi/bfa/bfa_svc.c 1978 */;
	uint32_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 1963 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 189 */(struct bfa_fcport_ln_s *ln,
							  enum bfa_fcport_ln_sm_event event);
	struct bfa_lps_mod_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1852 */;
	struct bfa_lps_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1849 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 184 */(struct bfa_fcport_s *fcport,
							  enum bfa_fcport_sm_event event);
	struct bfi_lps_n2n_pid_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1717 */;
	struct bfi_lps_logout_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1698 */;
	struct bfi_lps_login_req_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1671 */;
	struct bfi_lps_cvl_event_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1630 */;
	struct bfi_lps_logout_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1615 */;
	struct bfi_lps_login_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1534 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 153 */(struct bfa_s *bfa);
	struct bfa_lps_s cocci_id/* drivers/scsi/bfa/bfa_svc.c 1494 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 148 */(struct bfa_fcport_ln_s *ln,
							  enum bfa_port_linkstate event);
	struct bfa_mem_kva_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1466 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 146 */(struct bfa_fcport_s *fcport,
							  enum bfa_port_linkstate event,
							  bfa_boolean_t trunk);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 145 */(void *cbarg,
							  bfa_boolean_t complete);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 143 */(struct bfa_fcport_s *fcport);
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 141 */(struct bfa_fcport_s *fcport);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 126 */(struct bfa_lps_s *lps,
							  enum bfa_lps_event event);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 121 */(struct bfa_lps_s *lps);
	enum bfa_lps_event cocci_id/* drivers/scsi/bfa/bfa_svc.c 1169 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 114 */(void *lps_arg);
	struct bfi_fcxp_send_rsp_s *cocci_id/* drivers/scsi/bfa/bfa_svc.c 1126 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 112 */(struct bfa_s *bfa,
							  struct bfi_lps_logout_rsp_s *rsp);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 111 */(struct bfa_lps_s *first_lps,
							  u8 count);
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 109 */(struct bfa_s *bfa,
							  struct bfi_lps_login_rsp_s *rsp);
	bfa_fcxp_alloc_cbfn_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 1063 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 103 */(struct bfa_fcxp_s *fcxp,
							  struct bfi_fcxp_send_req_s *send_req);
	bfa_cb_fcxp_send_t cocci_id/* drivers/scsi/bfa/bfa_svc.c 1007 */;
	enum fc_cos cocci_id/* drivers/scsi/bfa/bfa_svc.c 1006 */;
	void cocci_id/* drivers/scsi/bfa/bfa_svc.c 100 */(struct bfa_s *bfa,
							  u32 reqlen,
							  struct bfa_fcxp_s *fcxp,
							  struct fchs_s *fchs);
}
