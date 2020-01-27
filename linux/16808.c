cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/misc/pcf8574_keypad.c 86 */;
	const struct i2c_device_id *cocci_id/* drivers/input/misc/pcf8574_keypad.c 83 */;
	struct i2c_client *cocci_id/* drivers/input/misc/pcf8574_keypad.c 83 */;
	unsigned short cocci_id/* drivers/input/misc/pcf8574_keypad.c 71 */;
	unsigned char cocci_id/* drivers/input/misc/pcf8574_keypad.c 67 */;
	struct kp_data *cocci_id/* drivers/input/misc/pcf8574_keypad.c 66 */;
	irqreturn_t cocci_id/* drivers/input/misc/pcf8574_keypad.c 64 */;
	void *cocci_id/* drivers/input/misc/pcf8574_keypad.c 64 */;
	int cocci_id/* drivers/input/misc/pcf8574_keypad.c 64 */;
	short cocci_id/* drivers/input/misc/pcf8574_keypad.c 46 */;
	struct kp_data {
		unsigned short btncode[ARRAY_SIZE(pcf8574_kp_btncode)];
		struct input_dev *idev;
		struct i2c_client *client;
		char name[64];
		char phys[32];
		unsigned char laststate;
	} cocci_id/* drivers/input/misc/pcf8574_keypad.c 37 */;
	struct i2c_driver cocci_id/* drivers/input/misc/pcf8574_keypad.c 207 */;
	const struct i2c_device_id cocci_id/* drivers/input/misc/pcf8574_keypad.c 201 */[];
	const struct dev_pm_ops cocci_id/* drivers/input/misc/pcf8574_keypad.c 191 */;
	struct device *cocci_id/* drivers/input/misc/pcf8574_keypad.c 173 */;
	const unsigned char cocci_id/* drivers/input/misc/pcf8574_keypad.c 17 */[];
}
