cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/input/keyboard/imx_keypad.c 581 */;
	const struct dev_pm_ops cocci_id/* drivers/input/keyboard/imx_keypad.c 577 */;
	int cocci_id/* drivers/input/keyboard/imx_keypad.c 558 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/imx_keypad.c 557 */;
	struct imx_keypad *cocci_id/* drivers/input/keyboard/imx_keypad.c 556 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/imx_keypad.c 555 */;
	struct device *cocci_id/* drivers/input/keyboard/imx_keypad.c 553 */;
	int __maybe_unused cocci_id/* drivers/input/keyboard/imx_keypad.c 553 */;
	unsigned short cocci_id/* drivers/input/keyboard/imx_keypad.c 530 */;
	struct imx_keypad {
		struct clk *clk;
		struct input_dev *input_dev;
		void __iomem *mmio_base;
		int irq;
		struct timer_list check_matrix_timer;
#define IMX_KEYPAD_SCANS_FOR_STABILITY 3
		int stable_count;
		bool enabled;
		unsigned short rows_en_mask;
		unsigned short cols_en_mask;
		unsigned short keycodes[MAX_MATRIX_KEY_NUM];
		unsigned short matrix_stable_state[MAX_MATRIX_KEY_COLS];
		unsigned short matrix_unstable_state[MAX_MATRIX_KEY_COLS];
	} cocci_id/* drivers/input/keyboard/imx_keypad.c 44 */;
	const struct matrix_keymap_data *cocci_id/* drivers/input/keyboard/imx_keypad.c 421 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/imx_keypad.c 412 */[];
	irqreturn_t cocci_id/* drivers/input/keyboard/imx_keypad.c 287 */;
	void *cocci_id/* drivers/input/keyboard/imx_keypad.c 287 */;
	bool cocci_id/* drivers/input/keyboard/imx_keypad.c 188 */;
	unsigned short cocci_id/* drivers/input/keyboard/imx_keypad.c 186 */[MAX_MATRIX_KEY_COLS];
	struct timer_list *cocci_id/* drivers/input/keyboard/imx_keypad.c 183 */;
	void cocci_id/* drivers/input/keyboard/imx_keypad.c 183 */;
	unsigned short *cocci_id/* drivers/input/keyboard/imx_keypad.c 144 */;
}
