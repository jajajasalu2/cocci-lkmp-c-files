cocci_test_suite() {
	struct pci_dev *cocci_id/* arch/mips/pci/pci-ar2315.c 520 */;
	u8 cocci_id/* arch/mips/pci/pci-ar2315.c 513 */;
	const struct pci_dev *cocci_id/* arch/mips/pci/pci-ar2315.c 513 */;
	int __init cocci_id/* arch/mips/pci/pci-ar2315.c 507 */;
	void cocci_id/* arch/mips/pci/pci-ar2315.c 507 */;
	struct platform_driver cocci_id/* arch/mips/pci/pci-ar2315.c 500 */;
	struct resource *cocci_id/* arch/mips/pci/pci-ar2315.c 414 */;
	struct platform_device *cocci_id/* arch/mips/pci/pci-ar2315.c 410 */;
	struct irq_domain_ops cocci_id/* arch/mips/pci/pci-ar2315.c 388 */;
	irq_hw_number_t cocci_id/* arch/mips/pci/pci-ar2315.c 381 */;
	struct irq_domain *cocci_id/* arch/mips/pci/pci-ar2315.c 380 */;
	struct irq_chip cocci_id/* arch/mips/pci/pci-ar2315.c 373 */;
	struct irq_data *cocci_id/* arch/mips/pci/pci-ar2315.c 350 */;
	struct irq_desc *cocci_id/* arch/mips/pci/pci-ar2315.c 334 */;
	struct pci_ops cocci_id/* arch/mips/pci/pci-ar2315.c 302 */;
	u32 cocci_id/* arch/mips/pci/pci-ar2315.c 216 */;
	bool cocci_id/* arch/mips/pci/pci-ar2315.c 212 */;
	u32 *cocci_id/* arch/mips/pci/pci-ar2315.c 212 */;
	unsigned cocci_id/* arch/mips/pci/pci-ar2315.c 211 */;
	int cocci_id/* arch/mips/pci/pci-ar2315.c 211 */;
	struct ar2315_pci_ctrl cocci_id/* arch/mips/pci/pci-ar2315.c 187 */;
	struct pci_controller *cocci_id/* arch/mips/pci/pci-ar2315.c 185 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-ar2315.c 183 */;
	struct ar2315_pci_ctrl *cocci_id/* arch/mips/pci/pci-ar2315.c 183 */;
	phys_addr_t cocci_id/* arch/mips/pci/pci-ar2315.c 178 */;
	dma_addr_t cocci_id/* arch/mips/pci/pci-ar2315.c 178 */;
	struct device *cocci_id/* arch/mips/pci/pci-ar2315.c 178 */;
	struct ar2315_pci_ctrl {
		void __iomem *cfg_mem;
		void __iomem *mmr_mem;
		unsigned irq;
		unsigned irq_ext;
		struct irq_domain *domain;
		struct pci_controller pci_ctrl;
		struct resource mem_res;
		struct resource io_res;
	} cocci_id/* arch/mips/pci/pci-ar2315.c 155 */;
}
