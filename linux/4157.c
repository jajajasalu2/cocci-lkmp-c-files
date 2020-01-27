cocci_test_suite() {
	struct qcom_phy {
		struct device *dev;
		void __iomem *base;
		struct regulator_bulk_data vregs[2];
		struct reset_control *phy_reset;
		struct reset_control *pipe_reset;
		struct clk *pipe_clk;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 39 */;
	struct platform_driver cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 320 */;
	const struct of_device_id cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 314 */[];
	struct device *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 254 */;
	struct resource *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 253 */;
	struct phy_provider *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 251 */;
	struct platform_device *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 249 */;
	struct clk_init_data cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 227 */;
	struct clk_fixed_rate *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 226 */;
	struct device_node *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 225 */;
	struct qcom_phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 223 */;
	int cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 223 */;
	const struct phy_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 197 */;
	struct phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 187 */;
	u32 cocci_id/* drivers/phy/qualcomm/phy-qcom-pcie2.c 175 */;
}
