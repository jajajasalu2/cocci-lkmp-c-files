cocci_test_suite() {
	struct sx8654 {
		struct input_dev *input;
		struct i2c_client *client;
		struct gpio_desc *gpio_reset;
		spinlock_t lock;
		struct timer_list timer;
		struct touchscreen_properties props;
		const struct sx865x_data *data;
	} cocci_id/* drivers/input/touchscreen/sx8654.c 96 */;
	struct sx865x_data {
		u8 cmd_manual;
		u8 chan_mask;
		bool has_irq_penrelease;
		bool has_reg_irqmask;
		irq_handler_t irqh;
	} cocci_id/* drivers/input/touchscreen/sx8654.c 88 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/sx8654.c 467 */;
	long cocci_id/* drivers/input/touchscreen/sx8654.c 459 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/sx8654.c 458 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/sx8654.c 439 */[];
	const struct sx865x_data cocci_id/* drivers/input/touchscreen/sx8654.c 422 */;
	const struct sx865x_data *cocci_id/* drivers/input/touchscreen/sx8654.c 337 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/sx8654.c 310 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/sx8654.c 287 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/sx8654.c 284 */;
	void cocci_id/* drivers/input/touchscreen/sx8654.c 284 */;
	unsigned int cocci_id/* drivers/input/touchscreen/sx8654.c 197 */;
	u8 cocci_id/* drivers/input/touchscreen/sx8654.c 196 */[4];
	u8 *cocci_id/* drivers/input/touchscreen/sx8654.c 150 */;
	__be16 cocci_id/* drivers/input/touchscreen/sx8654.c 138 */[MAX_I2C_READ_LEN / sizeof(__be16)];
	u16 cocci_id/* drivers/input/touchscreen/sx8654.c 135 */;
	u8 cocci_id/* drivers/input/touchscreen/sx8654.c 134 */;
	unsigned long cocci_id/* drivers/input/touchscreen/sx8654.c 133 */;
	struct device *cocci_id/* drivers/input/touchscreen/sx8654.c 131 */;
	struct sx8654 *cocci_id/* drivers/input/touchscreen/sx8654.c 130 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/sx8654.c 128 */;
	void *cocci_id/* drivers/input/touchscreen/sx8654.c 128 */;
	int cocci_id/* drivers/input/touchscreen/sx8654.c 128 */;
	struct timer_list *cocci_id/* drivers/input/touchscreen/sx8654.c 117 */;
}
