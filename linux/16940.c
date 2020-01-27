cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/touchscreen/eeti_ts.c 87 */;
	void *cocci_id/* drivers/input/touchscreen/eeti_ts.c 87 */;
	int cocci_id/* drivers/input/touchscreen/eeti_ts.c 87 */;
	char cocci_id/* drivers/input/touchscreen/eeti_ts.c 69 */[6];
	u16 cocci_id/* drivers/input/touchscreen/eeti_ts.c 47 */;
	unsigned int cocci_id/* drivers/input/touchscreen/eeti_ts.c 46 */;
	u8 *cocci_id/* drivers/input/touchscreen/eeti_ts.c 44 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/eeti_ts.c 289 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/eeti_ts.c 283 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/eeti_ts.c 276 */[];
	struct eeti_ts {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *attn_gpio;
		struct touchscreen_properties props;
		struct mutex mutex;
		bool running;
	} cocci_id/* drivers/input/touchscreen/eeti_ts.c 26 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/eeti_ts.c 255 */;
	struct device *cocci_id/* drivers/input/touchscreen/eeti_ts.c 164 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/eeti_ts.c 162 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/eeti_ts.c 161 */;
	struct eeti_ts *cocci_id/* drivers/input/touchscreen/eeti_ts.c 156 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/eeti_ts.c 154 */;
	void cocci_id/* drivers/input/touchscreen/eeti_ts.c 154 */;
}
