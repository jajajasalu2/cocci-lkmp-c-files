cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/input/joystick/turbografx.c 76 */;
	struct tgfx {
		struct pardevice *pd;
		struct timer_list timer;
		struct input_dev *dev[TGFX_MAX_DEVICES];
		char name[TGFX_MAX_DEVICES][64];
		char phys[TGFX_MAX_DEVICES][32];
		int sticks;
		int used;
		int parportno;
		struct mutex sem;
	} *cocci_id/* drivers/input/joystick/turbografx.c 60 */[TGFX_MAX_PORTS];
	int cocci_id/* drivers/input/joystick/turbografx.c 58 */[];
	int cocci_id/* drivers/input/joystick/turbografx.c 38 */;
	struct tgfx_config cocci_id/* drivers/input/joystick/turbografx.c 36 */[TGFX_MAX_PORTS];
	struct tgfx_config {
		int args[TGFX_MAX_DEVICES + 1];
		unsigned int nargs;
	} cocci_id/* drivers/input/joystick/turbografx.c 31 */;
	void __exit cocci_id/* drivers/input/joystick/turbografx.c 306 */;
	int __init cocci_id/* drivers/input/joystick/turbografx.c 283 */;
	struct parport_driver cocci_id/* drivers/input/joystick/turbografx.c 276 */;
	struct tgfx cocci_id/* drivers/input/joystick/turbografx.c 178 */;
	struct pardev_cb cocci_id/* drivers/input/joystick/turbografx.c 151 */;
	int *cocci_id/* drivers/input/joystick/turbografx.c 150 */;
	struct pardevice *cocci_id/* drivers/input/joystick/turbografx.c 148 */;
	struct input_dev *cocci_id/* drivers/input/joystick/turbografx.c 147 */;
	struct tgfx *cocci_id/* drivers/input/joystick/turbografx.c 146 */;
	struct parport *cocci_id/* drivers/input/joystick/turbografx.c 144 */;
	void cocci_id/* drivers/input/joystick/turbografx.c 144 */;
}
