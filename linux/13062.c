cocci_test_suite() {
	char *cocci_id/* drivers/soc/qcom/glink_ssr.c 89 */;
	struct do_cleanup_msg cocci_id/* drivers/soc/qcom/glink_ssr.c 88 */;
	struct glink_ssr cocci_id/* drivers/soc/qcom/glink_ssr.c 87 */;
	struct notifier_block *cocci_id/* drivers/soc/qcom/glink_ssr.c 84 */;
	unsigned long cocci_id/* drivers/soc/qcom/glink_ssr.c 84 */;
	struct glink_ssr *cocci_id/* drivers/soc/qcom/glink_ssr.c 61 */;
	struct cleanup_done_msg *cocci_id/* drivers/soc/qcom/glink_ssr.c 60 */;
	u32 cocci_id/* drivers/soc/qcom/glink_ssr.c 58 */;
	void *cocci_id/* drivers/soc/qcom/glink_ssr.c 58 */;
	struct rpmsg_device *cocci_id/* drivers/soc/qcom/glink_ssr.c 57 */;
	int cocci_id/* drivers/soc/qcom/glink_ssr.c 57 */;
	struct glink_ssr {
		struct device *dev;
		struct rpmsg_endpoint *ept;
		struct notifier_block nb;
		u32 seq_num;
		struct completion completion;
	} cocci_id/* drivers/soc/qcom/glink_ssr.c 47 */;
	struct cleanup_done_msg {
		__le32 version;
		__le32 response;
		__le32 seq_num;
	} cocci_id/* drivers/soc/qcom/glink_ssr.c 35 */;
	struct do_cleanup_msg {
		__le32 version;
		__le32 command;
		__le32 seq_num;
		__le32 name_len;
		char name[32];
	} cocci_id/* drivers/soc/qcom/glink_ssr.c 21 */;
	struct rpmsg_driver cocci_id/* drivers/soc/qcom/glink_ssr.c 143 */;
	const struct rpmsg_device_id cocci_id/* drivers/soc/qcom/glink_ssr.c 138 */[];
	void cocci_id/* drivers/soc/qcom/glink_ssr.c 131 */;
}
