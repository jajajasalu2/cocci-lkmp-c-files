cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/keyboard/lm8333.c 78 */;
	void cocci_id/* drivers/input/keyboard/lm8333.c 76 */;
	u8 *cocci_id/* drivers/input/keyboard/lm8333.c 64 */;
	struct lm8333 {
		struct i2c_client *client;
		struct input_dev *input;
		unsigned short keycodes[LM8333_NUM_ROWS << LM8333_ROW_SHIFT];
	} cocci_id/* drivers/input/keyboard/lm8333.c 33 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/lm8333.c 220 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/lm8333.c 214 */[];
	const struct lm8333_platform_data *cocci_id/* drivers/input/keyboard/lm8333.c 131 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/lm8333.c 129 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/lm8333.c 128 */;
	u8 cocci_id/* drivers/input/keyboard/lm8333.c 114 */[LM8333_FIFO_TRANSFER_SIZE];
	u8 cocci_id/* drivers/input/keyboard/lm8333.c 105 */;
	struct lm8333 *cocci_id/* drivers/input/keyboard/lm8333.c 104 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/lm8333.c 102 */;
	void *cocci_id/* drivers/input/keyboard/lm8333.c 102 */;
	int cocci_id/* drivers/input/keyboard/lm8333.c 102 */;
}
