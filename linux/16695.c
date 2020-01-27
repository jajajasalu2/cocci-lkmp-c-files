cocci_test_suite() {
	u16 cocci_id/* drivers/input/keyboard/tca6416-keypad.c 91 */;
	u16 *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 71 */;
	struct tca6416_keypad_chip {
		uint16_t reg_output;
		uint16_t reg_direction;
		uint16_t reg_input;
		struct i2c_client *client;
		struct input_dev *input;
		struct delayed_work dwork;
		int io_size;
		int irqnum;
		u16 pinmask;
		bool use_polling;
		struct tca6416_button buttons[0];
	} cocci_id/* drivers/input/keyboard/tca6416-keypad.c 39 */;
	void __exit cocci_id/* drivers/input/keyboard/tca6416-keypad.c 370 */;
	void cocci_id/* drivers/input/keyboard/tca6416-keypad.c 370 */;
	int __init cocci_id/* drivers/input/keyboard/tca6416-keypad.c 363 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/tca6416-keypad.c 353 */;
	struct tca6416_drv_data {
		struct input_dev *input;
		struct tca6416_button data[0];
	} cocci_id/* drivers/input/keyboard/tca6416-keypad.c 34 */;
	struct device *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 338 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/tca6416-keypad.c 27 */[];
	unsigned int cocci_id/* drivers/input/keyboard/tca6416-keypad.c 251 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 202 */;
	struct tca6416_keypad_chip *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 201 */;
	struct tca6416_keys_platform_data *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 200 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 198 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 197 */;
	int cocci_id/* drivers/input/keyboard/tca6416-keypad.c 197 */;
	struct tca6416_keypad_chip cocci_id/* drivers/input/keyboard/tca6416-keypad.c 135 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 132 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/tca6416-keypad.c 123 */;
	void *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 123 */;
	struct tca6416_button *cocci_id/* drivers/input/keyboard/tca6416-keypad.c 106 */;
}
