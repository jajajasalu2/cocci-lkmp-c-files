cocci_test_suite() {
	struct em_gio_priv *cocci_id/* drivers/gpio/gpio-em.c 77 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-em.c 75 */;
	void __exit cocci_id/* drivers/gpio/gpio-em.c 383 */;
	int __init cocci_id/* drivers/gpio/gpio-em.c 377 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-em.c 369 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-em.c 363 */[];
	int cocci_id/* drivers/gpio/gpio-em.c 277 */[2];
	const char *cocci_id/* drivers/gpio/gpio-em.c 275 */;
	struct device *cocci_id/* drivers/gpio/gpio-em.c 274 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-em.c 273 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-em.c 269 */;
	void *cocci_id/* drivers/gpio/gpio-em.c 262 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-em.c 257 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-em.c 246 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-em.c 245 */;
	struct em_gio_priv {
		void __iomem *base0;
		void __iomem *base1;
		spinlock_t sense_lock;
		struct platform_device *pdev;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		struct irq_domain *irq_domain;
	} cocci_id/* drivers/gpio/gpio-em.c 23 */;
	unsigned cocci_id/* drivers/gpio/gpio-em.c 200 */;
	int cocci_id/* drivers/gpio/gpio-em.c 200 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-em.c 199 */;
	unsigned int cocci_id/* drivers/gpio/gpio-em.c 199 */;
	void cocci_id/* drivers/gpio/gpio-em.c 199 */;
	unsigned long cocci_id/* drivers/gpio/gpio-em.c 170 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-em.c 167 */;
	unsigned char cocci_id/* drivers/gpio/gpio-em.c 124 */;
	unsigned char cocci_id/* drivers/gpio/gpio-em.c 114 */[IRQ_TYPE_SENSE_MASK + 1];
}
