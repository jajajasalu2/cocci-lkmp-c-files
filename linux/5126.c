cocci_test_suite() {
	void cocci_id/* drivers/gpio/gpio-adp5588.c 84 */;
	u8 cocci_id/* drivers/gpio/gpio-adp5588.c 45 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-adp5588.c 448 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-adp5588.c 441 */[];
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-adp5588.c 434 */[];
	unsigned int cocci_id/* drivers/gpio/gpio-adp5588.c 334 */;
	struct adp5588_gpio_platform_data *cocci_id/* drivers/gpio/gpio-adp5588.c 329 */;
	struct i2c_client *cocci_id/* drivers/gpio/gpio-adp5588.c 327 */;
	struct adp5588_gpio {
		struct i2c_client *client;
		struct gpio_chip gpio_chip;
		struct mutex lock;
		struct mutex irq_lock;
		uint8_t dat_out[3];
		uint8_t dir[3];
		uint8_t int_lvl_low[3];
		uint8_t int_lvl_high[3];
		uint8_t int_en[3];
		uint8_t irq_mask[3];
		uint8_t int_input_en[3];
	} cocci_id/* drivers/gpio/gpio-adp5588.c 30 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-adp5588.c 240 */;
	void *cocci_id/* drivers/gpio/gpio-adp5588.c 240 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-adp5588.c 231 */;
	uint16_t cocci_id/* drivers/gpio/gpio-adp5588.c 211 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-adp5588.c 149 */;
	struct adp5588_gpio *cocci_id/* drivers/gpio/gpio-adp5588.c 108 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-adp5588.c 104 */;
	unsigned cocci_id/* drivers/gpio/gpio-adp5588.c 104 */;
	int cocci_id/* drivers/gpio/gpio-adp5588.c 104 */;
}
