cocci_test_suite() {
	u32 cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 94 */;
	struct uniphier_pciephy_priv *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 92 */;
	void cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 92 */;
	struct uniphier_pciephy_soc_data {
		bool has_syscon;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 53 */;
	struct uniphier_pciephy_priv {
		void __iomem *base;
		struct device *dev;
		struct clk *clk;
		struct reset_control *rst;
		const struct uniphier_pciephy_soc_data *data;
	} cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 45 */;
	struct platform_driver cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 229 */;
	const struct of_device_id cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 216 */[];
	const struct uniphier_pciephy_soc_data cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 208 */;
	struct resource *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 166 */;
	struct regmap *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 165 */;
	struct device *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 164 */;
	struct phy_provider *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 163 */;
	struct platform_device *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 160 */;
	const struct phy_ops cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 154 */;
	struct phy *cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 143 */;
	int cocci_id/* drivers/phy/socionext/phy-uniphier-pcie.c 143 */;
}
