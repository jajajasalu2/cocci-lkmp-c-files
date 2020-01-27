cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 99 */;
	struct fujitsu *cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 98 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 96 */;
	struct serio *cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 96 */;
	int cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 96 */;
	void cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 79 */;
	unsigned int cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 44 */;
	unsigned char cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 44 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 43 */;
	struct fujitsu {
		struct input_dev *dev;
		struct serio *serio;
		int idx;
		unsigned char data[FUJITSU_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 27 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 162 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 150 */[];
	struct fujitsu cocci_id/* drivers/input/touchscreen/fujitsu_ts.c 102 */;
}
