cocci_test_suite() {
	struct pcf857x {
		struct gpio_chip chip;
		struct irq_chip irqchip;
		struct i2c_client *client;
		struct mutex lock;
		unsigned out;
		unsigned status;
		unsigned irq_enabled;
		int (*write)(struct i2c_client *client, unsigned data);
		int (*read)(struct i2c_client *client);
	} cocci_id/* drivers/gpio/gpio-pcf857x.c 72 */;
	void __exit cocci_id/* drivers/gpio/gpio-pcf857x.c 442 */;
	int __init cocci_id/* drivers/gpio/gpio-pcf857x.c 433 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-pcf857x.c 422 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-pcf857x.c 41 */[];
	struct device_node *cocci_id/* drivers/gpio/gpio-pcf857x.c 237 */;
	struct pcf857x_platform_data *cocci_id/* drivers/gpio/gpio-pcf857x.c 236 */;
	const struct i2c_device_id *cocci_id/* drivers/gpio/gpio-pcf857x.c 234 */;
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-pcf857x.c 22 */[];
	unsigned int cocci_id/* drivers/gpio/gpio-pcf857x.c 196 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pcf857x.c 194 */;
	void cocci_id/* drivers/gpio/gpio-pcf857x.c 194 */;
	unsigned long cocci_id/* drivers/gpio/gpio-pcf857x.c 172 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-pcf857x.c 169 */;
	void *cocci_id/* drivers/gpio/gpio-pcf857x.c 169 */;
	struct pcf857x *cocci_id/* drivers/gpio/gpio-pcf857x.c 138 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pcf857x.c 136 */;
	u8 cocci_id/* drivers/gpio/gpio-pcf857x.c 112 */[2];
	struct i2c_client *cocci_id/* drivers/gpio/gpio-pcf857x.c 110 */;
	int cocci_id/* drivers/gpio/gpio-pcf857x.c 110 */;
	unsigned cocci_id/* drivers/gpio/gpio-pcf857x.c 101 */;
}
