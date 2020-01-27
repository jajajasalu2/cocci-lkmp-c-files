cocci_test_suite() {
	struct bfa_fcs_rport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 998 */;
	struct {
		void (*init)(struct bfa_fcs_lport_s *port);
		void (*online)(struct bfa_fcs_lport_s *port);
		void (*offline)(struct bfa_fcs_lport_s *port);
	} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 79 */[];
	char cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 749 */[BFA_STRING_32];
	struct bfa_fcxp_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 727 */;
	struct fchs_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 726 */;
	struct fchs_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 724 */;
	struct bfa_fcs_vport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6969 */;
	void *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6967 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6966 */;
	bfa_status_t cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6889 */;
	struct bfa_vport_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6856 */;
	struct bfa_vport_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6851 */;
	bfa_boolean_t cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6776 */;
	struct bfad_vport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6759 */;
	struct fc_rnid_general_topology_data_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 643 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 64 */(struct bfa_fcs_lport_s *port,
							       struct fc_rnid_general_topology_data_s *gen_topo_data);
	enum bfa_fcs_vport_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6388 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 61 */(struct bfa_fcs_lport_s *port,
							       struct fchs_s *rx_fchs,
							       struct fc_rnid_cmd_s *rnid,
							       u16 len);
	struct bfa_sm_table_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6032 */[];
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 6021 */(struct bfa_fcs_vport_s *vport,
								 enum bfa_fcs_vport_event event);
	enum bfa_fcs_vport_event{BFA_FCS_VPORT_SM_CREATE=1, BFA_FCS_VPORT_SM_DELETE=2, BFA_FCS_VPORT_SM_START=3, BFA_FCS_VPORT_SM_STOP=4, BFA_FCS_VPORT_SM_ONLINE=5, BFA_FCS_VPORT_SM_OFFLINE=6, BFA_FCS_VPORT_SM_FRMSENT=7, BFA_FCS_VPORT_SM_RSP_OK=8, BFA_FCS_VPORT_SM_RSP_ERROR=9, BFA_FCS_VPORT_SM_TIMEOUT=10, BFA_FCS_VPORT_SM_DELCOMP=11, BFA_FCS_VPORT_SM_RSP_DUP_WWN=12, BFA_FCS_VPORT_SM_RSP_FAILED=13, BFA_FCS_VPORT_SM_STOPCOMP=14, BFA_FCS_VPORT_SM_FABRIC_MAX=15,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5987 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5976 */(void *vport_arg);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5975 */(struct bfa_fcs_vport_s *vport);
	struct bfa_lport_stats_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5947 */;
	struct bfa_lport_stats_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5939 */;
	struct fc_rnid_general_topology_data_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 590 */;
	struct bfa_lport_info_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5894 */;
	struct fc_rnid_common_id_data_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 589 */;
	struct fc_rnid_cmd_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 587 */;
	bfa_fcs_vf_t *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5869 */;
	wwn_t cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5866 */;
	u16 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5866 */;
	bfa_fcs_lport_t *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5811 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 58 */(struct bfa_fcs_lport_s *port,
							       struct fchs_s *rx_fchs,
							       struct fc_echo_s *echo,
							       u16 len);
	struct bfa_rport_qualifier_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5761 */[];
	int *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5761 */;
	struct fc_echo_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 573 */;
	u8 *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 572 */;
	struct list_head *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5715 */;
	struct bfa_fcs_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5706 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 57 */(struct bfa_fcs_lport_s *port);
	struct fc_rscn_pl_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5617 */;
	enum fc_rscn_format cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5592 */;
	struct bfa_fcs_lport_scn_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5531 */;
	struct bfa_rport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 550 */;
	struct fc_echo_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 546 */;
	enum port_scn_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5263 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5246 */(struct bfa_fcs_lport_scn_s *scn,
								 enum port_scn_event event);
	enum port_scn_event{SCNSM_EVENT_PORT_ONLINE=1, SCNSM_EVENT_PORT_OFFLINE=2, SCNSM_EVENT_RSP_OK=3, SCNSM_EVENT_RSP_ERROR=4, SCNSM_EVENT_TIMEOUT=5, SCNSM_EVENT_SCR_SENT=6,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5237 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5226 */(struct bfa_fcs_lport_s *port,
								 struct fchs_s *rx_fchs);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5217 */(void *scn_cbarg,
								 struct bfa_fcxp_s *fcxp_alloced);
	wwn_t cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5141 */[BFA_PREBOOT_BOOTLUN_MAX];
	struct bfa_fcs_fabric_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5030 */;
	struct fcgs_gidft_resp_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 5027 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 50 */(struct bfa_fcs_lport_s *port,
							       struct fchs_s *rx_fchs,
							       struct fc_logi_s *plogi);
	u32 *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 4965 */;
	struct bfa_fcs_lport_ns_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 4927 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 47 */(struct bfa_fcs_lport_s *port,
							       struct fchs_s *rx_fchs,
							       u8 reason_code,
							       u8 reason_code_expl);
	u8 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 4636 */[256];
	struct fc_logi_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 441 */;
	enum vport_ns_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 4280 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3690 */(struct bfa_fcs_lport_ns_s *ns,
								 enum vport_ns_event event);
	enum vport_ns_event{NSSM_EVENT_PORT_ONLINE=1, NSSM_EVENT_PORT_OFFLINE=2, NSSM_EVENT_PLOGI_SENT=3, NSSM_EVENT_RSP_OK=4, NSSM_EVENT_RSP_ERROR=5, NSSM_EVENT_TIMEOUT=6, NSSM_EVENT_NS_QUERY=7, NSSM_EVENT_RSPNID_SENT=8, NSSM_EVENT_RFTID_SENT=9, NSSM_EVENT_RFFID_SENT=10, NSSM_EVENT_GIDFT_SENT=11, NSSM_EVENT_RNNID_SENT=12, NSSM_EVENT_RSNN_NN_SENT=13,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3642 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3634 */(bfa_fcs_lport_t *port);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3630 */(struct bfa_fcs_lport_s *port,
								 u32 *pid_buf,
								 u32 n_pids);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3574 */(void *ns_cbarg,
								 struct bfa_fcxp_s *fcxp_alloced);
	struct bfa_aen_entry_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 357 */;
	struct bfad_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 356 */;
	enum bfa_lport_aen_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 354 */;
	struct fc_logi_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3475 */;
	struct fc_ls_rjt_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3455 */;
	struct fc_els_cmd_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3454 */;
	wwn_t *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3373 */;
	enum bfa_fcs_lport_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 327 */;
	enum port_ms_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3268 */;
	struct fcgs_gmal_entry_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3174 */;
	struct fcgs_gmal_resp_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 3173 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2887 */(struct bfa_fcs_lport_ms_s *ms,
								 enum port_ms_event event);
	enum port_ms_event{MSSM_EVENT_PORT_ONLINE=1, MSSM_EVENT_PORT_OFFLINE=2, MSSM_EVENT_RSP_OK=3, MSSM_EVENT_RSP_ERROR=4, MSSM_EVENT_TIMEOUT=5, MSSM_EVENT_FCXP_SENT=6, MSSM_EVENT_PORT_FABRIC_RSCN=7,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2861 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2845 */(void *ms_cbarg,
								 struct bfa_fcxp_s *fcxp_alloced);
	struct bfa_fcs_lport_ms_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2791 */;
	bfa_port_speed_t cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2758 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2757 */;
	struct bfa_lport_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2675 */;
	struct bfa_port_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2674 */;
	struct bfa_fcs_fdmi_port_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2670 */;
	char *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2637 */;
	struct bfa_fcs_fdmi_hba_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2620 */;
	struct bfa_fcs_fdmi_port_attr_s cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2618 */;
	struct bfa_fcs_driver_info_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2617 */;
	struct bfa_fcs_fdmi_hba_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2614 */;
	struct bfa_fcs_lport_fdmi_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2613 */;
	struct fdmi_rpa_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2557 */;
	const u8 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 25 */[];
	struct fdmi_rprt_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2463 */;
	struct fdmi_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2241 */;
	struct fdmi_port_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2240 */;
	struct ct_hdr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 2163 */;
	struct fdmi_rhba_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1905 */;
	enum port_fdmi_event cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1846 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1471 */(struct bfa_fcs_lport_fdmi_s *fdmi,
								 enum port_fdmi_event event);
	enum port_fdmi_event{FDMISM_EVENT_PORT_ONLINE=1, FDMISM_EVENT_PORT_OFFLINE=2, FDMISM_EVENT_RSP_OK=4, FDMISM_EVENT_RSP_ERROR=5, FDMISM_EVENT_TIMEOUT=6, FDMISM_EVENT_RHBA_SENT=7, FDMISM_EVENT_RPRT_SENT=8, FDMISM_EVENT_RPA_SENT=9,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1432 */;
	u32 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1423 */(enum bfa_port_speed pport_speed);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1421 */(struct bfa_fcs_lport_fdmi_s *fdmi,
								 struct bfa_fcs_fdmi_port_attr_s *port_attr);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1419 */(struct bfa_fcs_lport_fdmi_s *fdmi,
								 struct bfa_fcs_fdmi_hba_attr_s *hba_attr);
	u16 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1417 */(struct bfa_fcs_lport_fdmi_s *fdmi,
								u8 *pyld);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1410 */(void *arg);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1389 */(void *fcsarg,
								 struct bfa_fcxp_s *fcxp,
								 void *cbarg,
								 bfa_status_t req_status,
								 u32 rsp_len,
								 u32 resid_len,
								 struct fchs_s *rsp_fchs);
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1383 */(void *fdmi_cbarg,
								 struct bfa_fcxp_s *fcxp_alloced);
	struct bfa_fcport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1291 */;
	u8 cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1290 */;
	int cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1289 */;
	struct bfa_fcs_lport_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1287 */;
	struct bfa_fcs_lport_n2n_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1278 */;
	void cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 127 */(struct bfa_fcs_lport_s *port,
								enum bfa_fcs_lport_event event);
	struct bfa_lport_attr_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1135 */;
	enum bfa_fcs_lport_event{BFA_FCS_PORT_SM_CREATE=1, BFA_FCS_PORT_SM_ONLINE=2, BFA_FCS_PORT_SM_OFFLINE=3, BFA_FCS_PORT_SM_DELETE=4, BFA_FCS_PORT_SM_DELRPORT=5, BFA_FCS_PORT_SM_STOP=6,} cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 110 */;
	struct bfa_lport_cfg_s *cocci_id/* drivers/scsi/bfa/bfa_fcs_lport.c 1094 */;
}
