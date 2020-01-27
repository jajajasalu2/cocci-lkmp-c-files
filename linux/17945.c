cocci_test_suite() {
	struct pcic_ca2irq cocci_id/* arch/sparc/kernel/pcic.c 91 */[];
	void *cocci_id/* arch/sparc/kernel/pcic.c 822 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/pcic.c 805 */;
	unsigned int cocci_id/* arch/sparc/kernel/pcic.c 805 */;
	struct irq_chip cocci_id/* arch/sparc/kernel/pcic.c 798 */;
	struct irq_data *cocci_id/* arch/sparc/kernel/pcic.c 771 */;
	unsigned long cocci_id/* arch/sparc/kernel/pcic.c 766 */;
	int cocci_id/* arch/sparc/kernel/pcic.c 766 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/pcic.c 747 */;
	struct linux_pcic *cocci_id/* arch/sparc/kernel/pcic.c 705 */;
	void __init cocci_id/* arch/sparc/kernel/pcic.c 703 */;
	u32 cocci_id/* arch/sparc/kernel/pcic.c 686 */;
	struct pcic_sn2list {
		char *sysname;
		struct pcic_ca2irq *intmap;
		int mapdim;
	} cocci_id/* arch/sparc/kernel/pcic.c 66 */;
	struct resource *cocci_id/* arch/sparc/kernel/pcic.c 653 */;
	u16 cocci_id/* arch/sparc/kernel/pcic.c 646 */;
	struct pci_dev *cocci_id/* arch/sparc/kernel/pcic.c 644 */;
	struct pci_bus *cocci_id/* arch/sparc/kernel/pcic.c 602 */;
	struct pcic_ca2irq {
		unsigned char busno;
		unsigned char devfn;
		unsigned char pin;
		unsigned char irq;
		unsigned int force;
	} cocci_id/* arch/sparc/kernel/pcic.c 58 */;
	char cocci_id/* arch/sparc/kernel/pcic.c 536 */[64];
	struct pcic_ca2irq *cocci_id/* arch/sparc/kernel/pcic.c 533 */;
	struct pcidev_cookie cocci_id/* arch/sparc/kernel/pcic.c 468 */;
	struct pcidev_cookie *cocci_id/* arch/sparc/kernel/pcic.c 466 */;
	void cocci_id/* arch/sparc/kernel/pcic.c 466 */;
	struct linux_prom_pci_registers cocci_id/* arch/sparc/kernel/pcic.c 449 */[PROMREG_MAX];
	int __init cocci_id/* arch/sparc/kernel/pcic.c 410 */;
	struct linux_pbm_info *cocci_id/* arch/sparc/kernel/pcic.c 392 */;
	struct pcic_sn2list *cocci_id/* arch/sparc/kernel/pcic.c 370 */;
	int cocci_id/* arch/sparc/kernel/pcic.c 358 */[4];
	char *cocci_id/* arch/sparc/kernel/pcic.c 309 */;
	phandle cocci_id/* arch/sparc/kernel/pcic.c 293 */;
	struct linux_prom_registers cocci_id/* arch/sparc/kernel/pcic.c 290 */[PROMREG_MAX];
	struct pci_ops cocci_id/* arch/sparc/kernel/pcic.c 277 */;
	u32 *cocci_id/* arch/sparc/kernel/pcic.c 214 */;
	unsigned int cocci_id/* arch/sparc/kernel/pcic.c 171 */(struct platform_device *op,
								unsigned int real_irq);
	volatile int cocci_id/* arch/sparc/kernel/pcic.c 167 */;
	void __iomem *cocci_id/* arch/sparc/kernel/pcic.c 166 */;
	struct linux_pcic cocci_id/* arch/sparc/kernel/pcic.c 164 */;
	struct pcic_sn2list cocci_id/* arch/sparc/kernel/pcic.c 150 */[];
}
