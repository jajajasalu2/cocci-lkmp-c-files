cocci_test_suite() {
	struct irq_chip *cocci_id/* drivers/gpio/gpio-hlwd.c 62 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-hlwd.c 58 */;
	struct hlwd_gpio {
		struct gpio_chip gpioc;
		struct irq_chip irqc;
		void __iomem *regs;
		int irq;
		u32 edge_emulation;
		u32 rising_edge,falling_edge;
	} cocci_id/* drivers/gpio/gpio-hlwd.c 49 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-hlwd.c 294 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-hlwd.c 288 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-hlwd.c 256 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-hlwd.c 208 */;
	unsigned int cocci_id/* drivers/gpio/gpio-hlwd.c 172 */;
	int cocci_id/* drivers/gpio/gpio-hlwd.c 172 */;
	u32 cocci_id/* drivers/gpio/gpio-hlwd.c 122 */;
	unsigned long cocci_id/* drivers/gpio/gpio-hlwd.c 121 */;
	struct hlwd_gpio *cocci_id/* drivers/gpio/gpio-hlwd.c 111 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-hlwd.c 109 */;
	void cocci_id/* drivers/gpio/gpio-hlwd.c 109 */;
}
