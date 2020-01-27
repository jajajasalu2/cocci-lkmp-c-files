cocci_test_suite() {
	struct msi_msg *cocci_id/* drivers/pci/controller/pcie-tango.c 88 */;
	bool cocci_id/* drivers/pci/controller/pcie-tango.c 83 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/pcie-tango.c 82 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/pcie-tango.c 335 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pcie-tango.c 306 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pcie-tango.c 301 */[];
	struct irq_chip *cocci_id/* drivers/pci/controller/pcie-tango.c 27 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pcie-tango.c 25 */;
	struct of_pci_range cocci_id/* drivers/pci/controller/pcie-tango.c 243 */;
	struct of_pci_range_parser cocci_id/* drivers/pci/controller/pcie-tango.c 242 */;
	struct fwnode_handle *cocci_id/* drivers/pci/controller/pcie-tango.c 240 */;
	struct resource *cocci_id/* drivers/pci/controller/pcie-tango.c 239 */;
	struct device *cocci_id/* drivers/pci/controller/pcie-tango.c 237 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pcie-tango.c 235 */;
	void __iomem *cocci_id/* drivers/pci/controller/pcie-tango.c 221 */;
	struct pci_ecam_ops cocci_id/* drivers/pci/controller/pcie-tango.c 210 */;
	u32 cocci_id/* drivers/pci/controller/pcie-tango.c 197 */;
	struct tango_pcie *cocci_id/* drivers/pci/controller/pcie-tango.c 177 */;
	struct pci_config_window *cocci_id/* drivers/pci/controller/pcie-tango.c 176 */;
	u32 *cocci_id/* drivers/pci/controller/pcie-tango.c 174 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pcie-tango.c 173 */;
	unsigned int cocci_id/* drivers/pci/controller/pcie-tango.c 173 */;
	int cocci_id/* drivers/pci/controller/pcie-tango.c 173 */;
	struct tango_pcie {
	DECLARE_BITMAP(used_msi,MSI_MAX)
		;
		u64 msi_doorbell;
		spinlock_t used_msi_lock;
		void __iomem *base;
		struct irq_domain *dom;
	} cocci_id/* drivers/pci/controller/pcie-tango.c 17 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pcie-tango.c 168 */;
	unsigned long cocci_id/* drivers/pci/controller/pcie-tango.c 139 */;
	void *cocci_id/* drivers/pci/controller/pcie-tango.c 136 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pcie-tango.c 135 */;
	struct msi_domain_info cocci_id/* drivers/pci/controller/pcie-tango.c 128 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pcie-tango.c 121 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pcie-tango.c 104 */;
	void cocci_id/* drivers/pci/controller/pcie-tango.c 104 */;
}
