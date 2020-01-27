cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-ftgpio010.c 68 */;
	struct ftgpio_gpio *cocci_id/* drivers/gpio/gpio-ftgpio010.c 59 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ftgpio010.c 58 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-ftgpio010.c 56 */;
	void cocci_id/* drivers/gpio/gpio-ftgpio010.c 56 */;
	struct ftgpio_gpio {
		struct device *dev;
		struct gpio_chip gc;
		struct irq_chip irq;
		void __iomem *base;
		struct clk *clk;
	} cocci_id/* drivers/gpio/gpio-ftgpio010.c 48 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-ftgpio010.c 346 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-ftgpio010.c 333 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-ftgpio010.c 229 */;
	struct device *cocci_id/* drivers/gpio/gpio-ftgpio010.c 227 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-ftgpio010.c 225 */;
	enum pin_config_param cocci_id/* drivers/gpio/gpio-ftgpio010.c 161 */;
	unsigned int cocci_id/* drivers/gpio/gpio-ftgpio010.c 158 */;
	unsigned long cocci_id/* drivers/gpio/gpio-ftgpio010.c 145 */;
	int cocci_id/* drivers/gpio/gpio-ftgpio010.c 144 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-ftgpio010.c 143 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-ftgpio010.c 139 */;
}
