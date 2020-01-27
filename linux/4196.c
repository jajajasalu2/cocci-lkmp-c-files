cocci_test_suite() {
	struct ltq_vrx200_pcie_phy_priv {
		struct phy *phy;
		unsigned int mode;
		struct device *dev;
		struct regmap *phy_regmap;
		struct regmap *rcu_regmap;
		struct clk *pdi_clk;
		struct clk *phy_clk;
		struct reset_control *phy_reset;
		struct reset_control *pcie_reset;
		u32 rcu_ahb_endian_offset;
		u32 rcu_ahb_endian_big_endian_mask;
	} cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 84 */;
	struct platform_driver cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 484 */;
	const struct of_device_id cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 477 */[];
	void __iomem *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 406 */;
	struct resource *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 405 */;
	struct phy_provider *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 404 */;
	struct device *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 403 */;
	const struct regmap_config cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 396 */;
	struct platform_device *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 394 */;
	struct of_phandle_args *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 361 */;
	struct phy_ops cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 352 */;
	int cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 216 */;
	const struct reg_default cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 202 */[];
	struct ltq_vrx200_pcie_phy_priv *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 201 */;
	struct phy *cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 199 */;
	void cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 199 */;
	unsigned int cocci_id/* drivers/phy/lantiq/phy-lantiq-vrx200-pcie.c 184 */;
}
