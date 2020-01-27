cocci_test_suite() {
	struct max77620_gpio *cocci_id/* drivers/gpio/gpio-max77620.c 99 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-max77620.c 98 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-max77620.c 96 */;
	void cocci_id/* drivers/gpio/gpio-max77620.c 96 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-max77620.c 328 */;
	const struct platform_device_id cocci_id/* drivers/gpio/gpio-max77620.c 321 */[];
	unsigned long cocci_id/* drivers/gpio/gpio-max77620.c 30 */;
	struct max77620_chip *cocci_id/* drivers/gpio/gpio-max77620.c 265 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-max77620.c 263 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-max77620.c 26 */;
	void *cocci_id/* drivers/gpio/gpio-max77620.c 26 */;
	struct max77620_gpio {
		struct gpio_chip gpio_chip;
		struct regmap *rmap;
		struct device *dev;
		struct mutex buslock;
		unsigned int irq_type[8];
		bool irq_enabled[8];
	} cocci_id/* drivers/gpio/gpio-max77620.c 17 */;
	u8 cocci_id/* drivers/gpio/gpio-max77620.c 168 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-max77620.c 122 */;
	int cocci_id/* drivers/gpio/gpio-max77620.c 109 */;
	unsigned int cocci_id/* drivers/gpio/gpio-max77620.c 108 */;
}
