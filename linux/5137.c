cocci_test_suite() {
	struct xgene_gpio_sb {
		struct gpio_chip gc;
		void __iomem *regs;
		struct irq_domain *irq_domain;
		u16 irq_start;
		u16 nirq;
		u16 parent_irq_base;
	} cocci_id/* drivers/gpio/gpio-xgene-sb.c 49 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-xgene-sb.c 328 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-xgene-sb.c 321 */[];
	const struct of_device_id cocci_id/* drivers/gpio/gpio-xgene-sb.c 314 */[];
	void __iomem *cocci_id/* drivers/gpio/gpio-xgene-sb.c 221 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-xgene-sb.c 217 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-xgene-sb.c 209 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-xgene-sb.c 183 */;
	struct irq_fwspec cocci_id/* drivers/gpio/gpio-xgene-sb.c 181 */;
	struct irq_fwspec *cocci_id/* drivers/gpio/gpio-xgene-sb.c 180 */;
	void *cocci_id/* drivers/gpio/gpio-xgene-sb.c 178 */;
	unsigned int cocci_id/* drivers/gpio/gpio-xgene-sb.c 177 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-xgene-sb.c 164 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-xgene-sb.c 163 */;
	void cocci_id/* drivers/gpio/gpio-xgene-sb.c 150 */;
	u32 cocci_id/* drivers/gpio/gpio-xgene-sb.c 134 */;
	struct xgene_gpio_sb *cocci_id/* drivers/gpio/gpio-xgene-sb.c 133 */;
	bool cocci_id/* drivers/gpio/gpio-xgene-sb.c 131 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-xgene-sb.c 130 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-xgene-sb.c 129 */;
	int cocci_id/* drivers/gpio/gpio-xgene-sb.c 129 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-xgene-sb.c 113 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-xgene-sb.c 105 */;
}
