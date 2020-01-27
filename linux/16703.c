cocci_test_suite() {
	unsigned long cocci_id/* drivers/input/keyboard/nspire-keypad.c 98 */;
	struct nspire_keypad *cocci_id/* drivers/input/keyboard/nspire-keypad.c 96 */;
	int cocci_id/* drivers/input/keyboard/nspire-keypad.c 96 */;
	u16 cocci_id/* drivers/input/keyboard/nspire-keypad.c 59 */;
	u16 cocci_id/* drivers/input/keyboard/nspire-keypad.c 58 */[8];
	u32 cocci_id/* drivers/input/keyboard/nspire-keypad.c 57 */;
	unsigned int cocci_id/* drivers/input/keyboard/nspire-keypad.c 55 */;
	unsigned short *cocci_id/* drivers/input/keyboard/nspire-keypad.c 54 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/nspire-keypad.c 50 */;
	void *cocci_id/* drivers/input/keyboard/nspire-keypad.c 50 */;
	struct nspire_keypad {
		void __iomem *reg_base;
		u32 int_mask;
		struct input_dev *input;
		struct clk *clk;
		struct matrix_keymap_data *keymap;
		int row_shift;
		u32 scan_interval;
		u32 row_delay;
		u16 state[KEYPAD_BITMASK_ROWS];
		bool active_low;
	} cocci_id/* drivers/input/keyboard/nspire-keypad.c 31 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/nspire-keypad.c 261 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/nspire-keypad.c 255 */[];
	struct nspire_keypad cocci_id/* drivers/input/keyboard/nspire-keypad.c 171 */;
	struct resource *cocci_id/* drivers/input/keyboard/nspire-keypad.c 163 */;
	const struct device_node *cocci_id/* drivers/input/keyboard/nspire-keypad.c 160 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/nspire-keypad.c 158 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/nspire-keypad.c 151 */;
	void cocci_id/* drivers/input/keyboard/nspire-keypad.c 151 */;
}
