cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pci/controller/pci-ftpci100.c 578 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pci-ftpci100.c 566 */[];
	const struct faraday_pci_variant cocci_id/* drivers/pci/controller/pci-ftpci100.c 562 */;
	unsigned long cocci_id/* drivers/pci/controller/pci-ftpci100.c 509 */;
	unsigned char cocci_id/* drivers/pci/controller/pci-ftpci100.c 431 */;
	struct clk *cocci_id/* drivers/pci/controller/pci-ftpci100.c 430 */;
	struct resource *cocci_id/* drivers/pci/controller/pci-ftpci100.c 425 */;
	const struct faraday_pci_variant *cocci_id/* drivers/pci/controller/pci-ftpci100.c 423 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pci-ftpci100.c 420 */;
	u64 cocci_id/* drivers/pci/controller/pci-ftpci100.c 392 */;
	u32 cocci_id/* drivers/pci/controller/pci-ftpci100.c 389 */;
	u32 cocci_id/* drivers/pci/controller/pci-ftpci100.c 383 */[3];
	struct resource_entry *cocci_id/* drivers/pci/controller/pci-ftpci100.c 382 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/controller/pci-ftpci100.c 381 */;
	struct device *cocci_id/* drivers/pci/controller/pci-ftpci100.c 380 */;
	struct device_node *cocci_id/* drivers/pci/controller/pci-ftpci100.c 345 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pci-ftpci100.c 339 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/pci-ftpci100.c 331 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pci-ftpci100.c 330 */;
	int cocci_id/* drivers/pci/controller/pci-ftpci100.c 330 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pci-ftpci100.c 323 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/pci-ftpci100.c 306 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pci-ftpci100.c 303 */;
	unsigned int cocci_id/* drivers/pci/controller/pci-ftpci100.c 273 */;
	struct faraday_pci *cocci_id/* drivers/pci/controller/pci-ftpci100.c 272 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pci-ftpci100.c 270 */;
	void cocci_id/* drivers/pci/controller/pci-ftpci100.c 270 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pci-ftpci100.c 265 */;
	u32 *cocci_id/* drivers/pci/controller/pci-ftpci100.c 211 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pci-ftpci100.c 210 */;
	resource_size_t cocci_id/* drivers/pci/controller/pci-ftpci100.c 130 */;
	struct faraday_pci {
		struct device *dev;
		void __iomem *base;
		struct irq_domain *irqdomain;
		struct pci_bus *bus;
		struct clk *bus_clk;
	} cocci_id/* drivers/pci/controller/pci-ftpci100.c 122 */;
	struct faraday_pci_variant {
		bool cascaded_irq;
	} cocci_id/* drivers/pci/controller/pci-ftpci100.c 118 */;
}
