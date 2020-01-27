cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/keyboard/st-keyscan.c 93 */;
	void cocci_id/* drivers/input/keyboard/st-keyscan.c 93 */;
	unsigned long cocci_id/* drivers/input/keyboard/st-keyscan.c 43 */;
	unsigned short *cocci_id/* drivers/input/keyboard/st-keyscan.c 42 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/st-keyscan.c 39 */;
	void *cocci_id/* drivers/input/keyboard/st-keyscan.c 39 */;
	struct st_keyscan {
		void __iomem *base;
		int irq;
		struct clk *clk;
		struct input_dev *input_dev;
		unsigned long last_state;
		unsigned int n_rows;
		unsigned int n_cols;
		unsigned int debounce_us;
	} cocci_id/* drivers/input/keyboard/st-keyscan.c 28 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/st-keyscan.c 258 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/st-keyscan.c 252 */[];
	struct resource *cocci_id/* drivers/input/keyboard/st-keyscan.c 126 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/st-keyscan.c 122 */;
	struct device_node *cocci_id/* drivers/input/keyboard/st-keyscan.c 103 */;
	struct device *cocci_id/* drivers/input/keyboard/st-keyscan.c 102 */;
	struct st_keyscan *cocci_id/* drivers/input/keyboard/st-keyscan.c 100 */;
	int cocci_id/* drivers/input/keyboard/st-keyscan.c 100 */;
}
