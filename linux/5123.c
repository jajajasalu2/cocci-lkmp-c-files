cocci_test_suite() {
	struct lp_gpio {
		struct gpio_chip chip;
		struct platform_device *pdev;
		spinlock_t lock;
		unsigned long reg_base;
	} cocci_id/* drivers/gpio/gpio-lynxpoint.c 47 */;
	void __exit cocci_id/* drivers/gpio/gpio-lynxpoint.c 460 */;
	void cocci_id/* drivers/gpio/gpio-lynxpoint.c 460 */;
	int __init cocci_id/* drivers/gpio/gpio-lynxpoint.c 455 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-lynxpoint.c 445 */;
	const struct acpi_device_id cocci_id/* drivers/gpio/gpio-lynxpoint.c 432 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-lynxpoint.c 426 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-lynxpoint.c 372 */;
	unsigned int cocci_id/* drivers/gpio/gpio-lynxpoint.c 350 */;
	struct lp_gpio cocci_id/* drivers/gpio/gpio-lynxpoint.c 330 */;
	struct device *cocci_id/* drivers/gpio/gpio-lynxpoint.c 326 */;
	struct resource *cocci_id/* drivers/gpio/gpio-lynxpoint.c 325 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-lynxpoint.c 321 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-lynxpoint.c 293 */;
	u32 cocci_id/* drivers/gpio/gpio-lynxpoint.c 236 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-lynxpoint.c 234 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-lynxpoint.c 231 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-lynxpoint.c 229 */;
	unsigned long cocci_id/* drivers/gpio/gpio-lynxpoint.c 203 */;
	struct lp_gpio *cocci_id/* drivers/gpio/gpio-lynxpoint.c 202 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-lynxpoint.c 200 */;
	unsigned cocci_id/* drivers/gpio/gpio-lynxpoint.c 200 */;
	int cocci_id/* drivers/gpio/gpio-lynxpoint.c 200 */;
}
