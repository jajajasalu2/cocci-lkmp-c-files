cocci_test_suite() {
	u32 cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 63 */;
	bool cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 59 */;
	struct cygnus_pcie_phy_core {
		struct device *dev;
		void __iomem *base;
		struct mutex lock;
		struct cygnus_pcie_phy phys[MAX_NUM_PHYS];
	} cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 52 */;
	struct cygnus_pcie_phy {
		struct cygnus_pcie_phy_core *core;
		enum cygnus_pcie_phy_id id;
		struct phy *phy;
	} cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 39 */;
	struct cygnus_pcie_phy_core cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 31 */;
	enum cygnus_pcie_phy_id{CYGNUS_PHY_PCIE0=0, CYGNUS_PHY_PCIE1, MAX_NUM_PHYS,} cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 25 */;
	struct platform_driver cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 210 */;
	const struct of_device_id cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 204 */[];
	unsigned int cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 152 */;
	unsigned cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 130 */;
	struct resource *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 129 */;
	struct phy_provider *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 128 */;
	struct cygnus_pcie_phy_core *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 127 */;
	struct device_node *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 126 */;
	struct device *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 125 */;
	struct platform_device *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 123 */;
	const struct phy_ops cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 117 */;
	struct cygnus_pcie_phy *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 112 */;
	struct phy *cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 110 */;
	int cocci_id/* drivers/phy/broadcom/phy-bcm-cygnus-pcie.c 110 */;
}
