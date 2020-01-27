cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/clps711x-keypad.c 91 */;
	struct device_node *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 89 */;
	struct device *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 88 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 85 */;
	struct clps711x_gpio_data *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 47 */;
	int cocci_id/* drivers/input/keyboard/clps711x-keypad.c 37 */;
	bool cocci_id/* drivers/input/keyboard/clps711x-keypad.c 36 */;
	struct clps711x_keypad_data *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 35 */;
	const unsigned short *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 34 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/clps711x-keypad.c 32 */;
	void cocci_id/* drivers/input/keyboard/clps711x-keypad.c 32 */;
	struct clps711x_keypad_data {
		struct regmap *syscon;
		int row_count;
		unsigned int row_shift;
		struct clps711x_gpio_data *gpio_data;
	} cocci_id/* drivers/input/keyboard/clps711x-keypad.c 25 */;
	struct clps711x_gpio_data {
		struct gpio_desc *desc;
	DECLARE_BITMAP(last_state,CLPS711X_KEYPAD_COL_COUNT)
		;
	} cocci_id/* drivers/input/keyboard/clps711x-keypad.c 20 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/clps711x-keypad.c 174 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/clps711x-keypad.c 168 */[];
}
