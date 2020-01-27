cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 80 */;
	void *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 80 */;
	int cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 80 */;
	struct ep93xx_keypad {
		struct ep93xx_keypad_platform_data *pdata;
		struct input_dev *input_dev;
		struct clk *clk;
		void __iomem *mmio_base;
		unsigned short keycodes[EP93XX_MATRIX_SIZE];
		int key1;
		int key2;
		int irq;
		bool enabled;
	} cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 63 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 366 */;
	struct ep93xx_keypad cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 236 */;
	struct resource *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 233 */;
	const struct matrix_keymap_data *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 231 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 228 */;
	struct device *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 200 */;
	struct ep93xx_keypad *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 169 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 167 */;
	void cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 167 */;
	unsigned int cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 134 */;
	struct ep93xx_keypad_platform_data *cocci_id/* drivers/input/keyboard/ep93xx_keypad.c 133 */;
}
