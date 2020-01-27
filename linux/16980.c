cocci_test_suite() {
	struct gunze *cocci_id/* drivers/input/touchscreen/gunze.c 99 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/gunze.c 97 */;
	struct serio *cocci_id/* drivers/input/touchscreen/gunze.c 97 */;
	int cocci_id/* drivers/input/touchscreen/gunze.c 97 */;
	void cocci_id/* drivers/input/touchscreen/gunze.c 79 */;
	unsigned int cocci_id/* drivers/input/touchscreen/gunze.c 61 */;
	unsigned char cocci_id/* drivers/input/touchscreen/gunze.c 61 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/gunze.c 60 */;
	struct gunze {
		struct input_dev *dev;
		struct serio *serio;
		int idx;
		unsigned char data[GUNZE_MAX_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/gunze.c 36 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/gunze.c 161 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/gunze.c 149 */[];
	struct gunze cocci_id/* drivers/input/touchscreen/gunze.c 103 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/gunze.c 100 */;
}
