cocci_test_suite() {
	uint64_t cocci_id/* drivers/gpio/gpio-max732x.c 91 */[];
	enum{MAX7319, MAX7320, MAX7321, MAX7322, MAX7323, MAX7324, MAX7325, MAX7326, MAX7327,} cocci_id/* drivers/gpio/gpio-max732x.c 79 */;
	void __exit cocci_id/* drivers/gpio/gpio-max732x.c 756 */;
	void cocci_id/* drivers/gpio/gpio-max732x.c 756 */;
	int __init cocci_id/* drivers/gpio/gpio-max732x.c 747 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-max732x.c 737 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-max732x.c 620 */;
	struct device *cocci_id/* drivers/gpio/gpio-max732x.c 603 */;
	uint32_t cocci_id/* drivers/gpio/gpio-max732x.c 558 */;
	struct max732x_platform_data *cocci_id/* drivers/gpio/gpio-max732x.c 499 */;
	struct i2c_client *cocci_id/* drivers/gpio/gpio-max732x.c 498 */;
	const struct i2c_device_id *cocci_id/* drivers/gpio/gpio-max732x.c 496 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-max732x.c 473 */;
	void *cocci_id/* drivers/gpio/gpio-max732x.c 473 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-max732x.c 432 */;
	uint16_t cocci_id/* drivers/gpio/gpio-max732x.c 377 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-max732x.c 364 */;
	char *cocci_id/* drivers/gpio/gpio-max732x.c 309 */;
	uint16_t *cocci_id/* drivers/gpio/gpio-max732x.c 305 */;
	unsigned int cocci_id/* drivers/gpio/gpio-max732x.c 255 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-max732x.c 252 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-max732x.c 241 */;
	uint8_t cocci_id/* drivers/gpio/gpio-max732x.c 197 */;
	struct max732x_chip *cocci_id/* drivers/gpio/gpio-max732x.c 189 */;
	unsigned cocci_id/* drivers/gpio/gpio-max732x.c 189 */;
	int cocci_id/* drivers/gpio/gpio-max732x.c 189 */;
	uint8_t *cocci_id/* drivers/gpio/gpio-max732x.c 173 */;
	struct max732x_chip {
		struct gpio_chip gpio_chip;
		struct i2c_client *client;
		struct i2c_client *client_dummy;
		struct i2c_client *client_group_a;
		struct i2c_client *client_group_b;
		unsigned int mask_group_a;
		unsigned int dir_input;
		unsigned int dir_output;
		struct mutex lock;
		uint8_t reg_out[2];
#ifdef CONFIG_GPIO_MAX732X_IRQ
		struct mutex irq_lock;
		uint8_t irq_mask;
		uint8_t irq_mask_cur;
		uint8_t irq_trig_raise;
		uint8_t irq_trig_fall;
		uint8_t irq_features;
#endif
	} cocci_id/* drivers/gpio/gpio-max732x.c 133 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-max732x.c 118 */[];
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-max732x.c 103 */[];
}
