cocci_test_suite() {
	int cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 94 */;
	struct ingenic_tcu *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 91 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 86 */;
	int __init cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 86 */;
	u32 cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 65 */;
	struct regmap *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 64 */;
	struct irq_chip_type *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 63 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 62 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 60 */;
	void cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 60 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 40 */;
	unsigned int cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 31 */;
	uint32_t cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 30 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 27 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 26 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 24 */;
	struct ingenic_tcu {
		struct regmap *map;
		struct clk *clk;
		struct irq_domain *domain;
		unsigned int nb_parent_irqs;
		u32 parent_irqs[3];
	} cocci_id/* drivers/irqchip/irq-ingenic-tcu.c 16 */;
}
