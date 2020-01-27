cocci_test_suite() {
	struct it87_gpio cocci_id/* drivers/gpio/gpio-it87.c 71 */;
	struct it87_gpio {
		struct gpio_chip chip;
		spinlock_t lock;
		u16 io_base;
		u16 io_size;
		u8 output_base;
		u8 simple_base;
		u8 simple_size;
	} cocci_id/* drivers/gpio/gpio-it87.c 61 */;
	void __exit cocci_id/* drivers/gpio/gpio-it87.c 405 */;
	void cocci_id/* drivers/gpio/gpio-it87.c 405 */;
	const char *const *cocci_id/* drivers/gpio/gpio-it87.c 390 */;
	const char *cocci_id/* drivers/gpio/gpio-it87.c 375 */;
	char *cocci_id/* drivers/gpio/gpio-it87.c 285 */;
	int __init cocci_id/* drivers/gpio/gpio-it87.c 280 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-it87.c 269 */;
	struct it87_gpio *cocci_id/* drivers/gpio/gpio-it87.c 203 */;
	u8 cocci_id/* drivers/gpio/gpio-it87.c 201 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-it87.c 199 */;
	unsigned cocci_id/* drivers/gpio/gpio-it87.c 199 */;
	int cocci_id/* drivers/gpio/gpio-it87.c 199 */;
	u16 cocci_id/* drivers/gpio/gpio-it87.c 189 */;
}
