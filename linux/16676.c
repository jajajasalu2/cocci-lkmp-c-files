cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/keyboard/spear-keyboard.c 73 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/spear-keyboard.c 69 */;
	void *cocci_id/* drivers/input/keyboard/spear-keyboard.c 69 */;
	int cocci_id/* drivers/input/keyboard/spear-keyboard.c 69 */;
	struct spear_kbd {
		struct input_dev *input;
		void __iomem *io_base;
		struct clk *clk;
		unsigned int irq;
		unsigned int mode;
		unsigned int suspended_rate;
		unsigned short last_key;
		unsigned short keycodes[NUM_ROWS * NUM_COLS];
		bool rep;
		bool irq_wake_enabled;
		u32 mode_ctl_reg;
	} cocci_id/* drivers/input/keyboard/spear-keyboard.c 55 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/spear-keyboard.c 377 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/spear-keyboard.c 370 */[];
	struct device *cocci_id/* drivers/input/keyboard/spear-keyboard.c 340 */;
	int __maybe_unused cocci_id/* drivers/input/keyboard/spear-keyboard.c 340 */;
	struct resource *cocci_id/* drivers/input/keyboard/spear-keyboard.c 189 */;
	const struct matrix_keymap_data *cocci_id/* drivers/input/keyboard/spear-keyboard.c 186 */;
	struct kbd_platform_data *cocci_id/* drivers/input/keyboard/spear-keyboard.c 185 */;
	struct device_node *cocci_id/* drivers/input/keyboard/spear-keyboard.c 151 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/spear-keyboard.c 148 */;
	u32 cocci_id/* drivers/input/keyboard/spear-keyboard.c 135 */;
	struct spear_kbd *cocci_id/* drivers/input/keyboard/spear-keyboard.c 134 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/spear-keyboard.c 132 */;
	void cocci_id/* drivers/input/keyboard/spear-keyboard.c 132 */;
}
