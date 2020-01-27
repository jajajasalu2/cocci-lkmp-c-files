cocci_test_suite() {
	struct f7188x_gpio_data {
		struct f7188x_sio *sio;
		int nr_bank;
		struct f7188x_gpio_bank *bank;
	} cocci_id/* drivers/gpio/gpio-f7188x.c 64 */;
	struct f7188x_gpio_bank {
		struct gpio_chip chip;
		unsigned int regbase;
		struct f7188x_gpio_data *data;
	} cocci_id/* drivers/gpio/gpio-f7188x.c 58 */;
	void __exit cocci_id/* drivers/gpio/gpio-f7188x.c 575 */;
	void cocci_id/* drivers/gpio/gpio-f7188x.c 575 */;
	struct f7188x_sio cocci_id/* drivers/gpio/gpio-f7188x.c 558 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-f7188x.c 548 */;
	struct f7188x_sio {
		int addr;
		enum chips type;
	} cocci_id/* drivers/gpio/gpio-f7188x.c 53 */;
	const struct f7188x_sio *cocci_id/* drivers/gpio/gpio-f7188x.c 513 */;
	int __init cocci_id/* drivers/gpio/gpio-f7188x.c 512 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-f7188x.c 510 */;
	unsigned int cocci_id/* drivers/gpio/gpio-f7188x.c 502 */;
	u16 cocci_id/* drivers/gpio/gpio-f7188x.c 457 */;
	struct f7188x_sio *cocci_id/* drivers/gpio/gpio-f7188x.c 454 */;
	int __init cocci_id/* drivers/gpio/gpio-f7188x.c 454 */;
	int cocci_id/* drivers/gpio/gpio-f7188x.c 454 */;
	const char *const cocci_id/* drivers/gpio/gpio-f7188x.c 43 */[];
	enum chips{f71869, f71869a, f71882fg, f71889a, f71889f, f81866, f81804,} cocci_id/* drivers/gpio/gpio-f7188x.c 41 */;
	struct f7188x_gpio_data *cocci_id/* drivers/gpio/gpio-f7188x.c 393 */;
	enum pin_config_param cocci_id/* drivers/gpio/gpio-f7188x.c 359 */;
	unsigned long cocci_id/* drivers/gpio/gpio-f7188x.c 356 */;
	u8 cocci_id/* drivers/gpio/gpio-f7188x.c 264 */;
	struct f7188x_gpio_bank *cocci_id/* drivers/gpio/gpio-f7188x.c 262 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-f7188x.c 259 */;
	unsigned cocci_id/* drivers/gpio/gpio-f7188x.c 259 */;
	struct f7188x_gpio_bank cocci_id/* drivers/gpio/gpio-f7188x.c 162 */[];
	int cocci_id/* drivers/gpio/gpio-f7188x.c 135 */(struct gpio_chip *chip,
							 unsigned offset,
							 unsigned long config);
	void cocci_id/* drivers/gpio/gpio-f7188x.c 134 */(struct gpio_chip *chip,
							  unsigned offset,
							  int value);
	int cocci_id/* drivers/gpio/gpio-f7188x.c 132 */(struct gpio_chip *chip,
							 unsigned offset,
							 int value);
	int cocci_id/* drivers/gpio/gpio-f7188x.c 130 */(struct gpio_chip *chip,
							 unsigned offset);
}
