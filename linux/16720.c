cocci_test_suite() {
	int cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 96 */;
	u32 cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 95 */;
	struct ske_keypad *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 93 */;
	int __init cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 93 */;
	u16 cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 73 */;
	struct ske_keypad {
		int irq;
		void __iomem *reg_base;
		struct input_dev *input;
		const struct ske_keypad_platform_data *board;
		unsigned short keymap[SKE_KPD_NUM_ROWS * SKE_KPD_NUM_COLS];
		struct clk *clk;
		struct clk *pclk;
		spinlock_t ske_keypad_lock;
	} cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 62 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 422 */;
	struct device *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 404 */;
	struct ske_keypad cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 247 */;
	struct resource *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 228 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 227 */;
	const struct ske_keypad_platform_data *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 224 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 222 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 197 */;
	void *cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 197 */;
	u8 cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 167 */;
	void cocci_id/* drivers/input/keyboard/nomadik-ske-keypad.c 165 */;
}
