cocci_test_suite() {
	int cocci_id/* drivers/input/keyboard/lkkbd.c 74 */;
	struct serio_driver cocci_id/* drivers/input/keyboard/lkkbd.c 710 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/lkkbd.c 698 */[];
	struct lkkbd cocci_id/* drivers/input/keyboard/lkkbd.c 614 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/lkkbd.c 610 */;
	struct lkkbd *cocci_id/* drivers/input/keyboard/lkkbd.c 609 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/lkkbd.c 607 */;
	struct serio *cocci_id/* drivers/input/keyboard/lkkbd.c 607 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/lkkbd.c 566 */;
	unsigned int cocci_id/* drivers/input/keyboard/lkkbd.c 530 */;
	bool cocci_id/* drivers/input/keyboard/lkkbd.c 508 */;
	unsigned char cocci_id/* drivers/input/keyboard/lkkbd.c 427 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/lkkbd.c 426 */;
	void cocci_id/* drivers/input/keyboard/lkkbd.c 348 */;
	unsigned char *cocci_id/* drivers/input/keyboard/lkkbd.c 302 */;
	struct {
		unsigned char value;
		unsigned char *name;
	} cocci_id/* drivers/input/keyboard/lkkbd.c 283 */[];
	struct lkkbd {
		unsigned short keycode[LK_NUM_KEYCODES];
		int ignore_bytes;
		unsigned char id[LK_NUM_IGNORE_BYTES];
		struct input_dev *dev;
		struct serio *serio;
		struct work_struct tq;
		char name[64];
		char phys[32];
		char type;
		int bell_volume;
		int keyclick_volume;
		int ctrlclick_volume;
	} cocci_id/* drivers/input/keyboard/lkkbd.c 264 */;
	unsigned short cocci_id/* drivers/input/keyboard/lkkbd.c 143 */[LK_NUM_KEYCODES];
}
