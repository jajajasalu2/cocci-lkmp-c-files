cocci_test_suite() {
	int __init cocci_id/* drivers/gpio/gpio-stmpe.c 553 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-stmpe.c 545 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-stmpe.c 455 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-stmpe.c 452 */;
	u32 cocci_id/* drivers/gpio/gpio-stmpe.c 446 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-stmpe.c 436 */;
	unsigned int cocci_id/* drivers/gpio/gpio-stmpe.c 401 */;
	u8 cocci_id/* drivers/gpio/gpio-stmpe.c 377 */[DIV_ROUND_UP(MAX_GPIOS,
								    8)];
	irqreturn_t cocci_id/* drivers/gpio/gpio-stmpe.c 371 */;
	void *cocci_id/* drivers/gpio/gpio-stmpe.c 371 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-stmpe.c 360 */;
	unsigned cocci_id/* drivers/gpio/gpio-stmpe.c 351 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-stmpe.c 349 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-stmpe.c 349 */;
	void cocci_id/* drivers/gpio/gpio-stmpe.c 349 */;
	struct stmpe_gpio {
		struct gpio_chip chip;
		struct stmpe *stmpe;
		struct device *dev;
		struct mutex irq_lock;
		u32 norequest_mask;
		u8 regs[CACHE_NR_REGS][CACHE_NR_BANKS];
		u8 oldregs[CACHE_NR_REGS][CACHE_NR_BANKS];
	} cocci_id/* drivers/gpio/gpio-stmpe.c 30 */;
	const char *const cocci_id/* drivers/gpio/gpio-stmpe.c 279 */[];
	int cocci_id/* drivers/gpio/gpio-stmpe.c 261 */;
	u8 cocci_id/* drivers/gpio/gpio-stmpe.c 258 */;
	bool cocci_id/* drivers/gpio/gpio-stmpe.c 257 */;
	const char *cocci_id/* drivers/gpio/gpio-stmpe.c 256 */;
	struct stmpe *cocci_id/* drivers/gpio/gpio-stmpe.c 255 */;
	struct stmpe_gpio *cocci_id/* drivers/gpio/gpio-stmpe.c 254 */;
	enum{LSB, CSB, MSB,} cocci_id/* drivers/gpio/gpio-stmpe.c 24 */;
	enum{REG_RE, REG_FE, REG_IE,} cocci_id/* drivers/gpio/gpio-stmpe.c 22 */;
	const u8 cocci_id/* drivers/gpio/gpio-stmpe.c 183 */[CACHE_NR_REGS][CACHE_NR_BANKS];
	struct irq_data *cocci_id/* drivers/gpio/gpio-stmpe.c 169 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-stmpe.c 128 */;
}
