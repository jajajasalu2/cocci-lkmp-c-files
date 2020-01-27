cocci_test_suite() {
	unsigned int *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 97 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 96 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 95 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 85 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 57 */;
	u32 cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 49 */;
	unsigned long cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 46 */;
	unsigned int cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 46 */;
	struct uniphier_aidet_priv *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 45 */;
	void cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 45 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 243 */;
	struct uniphier_aidet_priv {
		struct irq_domain *domain;
		void __iomem *reg_base;
		spinlock_t lock;
		u32 saved_vals[UNIPHIER_AIDET_NR_IRQS / 32];
	} cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 24 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 231 */[];
	const struct dev_pm_ops cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 226 */;
	int __maybe_unused cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 214 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 166 */;
	struct device *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 165 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 163 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 157 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 113 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 112 */;
	void *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 110 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 108 */;
	int cocci_id/* drivers/irqchip/irq-uniphier-aidet.c 108 */;
}
