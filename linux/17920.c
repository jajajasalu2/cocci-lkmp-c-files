cocci_test_suite() {
	struct grpci1_priv {
		struct leon_pci_info info;
		struct grpci1_regs __iomem *regs;
		struct device *dev;
		int pci_err_mask;
		int irq;
		unsigned char irq_map[4];
		unsigned int irq_err;
		unsigned long pci_area;
		unsigned long pci_area_end;
		unsigned long pci_io;
		unsigned long pci_conf;
		unsigned long pci_conf_end;
		unsigned long pci_io_va;
	} cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 82 */;
	int __init cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 717 */;
	struct platform_driver cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 709 */;
	const struct of_device_id cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 699 */[]__initconst;
	void __iomem *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 694 */;
	struct resource *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 518 */;
	const int *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 516 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 511 */;
	irqreturn_t cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 476 */;
	unsigned long cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 430 */;
	struct grpci1_regs __iomem *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 424 */;
	void cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 421 */;
	void *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 407 */;
	unsigned int cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 396 */;
	struct grpci1_regs {
		unsigned int cfg_stat;
		unsigned int bar0;
		unsigned int page0;
		unsigned int bar1;
		unsigned int page1;
		unsigned int iomap;
		unsigned int stat_cmd;
		unsigned int irq;
	} cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 37 */;
	struct irq_desc *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 361 */;
	struct irq_chip cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 352 */;
	struct irq_data *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 315 */;
	struct pci_ops cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 305 */;
	struct pci_bus *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 239 */;
	unsigned int *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 182 */;
	u32 cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 157 */;
	u32 *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 155 */;
	struct grpci1_priv *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 154 */;
	int cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 154 */;
	u8 cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 105 */;
	const struct pci_dev *cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 105 */;
	int cocci_id/* arch/sparc/kernel/leon_pci_grpci1.c 102 */(struct grpci1_priv *priv,
								  unsigned int bus,
								  unsigned int devfn,
								  int where,
								  u32 val);
}
