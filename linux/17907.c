cocci_test_suite() {
	struct sabre_irq_data {
		unsigned long controller_regs;
		unsigned int pci_first_busno;
	} cocci_id/* arch/sparc/kernel/prom_irqtrans.c 93 */;
	u64 cocci_id/* arch/sparc/kernel/prom_irqtrans.c 85 */;
	struct irq_trans *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 817 */;
	const char *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 807 */;
	struct irq_trans __initdata cocci_id/* arch/sparc/kernel/prom_irqtrans.c 766 */[];
	struct irq_trans {
		const char *name;
		void (*init)(struct device_node *);
	} cocci_id/* arch/sparc/kernel/prom_irqtrans.c 760 */;
	u32 cocci_id/* arch/sparc/kernel/prom_irqtrans.c 726 */;
	unsigned long cocci_id/* arch/sparc/kernel/prom_irqtrans.c 725 */;
	struct resource *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 724 */;
	struct platform_device *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 723 */;
	void *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 720 */;
	unsigned int cocci_id/* arch/sparc/kernel/prom_irqtrans.c 718 */;
	const struct linux_prom_registers *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 653 */;
	unsigned long cocci_id/* arch/sparc/kernel/prom_irqtrans.c 590 */[];
	struct fire_irq_data cocci_id/* arch/sparc/kernel/prom_irqtrans.c 550 */;
	struct fire_irq_data *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 514 */;
	struct fire_irq_data {
		unsigned long pbm_regs;
		u32 portid;
	} cocci_id/* arch/sparc/kernel/prom_irqtrans.c 480 */;
	struct schizo_irq_data cocci_id/* arch/sparc/kernel/prom_irqtrans.c 435 */;
	struct of_irq_controller cocci_id/* arch/sparc/kernel/prom_irqtrans.c 432 */;
	struct schizo_irq_data *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 430 */;
	const struct linux_prom64_registers *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 429 */;
	int cocci_id/* arch/sparc/kernel/prom_irqtrans.c 427 */;
	struct device_node *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 426 */;
	void __init cocci_id/* arch/sparc/kernel/prom_irqtrans.c 426 */;
	struct schizo_irq_data {
		unsigned long pbm_regs;
		unsigned long sync_reg;
		u32 portid;
		int chip_version;
	} cocci_id/* arch/sparc/kernel/prom_irqtrans.c 371 */;
	unsigned char cocci_id/* arch/sparc/kernel/prom_irqtrans.c 355 */[64]
			__attribute__((aligned(64)));
	struct sabre_irq_data cocci_id/* arch/sparc/kernel/prom_irqtrans.c 278 */;
	const u32 *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 273 */;
	long cocci_id/* arch/sparc/kernel/prom_irqtrans.c 262 */;
	const struct linux_prom_pci_registers *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 227 */;
	struct sabre_irq_data *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 225 */;
	u16 *cocci_id/* arch/sparc/kernel/prom_irqtrans.c 135 */;
	u16 cocci_id/* arch/sparc/kernel/prom_irqtrans.c 122 */;
	void cocci_id/* arch/sparc/kernel/prom_irqtrans.c 114 */;
}
