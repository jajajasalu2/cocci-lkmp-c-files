cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-xgs-iproc.c 50 */;
	unsigned long cocci_id/* drivers/gpio/gpio-xgs-iproc.c 49 */;
	int cocci_id/* drivers/gpio/gpio-xgs-iproc.c 48 */;
	struct iproc_gpio_chip *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 47 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 46 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 44 */;
	void cocci_id/* drivers/gpio/gpio-xgs-iproc.c 44 */;
	struct iproc_gpio_chip cocci_id/* drivers/gpio/gpio-xgs-iproc.c 41 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-xgs-iproc.c 308 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-xgs-iproc.c 302 */[];
	struct iproc_gpio_chip {
		struct irq_chip irqchip;
		struct gpio_chip gc;
		spinlock_t lock;
		struct device *dev;
		void __iomem *base;
		void __iomem *intr;
	} cocci_id/* drivers/gpio/gpio-xgs-iproc.c 29 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 233 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 232 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 197 */;
	struct device *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 196 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 194 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-xgs-iproc.c 164 */;
	void *cocci_id/* drivers/gpio/gpio-xgs-iproc.c 164 */;
}
