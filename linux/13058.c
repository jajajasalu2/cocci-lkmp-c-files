cocci_test_suite() {
	const struct crci_config cocci_id/* drivers/soc/qcom/qcom_gsbi.c 59 */;
	const unsigned int cocci_id/* drivers/soc/qcom/qcom_gsbi.c 46 */[][MAX_GSBI];
	const u32 cocci_id/* drivers/soc/qcom/qcom_gsbi.c 28 */[][MAX_GSBI];
	struct platform_driver cocci_id/* drivers/soc/qcom/qcom_gsbi.c 238 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/qcom_gsbi.c 231 */[];
	struct crci_config {
		u32 num_rows;
		const u32 *array[MAX_GSBI];
	} cocci_id/* drivers/soc/qcom/qcom_gsbi.c 23 */;
	const struct crci_config *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 135 */;
	u32 cocci_id/* drivers/soc/qcom/qcom_gsbi.c 134 */;
	struct gsbi_info *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 132 */;
	void __iomem *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 131 */;
	struct resource *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 130 */;
	const struct of_device_id *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 129 */;
	struct device_node *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 127 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/qcom_gsbi.c 125 */;
	int cocci_id/* drivers/soc/qcom/qcom_gsbi.c 125 */;
	struct gsbi_info {
		struct clk *hclk;
		u32 mode;
		u32 crci;
		struct regmap *tcsr;
	} cocci_id/* drivers/soc/qcom/qcom_gsbi.c 110 */;
}
