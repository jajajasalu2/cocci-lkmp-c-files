cocci_test_suite() {
	bool cocci_id/* drivers/irqchip/exynos-combiner.c 96 */;
	const struct cpumask *cocci_id/* drivers/irqchip/exynos-combiner.c 96 */;
	unsigned long cocci_id/* drivers/irqchip/exynos-combiner.c 70 */;
	struct irq_chip *cocci_id/* drivers/irqchip/exynos-combiner.c 68 */;
	struct irq_desc *cocci_id/* drivers/irqchip/exynos-combiner.c 65 */;
	void cocci_id/* drivers/irqchip/exynos-combiner.c 65 */;
	u32 cocci_id/* drivers/irqchip/exynos-combiner.c 53 */;
	struct combiner_chip_data *cocci_id/* drivers/irqchip/exynos-combiner.c 45 */;
	struct irq_data *cocci_id/* drivers/irqchip/exynos-combiner.c 43 */;
	void __iomem *cocci_id/* drivers/irqchip/exynos-combiner.c 43 */;
	struct irq_domain *cocci_id/* drivers/irqchip/exynos-combiner.c 40 */;
	struct combiner_chip_data {
		unsigned int hwirq_offset;
		unsigned int irq_mask;
		void __iomem *base;
		unsigned int parent_irq;
#ifdef CONFIG_PM
		u32 pm_save;
#endif
	} cocci_id/* drivers/irqchip/exynos-combiner.c 29 */;
	int __init cocci_id/* drivers/irqchip/exynos-combiner.c 252 */;
	struct syscore_ops cocci_id/* drivers/irqchip/exynos-combiner.c 247 */;
	int cocci_id/* drivers/irqchip/exynos-combiner.c 176 */;
	struct device_node *cocci_id/* drivers/irqchip/exynos-combiner.c 174 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/exynos-combiner.c 168 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/exynos-combiner.c 157 */;
	unsigned int *cocci_id/* drivers/irqchip/exynos-combiner.c 142 */;
	unsigned long *cocci_id/* drivers/irqchip/exynos-combiner.c 141 */;
	const u32 *cocci_id/* drivers/irqchip/exynos-combiner.c 140 */;
	unsigned int cocci_id/* drivers/irqchip/exynos-combiner.c 119 */;
	void __init cocci_id/* drivers/irqchip/exynos-combiner.c 118 */;
	struct irq_chip cocci_id/* drivers/irqchip/exynos-combiner.c 109 */;
}
