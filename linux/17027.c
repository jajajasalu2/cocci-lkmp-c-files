cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/joystick/grip.c 72 */;
	unsigned char cocci_id/* drivers/input/joystick/grip.c 71 */;
	unsigned long cocci_id/* drivers/input/joystick/grip.c 70 */;
	unsigned int *cocci_id/* drivers/input/joystick/grip.c 68 */;
	char cocci_id/* drivers/input/joystick/grip.c 61 */[];
	int *cocci_id/* drivers/input/joystick/grip.c 59 */[];
	char *cocci_id/* drivers/input/joystick/grip.c 57 */[];
	int cocci_id/* drivers/input/joystick/grip.c 53 */[];
	struct gameport_driver cocci_id/* drivers/input/joystick/grip.c 400 */;
	struct grip {
		struct gameport *gameport;
		struct input_dev *dev[2];
		unsigned char mode[2];
		int reads;
		int bads;
		char phys[2][32];
	} cocci_id/* drivers/input/joystick/grip.c 38 */;
	struct grip cocci_id/* drivers/input/joystick/grip.c 290 */;
	unsigned int cocci_id/* drivers/input/joystick/grip.c 286 */[GRIP_LENGTH_XT];
	struct gameport_driver *cocci_id/* drivers/input/joystick/grip.c 282 */;
	struct gameport *cocci_id/* drivers/input/joystick/grip.c 282 */;
	int cocci_id/* drivers/input/joystick/grip.c 282 */;
	struct grip *cocci_id/* drivers/input/joystick/grip.c 277 */;
	struct input_dev *cocci_id/* drivers/input/joystick/grip.c 275 */;
	void cocci_id/* drivers/input/joystick/grip.c 275 */;
	char cocci_id/* drivers/input/joystick/grip.c 114 */;
}
