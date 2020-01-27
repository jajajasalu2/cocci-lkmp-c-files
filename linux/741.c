cocci_test_suite() {
	struct dra7xx_pcie_of_data {
		enum dw_pcie_device_mode mode;
		u32 b1co_mode_sel_mask;
	} cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 99 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 938 */;
	struct dra7xx_pcie {
		struct dw_pcie *pci;
		void __iomem *base;
		int phy_count;
		struct phy **phy;
		int link_gen;
		struct irq_domain *irq_domain;
		enum dw_pcie_device_mode mode;
	} cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 89 */;
	struct dra7xx_pcie_of_data *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 700 */;
	enum dw_pcie_device_mode cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 693 */;
	const struct dra7xx_pcie_of_data *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 692 */;
	const struct of_device_id *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 691 */;
	struct gpio_desc *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 690 */;
	char cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 689 */[10];
	void __iomem *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 683 */;
	struct device_link **cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 682 */;
	struct phy **cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 681 */;
	unsigned int cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 651 */;
	struct regmap *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 650 */;
	struct device_node *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 649 */;
	u32 cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 647 */;
	struct of_phandle_args cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 619 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 576 */[];
	const struct dra7xx_pcie_of_data cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 571 */;
	void cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 505 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 498 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 460 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 424 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 423 */;
	struct resource *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 422 */;
	struct dw_pcie_ep *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 421 */;
	int cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 420 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 418 */;
	struct dra7xx_pcie *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 417 */;
	int __init cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 417 */;
	const struct dw_pcie_ep_ops cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 411 */;
	const struct pci_epc_features *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 405 */;
	const struct pci_epc_features cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 399 */;
	u16 cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 380 */;
	enum pci_epc_irq_type cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 380 */;
	u8 cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 379 */;
	enum pci_barno cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 354 */;
	irqreturn_t cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 291 */;
	void *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 291 */;
	unsigned long cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 265 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 231 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 223 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 222 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 218 */;
	u64 cocci_id/* drivers/pci/controller/dwc/pci-dra7xx.c 117 */;
}