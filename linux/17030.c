cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/joystick/interact.c 79 */;
	unsigned char cocci_id/* drivers/input/joystick/interact.c 78 */;
	unsigned long cocci_id/* drivers/input/joystick/interact.c 77 */;
	u32 *cocci_id/* drivers/input/joystick/interact.c 75 */;
	struct interact_type cocci_id/* drivers/input/joystick/interact.c 66 */[];
	struct interact_type {
		int id;
		short *abs;
		short *btn;
		char *name;
		unsigned char length;
		unsigned char b8;
	} cocci_id/* drivers/input/joystick/interact.c 57 */;
	short cocci_id/* drivers/input/joystick/interact.c 47 */[];
	struct interact {
		struct gameport *gameport;
		struct input_dev *dev;
		int bads;
		int reads;
		unsigned char type;
		unsigned char length;
		char phys[32];
	} cocci_id/* drivers/input/joystick/interact.c 37 */;
	struct gameport_driver cocci_id/* drivers/input/joystick/interact.c 288 */;
	struct interact cocci_id/* drivers/input/joystick/interact.c 198 */;
	__u32 cocci_id/* drivers/input/joystick/interact.c 194 */[3];
	struct gameport_driver *cocci_id/* drivers/input/joystick/interact.c 190 */;
	struct gameport *cocci_id/* drivers/input/joystick/interact.c 190 */;
	int cocci_id/* drivers/input/joystick/interact.c 190 */;
	struct interact *cocci_id/* drivers/input/joystick/interact.c 181 */;
	struct input_dev *cocci_id/* drivers/input/joystick/interact.c 179 */;
	void cocci_id/* drivers/input/joystick/interact.c 179 */;
	u32 cocci_id/* drivers/input/joystick/interact.c 116 */[3];
}
