cocci_test_suite() {
	struct resource *cocci_id/* drivers/input/keyboard/opencores-kbd.c 42 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/opencores-kbd.c 38 */;
	unsigned char cocci_id/* drivers/input/keyboard/opencores-kbd.c 29 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/opencores-kbd.c 28 */;
	struct opencores_kbd *cocci_id/* drivers/input/keyboard/opencores-kbd.c 27 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/opencores-kbd.c 25 */;
	void *cocci_id/* drivers/input/keyboard/opencores-kbd.c 25 */;
	int cocci_id/* drivers/input/keyboard/opencores-kbd.c 25 */;
	struct opencores_kbd {
		struct input_dev *input;
		void __iomem *addr;
		int irq;
		unsigned short keycodes[128];
	} cocci_id/* drivers/input/keyboard/opencores-kbd.c 18 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/opencores-kbd.c 113 */;
}
