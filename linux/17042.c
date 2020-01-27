cocci_test_suite() {
	const int *cocci_id/* drivers/input/joystick/grip_mp.c 98 */[];
	struct gameport_driver cocci_id/* drivers/input/joystick/grip_mp.c 681 */;
	struct grip_mp cocci_id/* drivers/input/joystick/grip_mp.c 635 */;
	struct gameport_driver *cocci_id/* drivers/input/joystick/grip_mp.c 630 */;
	struct input_dev *cocci_id/* drivers/input/joystick/grip_mp.c 573 */;
	void cocci_id/* drivers/input/joystick/grip_mp.c 573 */;
	struct grip_mp {
		struct gameport *gameport;
		struct grip_port *port[GRIP_MAX_PORTS];
		int reads;
		int bads;
	} cocci_id/* drivers/input/joystick/grip_mp.c 51 */;
	struct grip_port {
		struct input_dev *dev;
		int mode;
		int registered;
		int buttons;
		int xaxes;
		int yaxes;
		int dirty;
	} cocci_id/* drivers/input/joystick/grip_mp.c 39 */;
	struct grip_port *cocci_id/* drivers/input/joystick/grip_mp.c 360 */;
	struct grip_mp *cocci_id/* drivers/input/joystick/grip_mp.c 358 */;
	u32 *cocci_id/* drivers/input/joystick/grip_mp.c 319 */;
	struct gameport *cocci_id/* drivers/input/joystick/grip_mp.c 319 */;
	unsigned long cocci_id/* drivers/input/joystick/grip_mp.c 304 */;
	u8 cocci_id/* drivers/input/joystick/grip_mp.c 166 */;
	u8 *cocci_id/* drivers/input/joystick/grip_mp.c 134 */;
	u32 cocci_id/* drivers/input/joystick/grip_mp.c 119 */;
	int cocci_id/* drivers/input/joystick/grip_mp.c 119 */;
	int cocci_id/* drivers/input/joystick/grip_mp.c 113 */(int i,
							       struct grip_mp *grip);
	const int cocci_id/* drivers/input/joystick/grip_mp.c 111 */[];
	const char *cocci_id/* drivers/input/joystick/grip_mp.c 101 */[];
}
