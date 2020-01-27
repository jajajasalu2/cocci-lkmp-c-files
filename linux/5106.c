cocci_test_suite() {
	void cocci_id/* drivers/gpio/gpio-timberdale.c 82 */;
	u32 cocci_id/* drivers/gpio/gpio-timberdale.c 70 */;
	struct timbgpio *cocci_id/* drivers/gpio/gpio-timberdale.c 69 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-timberdale.c 62 */;
	unsigned cocci_id/* drivers/gpio/gpio-timberdale.c 62 */;
	int cocci_id/* drivers/gpio/gpio-timberdale.c 62 */;
	bool cocci_id/* drivers/gpio/gpio-timberdale.c 43 */;
	struct timbgpio {
		void __iomem *membase;
		spinlock_t lock;
		struct gpio_chip gpio;
		int irq_base;
		unsigned long last_ier;
	} cocci_id/* drivers/gpio/gpio-timberdale.c 34 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-timberdale.c 279 */;
	struct timbgpio_platform_data *cocci_id/* drivers/gpio/gpio-timberdale.c 220 */;
	struct device *cocci_id/* drivers/gpio/gpio-timberdale.c 217 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-timberdale.c 214 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-timberdale.c 207 */;
	unsigned long cocci_id/* drivers/gpio/gpio-timberdale.c 188 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-timberdale.c 187 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-timberdale.c 184 */;
}
