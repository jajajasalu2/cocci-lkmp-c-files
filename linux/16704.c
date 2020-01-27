cocci_test_suite() {
	unsigned short *cocci_id/* drivers/input/keyboard/bcm-keypad.c 98 */;
	unsigned int cocci_id/* drivers/input/keyboard/bcm-keypad.c 97 */;
	int cocci_id/* drivers/input/keyboard/bcm-keypad.c 95 */;
	struct bcm_kp {
		void __iomem *base;
		int irq;
		struct clk *clk;
		struct input_dev *input_dev;
		unsigned long last_state[2];
		unsigned int n_rows;
		unsigned int n_cols;
		u32 kpcr;
		u32 kpior;
		u32 kpemr;
		u32 imr0_val;
		u32 imr1_val;
	} cocci_id/* drivers/input/keyboard/bcm-keypad.c 76 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/bcm-keypad.c 442 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/bcm-keypad.c 436 */[];
	long cocci_id/* drivers/input/keyboard/bcm-keypad.c 392 */;
	struct resource *cocci_id/* drivers/input/keyboard/bcm-keypad.c 321 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/bcm-keypad.c 317 */;
	struct device_node *cocci_id/* drivers/input/keyboard/bcm-keypad.c 207 */;
	struct device *cocci_id/* drivers/input/keyboard/bcm-keypad.c 206 */;
	struct bcm_kp *cocci_id/* drivers/input/keyboard/bcm-keypad.c 199 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/bcm-keypad.c 197 */;
	void cocci_id/* drivers/input/keyboard/bcm-keypad.c 197 */;
	u32 cocci_id/* drivers/input/keyboard/bcm-keypad.c 176 */;
	const struct bcm_kp *cocci_id/* drivers/input/keyboard/bcm-keypad.c 174 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/bcm-keypad.c 129 */;
	void *cocci_id/* drivers/input/keyboard/bcm-keypad.c 129 */;
	unsigned long cocci_id/* drivers/input/keyboard/bcm-keypad.c 105 */;
}
