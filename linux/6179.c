cocci_test_suite() {
	void __exit cocci_id/* drivers/mfd/qcom_rpm.c 704 */;
	void cocci_id/* drivers/mfd/qcom_rpm.c 704 */;
	int __init cocci_id/* drivers/mfd/qcom_rpm.c 698 */;
	const struct qcom_rpm_resource cocci_id/* drivers/mfd/qcom_rpm.c 69 */[];
	struct platform_driver cocci_id/* drivers/mfd/qcom_rpm.c 689 */;
	u32 cocci_id/* drivers/mfd/qcom_rpm.c 535 */[3];
	struct resource *cocci_id/* drivers/mfd/qcom_rpm.c 533 */;
	struct device_node *cocci_id/* drivers/mfd/qcom_rpm.c 532 */;
	const struct of_device_id *cocci_id/* drivers/mfd/qcom_rpm.c 531 */;
	struct platform_device *cocci_id/* drivers/mfd/qcom_rpm.c 529 */;
	u32 cocci_id/* drivers/mfd/qcom_rpm.c 495 */;
	struct qcom_rpm *cocci_id/* drivers/mfd/qcom_rpm.c 494 */;
	irqreturn_t cocci_id/* drivers/mfd/qcom_rpm.c 492 */;
	void *cocci_id/* drivers/mfd/qcom_rpm.c 492 */;
	int cocci_id/* drivers/mfd/qcom_rpm.c 492 */;
	unsigned long *cocci_id/* drivers/mfd/qcom_rpm.c 469 */;
	u32 cocci_id/* drivers/mfd/qcom_rpm.c 452 */[RPM_MAX_SEL_SIZE];
	const struct qcom_rpm_data *cocci_id/* drivers/mfd/qcom_rpm.c 451 */;
	const struct qcom_rpm_resource *cocci_id/* drivers/mfd/qcom_rpm.c 450 */;
	u32 *cocci_id/* drivers/mfd/qcom_rpm.c 448 */;
	size_t cocci_id/* drivers/mfd/qcom_rpm.c 448 */;
	const struct of_device_id cocci_id/* drivers/mfd/qcom_rpm.c 435 */[];
	struct qcom_rpm {
		struct device *dev;
		struct regmap *ipc_regmap;
		unsigned ipc_offset;
		unsigned ipc_bit;
		struct clk *ramclk;
		struct completion ack;
		struct mutex lock;
		void __iomem *status_regs;
		void __iomem *ctrl_regs;
		void __iomem *req_regs;
		u32 ack_status;
		const struct qcom_rpm_data *data;
	} cocci_id/* drivers/mfd/qcom_rpm.c 39 */;
	struct qcom_rpm_data {
		u32 version;
		const struct qcom_rpm_resource *resource_table;
		unsigned int n_resources;
		unsigned int req_ctx_off;
		unsigned int req_sel_off;
		unsigned int ack_ctx_off;
		unsigned int ack_sel_off;
		unsigned int req_sel_size;
		unsigned int ack_sel_size;
	} cocci_id/* drivers/mfd/qcom_rpm.c 27 */;
	struct qcom_rpm_resource {
		unsigned target_id;
		unsigned status_id;
		unsigned select_id;
		unsigned size;
	} cocci_id/* drivers/mfd/qcom_rpm.c 20 */;
	const struct qcom_rpm_data cocci_id/* drivers/mfd/qcom_rpm.c 150 */;
}
