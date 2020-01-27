cocci_test_suite() {
	struct bcm7038_l1_cpu {
		void __iomem *map_base;
		u32 mask_cache[0];
	} cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 51 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 414 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 399 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 398 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 385 */;
	struct bcm7038_l1_chip {
		raw_spinlock_t lock;
		unsigned int n_words;
		struct irq_domain *domain;
		struct bcm7038_l1_cpu *cpus[NR_CPUS];
#ifdef CONFIG_PM_SLEEP
		struct list_head list;
		u32 wake_mask[MAX_WORDS];
#endif
		u32 irq_fwd_mask[MAX_WORDS];
		u8 affinity[MAX_WORDS * IRQS_PER_WORD];
	} cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 38 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 362 */;
	struct bcm7038_l1_cpu cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 36 */;
	struct bcm7038_l1_cpu *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 256 */;
	resource_size_t cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 255 */;
	struct resource cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 254 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 250 */;
	int __init cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 250 */;
	cpumask_t cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 228 */;
	int cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 227 */;
	struct cpumask *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 226 */;
	bool cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 198 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 197 */;
	u32 cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 168 */;
	struct bcm7038_l1_chip *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 167 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 165 */;
	unsigned int cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 165 */;
	void cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 165 */;
	unsigned long cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 137 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 124 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 120 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-bcm7038-l1.c 104 */;
}
