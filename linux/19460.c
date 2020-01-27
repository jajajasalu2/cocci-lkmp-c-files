cocci_test_suite() {
	struct rt3883_pci_controller cocci_id/* arch/mips/pci/pci-rt3883.c 77 */;
	struct pci_controller *cocci_id/* arch/mips/pci/pci-rt3883.c 74 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-rt3883.c 72 */;
	struct rt3883_pci_controller *cocci_id/* arch/mips/pci/pci-rt3883.c 71 */;
	int __init cocci_id/* arch/mips/pci/pci-rt3883.c 585 */;
	void cocci_id/* arch/mips/pci/pci-rt3883.c 585 */;
	struct rt3883_pci_controller {
		void __iomem *base;
		struct device_node *intc_of_node;
		struct irq_domain *irq_domain;
		struct pci_controller pci_controller;
		struct resource io_res;
		struct resource mem_res;
		bool pcie_ready;
	} cocci_id/* arch/mips/pci/pci-rt3883.c 58 */;
	struct platform_driver cocci_id/* arch/mips/pci/pci-rt3883.c 577 */;
	const struct of_device_id cocci_id/* arch/mips/pci/pci-rt3883.c 572 */[];
	struct pci_dev *cocci_id/* arch/mips/pci/pci-rt3883.c 567 */;
	u8 cocci_id/* arch/mips/pci/pci-rt3883.c 562 */;
	const struct pci_dev *cocci_id/* arch/mips/pci/pci-rt3883.c 562 */;
	int cocci_id/* arch/mips/pci/pci-rt3883.c 562 */;
	struct resource *cocci_id/* arch/mips/pci/pci-rt3883.c 413 */;
	struct device_node *cocci_id/* arch/mips/pci/pci-rt3883.c 412 */;
	struct platform_device *cocci_id/* arch/mips/pci/pci-rt3883.c 408 */;
	struct pci_ops cocci_id/* arch/mips/pci/pci-rt3883.c 300 */;
	u32 cocci_id/* arch/mips/pci/pci-rt3883.c 233 */;
	unsigned long cocci_id/* arch/mips/pci/pci-rt3883.c 232 */;
	u32 *cocci_id/* arch/mips/pci/pci-rt3883.c 229 */;
	unsigned int cocci_id/* arch/mips/pci/pci-rt3883.c 228 */;
	struct device *cocci_id/* arch/mips/pci/pci-rt3883.c 200 */;
	const struct irq_domain_ops cocci_id/* arch/mips/pci/pci-rt3883.c 195 */;
	irq_hw_number_t cocci_id/* arch/mips/pci/pci-rt3883.c 187 */;
	struct irq_domain *cocci_id/* arch/mips/pci/pci-rt3883.c 186 */;
	struct irq_chip cocci_id/* arch/mips/pci/pci-rt3883.c 179 */;
	struct irq_data *cocci_id/* arch/mips/pci/pci-rt3883.c 166 */;
	unsigned cocci_id/* arch/mips/pci/pci-rt3883.c 144 */;
	struct irq_desc *cocci_id/* arch/mips/pci/pci-rt3883.c 128 */;
}
