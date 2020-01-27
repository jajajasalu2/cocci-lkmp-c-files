cocci_test_suite() {
	unsigned char cocci_id/* drivers/gpio/gpio-pl061.c 76 */;
	unsigned long cocci_id/* drivers/gpio/gpio-pl061.c 75 */;
	struct pl061 *cocci_id/* drivers/gpio/gpio-pl061.c 74 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pl061.c 72 */;
	unsigned cocci_id/* drivers/gpio/gpio-pl061.c 72 */;
	int cocci_id/* drivers/gpio/gpio-pl061.c 72 */;
	struct pl061 {
		raw_spinlock_t lock;
		void __iomem *base;
		struct gpio_chip gc;
		struct irq_chip irq_chip;
		int parent_irq;
#ifdef CONFIG_PM
		struct pl061_context_save_regs csave_regs;
#endif
	} cocci_id/* drivers/gpio/gpio-pl061.c 49 */;
	int __init cocci_id/* drivers/gpio/gpio-pl061.c 428 */;
	void cocci_id/* drivers/gpio/gpio-pl061.c 428 */;
	struct amba_driver cocci_id/* drivers/gpio/gpio-pl061.c 417 */;
	const struct amba_id cocci_id/* drivers/gpio/gpio-pl061.c 409 */[];
	const struct dev_pm_ops cocci_id/* drivers/gpio/gpio-pl061.c 401 */;
	struct pl061_context_save_regs {
		u8 gpio_data;
		u8 gpio_dir;
		u8 gpio_is;
		u8 gpio_ibe;
		u8 gpio_iev;
		u8 gpio_ie;
	} cocci_id/* drivers/gpio/gpio-pl061.c 39 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-pl061.c 289 */;
	struct device *cocci_id/* drivers/gpio/gpio-pl061.c 287 */;
	const struct amba_id *cocci_id/* drivers/gpio/gpio-pl061.c 285 */;
	struct amba_device *cocci_id/* drivers/gpio/gpio-pl061.c 285 */;
	unsigned int cocci_id/* drivers/gpio/gpio-pl061.c 277 */;
	u8 cocci_id/* drivers/gpio/gpio-pl061.c 270 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pl061.c 266 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-pl061.c 218 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-pl061.c 212 */;
	bool cocci_id/* drivers/gpio/gpio-pl061.c 154 */;
}
