cocci_test_suite() {
	void cocci_id/* drivers/input/touchscreen/touchwin.c 88 */;
	unsigned int cocci_id/* drivers/input/touchscreen/touchwin.c 58 */;
	unsigned char cocci_id/* drivers/input/touchscreen/touchwin.c 58 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/touchwin.c 57 */;
	struct tw {
		struct input_dev *dev;
		struct serio *serio;
		int idx;
		int touched;
		unsigned char data[TW_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/touchwin.c 48 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/touchwin.c 170 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/touchwin.c 158 */[];
	struct tw cocci_id/* drivers/input/touchscreen/touchwin.c 112 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/touchwin.c 109 */;
	struct tw *cocci_id/* drivers/input/touchscreen/touchwin.c 108 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/touchwin.c 106 */;
	struct serio *cocci_id/* drivers/input/touchscreen/touchwin.c 106 */;
	int cocci_id/* drivers/input/touchscreen/touchwin.c 106 */;
}
