cocci_test_suite() {
	struct sw {
		struct gameport *gameport;
		struct input_dev *dev[4];
		char name[64];
		char phys[4][32];
		int length;
		int type;
		int bits;
		int number;
		int fail;
		int ok;
		int reads;
		int bads;
	} cocci_id/* drivers/input/joystick/sidewinder.c 98 */;
	struct {
		int x;
		int y;
	} cocci_id/* drivers/input/joystick/sidewinder.c 93 */[];
	short cocci_id/* drivers/input/joystick/sidewinder.c 85 */[][12];
	struct gameport_driver cocci_id/* drivers/input/joystick/sidewinder.c 796 */;
	char cocci_id/* drivers/input/joystick/sidewinder.c 69 */[][7];
	char *cocci_id/* drivers/input/joystick/sidewinder.c 66 */[];
	struct sw cocci_id/* drivers/input/joystick/sidewinder.c 583 */;
	char cocci_id/* drivers/input/joystick/sidewinder.c 579 */[40];
	struct gameport_driver *cocci_id/* drivers/input/joystick/sidewinder.c 570 */;
	struct gameport *cocci_id/* drivers/input/joystick/sidewinder.c 570 */;
	char cocci_id/* drivers/input/joystick/sidewinder.c 530 */[8];
	int cocci_id/* drivers/input/joystick/sidewinder.c 529 */;
	unsigned char *cocci_id/* drivers/input/joystick/sidewinder.c 527 */;
	char *cocci_id/* drivers/input/joystick/sidewinder.c 527 */;
	size_t cocci_id/* drivers/input/joystick/sidewinder.c 527 */;
	void cocci_id/* drivers/input/joystick/sidewinder.c 527 */;
	struct sw *cocci_id/* drivers/input/joystick/sidewinder.c 503 */;
	struct input_dev *cocci_id/* drivers/input/joystick/sidewinder.c 501 */;
	unsigned char cocci_id/* drivers/input/joystick/sidewinder.c 411 */[SW_LENGTH];
	unsigned char cocci_id/* drivers/input/joystick/sidewinder.c 267 */;
	__u64 cocci_id/* drivers/input/joystick/sidewinder.c 265 */;
	unsigned long cocci_id/* drivers/input/joystick/sidewinder.c 227 */;
	const int cocci_id/* drivers/input/joystick/sidewinder.c 226 */[];
	char cocci_id/* drivers/input/joystick/sidewinder.c 201 */;
}
