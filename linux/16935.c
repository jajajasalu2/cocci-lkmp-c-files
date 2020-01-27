cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/touchscreen/bu21013_ts.c 618 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/bu21013_ts.c 612 */[];
	struct device *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 581 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/bu21013_ts.c 581 */;
	u32 cocci_id/* drivers/input/touchscreen/bu21013_ts.c 413 */;
	struct input_absinfo *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 412 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 408 */;
	struct bu21013_ts *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 402 */;
	void *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 400 */;
	void cocci_id/* drivers/input/touchscreen/bu21013_ts.c 400 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 263 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/bu21013_ts.c 236 */;
	unsigned int cocci_id/* drivers/input/touchscreen/bu21013_ts.c 207 */;
	const u8 *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 206 */;
	bool cocci_id/* drivers/input/touchscreen/bu21013_ts.c 192 */;
	u8 cocci_id/* drivers/input/touchscreen/bu21013_ts.c 191 */[LENGTH_OF_BUFFER];
	int cocci_id/* drivers/input/touchscreen/bu21013_ts.c 190 */[MAX_FINGERS];
	struct input_mt_pos cocci_id/* drivers/input/touchscreen/bu21013_ts.c 189 */[MAX_FINGERS];
	struct input_dev *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 188 */;
	int cocci_id/* drivers/input/touchscreen/bu21013_ts.c 186 */;
	u8 *cocci_id/* drivers/input/touchscreen/bu21013_ts.c 171 */;
	struct bu21013_ts {
		struct i2c_client *client;
		struct input_dev *in_dev;
		struct touchscreen_properties props;
		struct regulator *regulator;
		struct gpio_desc *cs_gpiod;
		struct gpio_desc *int_gpiod;
		u32 touch_x_max;
		u32 touch_y_max;
		bool x_flip;
		bool y_flip;
		bool touch_stopped;
	} cocci_id/* drivers/input/touchscreen/bu21013_ts.c 157 */;
}
