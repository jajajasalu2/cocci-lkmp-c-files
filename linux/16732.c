cocci_test_suite() {
	const struct stmpe_keypad_variant cocci_id/* drivers/input/keyboard/stmpe-keypad.c 82 */[];
	struct stmpe_keypad_variant {
		bool auto_increment;
		bool set_pullup;
		int num_data;
		int num_normal_data;
		int max_cols;
		int max_rows;
		unsigned int col_gpios;
		unsigned int row_gpios;
	} cocci_id/* drivers/input/keyboard/stmpe-keypad.c 71 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/stmpe-keypad.c 415 */;
	struct stmpe_keypad cocci_id/* drivers/input/keyboard/stmpe-keypad.c 345 */;
	struct device_node *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 333 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 330 */;
	u32 cocci_id/* drivers/input/keyboard/stmpe-keypad.c 314 */;
	void cocci_id/* drivers/input/keyboard/stmpe-keypad.c 313 */;
	u8 cocci_id/* drivers/input/keyboard/stmpe-keypad.c 200 */;
	struct stmpe *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 199 */;
	unsigned int cocci_id/* drivers/input/keyboard/stmpe-keypad.c 197 */;
	const struct stmpe_keypad_variant *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 196 */;
	struct stmpe_keypad *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 194 */;
	int cocci_id/* drivers/input/keyboard/stmpe-keypad.c 194 */;
	bool cocci_id/* drivers/input/keyboard/stmpe-keypad.c 180 */;
	u8 cocci_id/* drivers/input/keyboard/stmpe-keypad.c 167 */[MAX_NUM_DATA];
	struct input_dev *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 165 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/stmpe-keypad.c 162 */;
	void *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 162 */;
	u8 *cocci_id/* drivers/input/keyboard/stmpe-keypad.c 140 */;
	struct stmpe_keypad {
		struct stmpe *stmpe;
		struct input_dev *input;
		const struct stmpe_keypad_variant *variant;
		unsigned int debounce_ms;
		unsigned int scan_count;
		bool no_autorepeat;
		unsigned int rows;
		unsigned int cols;
		unsigned short keymap[STMPE_KEYPAD_KEYMAP_MAX_SIZE];
	} cocci_id/* drivers/input/keyboard/stmpe-keypad.c 128 */;
}
