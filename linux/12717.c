cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/interconnect/qcom/sdm845.c 887 */;
	const struct of_device_id cocci_id/* drivers/interconnect/qcom/sdm845.c 881 */[];
	struct qcom_icc_node {
		const char *name;
		u16 links[SDM845_MAX_LINKS];
		u16 id;
		u16 num_links;
		u16 channels;
		u16 buswidth;
		u64 sum_avg[QCOM_ICC_NUM_BUCKETS];
		u64 max_peak[QCOM_ICC_NUM_BUCKETS];
		struct qcom_icc_bcm *bcms[SDM845_MAX_BCM_PER_NODE];
		size_t num_bcms;
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 81 */;
	struct qcom_icc_node **cocci_id/* drivers/interconnect/qcom/sdm845.c 776 */;
	struct icc_provider *cocci_id/* drivers/interconnect/qcom/sdm845.c 775 */;
	struct icc_onecell_data *cocci_id/* drivers/interconnect/qcom/sdm845.c 774 */;
	const struct qcom_icc_desc *cocci_id/* drivers/interconnect/qcom/sdm845.c 773 */;
	struct platform_device *cocci_id/* drivers/interconnect/qcom/sdm845.c 771 */;
	const struct qcom_icc_bcm **cocci_id/* drivers/interconnect/qcom/sdm845.c 760 */;
	const void *cocci_id/* drivers/interconnect/qcom/sdm845.c 758 */;
	int cocci_id/* drivers/interconnect/qcom/sdm845.c 758 */;
	int cocci_id/* drivers/interconnect/qcom/sdm845.c 679 */[SDM845_MAX_VCD];
	struct list_head cocci_id/* drivers/interconnect/qcom/sdm845.c 678 */;
	struct tcs_cmd cocci_id/* drivers/interconnect/qcom/sdm845.c 677 */[SDM845_MAX_BCMS];
	struct qcom_icc_provider *cocci_id/* drivers/interconnect/qcom/sdm845.c 675 */;
	struct qcom_icc_node *cocci_id/* drivers/interconnect/qcom/sdm845.c 650 */;
	u32 *cocci_id/* drivers/interconnect/qcom/sdm845.c 647 */;
	u32 cocci_id/* drivers/interconnect/qcom/sdm845.c 646 */;
	struct icc_node *cocci_id/* drivers/interconnect/qcom/sdm845.c 646 */;
	u64 cocci_id/* drivers/interconnect/qcom/sdm845.c 600 */;
	u64 cocci_id/* drivers/interconnect/qcom/sdm845.c 598 */[QCOM_ICC_NUM_BUCKETS];
	size_t cocci_id/* drivers/interconnect/qcom/sdm845.c 597 */;
	struct qcom_icc_bcm *cocci_id/* drivers/interconnect/qcom/sdm845.c 595 */;
	void cocci_id/* drivers/interconnect/qcom/sdm845.c 595 */;
	struct tcs_cmd cocci_id/* drivers/interconnect/qcom/sdm845.c 558 */[SDM845_MAX_VCD];
	struct list_head *cocci_id/* drivers/interconnect/qcom/sdm845.c 557 */;
	bool cocci_id/* drivers/interconnect/qcom/sdm845.c 530 */;
	struct tcs_cmd *cocci_id/* drivers/interconnect/qcom/sdm845.c 529 */;
	const struct bcm_db *cocci_id/* drivers/interconnect/qcom/sdm845.c 489 */;
	struct device *cocci_id/* drivers/interconnect/qcom/sdm845.c 486 */;
	struct qcom_icc_desc cocci_id/* drivers/interconnect/qcom/sdm845.c 479 */;
	struct qcom_icc_bcm *cocci_id/* drivers/interconnect/qcom/sdm845.c 448 */[];
	struct bcm_db {
		__le32 unit;
		__le16 width;
		u8 vcd;
		u8 reserved;
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 40 */;
	struct qcom_icc_node *cocci_id/* drivers/interconnect/qcom/sdm845.c 315 */[];
	struct qcom_icc_provider {
		struct icc_provider provider;
		struct device *dev;
		struct qcom_icc_bcm **bcms;
		size_t num_bcms;
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 26 */;
	struct qcom_icc_provider cocci_id/* drivers/interconnect/qcom/sdm845.c 24 */;
	struct qcom_icc_desc {
		struct qcom_icc_node **nodes;
		size_t num_nodes;
		struct qcom_icc_bcm **bcms;
		size_t num_bcms;
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 129 */;
	struct qcom_icc_fabric {
		struct qcom_icc_node **nodes;
		size_t num_nodes;
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 124 */;
	struct qcom_icc_bcm {
		const char *name;
		u32 type;
		u32 addr;
		u64 vote_x[QCOM_ICC_NUM_BUCKETS];
		u64 vote_y[QCOM_ICC_NUM_BUCKETS];
		bool dirty;
		bool keepalive;
		struct bcm_db aux_data;
		struct list_head list;
		size_t num_nodes;
		struct qcom_icc_node *nodes[];
	} cocci_id/* drivers/interconnect/qcom/sdm845.c 110 */;
}
