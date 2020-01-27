cocci_test_suite() {
	u32 cocci_id/* drivers/irqchip/irq-ixp4xx.c 76 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-ixp4xx.c 73 */;
	struct ixp4xx_irq cocci_id/* drivers/irqchip/irq-ixp4xx.c 59 */;
	struct ixp4xx_irq {
		void __iomem *irqbase;
		bool is_356;
		struct irq_chip irqchip;
		struct irq_domain *domain;
	} cocci_id/* drivers/irqchip/irq-ixp4xx.c 51 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-ixp4xx.c 368 */;
	const struct ixp4xx_irq_chunk *cocci_id/* drivers/irqchip/irq-ixp4xx.c 342 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-ixp4xx.c 312 */;
	struct fwnode_handle *cocci_id/* drivers/irqchip/irq-ixp4xx.c 311 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-ixp4xx.c 310 */;
	bool cocci_id/* drivers/irqchip/irq-ixp4xx.c 307 */;
	resource_size_t cocci_id/* drivers/irqchip/irq-ixp4xx.c 306 */;
	void __init cocci_id/* drivers/irqchip/irq-ixp4xx.c 306 */;
	int __init cocci_id/* drivers/irqchip/irq-ixp4xx.c 255 */;
	const struct ixp4xx_irq_chunk cocci_id/* drivers/irqchip/irq-ixp4xx.c 224 */[];
	struct ixp4xx_irq_chunk {
		int irq;
		int hwirq;
		int nr_irqs;
	} cocci_id/* drivers/irqchip/irq-ixp4xx.c 218 */;
	struct ixp4xx_irq *cocci_id/* drivers/irqchip/irq-ixp4xx.c 205 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-ixp4xx.c 203 */;
	void cocci_id/* drivers/irqchip/irq-ixp4xx.c 203 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-ixp4xx.c 192 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-ixp4xx.c 160 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-ixp4xx.c 158 */;
	void *cocci_id/* drivers/irqchip/irq-ixp4xx.c 155 */;
	unsigned int cocci_id/* drivers/irqchip/irq-ixp4xx.c 154 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-ixp4xx.c 132 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-ixp4xx.c 131 */;
	int cocci_id/* drivers/irqchip/irq-ixp4xx.c 113 */;
	unsigned long cocci_id/* drivers/irqchip/irq-ixp4xx.c 112 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-ixp4xx.c 109 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-ixp4xx.c 109 */;
}
