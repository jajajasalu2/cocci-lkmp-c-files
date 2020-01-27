cocci_test_suite() {
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-ls-extirq.c 91 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-ls-extirq.c 76 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-ls-extirq.c 75 */;
	struct ls_extirq_data *cocci_id/* drivers/irqchip/irq-ls-extirq.c 74 */;
	void *cocci_id/* drivers/irqchip/irq-ls-extirq.c 72 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-ls-extirq.c 71 */;
	unsigned int cocci_id/* drivers/irqchip/irq-ls-extirq.c 71 */;
	int cocci_id/* drivers/irqchip/irq-ls-extirq.c 70 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-ls-extirq.c 59 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-ls-extirq.c 27 */;
	struct ls_extirq_data {
		struct regmap *syscon;
		u32 intpcr;
		bool bit_reverse;
		u32 nirq;
		struct irq_fwspec map[MAXIRQ];
	} cocci_id/* drivers/irqchip/irq-ls-extirq.c 18 */;
	u32 cocci_id/* drivers/irqchip/irq-ls-extirq.c 178 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-ls-extirq.c 144 */;
	int __init cocci_id/* drivers/irqchip/irq-ls-extirq.c 143 */;
	const __be32 *cocci_id/* drivers/irqchip/irq-ls-extirq.c 100 */;
}
