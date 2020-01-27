cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 94 */;
	void *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 94 */;
	int cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 94 */;
	u8 cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 76 */;
	unsigned cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 75 */;
	struct lpc32xx_kscan_drv {
		struct input_dev *input;
		struct clk *clk;
		void __iomem *kscan_base;
		unsigned int irq;
		u32 matrix_sz;
		u32 deb_clks;
		u32 scan_delay;
		unsigned short *keymap;
		unsigned int row_shift;
		u8 lastkeystates[8];
	} cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 56 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 316 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 310 */[];
	struct device *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 286 */;
	size_t cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 164 */;
	struct resource *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 163 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 159 */;
	u32 cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 135 */;
	struct device_node *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 134 */;
	struct lpc32xx_kscan_drv *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 125 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 123 */;
	void cocci_id/* drivers/input/keyboard/lpc32xx-keys.c 123 */;
}
