cocci_test_suite() {
	u8 cocci_id/* drivers/gpio/gpio-tc3589x.c 81 */;
	struct tc3589x *cocci_id/* drivers/gpio/gpio-tc3589x.c 80 */;
	struct tc3589x_gpio *cocci_id/* drivers/gpio/gpio-tc3589x.c 79 */;
	unsigned int cocci_id/* drivers/gpio/gpio-tc3589x.c 77 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tc3589x.c 76 */;
	int cocci_id/* drivers/gpio/gpio-tc3589x.c 76 */;
	u8 cocci_id/* drivers/gpio/gpio-tc3589x.c 58 */[];
	int __init cocci_id/* drivers/gpio/gpio-tc3589x.c 367 */;
	void cocci_id/* drivers/gpio/gpio-tc3589x.c 367 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-tc3589x.c 362 */;
	struct tc3589x_gpio cocci_id/* drivers/gpio/gpio-tc3589x.c 304 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-tc3589x.c 290 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-tc3589x.c 287 */;
	struct tc3589x_gpio {
		struct gpio_chip chip;
		struct tc3589x *tc3589x;
		struct device *dev;
		struct mutex irq_lock;
		u8 regs[CACHE_NR_REGS][CACHE_NR_BANKS];
		u8 oldregs[CACHE_NR_REGS][CACHE_NR_BANKS];
	} cocci_id/* drivers/gpio/gpio-tc3589x.c 27 */;
	u8 cocci_id/* drivers/gpio/gpio-tc3589x.c 257 */[CACHE_NR_BANKS];
	irqreturn_t cocci_id/* drivers/gpio/gpio-tc3589x.c 253 */;
	void *cocci_id/* drivers/gpio/gpio-tc3589x.c 253 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-tc3589x.c 244 */;
	enum{REG_IBE, REG_IEV, REG_IS, REG_IE,} cocci_id/* drivers/gpio/gpio-tc3589x.c 22 */;
	const u8 cocci_id/* drivers/gpio/gpio-tc3589x.c 198 */[];
	struct irq_data *cocci_id/* drivers/gpio/gpio-tc3589x.c 185 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-tc3589x.c 145 */;
	unsigned long cocci_id/* drivers/gpio/gpio-tc3589x.c 107 */;
}
