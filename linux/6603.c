cocci_test_suite() {
	enum rport_event cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 944 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 77 */(struct bfa_fcs_rport_s *rport,
							       struct fchs_s *rx_fchs,
							       u16 len);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 74 */(struct bfa_fcs_rport_s *rport,
							       struct fchs_s *rx_fchs,
							       u8 reason_code,
							       u8 reason_code_expl);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 71 */(void *rport_cbarg);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 42 */(struct bfa_fcs_rport_s *rport,
							       struct fc_logi_s *plogi);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 40 */(struct bfa_fcs_rport_s *rport);
	u16 cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3403 */;
	struct fc_rpsc2_acc_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3402 */;
	struct fc_ls_rjt_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3401 */;
	struct bfa_fcs_rport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 34 */(struct bfa_fcs_lport_s *port,
										  wwn_t pwwn,
										  u32 rpid);
	struct fchs_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3397 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3396 */;
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3396 */;
	struct bfa_fcxp_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3395 */;
	int cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3369 */;
	struct fchs_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3368 */;
	struct bfa_fcs_rpf_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3314 */;
	enum rpf_event cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3287 */;
	struct bfa_fcs_fabric_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3144 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3135 */(struct bfa_fcs_rpf_s *rpf,
								 enum rpf_event event);
	enum rpf_event{RPFSM_EVENT_RPORT_OFFLINE=1, RPFSM_EVENT_RPORT_ONLINE=2, RPFSM_EVENT_FCXP_SENT=3, RPFSM_EVENT_TIMEOUT=4, RPFSM_EVENT_RPSC_COMP=5, RPFSM_EVENT_RPSC_FAIL=6, RPFSM_EVENT_RPSC_ERROR=7,} cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3117 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3111 */(void *arg);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3103 */(void *fcsarg,
								 struct bfa_fcxp_s *fcxp,
								 void *cbarg,
								 bfa_status_t req_status,
								 u32 rsp_len,
								 u32 resid_len,
								 struct fchs_s *rsp_fchs);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3101 */(void *rport_cbarg,
								 struct bfa_fcxp_s *fcxp_alloced);
	struct bfa_rport_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3021 */;
	struct bfa_port_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3017 */;
	bfa_port_speed_t cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3016 */;
	struct bfa_rport_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 3012 */;
	__be16 cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2990 */;
	u8 cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2942 */;
	struct fc_els_cmd_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2865 */;
	struct list_head *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2821 */;
	struct bfa_fcs_lport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2819 */;
	struct bfad_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2818 */;
	struct bfa_fcs_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2818 */;
	struct bfa_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2816 */;
	struct bfa_rport_aen_data_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2781 */;
	struct bfa_rport_qos_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2777 */;
	struct bfa_fcs_rport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2755 */;
	void *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2753 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2752 */;
	struct fc_logi_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2687 */;
	bfa_fcs_lport_t *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2521 */;
	char cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2478 */[BFA_STRING_32];
	struct bfa_aen_entry_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2400 */;
	struct bfa_rport_aen_data_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2396 */;
	enum bfa_rport_aen_event cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2395 */;
	struct bfad_rport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2309 */;
	wwn_t cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2305 */;
	struct bfa_rport_info_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2282 */;
	struct fc_rpsc_speed_info_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2206 */;
	struct fc_prli_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 2160 */;
	struct fcgs_gidpn_resp_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 1954 */;
	struct ct_hdr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 1953 */;
	bfa_cb_fcxp_send_t cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 1917 */;
	struct fc_adisc_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 1894 */;
	struct bfa_sm_table_s cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 139 */[];
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_rport.c 108 */(struct bfa_fcs_rport_s *rport,
								enum rport_event event);
}
