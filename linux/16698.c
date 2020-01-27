cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/keyboard/stowaway.c 98 */;
	struct skbd cocci_id/* drivers/input/keyboard/stowaway.c 78 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/stowaway.c 74 */;
	struct skbd *cocci_id/* drivers/input/keyboard/stowaway.c 73 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/stowaway.c 71 */;
	struct serio *cocci_id/* drivers/input/keyboard/stowaway.c 71 */;
	int cocci_id/* drivers/input/keyboard/stowaway.c 71 */;
	unsigned int cocci_id/* drivers/input/keyboard/stowaway.c 57 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/stowaway.c 56 */;
	struct skbd {
		unsigned char keycode[128];
		struct input_dev *dev;
		struct serio *serio;
		char phys[32];
	} cocci_id/* drivers/input/keyboard/stowaway.c 49 */;
	unsigned char cocci_id/* drivers/input/keyboard/stowaway.c 30 */[128];
	struct serio_driver cocci_id/* drivers/input/keyboard/stowaway.c 145 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/stowaway.c 133 */[];
	void cocci_id/* drivers/input/keyboard/stowaway.c 123 */;
}
