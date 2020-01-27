cocci_test_suite() {
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-clps711x.c 93 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-clps711x.c 91 */;
	void cocci_id/* drivers/irqchip/irq-clps711x.c 91 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-clps711x.c 72 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-clps711x.c 72 */;
	struct {
		void __iomem *base;
		void __iomem *intmr[3];
		void __iomem *intsr[3];
		struct irq_domain *domain;
		struct irq_domain_ops ops;
	} *cocci_id/* drivers/irqchip/irq-clps711x.c 64 */;
	const struct {
#define CLPS711X_FLAG_EN (1 << 0)
#define CLPS711X_FLAG_FIQ (1 << 1)
				unsigned int flags;
		phys_addr_t eoi;
	} cocci_id/* drivers/irqchip/irq-clps711x.c 36 */[];
	struct resource cocci_id/* drivers/irqchip/irq-clps711x.c 224 */;
	void __init cocci_id/* drivers/irqchip/irq-clps711x.c 215 */;
	int cocci_id/* drivers/irqchip/irq-clps711x.c 156 */;
	resource_size_t cocci_id/* drivers/irqchip/irq-clps711x.c 154 */;
	phys_addr_t cocci_id/* drivers/irqchip/irq-clps711x.c 154 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-clps711x.c 153 */;
	int __init cocci_id/* drivers/irqchip/irq-clps711x.c 153 */;
	irq_flow_handler_t cocci_id/* drivers/irqchip/irq-clps711x.c 130 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-clps711x.c 127 */;
	unsigned int cocci_id/* drivers/irqchip/irq-clps711x.c 127 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-clps711x.c 120 */;
	u32 cocci_id/* drivers/irqchip/irq-clps711x.c 102 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-clps711x.c 101 */;
}
