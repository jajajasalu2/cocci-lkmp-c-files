cocci_test_suite() {
	struct pci_controller *cocci_id/* arch/mips/pci/pci-ar724x.c 67 */;
	u32 cocci_id/* arch/mips/pci/pci-ar724x.c 58 */;
	bool cocci_id/* arch/mips/pci/pci-ar724x.c 56 */;
	struct ar724x_pci_controller *cocci_id/* arch/mips/pci/pci-ar724x.c 56 */;
	int __init cocci_id/* arch/mips/pci/pci-ar724x.c 445 */;
	struct platform_driver cocci_id/* arch/mips/pci/pci-ar724x.c 438 */;
	struct ar724x_pci_controller {
		void __iomem *devcfg_base;
		void __iomem *ctrl_base;
		void __iomem *crp_base;
		int irq;
		int irq_base;
		bool link_up;
		bool bar0_is_cached;
		u32 bar0_value;
		struct pci_controller pci_controller;
		struct resource io_res;
		struct resource mem_res;
	} cocci_id/* arch/mips/pci/pci-ar724x.c 39 */;
	struct ar724x_pci_controller cocci_id/* arch/mips/pci/pci-ar724x.c 370 */;
	struct resource *cocci_id/* arch/mips/pci/pci-ar724x.c 363 */;
	struct platform_device *cocci_id/* arch/mips/pci/pci-ar724x.c 360 */;
	int cocci_id/* arch/mips/pci/pci-ar724x.c 332 */;
	void cocci_id/* arch/mips/pci/pci-ar724x.c 329 */;
	struct irq_chip cocci_id/* arch/mips/pci/pci-ar724x.c 298 */;
	struct irq_data *cocci_id/* arch/mips/pci/pci-ar724x.c 269 */;
	void __iomem *cocci_id/* arch/mips/pci/pci-ar724x.c 232 */;
	struct irq_desc *cocci_id/* arch/mips/pci/pci-ar724x.c 229 */;
	struct pci_ops cocci_id/* arch/mips/pci/pci-ar724x.c 224 */;
	uint32_t cocci_id/* arch/mips/pci/pci-ar724x.c 161 */;
	uint32_t *cocci_id/* arch/mips/pci/pci-ar724x.c 114 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-ar724x.c 113 */;
	unsigned int cocci_id/* arch/mips/pci/pci-ar724x.c 113 */;
}
