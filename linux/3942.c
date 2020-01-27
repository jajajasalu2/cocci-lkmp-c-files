cocci_test_suite() {
	struct resource *cocci_id/* drivers/reset/reset-qcom-aoss.c 93 */;
	const struct qcom_aoss_desc *cocci_id/* drivers/reset/reset-qcom-aoss.c 92 */;
	struct device *cocci_id/* drivers/reset/reset-qcom-aoss.c 91 */;
	struct platform_device *cocci_id/* drivers/reset/reset-qcom-aoss.c 88 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-qcom-aoss.c 82 */;
	const struct qcom_aoss_reset_map *cocci_id/* drivers/reset/reset-qcom-aoss.c 54 */;
	struct qcom_aoss_reset_data *cocci_id/* drivers/reset/reset-qcom-aoss.c 53 */;
	unsigned long cocci_id/* drivers/reset/reset-qcom-aoss.c 51 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-qcom-aoss.c 50 */;
	int cocci_id/* drivers/reset/reset-qcom-aoss.c 50 */;
	struct qcom_aoss_reset_data cocci_id/* drivers/reset/reset-qcom-aoss.c 47 */;
	const struct qcom_aoss_desc cocci_id/* drivers/reset/reset-qcom-aoss.c 39 */;
	const struct qcom_aoss_reset_map cocci_id/* drivers/reset/reset-qcom-aoss.c 29 */[];
	struct qcom_aoss_reset_data {
		struct reset_controller_dev rcdev;
		void __iomem *base;
		const struct qcom_aoss_desc *desc;
	} cocci_id/* drivers/reset/reset-qcom-aoss.c 23 */;
	struct qcom_aoss_desc {
		const struct qcom_aoss_reset_map *resets;
		size_t num_resets;
	} cocci_id/* drivers/reset/reset-qcom-aoss.c 18 */;
	struct qcom_aoss_reset_map {
		unsigned int reg;
	} cocci_id/* drivers/reset/reset-qcom-aoss.c 14 */;
	struct platform_driver cocci_id/* drivers/reset/reset-qcom-aoss.c 122 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-qcom-aoss.c 117 */[];
}
