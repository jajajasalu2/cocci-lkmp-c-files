cocci_test_suite() {
	int cocci_id/* drivers/input/keyboard/qt1070.c 82 */;
	bool cocci_id/* drivers/input/keyboard/qt1070.c 80 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/qt1070.c 80 */;
	struct qt1070_data {
		struct i2c_client *client;
		struct input_dev *input;
		unsigned int irq;
		unsigned short keycodes[ARRAY_SIZE(qt1070_key2code)];
		u8 last_keys;
	} cocci_id/* drivers/input/keyboard/qt1070.c 48 */;
	const unsigned short cocci_id/* drivers/input/keyboard/qt1070.c 43 */[];
	struct i2c_driver cocci_id/* drivers/input/keyboard/qt1070.c 272 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/qt1070.c 265 */[];
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/qt1070.c 258 */[];
	struct device *cocci_id/* drivers/input/keyboard/qt1070.c 244 */;
	struct qt1070_data cocci_id/* drivers/input/keyboard/qt1070.c 153 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/qt1070.c 130 */;
	u8 cocci_id/* drivers/input/keyboard/qt1070.c 109 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/qt1070.c 107 */;
	struct qt1070_data *cocci_id/* drivers/input/keyboard/qt1070.c 105 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/qt1070.c 103 */;
	void *cocci_id/* drivers/input/keyboard/qt1070.c 103 */;
}
