cocci_test_suite() {
	struct db9 *cocci_id/* drivers/input/joystick/db9.c 98 */[3];
	struct db9 {
		struct input_dev *dev[DB9_MAX_DEVICES];
		struct timer_list timer;
		struct pardevice *pd;
		int mode;
		int used;
		int parportno;
		struct mutex mutex;
		char phys[DB9_MAX_DEVICES][32];
	} cocci_id/* drivers/input/joystick/db9.c 87 */;
	struct db9_mode_data {
		const char *name;
		const short *buttons;
		int n_buttons;
		int n_pads;
		int n_axis;
		int bidirectional;
		int reverse;
	} cocci_id/* drivers/input/joystick/db9.c 77 */;
	void __exit cocci_id/* drivers/input/joystick/db9.c 705 */;
	int __init cocci_id/* drivers/input/joystick/db9.c 682 */;
	struct parport_driver cocci_id/* drivers/input/joystick/db9.c 675 */;
	struct db9 cocci_id/* drivers/input/joystick/db9.c 593 */;
	struct pardev_cb cocci_id/* drivers/input/joystick/db9.c 554 */;
	int cocci_id/* drivers/input/joystick/db9.c 552 */;
	struct input_dev *cocci_id/* drivers/input/joystick/db9.c 551 */;
	struct pardevice *cocci_id/* drivers/input/joystick/db9.c 550 */;
	const struct db9_mode_data *cocci_id/* drivers/input/joystick/db9.c 549 */;
	struct db9 *cocci_id/* drivers/input/joystick/db9.c 548 */;
	struct parport *cocci_id/* drivers/input/joystick/db9.c 546 */;
	void cocci_id/* drivers/input/joystick/db9.c 546 */;
	struct timer_list *cocci_id/* drivers/input/joystick/db9.c 355 */;
	struct db9_config cocci_id/* drivers/input/joystick/db9.c 35 */[DB9_MAX_PORTS];
	unsigned char cocci_id/* drivers/input/joystick/db9.c 327 */;
	struct input_dev *cocci_id/* drivers/input/joystick/db9.c 325 */[];
	struct db9_config {
		int args[2];
		unsigned int nargs;
	} cocci_id/* drivers/input/joystick/db9.c 29 */;
	unsigned char cocci_id/* drivers/input/joystick/db9.c 259 */[60];
	unsigned char *cocci_id/* drivers/input/joystick/db9.c 191 */;
	const unsigned char cocci_id/* drivers/input/joystick/db9.c 126 */[];
	const int cocci_id/* drivers/input/joystick/db9.c 125 */[];
	const struct db9_mode_data cocci_id/* drivers/input/joystick/db9.c 105 */[];
	const short cocci_id/* drivers/input/joystick/db9.c 103 */[];
}
