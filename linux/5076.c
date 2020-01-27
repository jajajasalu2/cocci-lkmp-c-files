cocci_test_suite() {
	struct lpc18xx_gpio_chip {
		struct gpio_chip gpio;
		void __iomem *base;
		struct clk *clk;
		struct lpc18xx_gpio_pin_ic *pin_ic;
		spinlock_t lock;
	} cocci_id/* drivers/gpio/gpio-lpc18xx.c 48 */;
	struct lpc18xx_gpio_pin_ic {
		void __iomem *base;
		struct irq_domain *domain;
		struct raw_spinlock lock;
	} cocci_id/* drivers/gpio/gpio-lpc18xx.c 42 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-lpc18xx.c 403 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-lpc18xx.c 397 */[];
	struct platform_device *cocci_id/* drivers/gpio/gpio-lpc18xx.c 327 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-lpc18xx.c 315 */;
	u32 cocci_id/* drivers/gpio/gpio-lpc18xx.c 285 */;
	unsigned long cocci_id/* drivers/gpio/gpio-lpc18xx.c 284 */;
	struct lpc18xx_gpio_chip *cocci_id/* drivers/gpio/gpio-lpc18xx.c 283 */;
	bool cocci_id/* drivers/gpio/gpio-lpc18xx.c 281 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-lpc18xx.c 280 */;
	unsigned cocci_id/* drivers/gpio/gpio-lpc18xx.c 280 */;
	int cocci_id/* drivers/gpio/gpio-lpc18xx.c 280 */;
	struct resource cocci_id/* drivers/gpio/gpio-lpc18xx.c 210 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-lpc18xx.c 208 */;
	struct device *cocci_id/* drivers/gpio/gpio-lpc18xx.c 206 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-lpc18xx.c 198 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-lpc18xx.c 169 */;
	struct lpc18xx_gpio_pin_ic *cocci_id/* drivers/gpio/gpio-lpc18xx.c 168 */;
	struct irq_fwspec cocci_id/* drivers/gpio/gpio-lpc18xx.c 167 */;
	void *cocci_id/* drivers/gpio/gpio-lpc18xx.c 165 */;
	unsigned int cocci_id/* drivers/gpio/gpio-lpc18xx.c 164 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-lpc18xx.c 163 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-lpc18xx.c 154 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-lpc18xx.c 115 */;
	void cocci_id/* drivers/gpio/gpio-lpc18xx.c 115 */;
}
