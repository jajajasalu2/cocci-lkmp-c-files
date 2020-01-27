cocci_test_suite() {
	u32 cocci_id/* drivers/pci/controller/pcie-altera-msi.c 94 */;
	phys_addr_t cocci_id/* drivers/pci/controller/pcie-altera-msi.c 94 */;
	struct msi_msg *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 91 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 91 */;
	void cocci_id/* drivers/pci/controller/pcie-altera-msi.c 91 */;
	struct msi_domain_info cocci_id/* drivers/pci/controller/pcie-altera-msi.c 85 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 54 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 52 */;
	const u32 cocci_id/* drivers/pci/controller/pcie-altera-msi.c 47 */;
	void __exit cocci_id/* drivers/pci/controller/pcie-altera-msi.c 293 */;
	int __init cocci_id/* drivers/pci/controller/pcie-altera-msi.c 288 */;
	struct altera_msi {
	DECLARE_BITMAP(used,MAX_MSI_VECTORS)
		;
		struct mutex lock;
		struct platform_device *pdev;
		struct irq_domain *msi_domain;
		struct irq_domain *inner_domain;
		void __iomem *csr_base;
		void __iomem *vector_base;
		phys_addr_t vector_phy;
		u32 num_of_vectors;
		int irq;
	} cocci_id/* drivers/pci/controller/pcie-altera-msi.c 28 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pcie-altera-msi.c 279 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pcie-altera-msi.c 274 */[];
	struct altera_msi cocci_id/* drivers/pci/controller/pcie-altera-msi.c 223 */;
	struct resource *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 220 */;
	struct device_node *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 219 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 216 */;
	struct fwnode_handle *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 176 */;
	struct altera_msi *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 174 */;
	int cocci_id/* drivers/pci/controller/pcie-altera-msi.c 174 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pcie-altera-msi.c 169 */;
	unsigned long cocci_id/* drivers/pci/controller/pcie-altera-msi.c 120 */;
	void *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 117 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 116 */;
	unsigned int cocci_id/* drivers/pci/controller/pcie-altera-msi.c 116 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pcie-altera-msi.c 110 */;
	bool cocci_id/* drivers/pci/controller/pcie-altera-msi.c 105 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/pcie-altera-msi.c 105 */;
}
