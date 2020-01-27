cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/omap4-keypad.c 97 */;
	struct omap4_keypad *cocci_id/* drivers/input/keyboard/omap4-keypad.c 97 */;
	int cocci_id/* drivers/input/keyboard/omap4-keypad.c 97 */;
	struct omap4_keypad {
		struct input_dev *input;
		void __iomem *base;
		bool irq_wake_enabled;
		unsigned int irq;
		unsigned int rows;
		unsigned int cols;
		u32 reg_offset;
		u32 irqreg_offset;
		unsigned int row_shift;
		bool no_autorepeat;
		unsigned char key_state[8];
		unsigned short *keymap;
	} cocci_id/* drivers/input/keyboard/omap4-keypad.c 68 */;
	enum{KBD_REVISION_OMAP4=0, KBD_REVISION_OMAP5,} cocci_id/* drivers/input/keyboard/omap4-keypad.c 63 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/omap4-keypad.c 445 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/omap4-keypad.c 406 */[];
	struct omap4_keypad cocci_id/* drivers/input/keyboard/omap4-keypad.c 248 */;
	struct resource *cocci_id/* drivers/input/keyboard/omap4-keypad.c 230 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/omap4-keypad.c 226 */;
	struct device_node *cocci_id/* drivers/input/keyboard/omap4-keypad.c 212 */;
	struct device *cocci_id/* drivers/input/keyboard/omap4-keypad.c 209 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/omap4-keypad.c 189 */;
	u32 *cocci_id/* drivers/input/keyboard/omap4-keypad.c 128 */;
	unsigned int cocci_id/* drivers/input/keyboard/omap4-keypad.c 127 */;
	unsigned char cocci_id/* drivers/input/keyboard/omap4-keypad.c 126 */[ARRAY_SIZE(keypad_data->key_state)];
	irqreturn_t cocci_id/* drivers/input/keyboard/omap4-keypad.c 112 */;
	void *cocci_id/* drivers/input/keyboard/omap4-keypad.c 112 */;
	void cocci_id/* drivers/input/keyboard/omap4-keypad.c 103 */;
}
