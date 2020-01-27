cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/keyboard/adp5520-keys.c 77 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/adp5520-keys.c 74 */;
	struct adp5520_keys_platform_data *cocci_id/* drivers/input/keyboard/adp5520-keys.c 73 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/adp5520-keys.c 71 */;
	struct adp5520_keys cocci_id/* drivers/input/keyboard/adp5520-keys.c 42 */;
	unsigned short cocci_id/* drivers/input/keyboard/adp5520-keys.c 40 */;
	uint8_t cocci_id/* drivers/input/keyboard/adp5520-keys.c 39 */;
	struct adp5520_keys *cocci_id/* drivers/input/keyboard/adp5520-keys.c 38 */;
	void *cocci_id/* drivers/input/keyboard/adp5520-keys.c 36 */;
	unsigned long cocci_id/* drivers/input/keyboard/adp5520-keys.c 36 */;
	struct notifier_block *cocci_id/* drivers/input/keyboard/adp5520-keys.c 35 */;
	int cocci_id/* drivers/input/keyboard/adp5520-keys.c 35 */;
	void cocci_id/* drivers/input/keyboard/adp5520-keys.c 23 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/adp5520-keys.c 181 */;
	struct adp5520_keys {
		struct input_dev *input;
		struct notifier_block notifier;
		struct device *master;
		unsigned short keycode[ADP5520_KEYMAPSIZE];
	} cocci_id/* drivers/input/keyboard/adp5520-keys.c 16 */;
}
