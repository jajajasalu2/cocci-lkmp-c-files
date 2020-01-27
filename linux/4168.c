cocci_test_suite() {
	const u8 cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 78 */[];
	struct sr_pcie_phy_core {
		struct device *dev;
		void __iomem *base;
		struct regmap *cdru;
		struct regmap *mhb;
		u32 pipemux;
		struct sr_pcie_phy phys[SR_NR_PCIE_PHYS];
	} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 62 */;
	struct sr_pcie_phy {
		struct sr_pcie_phy_core *core;
		unsigned int index;
		struct phy *phy;
	} cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 46 */;
	struct sr_pcie_phy_core cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 37 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 294 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 288 */[];
	const struct phy_ops *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 257 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 221 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 220 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 218 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 217 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 215 */;
	struct of_phandle_args *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 198 */;
	const struct phy_ops cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 192 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 168 */;
	int cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 168 */;
	unsigned int cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 148 */;
	struct sr_pcie_phy_core *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 147 */;
	bool cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 145 */;
	struct sr_pcie_phy *cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 145 */;
	u32 cocci_id/* drivers/phy/broadcom/phy-bcm-sr-pcie.c 112 */;
}
