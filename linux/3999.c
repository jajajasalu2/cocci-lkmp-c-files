cocci_test_suite() {
	struct bcm6345_l1_cpu {
		void __iomem *map_base;
		unsigned int parent_irq;
		u32 enable_cache[];
	} cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 84 */;
	struct bcm6345_l1_chip {
		raw_spinlock_t lock;
		unsigned int n_words;
		struct irq_domain *domain;
		struct cpumask cpumask;
		struct bcm6345_l1_cpu *cpus[NR_CPUS];
	} cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 76 */;
	struct bcm6345_l1_cpu cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 74 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 297 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 287 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 280 */;
	struct bcm6345_l1_cpu *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 242 */;
	resource_size_t cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 241 */;
	struct resource cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 240 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 236 */;
	int __init cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 236 */;
	struct cpumask cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 205 */;
	bool cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 198 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 197 */;
	unsigned int cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 169 */;
	u32 cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 167 */;
	struct bcm6345_l1_chip *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 166 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 164 */;
	void cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 164 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 134 */;
	unsigned long cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 133 */;
	int cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 132 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 120 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-bcm6345-l1.c 116 */;
}
