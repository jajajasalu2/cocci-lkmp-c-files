cocci_test_suite() {
	struct pdc_intc_priv {
		unsigned int nr_perips;
		unsigned int nr_syswakes;
		unsigned int *perip_irqs;
		unsigned int syswake_irq;
		struct irq_domain *domain;
		void __iomem *pdc_base;
		u32 irq_route;
		raw_spinlock_t lock;
	} cocci_id/* drivers/irqchip/irq-imgpdc.c 77 */;
	int __init cocci_id/* drivers/irqchip/irq-imgpdc.c 493 */;
	void cocci_id/* drivers/irqchip/irq-imgpdc.c 493 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-imgpdc.c 484 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-imgpdc.c 479 */[];
	u32 cocci_id/* drivers/irqchip/irq-imgpdc.c 305 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-imgpdc.c 302 */;
	struct resource *cocci_id/* drivers/irqchip/irq-imgpdc.c 301 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-imgpdc.c 300 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-imgpdc.c 297 */;
	int cocci_id/* drivers/irqchip/irq-imgpdc.c 297 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-imgpdc.c 222 */;
	struct pdc_intc_priv *cocci_id/* drivers/irqchip/irq-imgpdc.c 120 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-imgpdc.c 120 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-imgpdc.c 105 */;
	unsigned int cocci_id/* drivers/irqchip/irq-imgpdc.c 105 */;
}
