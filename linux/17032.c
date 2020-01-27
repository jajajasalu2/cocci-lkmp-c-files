cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/joystick/guillemot.c 72 */;
	unsigned char cocci_id/* drivers/input/joystick/guillemot.c 71 */;
	unsigned long cocci_id/* drivers/input/joystick/guillemot.c 70 */;
	u8 *cocci_id/* drivers/input/joystick/guillemot.c 68 */;
	struct guillemot_type cocci_id/* drivers/input/joystick/guillemot.c 60 */[];
	struct guillemot {
		struct gameport *gameport;
		struct input_dev *dev;
		int bads;
		int reads;
		struct guillemot_type *type;
		unsigned char length;
		char phys[32];
	} cocci_id/* drivers/input/joystick/guillemot.c 50 */;
	struct guillemot_type {
		unsigned char id;
		short *abs;
		short *btn;
		int hat;
		char *name;
	} cocci_id/* drivers/input/joystick/guillemot.c 42 */;
	struct {
		int x;
		int y;
	} cocci_id/* drivers/input/joystick/guillemot.c 37 */[16];
	short cocci_id/* drivers/input/joystick/guillemot.c 31 */[];
	struct gameport_driver cocci_id/* drivers/input/joystick/guillemot.c 258 */;
	struct guillemot cocci_id/* drivers/input/joystick/guillemot.c 169 */;
	u8 cocci_id/* drivers/input/joystick/guillemot.c 165 */[GUILLEMOT_MAX_LENGTH];
	struct gameport_driver *cocci_id/* drivers/input/joystick/guillemot.c 161 */;
	struct gameport *cocci_id/* drivers/input/joystick/guillemot.c 161 */;
	int cocci_id/* drivers/input/joystick/guillemot.c 161 */;
	struct guillemot *cocci_id/* drivers/input/joystick/guillemot.c 152 */;
	struct input_dev *cocci_id/* drivers/input/joystick/guillemot.c 150 */;
	void cocci_id/* drivers/input/joystick/guillemot.c 150 */;
}
