cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/keyboard/sunkbd.c 78 */;
	struct sunkbd {
		unsigned char keycode[ARRAY_SIZE(sunkbd_keycode)];
		struct input_dev *dev;
		struct serio *serio;
		struct work_struct tq;
		wait_queue_head_t wait;
		char name[64];
		char phys[32];
		char type;
		bool enabled;
		volatile s8 reset;
		volatile s8 layout;
	} cocci_id/* drivers/input/keyboard/sunkbd.c 59 */;
	struct serio_driver cocci_id/* drivers/input/keyboard/sunkbd.c 344 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/sunkbd.c 326 */[];
	void cocci_id/* drivers/input/keyboard/sunkbd.c 315 */;
	unsigned char cocci_id/* drivers/input/keyboard/sunkbd.c 289 */;
	unsigned char cocci_id/* drivers/input/keyboard/sunkbd.c 28 */[128];
	struct sunkbd cocci_id/* drivers/input/keyboard/sunkbd.c 244 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/sunkbd.c 240 */;
	struct sunkbd *cocci_id/* drivers/input/keyboard/sunkbd.c 239 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/sunkbd.c 237 */;
	struct serio *cocci_id/* drivers/input/keyboard/sunkbd.c 237 */;
	int cocci_id/* drivers/input/keyboard/sunkbd.c 237 */;
	bool cocci_id/* drivers/input/keyboard/sunkbd.c 225 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/sunkbd.c 207 */;
	unsigned int cocci_id/* drivers/input/keyboard/sunkbd.c 138 */;
}
