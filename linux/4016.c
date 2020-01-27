cocci_test_suite() {
	void cocci_id/* drivers/irqchip/irq-vic.c 99 */;
	void cocci_id/* drivers/irqchip/irq-vic.c 77 */(struct pt_regs *regs);
	struct vic_device cocci_id/* drivers/irqchip/irq-vic.c 73 */[CONFIG_ARM_VIC_NR];
	struct vic_device {
		void __iomem *base;
		int irq;
		u32 valid_sources;
		u32 resume_sources;
		u32 resume_irqs;
		u32 int_select;
		u32 int_enable;
		u32 soft_int;
		u32 protect;
		struct irq_domain *domain;
	} cocci_id/* drivers/irqchip/irq-vic.c 59 */;
	int __init cocci_id/* drivers/irqchip/irq-vic.c 493 */;
	enum amba_vendor cocci_id/* drivers/irqchip/irq-vic.c 437 */;
	unsigned int cocci_id/* drivers/irqchip/irq-vic.c 435 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-vic.c 433 */;
	u32 cocci_id/* drivers/irqchip/irq-vic.c 432 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-vic.c 431 */;
	int cocci_id/* drivers/irqchip/irq-vic.c 431 */;
	void __init cocci_id/* drivers/irqchip/irq-vic.c 431 */;
	unsigned long cocci_id/* drivers/irqchip/irq-vic.c 405 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-vic.c 303 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-vic.c 245 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-vic.c 235 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-vic.c 218 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-vic.c 215 */;
	struct vic_device *cocci_id/* drivers/irqchip/irq-vic.c 201 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-vic.c 201 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-vic.c 182 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-vic.c 181 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-vic.c 179 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-vic.c 157 */;
}
