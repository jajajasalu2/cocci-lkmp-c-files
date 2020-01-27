cocci_test_suite() {
	void __iomem *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 78 */;
	struct intc_irqpin_config {
		unsigned int irlm_bit;
		unsigned needs_irlm:1;
	} cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 73 */;
	struct intc_irqpin_priv {
		struct intc_irqpin_iomem iomem[INTC_IRQPIN_REG_NR];
		struct intc_irqpin_irq irq[INTC_IRQPIN_MAX];
		unsigned int sense_bitfield_width;
		struct platform_device *pdev;
		struct irq_chip irq_chip;
		struct irq_domain *irq_domain;
		atomic_t wakeup_path;
		unsigned shared_irqs:1;
		u8 shared_irq_mask;
	} cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 61 */;
	void __exit cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 603 */;
	int __init cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 597 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 587 */;
	int __maybe_unused cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 575 */;
	struct intc_irqpin_irq {
		int hw_irq;
		int requested_irq;
		int domain_irq;
		struct intc_irqpin_priv *p;
	} cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 54 */;
	struct intc_irqpin_iomem {
		void __iomem *iomem;
		unsigned long (*read)(void __iomem *iomem);
		void (*write)(void __iomem *iomem, unsigned long data);
		int width;
	} cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 47 */;
	bool cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 385 */;
	const char *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 384 */;
	void (*cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 382 */)(struct irq_data *d);
	struct irq_chip *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 381 */;
	struct resource *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 380 */;
	struct resource *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 379 */[INTC_IRQPIN_REG_NR];
	struct intc_irqpin_iomem *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 378 */;
	struct device *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 376 */;
	const struct intc_irqpin_config *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 375 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 373 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 359 */[];
	const struct intc_irqpin_config cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 350 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 345 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 330 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 329 */;
	unsigned int cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 329 */;
	struct lock_class_key cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 324 */;
	irqreturn_t cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 283 */;
	void *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 283 */;
	unsigned char cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 259 */;
	unsigned char cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 249 */[IRQ_TYPE_SENSE_MASK + 1];
	struct irq_data *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 188 */;
	struct intc_irqpin_irq *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 173 */;
	char *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 173 */;
	void cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 173 */;
	int cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 115 */;
	struct intc_irqpin_priv *cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 114 */;
	unsigned long cocci_id/* drivers/irqchip/irq-renesas-intc-irqpin.c 114 */;
}
