cocci_test_suite() {
	int *cocci_id/* drivers/input/touchscreen/exc3000.c 87 */;
	struct timer_list *cocci_id/* drivers/input/touchscreen/exc3000.c 53 */;
	const u8 *cocci_id/* drivers/input/touchscreen/exc3000.c 39 */;
	struct touchscreen_properties *cocci_id/* drivers/input/touchscreen/exc3000.c 38 */;
	void cocci_id/* drivers/input/touchscreen/exc3000.c 37 */;
	struct exc3000_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct touchscreen_properties prop;
		struct timer_list timer;
		u8 buf[2 * EXC3000_LEN_FRAME];
	} cocci_id/* drivers/input/touchscreen/exc3000.c 29 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/exc3000.c 207 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/exc3000.c 200 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/exc3000.c 193 */[];
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/exc3000.c 149 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/exc3000.c 148 */;
	u8 *cocci_id/* drivers/input/touchscreen/exc3000.c 117 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/exc3000.c 116 */;
	struct exc3000_data *cocci_id/* drivers/input/touchscreen/exc3000.c 115 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/exc3000.c 113 */;
	void *cocci_id/* drivers/input/touchscreen/exc3000.c 113 */;
	int cocci_id/* drivers/input/touchscreen/exc3000.c 113 */;
}
