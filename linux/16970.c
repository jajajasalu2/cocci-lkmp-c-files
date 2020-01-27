cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/touchscreen/ektf2127.c 98 */;
	void *cocci_id/* drivers/input/touchscreen/ektf2127.c 98 */;
	int cocci_id/* drivers/input/touchscreen/ektf2127.c 98 */;
	int cocci_id/* drivers/input/touchscreen/ektf2127.c 72 */[EKTF2127_MAX_TOUCHES];
	struct input_mt_pos cocci_id/* drivers/input/touchscreen/ektf2127.c 71 */[EKTF2127_MAX_TOUCHES];
	struct input_mt_pos *cocci_id/* drivers/input/touchscreen/ektf2127.c 51 */;
	const u8 *cocci_id/* drivers/input/touchscreen/ektf2127.c 50 */;
	unsigned int cocci_id/* drivers/input/touchscreen/ektf2127.c 50 */;
	void cocci_id/* drivers/input/touchscreen/ektf2127.c 50 */;
	struct ektf2127_ts {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *power_gpios;
		struct touchscreen_properties prop;
	} cocci_id/* drivers/input/touchscreen/ektf2127.c 43 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/ektf2127.c 319 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/ektf2127.c 313 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/ektf2127.c 306 */[];
	u8 cocci_id/* drivers/input/touchscreen/ektf2127.c 225 */[4];
	struct input_dev *cocci_id/* drivers/input/touchscreen/ektf2127.c 224 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/ektf2127.c 220 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/ektf2127.c 219 */;
	u8 cocci_id/* drivers/input/touchscreen/ektf2127.c 183 */;
	const char *cocci_id/* drivers/input/touchscreen/ektf2127.c 182 */;
	bool cocci_id/* drivers/input/touchscreen/ektf2127.c 179 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/ektf2127.c 164 */;
	char cocci_id/* drivers/input/touchscreen/ektf2127.c 102 */[EKTF2127_TOUCH_REPORT_SIZE];
	struct device *cocci_id/* drivers/input/touchscreen/ektf2127.c 101 */;
	struct ektf2127_ts *cocci_id/* drivers/input/touchscreen/ektf2127.c 100 */;
}
