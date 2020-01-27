cocci_test_suite() {
	u32 cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 90 */;
	bool cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 76 */;
	struct uniphier_pcie_priv {
		void __iomem *base;
		struct dw_pcie pci;
		struct clk *clk;
		struct reset_control *rst;
		struct phy *phy;
		struct irq_domain *legacy_irq_domain;
	} cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 64 */;
	struct platform_driver cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 474 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 468 */[];
	struct resource *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 418 */;
	const struct dw_pcie_ops cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 408 */;
	void cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 400 */;
	struct device *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 346 */;
	struct pcie_port *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 345 */;
	struct dw_pcie *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 344 */;
	struct platform_device *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 342 */;
	struct uniphier_pcie_priv *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 341 */;
	int cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 341 */;
	const struct dw_pcie_host_ops cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 337 */;
	struct device_node *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 281 */;
	unsigned long cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 246 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 245 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 240 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 236 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 227 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 226 */;
	unsigned int cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 226 */;
	struct irq_chip cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 219 */;
	struct irq_data *cocci_id/* drivers/pci/controller/dwc/pcie-uniphier.c 180 */;
}
