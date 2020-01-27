cocci_test_suite() {
	u16 cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 82 */;
	u8 cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 67 */[];
	struct device *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 66 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 63 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 62 */;
	__be16 *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 45 */;
	u8 cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 32 */[6];
	unsigned long cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 31 */;
	const int cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 30 */;
	struct dir685_touchkeys *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 29 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 27 */;
	void *cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 27 */;
	int cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 27 */;
	struct dir685_touchkeys {
		struct device *dev;
		struct i2c_client *client;
		struct input_dev *input;
		unsigned long cur_key;
		u16 codes[7];
	} cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 19 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 144 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 137 */[];
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/dlink-dir685-touchkeys.c 130 */[];
}
