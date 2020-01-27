cocci_test_suite() {
	unsigned long *cocci_id/* drivers/gpio/gpio-reg.c 87 */;
	u32 cocci_id/* drivers/gpio/gpio-reg.c 72 */;
	void cocci_id/* drivers/gpio/gpio-reg.c 52 */;
	struct gpio_reg *cocci_id/* drivers/gpio/gpio-reg.c 47 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-reg.c 45 */;
	unsigned cocci_id/* drivers/gpio/gpio-reg.c 45 */;
	int cocci_id/* drivers/gpio/gpio-reg.c 45 */;
	struct gpio_reg cocci_id/* drivers/gpio/gpio-reg.c 23 */;
	unsigned long cocci_id/* drivers/gpio/gpio-reg.c 176 */;
	const char *const*cocci_id/* drivers/gpio/gpio-reg.c 133 */;
	const int *cocci_id/* drivers/gpio/gpio-reg.c 133 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-reg.c 133 */;
	const char *cocci_id/* drivers/gpio/gpio-reg.c 132 */;
	struct device *cocci_id/* drivers/gpio/gpio-reg.c 131 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-reg.c 131 */;
	struct gpio_reg {
		struct gpio_chip gc;
		spinlock_t lock;
		u32 direction;
		u32 out;
		void __iomem *reg;
		struct irq_domain *irqdomain;
		const int *irqs;
	} cocci_id/* drivers/gpio/gpio-reg.c 13 */;
}
