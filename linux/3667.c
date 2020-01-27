cocci_test_suite() {
	const struct qcom_scm_command *cocci_id/* drivers/firmware/qcom_scm-32.c 92 */;
	struct qcom_scm_response {
		__le32 len;
		__le32 buf_offset;
		__le32 is_complete;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 79 */;
	unsigned int cocci_id/* drivers/firmware/qcom_scm-32.c 662 */;
	unsigned int *cocci_id/* drivers/firmware/qcom_scm-32.c 651 */;
	struct qcom_scm_command {
		__le32 len;
		__le32 buf_offset;
		__le32 resp_hdr_offset;
		__le32 id;
		__le32 buf[0];
	} cocci_id/* drivers/firmware/qcom_scm-32.c 65 */;
	u64 cocci_id/* drivers/firmware/qcom_scm-32.c 644 */;
	size_t *cocci_id/* drivers/firmware/qcom_scm-32.c 639 */;
	struct msm_scm_sec_cfg {
		__le32 id;
		__le32 ctx_bank_num;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 620 */;
	size_t cocci_id/* drivers/firmware/qcom_scm-32.c 611 */;
	phys_addr_t cocci_id/* drivers/firmware/qcom_scm-32.c 610 */;
	struct device *cocci_id/* drivers/firmware/qcom_scm-32.c 610 */;
	int cocci_id/* drivers/firmware/qcom_scm-32.c 610 */;
	struct {
		__le32 state;
		__le32 id;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 594 */;
	bool cocci_id/* drivers/firmware/qcom_scm-32.c 573 */;
	struct {
		__le32 proc;
		__le32 addr;
		__le32 len;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 525 */;
	struct {
		__le32 proc;
		__le32 image_addr;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 504 */;
	dma_addr_t cocci_id/* drivers/firmware/qcom_scm-32.c 500 */;
	struct ocmem_tz_unlock {
		__le32 id;
		__le32 offset;
		__le32 size;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 466 */;
	struct ocmem_tz_lock {
		__le32 id;
		__le32 offset;
		__le32 size;
		__le32 mode;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 448 */;
	u32 *cocci_id/* drivers/firmware/qcom_scm-32.c 436 */;
	struct qcom_scm_hdcp_req *cocci_id/* drivers/firmware/qcom_scm-32.c 435 */;
	__le32 cocci_id/* drivers/firmware/qcom_scm-32.c 423 */;
	u32 cocci_id/* drivers/firmware/qcom_scm-32.c 414 */;
	void cocci_id/* drivers/firmware/qcom_scm-32.c 414 */;
	struct {
		__le32 flags;
		__le32 addr;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 375 */;
	int cocci_id/* drivers/firmware/qcom_scm-32.c 340 */[];
	const cpumask_t *cocci_id/* drivers/firmware/qcom_scm-32.c 336 */;
	void *cocci_id/* drivers/firmware/qcom_scm-32.c 336 */;
	struct qcom_scm_entry cocci_id/* drivers/firmware/qcom_scm-32.c 32 */[];
	struct qcom_scm_entry {
		int flag;
		void *entry;
	} cocci_id/* drivers/firmware/qcom_scm-32.c 27 */;
	s32 cocci_id/* drivers/firmware/qcom_scm-32.c 234 */;
	struct qcom_scm_response *cocci_id/* drivers/firmware/qcom_scm-32.c 168 */;
	struct qcom_scm_command *cocci_id/* drivers/firmware/qcom_scm-32.c 167 */;
	const void *cocci_id/* drivers/firmware/qcom_scm-32.c 163 */;
	const struct qcom_scm_response *cocci_id/* drivers/firmware/qcom_scm-32.c 114 */;
}
