cocci_test_suite() {
	enum s6sy761_regulators{S6SY761_REGULATOR_VDD, S6SY761_REGULATOR_AVDD,} cocci_id/* drivers/input/touchscreen/s6sy761.c 96 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/s6sy761.c 539 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/s6sy761.c 533 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/s6sy761.c 526 */[];
	struct device *cocci_id/* drivers/input/touchscreen/s6sy761.c 510 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/s6sy761.c 510 */;
	unsigned int cocci_id/* drivers/input/touchscreen/s6sy761.c 396 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/s6sy761.c 393 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/s6sy761.c 392 */;
	u8 cocci_id/* drivers/input/touchscreen/s6sy761.c 344 */[S6SY761_PANEL_ID_SIZE];
	unsigned int *cocci_id/* drivers/input/touchscreen/s6sy761.c 342 */;
	u8 cocci_id/* drivers/input/touchscreen/s6sy761.c 296 */[S6SY761_EVENT_SIZE];
	struct attribute_group cocci_id/* drivers/input/touchscreen/s6sy761.c 290 */;
	struct attribute *cocci_id/* drivers/input/touchscreen/s6sy761.c 285 */[];
	struct device_attribute *cocci_id/* drivers/input/touchscreen/s6sy761.c 276 */;
	char *cocci_id/* drivers/input/touchscreen/s6sy761.c 276 */;
	ssize_t cocci_id/* drivers/input/touchscreen/s6sy761.c 275 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/s6sy761.c 265 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/s6sy761.c 223 */;
	void *cocci_id/* drivers/input/touchscreen/s6sy761.c 223 */;
	int cocci_id/* drivers/input/touchscreen/s6sy761.c 199 */;
	u8 cocci_id/* drivers/input/touchscreen/s6sy761.c 174 */;
	u8 *cocci_id/* drivers/input/touchscreen/s6sy761.c 172 */;
	struct s6sy761_data *cocci_id/* drivers/input/touchscreen/s6sy761.c 172 */;
	void cocci_id/* drivers/input/touchscreen/s6sy761.c 172 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/s6sy761.c 120 */[2];
	u16 cocci_id/* drivers/input/touchscreen/s6sy761.c 117 */;
	struct s6sy761_data {
		struct i2c_client *client;
		struct regulator_bulk_data regulators[2];
		struct input_dev *input;
		struct touchscreen_properties prop;
		u8 data[S6SY761_EVENT_SIZE * S6SY761_EVENT_COUNT];
		u16 devid;
		u8 tx_channel;
	} cocci_id/* drivers/input/touchscreen/s6sy761.c 101 */;
}
