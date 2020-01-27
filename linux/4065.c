cocci_test_suite() {
	u32 cocci_id/* drivers/irqchip/irq-mmp.c 72 */;
	struct icu_chip_data *cocci_id/* drivers/irqchip/irq-mmp.c 70 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-mmp.c 69 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-mmp.c 67 */;
	void cocci_id/* drivers/irqchip/irq-mmp.c 65 */(void);
	struct icu_chip_data cocci_id/* drivers/irqchip/irq-mmp.c 62 */[MAX_ICU_NR];
	void __iomem *cocci_id/* drivers/irqchip/irq-mmp.c 61 */;
	struct mmp_intc_conf {
		unsigned int conf_enable;
		unsigned int conf_disable;
		unsigned int conf_mask;
		unsigned int conf2_mask;
	} cocci_id/* drivers/irqchip/irq-mmp.c 53 */;
	u32 cocci_id/* drivers/irqchip/irq-mmp.c 487 */[4];
	struct device_node *cocci_id/* drivers/irqchip/irq-mmp.c 482 */;
	int __init cocci_id/* drivers/irqchip/irq-mmp.c 482 */;
	struct icu_chip_data {
		int nr_irqs;
		unsigned int virq_base;
		unsigned int cascade_irq;
		void __iomem *reg_status;
		void __iomem *reg_mask;
		unsigned int conf_enable;
		unsigned int conf_disable;
		unsigned int conf_mask;
		unsigned int conf2_mask;
		unsigned int clr_mfp_irq_base;
		unsigned int clr_mfp_hwirq;
		struct irq_domain *domain;
	} cocci_id/* drivers/irqchip/irq-mmp.c 38 */;
	int cocci_id/* drivers/irqchip/irq-mmp.c 250 */;
	void __init cocci_id/* drivers/irqchip/irq-mmp.c 248 */;
	void cocci_id/* drivers/irqchip/irq-mmp.c 248 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-mmp.c 236 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-mmp.c 236 */;
	struct mmp_intc_conf cocci_id/* drivers/irqchip/irq-mmp.c 217 */;
	const struct mmp_intc_conf cocci_id/* drivers/irqchip/irq-mmp.c 210 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-mmp.c 199 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-mmp.c 193 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-mmp.c 192 */;
	const u32 *cocci_id/* drivers/irqchip/irq-mmp.c 191 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-mmp.c 184 */;
	unsigned long cocci_id/* drivers/irqchip/irq-mmp.c 153 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-mmp.c 149 */;
	unsigned int cocci_id/* drivers/irqchip/irq-mmp.c 148 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-mmp.c 146 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-mmp.c 139 */;
}
