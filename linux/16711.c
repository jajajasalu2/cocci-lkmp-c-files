cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/keyboard/xtkbd.c 96 */;
	struct xtkbd cocci_id/* drivers/input/keyboard/xtkbd.c 76 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/xtkbd.c 72 */;
	struct xtkbd *cocci_id/* drivers/input/keyboard/xtkbd.c 71 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/xtkbd.c 69 */;
	struct serio *cocci_id/* drivers/input/keyboard/xtkbd.c 69 */;
	int cocci_id/* drivers/input/keyboard/xtkbd.c 69 */;
	unsigned int cocci_id/* drivers/input/keyboard/xtkbd.c 48 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/xtkbd.c 47 */;
	struct xtkbd {
		unsigned char keycode[256];
		struct input_dev *dev;
		struct serio *serio;
		char phys[32];
	} cocci_id/* drivers/input/keyboard/xtkbd.c 40 */;
	unsigned char cocci_id/* drivers/input/keyboard/xtkbd.c 29 */[256];
	struct serio_driver cocci_id/* drivers/input/keyboard/xtkbd.c 144 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/xtkbd.c 132 */[];
	void cocci_id/* drivers/input/keyboard/xtkbd.c 122 */;
}
