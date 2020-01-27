cocci_test_suite() {
	u8 cocci_id/* drivers/gpio/gpio-adnp.c 85 */;
	unsigned int cocci_id/* drivers/gpio/gpio-adnp.c 82 */;
	struct adnp *cocci_id/* drivers/gpio/gpio-adnp.c 80 */;
	unsigned cocci_id/* drivers/gpio/gpio-adnp.c 80 */;
	int cocci_id/* drivers/gpio/gpio-adnp.c 80 */;
	void cocci_id/* drivers/gpio/gpio-adnp.c 80 */;
	struct i2c_driver cocci_id/* drivers/gpio/gpio-adnp.c 533 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-adnp.c 527 */[];
	const struct i2c_device_id cocci_id/* drivers/gpio/gpio-adnp.c 521 */[];
	uint8_t cocci_id/* drivers/gpio/gpio-adnp.c 51 */;
	u32 cocci_id/* drivers/gpio/gpio-adnp.c 488 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-adnp.c 486 */;
	const struct i2c_device_id *cocci_id/* drivers/gpio/gpio-adnp.c 484 */;
	struct i2c_client *cocci_id/* drivers/gpio/gpio-adnp.c 483 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-adnp.c 404 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-adnp.c 381 */;
	uint8_t *cocci_id/* drivers/gpio/gpio-adnp.c 36 */;
	unsigned long cocci_id/* drivers/gpio/gpio-adnp.c 281 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-adnp.c 271 */;
	void *cocci_id/* drivers/gpio/gpio-adnp.c 271 */;
	const char *cocci_id/* drivers/gpio/gpio-adnp.c 213 */;
	struct adnp {
		struct i2c_client *client;
		struct gpio_chip gpio;
		unsigned int reg_shift;
		struct mutex i2c_lock;
		struct mutex irq_lock;
		u8 *irq_enable;
		u8 *irq_level;
		u8 *irq_rise;
		u8 *irq_fall;
		u8 *irq_high;
		u8 *irq_low;
	} cocci_id/* drivers/gpio/gpio-adnp.c 20 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-adnp.c 182 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-adnp.c 182 */;
}
