cocci_test_suite() {
	bool cocci_id/* drivers/gpio/gpio-ep93xx.c 92 */;
	const u8 cocci_id/* drivers/gpio/gpio-ep93xx.c 54 */[3];
	unsigned char cocci_id/* drivers/gpio/gpio-ep93xx.c 49 */[3];
	int __init cocci_id/* drivers/gpio/gpio-ep93xx.c 436 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-ep93xx.c 429 */;
	struct ep93xx_gpio {
		void __iomem *base;
		struct gpio_chip gc[8];
	} cocci_id/* drivers/gpio/gpio-ep93xx.c 37 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-ep93xx.c 337 */;
	struct device *cocci_id/* drivers/gpio/gpio-ep93xx.c 336 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-ep93xx.c 334 */;
	struct ep93xx_gpio_bank *cocci_id/* drivers/gpio/gpio-ep93xx.c 332 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-ep93xx.c 330 */;
	unsigned cocci_id/* drivers/gpio/gpio-ep93xx.c 324 */;
	u32 cocci_id/* drivers/gpio/gpio-ep93xx.c 313 */;
	struct ep93xx_gpio_bank cocci_id/* drivers/gpio/gpio-ep93xx.c 296 */[];
	struct ep93xx_gpio_bank {
		const char *label;
		int data;
		int dir;
		int base;
		bool has_irq;
		bool has_hierarchical_irq;
		unsigned int irq_base;
	} cocci_id/* drivers/gpio/gpio-ep93xx.c 275 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-ep93xx.c 263 */;
	irq_flow_handler_t cocci_id/* drivers/gpio/gpio-ep93xx.c 216 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-ep93xx.c 153 */;
	unsigned int cocci_id/* drivers/gpio/gpio-ep93xx.c 144 */;
	int cocci_id/* drivers/gpio/gpio-ep93xx.c 113 */;
	unsigned long cocci_id/* drivers/gpio/gpio-ep93xx.c 112 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-ep93xx.c 111 */;
	struct ep93xx_gpio *cocci_id/* drivers/gpio/gpio-ep93xx.c 110 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-ep93xx.c 109 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-ep93xx.c 107 */;
	void cocci_id/* drivers/gpio/gpio-ep93xx.c 107 */;
}
