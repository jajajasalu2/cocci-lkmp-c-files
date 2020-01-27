cocci_test_suite() {
	int __init cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 734 */;
	struct platform_driver cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 726 */;
	const struct of_device_id cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 720 */[];
	struct pci_host_bridge *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 655 */;
	const struct soc_device_attribute *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 653 */;
	struct platform_device *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 650 */;
	const struct soc_device_attribute cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 646 */[];
	struct list_head *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 631 */;
	u8 cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 530 */;
	struct resource cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 375 */;
	char cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 333 */[10];
	struct resource *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 295 */;
	struct of_pci_range cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 286 */;
	struct of_pci_range_parser cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 285 */;
	struct device_node *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 284 */;
	struct device *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 283 */;
	int cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 281 */;
	unsigned long long cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 276 */;
	resource_size_t cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 263 */;
	struct mt7621_pcie *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 234 */;
	struct mt7621_pcie_port *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 232 */;
	void cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 232 */;
	bool cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 222 */;
	struct pci_ops cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 187 */;
	struct pci_bus *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 175 */;
	void __iomem *cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 175 */;
	u32 cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 168 */;
	unsigned int cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 168 */;
	struct mt7621_pcie {
		void __iomem *base;
		struct device *dev;
		struct resource io;
		struct resource mem;
		struct resource busn;
		struct {
			resource_size_t mem;
			resource_size_t io;
		} offset;
		struct list_head ports;
		struct gpio_desc *perst;
		struct reset_control *rst;
		bool resets_inverted;
	} cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 131 */;
	struct mt7621_pcie_port {
		void __iomem *base;
		struct list_head list;
		struct mt7621_pcie *pcie;
		struct phy *phy;
		struct reset_control *pcie_rst;
		u32 slot;
		bool enabled;
	} cocci_id/* drivers/staging/mt7621-pci/pci-mt7621.c 107 */;
}
