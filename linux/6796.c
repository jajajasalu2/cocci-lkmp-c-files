cocci_test_suite() {
	typeof(*iocbq) cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 985 */;
	struct bsg_job_data *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 935 */;
	struct fc_bsg_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 934 */;
	struct bsg_job *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 933 */;
	struct lpfc_sli_ct_request *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 932 */;
	struct lpfc_hbq_entry *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 931 */;
	struct lpfc_bsg_menlo {
		struct lpfc_iocbq *cmdiocbq;
		struct lpfc_dmabuf *rmp;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 93 */;
	dma_addr_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 927 */;
	size_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 924 */;
	struct event_data *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 922 */;
	struct lpfc_bsg_event *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 921 */;
	struct lpfc_iocbq *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 916 */;
	struct lpfc_sli_ring *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 915 */;
	struct list_head cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 883 */;
	typeof(*ed) cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 810 */;
	struct lpfc_bsg_mbox {
		LPFC_MBOXQ_t *pmboxq;
		MAILBOX_t *mb;
		struct lpfc_dmabuf *dmabuffers;
		uint8_t *ext;
		uint32_t mbOffset;
		uint32_t inExtWLen;
		uint32_t outExtWLen;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 81 */;
	struct lpfc_bsg_event cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 803 */;
	struct kref *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 801 */;
	struct lpfc_bsg_iocb {
		struct lpfc_iocbq *cmdiocbq;
		struct lpfc_dmabuf *rmp;
		struct lpfc_nodelist *ndlp;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 75 */;
	struct lpfc_nodelist *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 667 */;
	struct lpfc_rport_data *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 666 */;
	struct fc_bsg_ctels_reply cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 629 */;
	struct fc_bsg_ctels_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 586 */;
	struct lpfc_trunk_info cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5720 */;
	struct get_trunk_info_req cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5708 */;
	struct lpfc_trunk_info *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5704 */;
	struct lpfc_bsg_get_fwlog_req cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5649 */;
	u32 cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5626 */;
	struct lpfc_bsg_get_fwlog_req *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5625 */;
	struct fc_bsg_request *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5623 */;
	uint32_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5593 */;
	u32 *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5565 */;
	struct lpfc_bsg_get_ras_lwpd *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5561 */;
	struct lpfc_bsg_set_ras_config_req cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5483 */;
	uint8_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5478 */;
	struct lpfc_bsg_set_ras_config_req *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5474 */;
	struct lpfc_bsg_ras_req cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5424 */;
	struct lpfc_ras_fwlog *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5419 */;
	struct lpfc_bsg_get_ras_config_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5418 */;
	struct forced_link_speed_support_reply cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5365 */;
	struct get_forced_link_speed_support cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5352 */;
	struct forced_link_speed_support_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5347 */;
	struct lpfc_bsg_event {
		struct list_head node;
		struct kref kref;
		wait_queue_head_t wq;
		uint32_t type_mask;
		uint32_t req_id;
		uint32_t reg_id;
		unsigned long wait_time_stamp;
		int waiting;
		struct list_head events_to_get;
		struct list_head events_to_see;
		void *dd_data;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 53 */;
	struct menlo_response cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5207 */;
	struct menlo_command cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5198 */;
	struct menlo_command *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5186 */;
	struct menlo_response *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5092 */;
	struct lpfc_bsg_menlo *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5090 */;
	struct dfc_mbox_req cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 5029 */;
	MAILBOX_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4838 */;
	LPFC_MBOXQ_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4815 */;
	struct lpfc_mbx_nembed_cmd *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4739 */;
	struct lpfc_mbx_sli4_config *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4738 */;
	struct READ_EVENT_LOG_VAR *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4736 */;
	LPFC_MBOXQ_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4729 */;
	struct dfc_mbox_req *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4650 */;
	struct lpfc_sli_config_mbox *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 4259 */;
	enum nemb_type cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3798 */;
	struct lpfc_mbox_ext_buf_ctx cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3620 */;
	MAILBOX_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3519 */;
	struct lpfc_vport *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3519 */;
	struct get_mgmt_rev_reply cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3424 */;
	struct get_mgmt_rev cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3412 */;
	struct get_mgmt_rev_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3408 */;
	typeof(*evdat) cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3339 */;
	struct ulp_bde64 cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3285 */;
	struct fc_bsg_request cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3133 */;
	struct diag_mode_test cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3133 */;
	void *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3126 */;
	IOCB_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3112 */;
	struct lpfc_sli *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 3106 */;
	struct lpfc_bsg_iocb *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 309 */;
	struct lpfc_dmabuf *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2963 */[2];
	ushort cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2927 */;
	uint8_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2920 */;
	struct lpfc_dmabufext cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2894 */;
	struct pci_dev *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2882 */;
	int cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2877 */;
	uint32_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2876 */;
	struct ulp_bde64 *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2876 */;
	struct lpfc_hba *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2875 */;
	struct lpfc_dmabufext *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2874 */;
	struct list_head *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2849 */;
	typeof(struct event_data) cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2760 */;
	uint16_t *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2649 */;
	struct diag_status cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2502 */;
	struct lpfc_sli4_cfg_mhdr cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2464 */;
	struct lpfc_mbx_set_link_diag_state cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2463 */;
	struct sli4_link_diag cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2436 */;
	struct diag_status *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2406 */;
	union lpfc_sli4_cfg_shdr *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2404 */;
	struct lpfc_mbx_run_link_diag_test *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2403 */;
	struct sli4_link_diag *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2401 */;
	bool cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 230 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 2280 */;
	unsigned long cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 228 */;
	struct sg_mapping_iter cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 227 */;
	unsigned char *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 225 */;
	struct bsg_buffer *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 218 */;
	uint16_t cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 206 */;
	struct lpfc_mbx_set_link_diag_loopback cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1988 */;
	struct lpfc_mbx_set_link_diag_loopback *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1982 */;
	struct lpfc_mbx_set_link_diag_state *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1917 */;
	struct diag_mode_set cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1807 */;
	struct diag_mode_set *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1795 */;
	struct lpfc_dmabuf cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 176 */;
	void cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1756 */;
	struct lpfc_queue *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1707 */;
	struct lpfc_vport **cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1704 */;
	struct send_mgmt_resp *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1632 */;
	int *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 159 */;
	unsigned int cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 157 */;
	struct lpfc_dmabuf *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 156 */;
	struct event_data cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1324 */;
	struct lpfc_dmabufext {
		struct lpfc_dmabuf dma;
		uint32_t size;
		uint32_t flag;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 132 */;
	struct get_ct_event cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1303 */;
	struct get_ct_event_reply *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1296 */;
	struct get_ct_event *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1295 */;
	struct bsg_job_data cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1244 */;
	enum ELX_LOOPBACK_CMD{ELX_LOOPBACK_XRI_SETUP, ELX_LOOPBACK_DATA,} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 124 */;
	struct set_ct_event cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1219 */;
	struct set_ct_event *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1211 */;
	struct fc_frame_header *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1176 */;
	struct fc_frame_header cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1175 */;
	struct hbq_dmabuf *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1173 */;
	struct event_data {
		struct list_head node;
		uint32_t type;
		uint32_t immed_dat;
		void *data;
		uint32_t len;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 113 */;
	char *cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 1054 */;
	struct bsg_job_data {
		uint32_t type;
		struct bsg_job *set_job;
		union {
			struct lpfc_bsg_event *evt;
			struct lpfc_bsg_iocb iocb;
			struct lpfc_bsg_mbox mbox;
			struct lpfc_bsg_menlo menlo;
		} context_un;
	} cocci_id/* drivers/scsi/lpfc/lpfc_bsg.c 102 */;
}
