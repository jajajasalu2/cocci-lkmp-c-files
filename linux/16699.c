cocci_test_suite() {
	struct twl4030_keypad {
		unsigned short keymap[TWL4030_KEYMAP_SIZE];
		u16 kp_state[TWL4030_MAX_ROWS];
		bool autorepeat;
		unsigned int n_rows;
		unsigned int n_cols;
		unsigned int irq;
		struct device *dbg_dev;
		struct input_dev *input;
	} cocci_id/* drivers/input/keyboard/twl4030_keypad.c 47 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/twl4030_keypad.c 448 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/twl4030_keypad.c 435 */[];
	void cocci_id/* drivers/input/keyboard/twl4030_keypad.c 427 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 328 */;
	const struct matrix_keymap_data *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 326 */;
	struct twl4030_keypad_data *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 325 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 323 */;
	u8 cocci_id/* drivers/input/keyboard/twl4030_keypad.c 247 */;
	struct twl4030_keypad *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 246 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/twl4030_keypad.c 244 */;
	void *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 244 */;
	int cocci_id/* drivers/input/keyboard/twl4030_keypad.c 244 */;
	u16 cocci_id/* drivers/input/keyboard/twl4030_keypad.c 197 */[TWL4030_MAX_ROWS];
	bool cocci_id/* drivers/input/keyboard/twl4030_keypad.c 177 */;
	u16 *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 177 */;
	u8 cocci_id/* drivers/input/keyboard/twl4030_keypad.c 166 */[TWL4030_MAX_ROWS];
	u16 cocci_id/* drivers/input/keyboard/twl4030_keypad.c 150 */;
	u32 cocci_id/* drivers/input/keyboard/twl4030_keypad.c 126 */;
	u8 *cocci_id/* drivers/input/keyboard/twl4030_keypad.c 126 */;
}
