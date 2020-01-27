cocci_test_suite() {
	const struct cpumask *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 94 */;
	struct ls_scfg_msi *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 87 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 85 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 85 */;
	void cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 85 */;
	char *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 74 */;
	int __init cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 74 */;
	struct msi_domain_info cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 65 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 59 */;
	struct ls_scfg_msi {
		spinlock_t lock;
		struct platform_device *pdev;
		struct irq_domain *parent;
		struct irq_domain *msi_domain;
		void __iomem *regs;
		phys_addr_t msiir_addr;
		struct ls_scfg_msi_cfg *cfg;
		u32 msir_num;
		struct ls_scfg_msir *msir;
		u32 irqs_num;
		unsigned long *used;
	} cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 45 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 425 */;
	u32 cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 382 */;
	struct ls_scfg_msi_cfg *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 352 */;
	struct ls_scfg_msir {
		struct ls_scfg_msi *msi_data;
		unsigned int index;
		unsigned int gic_irq;
		unsigned int bit_start;
		unsigned int bit_end;
		unsigned int srs;
		void __iomem *reg;
	} cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 35 */;
	struct resource *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 341 */;
	const struct of_device_id *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 339 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 337 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 323 */[];
	struct ls_scfg_msi_cfg cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 305 */;
	struct ls_scfg_msi_cfg {
		u32 ibs_shift;
		u32 msir_irqs;
		u32 msir_base;
	} cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 29 */;
	unsigned long cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 196 */;
	struct ls_scfg_msir *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 194 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 192 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 187 */;
	msi_alloc_info_t *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 141 */;
	void *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 139 */;
	unsigned int cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 137 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 136 */;
	int cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 136 */;
	bool cocci_id/* drivers/irqchip/irq-ls-scfg-msi.c 104 */;
}
