cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/keyboard/newtonkbd.c 94 */;
	struct nkbd cocci_id/* drivers/input/keyboard/newtonkbd.c 74 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/newtonkbd.c 70 */;
	struct nkbd *cocci_id/* drivers/input/keyboard/newtonkbd.c 69 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/newtonkbd.c 67 */;
	struct serio *cocci_id/* drivers/input/keyboard/newtonkbd.c 67 */;
	int cocci_id/* drivers/input/keyboard/newtonkbd.c 67 */;
	unsigned int cocci_id/* drivers/input/keyboard/newtonkbd.c 51 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/newtonkbd.c 50 */;
	struct nkbd {
		unsigned char keycode[128];
		struct input_dev *dev;
		struct serio *serio;
		char phys[32];
	} cocci_id/* drivers/input/keyboard/newtonkbd.c 43 */;
	unsigned char cocci_id/* drivers/input/keyboard/newtonkbd.c 27 */[128];
	struct serio_driver cocci_id/* drivers/input/keyboard/newtonkbd.c 141 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/newtonkbd.c 129 */[];
	void cocci_id/* drivers/input/keyboard/newtonkbd.c 119 */;
}
