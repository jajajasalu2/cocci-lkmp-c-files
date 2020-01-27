cocci_test_suite() {
	struct mcs5000_ts_data {
		struct i2c_client *client;
		struct input_dev *input_dev;
		const struct mcs_platform_data *platform_data;
	} cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 99 */;
	enum mcs5000_ts_read_offset{READ_INPUT_INFO, READ_X_POS_UPPER, READ_X_POS_LOWER, READ_Y_POS_UPPER, READ_Y_POS_LOWER, READ_BLOCK_SIZE,} cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 89 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 274 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 268 */[];
	struct device *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 255 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 255 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 188 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 184 */;
	const struct mcs_platform_data *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 160 */;
	void cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 159 */;
	u8 cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 109 */[READ_BLOCK_SIZE];
	struct i2c_client *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 108 */;
	struct mcs5000_ts_data *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 107 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 105 */;
	void *cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 105 */;
	int cocci_id/* drivers/input/touchscreen/mcs5000_ts.c 105 */;
}
