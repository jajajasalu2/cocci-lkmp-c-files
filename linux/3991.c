cocci_test_suite() {
	unsigned char cocci_id/* drivers/irqchip/irq-renesas-irqc.c 78 */;
	unsigned int cocci_id/* drivers/irqchip/irq-renesas-irqc.c 74 */;
	unsigned char cocci_id/* drivers/irqchip/irq-renesas-irqc.c 66 */[IRQ_TYPE_SENSE_MASK + 1];
	struct irqc_irq *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 61 */;
	char *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 61 */;
	void cocci_id/* drivers/irqchip/irq-renesas-irqc.c 61 */;
	struct irqc_priv *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 56 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 56 */;
	struct irqc_priv {
		void __iomem *iomem;
		void __iomem *cpu_int_base;
		struct irqc_irq irq[IRQC_IRQ_MAX];
		unsigned int number_of_irqs;
		struct device *dev;
		struct irq_chip_generic *gc;
		struct irq_domain *irq_domain;
		atomic_t wakeup_path;
	} cocci_id/* drivers/irqchip/irq-renesas-irqc.c 45 */;
	struct irqc_irq {
		int hw_irq;
		int requested_irq;
		struct irqc_priv *p;
	} cocci_id/* drivers/irqchip/irq-renesas-irqc.c 39 */;
	void __exit cocci_id/* drivers/irqchip/irq-renesas-irqc.c 263 */;
	int __init cocci_id/* drivers/irqchip/irq-renesas-irqc.c 257 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-renesas-irqc.c 247 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-renesas-irqc.c 241 */[];
	int __maybe_unused cocci_id/* drivers/irqchip/irq-renesas-irqc.c 229 */;
	struct resource *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 129 */;
	const char *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 127 */;
	struct device *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 126 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 124 */;
	u32 cocci_id/* drivers/irqchip/irq-renesas-irqc.c 111 */;
	irqreturn_t cocci_id/* drivers/irqchip/irq-renesas-irqc.c 107 */;
	void *cocci_id/* drivers/irqchip/irq-renesas-irqc.c 107 */;
	int cocci_id/* drivers/irqchip/irq-renesas-irqc.c 107 */;
}
