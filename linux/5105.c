cocci_test_suite() {
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-tpic2810.c 90 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-tpic2810.c 84 */;
	void cocci_id/* drivers/gpio/gpio-tpic2810.c 79 */;
	u8 cocci_id/* drivers/gpio/gpio-tpic2810.c 60 */;
	unsigned cocci_id/* drivers/gpio/gpio-tpic2810.c 46 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tpic2810.c 45 */;
	int cocci_id/* drivers/gpio/gpio-tpic2810.c 45 */;
	void cocci_id/* drivers/gpio/gpio-tpic2810.c 36 */(struct gpio_chip *chip,
							   unsigned offset,
							   int value);
	struct tpic2810 {
		struct gpio_chip chip;
		struct i2c_client *client;
		u8 buffer;
		struct mutex lock;
	} cocci_id/* drivers/gpio/gpio-tpic2810.c 29 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-tpic2810.c 152 */;
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-tpic2810.c 146 */[];
	struct tpic2810 *cocci_id/* drivers/gpio/gpio-tpic2810.c 112 */;
	const struct i2c_device_id *cocci_id/* drivers/gpio/gpio-tpic2810.c 110 */;
	struct i2c_client *cocci_id/* drivers/gpio/gpio-tpic2810.c 109 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-tpic2810.c 103 */[];
}
