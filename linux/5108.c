cocci_test_suite() {
	struct uniphier_gpio_priv *cocci_id/* drivers/gpio/gpio-uniphier.c 76 */;
	u32 cocci_id/* drivers/gpio/gpio-uniphier.c 74 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-uniphier.c 73 */;
	void cocci_id/* drivers/gpio/gpio-uniphier.c 73 */;
	unsigned long cocci_id/* drivers/gpio/gpio-uniphier.c 62 */;
	u32 *cocci_id/* drivers/gpio/gpio-uniphier.c 53 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-uniphier.c 53 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-uniphier.c 482 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-uniphier.c 476 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-uniphier.c 471 */;
	const u32 *cocci_id/* drivers/gpio/gpio-uniphier.c 451 */;
	int __maybe_unused cocci_id/* drivers/gpio/gpio-uniphier.c 447 */;
	unsigned int cocci_id/* drivers/gpio/gpio-uniphier.c 36 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-uniphier.c 344 */;
	struct device *cocci_id/* drivers/gpio/gpio-uniphier.c 339 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-uniphier.c 337 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-uniphier.c 312 */;
	bool cocci_id/* drivers/gpio/gpio-uniphier.c 295 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-uniphier.c 295 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-uniphier.c 294 */;
	struct uniphier_gpio_priv {
		struct gpio_chip chip;
		struct irq_chip irq_chip;
		struct irq_domain *domain;
		void __iomem *regs;
		spinlock_t lock;
		u32 saved_vals[0];
	} cocci_id/* drivers/gpio/gpio-uniphier.c 27 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-uniphier.c 264 */;
	struct irq_fwspec cocci_id/* drivers/gpio/gpio-uniphier.c 263 */;
	void *cocci_id/* drivers/gpio/gpio-uniphier.c 260 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-uniphier.c 246 */;
	struct irq_fwspec *cocci_id/* drivers/gpio/gpio-uniphier.c 245 */;
	const __be32 *cocci_id/* drivers/gpio/gpio-uniphier.c 222 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-uniphier.c 221 */;
	int cocci_id/* drivers/gpio/gpio-uniphier.c 119 */;
}
