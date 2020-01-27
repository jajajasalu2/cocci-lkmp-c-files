cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-rda.c 82 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-rda.c 81 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-rda.c 79 */;
	void cocci_id/* drivers/gpio/gpio-rda.c 79 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-rda.c 69 */;
	u16 cocci_id/* drivers/gpio/gpio-rda.c 46 */;
	struct rda_gpio {
		struct gpio_chip chip;
		void __iomem *base;
		spinlock_t lock;
		struct irq_chip irq_chip;
		int irq;
	} cocci_id/* drivers/gpio/gpio-rda.c 37 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-rda.c 282 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-rda.c 276 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-rda.c 204 */;
	struct device *cocci_id/* drivers/gpio/gpio-rda.c 203 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-rda.c 202 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-rda.c 200 */;
	unsigned long cocci_id/* drivers/gpio/gpio-rda.c 183 */;
	struct rda_gpio *cocci_id/* drivers/gpio/gpio-rda.c 182 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-rda.c 181 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-rda.c 178 */;
	unsigned int cocci_id/* drivers/gpio/gpio-rda.c 160 */;
	int cocci_id/* drivers/gpio/gpio-rda.c 160 */;
}
