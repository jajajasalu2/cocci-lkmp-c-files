cocci_test_suite() {
	u16 cocci_id/* drivers/irqchip/irq-renesas-rza1.c 57 */;
	void cocci_id/* drivers/irqchip/irq-renesas-rza1.c 54 */;
	struct rza1_irqc_priv *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 49 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 49 */;
	struct rza1_irqc_priv {
		struct device *dev;
		void __iomem *base;
		struct irq_chip chip;
		struct irq_domain *irq_domain;
		struct of_phandle_args map[IRQC_NUM_IRQ];
	} cocci_id/* drivers/irqchip/irq-renesas-rza1.c 41 */;
	void __exit cocci_id/* drivers/irqchip/irq-renesas-rza1.c 276 */;
	int __init cocci_id/* drivers/irqchip/irq-renesas-rza1.c 270 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-renesas-rza1.c 261 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-renesas-rza1.c 255 */[];
	struct platform_device *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 190 */;
	u32 cocci_id/* drivers/irqchip/irq-renesas-rza1.c 149 */;
	const __be32 *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 148 */;
	struct device *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 146 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 143 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-renesas-rza1.c 137 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 127 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 126 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-renesas-rza1.c 108 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 106 */;
	void *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 103 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-renesas-rza1.c 102 */;
	unsigned int cocci_id/* drivers/irqchip/irq-renesas-rza1.c 102 */;
	int cocci_id/* drivers/irqchip/irq-renesas-rza1.c 102 */;
}
