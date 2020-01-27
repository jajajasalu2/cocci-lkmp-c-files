cocci_test_suite() {
	struct tc3589x_keypad_platform_data {
		const struct matrix_keymap_data *keymap_data;
		u8 krow;
		u8 kcol;
		u8 debounce_period;
		u8 settle_time;
		unsigned long irqtype;
		bool enable_wakeup;
		bool no_autorepeat;
	} cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 83 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 500 */;
	struct tc_keypad cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 392 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 374 */;
	u32 cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 326 */;
	struct tc3589x_keypad_platform_data *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 325 */;
	struct device_node *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 324 */;
	struct device *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 322 */;
	struct tc_keypad *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 315 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 313 */;
	void cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 313 */;
	struct tc3589x *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 264 */;
	int cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 262 */;
	u8 cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 193 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 189 */;
	void *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 189 */;
	const struct tc3589x_keypad_platform_data *cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 118 */;
	struct tc_keypad {
		struct tc3589x *tc3589x;
		struct input_dev *input;
		const struct tc3589x_keypad_platform_data *board;
		unsigned int krow;
		unsigned int kcol;
		unsigned short *keymap;
		bool keypad_stopped;
	} cocci_id/* drivers/input/keyboard/tc3589x-keypad.c 104 */;
}
