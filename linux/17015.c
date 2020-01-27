cocci_test_suite() {
	struct tsc_ser cocci_id/* drivers/input/touchscreen/tsc40.c 86 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/tsc40.c 83 */;
	struct tsc_ser *cocci_id/* drivers/input/touchscreen/tsc40.c 82 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/tsc40.c 80 */;
	struct serio *cocci_id/* drivers/input/touchscreen/tsc40.c 80 */;
	int cocci_id/* drivers/input/touchscreen/tsc40.c 80 */;
	unsigned int cocci_id/* drivers/input/touchscreen/tsc40.c 42 */;
	unsigned char cocci_id/* drivers/input/touchscreen/tsc40.c 42 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/tsc40.c 41 */;
	u32 cocci_id/* drivers/input/touchscreen/tsc40.c 28 */;
	u8 *cocci_id/* drivers/input/touchscreen/tsc40.c 27 */;
	struct tsc_ser {
		struct input_dev *dev;
		struct serio *serio;
		u32 idx;
		unsigned char data[PACKET_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/tsc40.c 16 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/tsc40.c 157 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/tsc40.c 144 */[];
	void cocci_id/* drivers/input/touchscreen/tsc40.c 132 */;
}
