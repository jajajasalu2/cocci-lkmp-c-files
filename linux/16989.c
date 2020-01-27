cocci_test_suite() {
	struct sis_ts_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *attn_gpio;
		struct gpio_desc *reset_gpio;
		u8 packet[SIS_MAX_PACKET_SIZE];
	} cocci_id/* drivers/input/touchscreen/sis_i2c.c 94 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/sis_i2c.c 392 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/sis_i2c.c 385 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/sis_i2c.c 378 */[];
	struct input_dev *cocci_id/* drivers/input/touchscreen/sis_i2c.c 303 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/sis_i2c.c 300 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/sis_i2c.c 276 */;
	void *cocci_id/* drivers/input/touchscreen/sis_i2c.c 276 */;
	unsigned int cocci_id/* drivers/input/touchscreen/sis_i2c.c 226 */;
	const u8 *cocci_id/* drivers/input/touchscreen/sis_i2c.c 225 */;
	struct sis_ts_data *cocci_id/* drivers/input/touchscreen/sis_i2c.c 223 */;
	void cocci_id/* drivers/input/touchscreen/sis_i2c.c 223 */;
	u8 cocci_id/* drivers/input/touchscreen/sis_i2c.c 112 */;
	u16 cocci_id/* drivers/input/touchscreen/sis_i2c.c 110 */;
	unsigned int *cocci_id/* drivers/input/touchscreen/sis_i2c.c 105 */;
	u8 *cocci_id/* drivers/input/touchscreen/sis_i2c.c 104 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/sis_i2c.c 104 */;
	int cocci_id/* drivers/input/touchscreen/sis_i2c.c 104 */;
}
