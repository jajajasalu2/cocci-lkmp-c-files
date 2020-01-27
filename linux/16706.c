cocci_test_suite() {
	struct matrix_keypad *cocci_id/* drivers/input/keyboard/matrix_keypad.c 98 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/matrix_keypad.c 571 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/matrix_keypad.c 564 */[];
	struct matrix_keypad cocci_id/* drivers/input/keyboard/matrix_keypad.c 497 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/matrix_keypad.c 484 */;
	bool cocci_id/* drivers/input/keyboard/matrix_keypad.c 47 */;
	int cocci_id/* drivers/input/keyboard/matrix_keypad.c 47 */;
	const struct matrix_keypad_platform_data *cocci_id/* drivers/input/keyboard/matrix_keypad.c 46 */;
	void cocci_id/* drivers/input/keyboard/matrix_keypad.c 46 */;
	unsigned int *cocci_id/* drivers/input/keyboard/matrix_keypad.c 405 */;
	struct device_node *cocci_id/* drivers/input/keyboard/matrix_keypad.c 404 */;
	struct device *cocci_id/* drivers/input/keyboard/matrix_keypad.c 401 */;
	struct matrix_keypad_platform_data *cocci_id/* drivers/input/keyboard/matrix_keypad.c 400 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/matrix_keypad.c 303 */;
	unsigned int cocci_id/* drivers/input/keyboard/matrix_keypad.c 255 */;
	struct matrix_keypad {
		const struct matrix_keypad_platform_data *pdata;
		struct input_dev *input_dev;
		unsigned int row_shift;
	DECLARE_BITMAP(disabled_gpios,MATRIX_MAX_ROWS)
		;
		uint32_t last_key_state[MATRIX_MAX_COLS];
		struct delayed_work work;
		spinlock_t lock;
		bool scan_pending;
		bool stopped;
		bool gpio_all_disabled;
	} cocci_id/* drivers/input/keyboard/matrix_keypad.c 25 */;
	unsigned long cocci_id/* drivers/input/keyboard/matrix_keypad.c 175 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/matrix_keypad.c 172 */;
	void *cocci_id/* drivers/input/keyboard/matrix_keypad.c 172 */;
	uint32_t cocci_id/* drivers/input/keyboard/matrix_keypad.c 142 */;
	uint32_t cocci_id/* drivers/input/keyboard/matrix_keypad.c 121 */[MATRIX_MAX_COLS];
	const unsigned short *cocci_id/* drivers/input/keyboard/matrix_keypad.c 119 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/matrix_keypad.c 114 */;
}
