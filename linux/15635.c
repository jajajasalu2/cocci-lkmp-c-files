cocci_test_suite() {
	struct mt7621_pci_phy_instance {
		struct phy *phy;
		void __iomem *port_base;
		u32 index;
	} cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 86 */;
	int __init cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 406 */;
	struct platform_driver cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 398 */;
	const struct of_device_id cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 392 */[];
	void __iomem *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 329 */;
	struct resource *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 327 */;
	struct phy_provider *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 325 */;
	const struct soc_device_attribute *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 324 */;
	struct device *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 323 */;
	struct platform_device *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 321 */;
	const struct regmap_config cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 314 */;
	const struct soc_device_attribute cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 310 */[];
	struct of_phandle_args *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 297 */;
	const struct phy_ops cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 288 */;
	struct phy *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 283 */;
	int cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 283 */;
	u32 cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 126 */;
	struct mt7621_pci_phy_instance *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 124 */;
	struct mt7621_pci_phy *cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 123 */;
	void cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 123 */;
	struct mt7621_pci_phy {
		struct device *dev;
		struct regmap *regmap;
		struct mt7621_pci_phy_instance **phys;
		int nphys;
		bool bypass_pipe_rst;
	} cocci_id/* drivers/staging/mt7621-pci-phy/pci-mt7621-phy.c 101 */;
}
