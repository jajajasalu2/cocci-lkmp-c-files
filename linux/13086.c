cocci_test_suite() {
	struct qbman_alt_fq_state_desc {
		u8 verb;
		u8 reserved[3];
		__le32 fqid;
		u8 reserved2[56];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 998 */;
	struct qbman_acquire_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 955 */;
	struct qbman_acquire_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 954 */;
	unsigned int cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 952 */;
	u64 *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 951 */;
	struct qbman_acquire_rslt {
		u8 verb;
		u8 rslt;
		__le16 reserved;
		u8 num;
		u8 reserved2[3];
		__le64 buf[7];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 932 */;
	struct qbman_acquire_desc {
		u8 verb;
		u8 reserved;
		__le16 bpid;
		u8 num;
		u8 reserved2[59];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 924 */;
	const u64 *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 884 */;
	const struct qbman_release_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 883 */;
	enum qbman_sdqcr_fc{qbman_sdqcr_fc_one=0, qbman_sdqcr_fc_up_to_3=1,} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 88 */;
	struct qbman_release_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 844 */;
	const struct dpaa2_dq *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 815 */;
	enum qbman_sdqcr_dct{qbman_sdqcr_dct_null=0, qbman_sdqcr_dct_prio_ics, qbman_sdqcr_dct_active_ics, qbman_sdqcr_dct_active,} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 81 */;
	enum qbman_pull_type_e cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 640 */;
	unsigned long cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 63 */;
	u8 cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 596 */;
	uintptr_t cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 576 */;
	u64 cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 576 */;
	dma_addr_t cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 572 */;
	struct dpaa2_dq *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 571 */;
	struct qbman_pull_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 552 */;
	enum qb_pull_dt_e{qb_pull_dt_channel, qb_pull_dt_workqueue, qb_pull_dt_framequeue,} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 541 */;
	int *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 502 */;
	const struct dpaa2_fd *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 468 */;
	const struct qbman_eq_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 467 */;
	struct qbman_eq_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 386 */;
	void cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 386 */;
	enum qb_enqueue_commands{enqueue_empty=0, enqueue_response_always=1, enqueue_rejects_to_fq=2,} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 372 */;
	u32 *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 345 */;
	u8 *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 327 */;
	const struct qbman_swp_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 157 */;
	u32 cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1197 */;
	struct qbman_bp_query_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1197 */;
	void *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1170 */;
	struct qbman_bp_query_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1169 */;
	u16 cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1166 */;
	struct qbman_swp *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1166 */;
	int cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1166 */;
	struct qbman_bp_query_desc {
		u8 verb;
		u8 reserved;
		__le16 bpid;
		u8 reserved2[60];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1159 */;
	const struct qbman_fq_query_np_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1154 */;
	struct qbman_fq_query_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1120 */;
	struct qbman_fq_query_np_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1118 */;
	struct qbman_fq_query_desc {
		u8 verb;
		u8 reserved[3];
		__le32 fqid;
		u8 reserved2[56];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1110 */;
	struct qbman_cdan_ctrl_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1071 */;
	struct qbman_cdan_ctrl_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1070 */;
	struct qbman_cdan_ctrl_rslt {
		u8 verb;
		u8 rslt;
		__le16 ch;
		u8 reserved[60];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1059 */;
	struct qbman_cdan_ctrl_desc {
		u8 verb;
		u8 reserved;
		__le16 ch;
		u8 we;
		u8 ctrl;
		__le16 reserved2;
		__le64 cdan_ctx;
		u8 reserved3[48];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1047 */;
	struct qbman_alt_fq_state_rslt *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1017 */;
	struct qbman_alt_fq_state_desc *cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1016 */;
	struct qbman_alt_fq_state_rslt {
		u8 verb;
		u8 rslt;
		u8 reserved[62];
	} cocci_id/* drivers/soc/fsl/dpio/qbman-portal.c 1005 */;
}
