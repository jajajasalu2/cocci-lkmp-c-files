cocci_test_suite() {
	struct xcopy_op cocci_id/* drivers/target/target_core_xcopy.c 945 */;
	unsigned int cocci_id/* drivers/target/target_core_xcopy.c 922 */;
	struct xcopy_op *cocci_id/* drivers/target/target_core_xcopy.c 921 */;
	struct se_device *cocci_id/* drivers/target/target_core_xcopy.c 920 */;
	struct xcopy_dev_search_info cocci_id/* drivers/target/target_core_xcopy.c 89 */;
	struct se_device **cocci_id/* drivers/target/target_core_xcopy.c 87 */;
	const unsigned char *cocci_id/* drivers/target/target_core_xcopy.c 86 */;
	unsigned short cocci_id/* drivers/target/target_core_xcopy.c 837 */;
	unsigned long long cocci_id/* drivers/target/target_core_xcopy.c 757 */;
	u32 cocci_id/* drivers/target/target_core_xcopy.c 752 */;
	sector_t cocci_id/* drivers/target/target_core_xcopy.c 729 */;
	struct work_struct *cocci_id/* drivers/target/target_core_xcopy.c 724 */;
	void cocci_id/* drivers/target/target_core_xcopy.c 724 */;
	struct xcopy_pt_cmd cocci_id/* drivers/target/target_core_xcopy.c 614 */;
	bool cocci_id/* drivers/target/target_core_xcopy.c 612 */;
	unsigned char cocci_id/* drivers/target/target_core_xcopy.c 611 */[16];
	struct xcopy_pt_cmd *cocci_id/* drivers/target/target_core_xcopy.c 580 */;
	unsigned char cocci_id/* drivers/target/target_core_xcopy.c 58 */[XCOPY_NAA_IEEE_REGEX_LEN];
	struct xcopy_dev_search_info *cocci_id/* drivers/target/target_core_xcopy.c 57 */;
	void *cocci_id/* drivers/target/target_core_xcopy.c 55 */;
	struct xcopy_dev_search_info {
		const unsigned char *dev_wwn;
		struct se_device *found_dev;
	} cocci_id/* drivers/target/target_core_xcopy.c 49 */;
	struct se_session cocci_id/* drivers/target/target_core_xcopy.c 478 */;
	struct se_node_acl cocci_id/* drivers/target/target_core_xcopy.c 475 */;
	struct se_portal_group cocci_id/* drivers/target/target_core_xcopy.c 469 */;
	const struct target_core_fabric_ops cocci_id/* drivers/target/target_core_xcopy.c 445 */;
	struct xcopy_pt_cmd {
		struct se_cmd se_cmd;
		struct completion xpt_passthrough_sem;
		unsigned char sense_buffer[TRANSPORT_SENSE_BUFFER];
	} cocci_id/* drivers/target/target_core_xcopy.c 382 */;
	sense_reason_t cocci_id/* drivers/target/target_core_xcopy.c 34 */(struct xcopy_op *xop);
	sense_reason_t *cocci_id/* drivers/target/target_core_xcopy.c 328 */;
	struct workqueue_struct *cocci_id/* drivers/target/target_core_xcopy.c 32 */;
	u8 cocci_id/* drivers/target/target_core_xcopy.c 110 */;
	int cocci_id/* drivers/target/target_core_xcopy.c 1054 */;
	unsigned char *cocci_id/* drivers/target/target_core_xcopy.c 1053 */;
	sense_reason_t cocci_id/* drivers/target/target_core_xcopy.c 1051 */;
	struct se_cmd *cocci_id/* drivers/target/target_core_xcopy.c 1051 */;
}
