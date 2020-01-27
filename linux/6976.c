cocci_test_suite() {
	void __iomem *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 54 */;
	unsigned long cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 53 */;
	struct resource *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 52 */;
	struct regmap *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 51 */;
	struct qcom_apcs_ipc *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 50 */;
	struct platform_device *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 48 */;
	int cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 48 */;
	const struct mbox_chan_ops cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 44 */;
	struct qcom_apcs_ipc cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 38 */;
	struct mbox_chan *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 35 */;
	const struct regmap_config cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 27 */;
	struct qcom_apcs_ipc {
		struct mbox_controller mbox;
		struct mbox_chan mbox_chans[QCOM_APCS_IPC_BITS];
		struct regmap *regmap;
		unsigned long offset;
		struct platform_device *clk;
	} cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 18 */;
	void __exit cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 149 */;
	void cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 149 */;
	int __init cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 143 */;
	struct platform_driver cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 134 */;
	void *cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 122 */;
	const struct of_device_id cocci_id/* drivers/mailbox/qcom-apcs-ipc-mailbox.c 121 */[];
}
