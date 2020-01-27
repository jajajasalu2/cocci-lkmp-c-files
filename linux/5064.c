cocci_test_suite() {
	u32 cocci_id/* drivers/gpio/gpio-mpc8xxx.c 88 */;
	struct mpc8xxx_gpio_chip *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 60 */;
	unsigned long cocci_id/* drivers/gpio/gpio-mpc8xxx.c 59 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 57 */;
	int cocci_id/* drivers/gpio/gpio-mpc8xxx.c 57 */;
	int __init cocci_id/* drivers/gpio/gpio-mpc8xxx.c 457 */;
	void cocci_id/* drivers/gpio/gpio-mpc8xxx.c 457 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-mpc8xxx.c 448 */;
	struct mpc8xxx_gpio_chip {
		struct gpio_chip gc;
		void __iomem *regs;
		raw_spinlock_t lock;
		int (*direction_output)(struct gpio_chip *chip,
					unsigned offset, int value);
		struct irq_domain *irq;
		unsigned int irqn;
	} cocci_id/* drivers/gpio/gpio-mpc8xxx.c 38 */;
	const struct mpc8xxx_gpio_devtype *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 332 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 329 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 327 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-mpc8xxx.c 314 */[];
	const struct mpc8xxx_gpio_devtype cocci_id/* drivers/gpio/gpio-mpc8xxx.c 297 */;
	struct mpc8xxx_gpio_devtype {
		int (*gpio_dir_in_init)(struct gpio_chip *chip);
		int (*gpio_dir_out)(struct gpio_chip *, unsigned int, int);
		int (*gpio_get)(struct gpio_chip *, unsigned int);
		int (*irq_set_type)(struct irq_data *, unsigned int);
	} cocci_id/* drivers/gpio/gpio-mpc8xxx.c 285 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-mpc8xxx.c 280 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-mpc8xxx.c 272 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 271 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-mpc8xxx.c 262 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 220 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 215 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-mpc8xxx.c 131 */;
	void *cocci_id/* drivers/gpio/gpio-mpc8xxx.c 131 */;
	unsigned cocci_id/* drivers/gpio/gpio-mpc8xxx.c 121 */;
	unsigned int cocci_id/* drivers/gpio/gpio-mpc8xxx.c 100 */;
}
