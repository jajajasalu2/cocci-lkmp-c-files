cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpio/gpio-tqmx86.c 80 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tqmx86.c 79 */;
	int cocci_id/* drivers/gpio/gpio-tqmx86.c 79 */;
	struct tqmx86_gpio_data *cocci_id/* drivers/gpio/gpio-tqmx86.c 57 */;
	struct tqmx86_gpio_data {
		struct gpio_chip chip;
		struct irq_chip irq_chip;
		void __iomem *io_base;
		int irq;
		raw_spinlock_t spinlock;
		u8 irq_type[TQMX86_NGPI];
	} cocci_id/* drivers/gpio/gpio-tqmx86.c 35 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-tqmx86.c 332 */;
	struct resource *cocci_id/* drivers/gpio/gpio-tqmx86.c 238 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-tqmx86.c 237 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-tqmx86.c 236 */;
	struct device *cocci_id/* drivers/gpio/gpio-tqmx86.c 233 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-tqmx86.c 231 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-tqmx86.c 221 */;
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-tqmx86.c 215 */;
	int __maybe_unused cocci_id/* drivers/gpio/gpio-tqmx86.c 210 */;
	u8 cocci_id/* drivers/gpio/gpio-tqmx86.c 187 */;
	unsigned long cocci_id/* drivers/gpio/gpio-tqmx86.c 185 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-tqmx86.c 184 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-tqmx86.c 180 */;
	void cocci_id/* drivers/gpio/gpio-tqmx86.c 180 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-tqmx86.c 110 */;
}
