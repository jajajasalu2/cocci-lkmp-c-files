cocci_test_suite() {
	struct gc cocci_id/* drivers/input/joystick/gamecon.c 955 */;
	struct pardev_cb cocci_id/* drivers/input/joystick/gamecon.c 928 */;
	int *cocci_id/* drivers/input/joystick/gamecon.c 927 */;
	int cocci_id/* drivers/input/joystick/gamecon.c 925 */;
	struct pardevice *cocci_id/* drivers/input/joystick/gamecon.c 924 */;
	struct gc *cocci_id/* drivers/input/joystick/gamecon.c 923 */;
	struct parport *cocci_id/* drivers/input/joystick/gamecon.c 921 */;
	void cocci_id/* drivers/input/joystick/gamecon.c 921 */;
	const char *cocci_id/* drivers/input/joystick/gamecon.c 91 */[];
	const int cocci_id/* drivers/input/joystick/gamecon.c 89 */[];
	struct gc *cocci_id/* drivers/input/joystick/gamecon.c 87 */[3];
	struct gc_subdev {
		unsigned int idx;
	} cocci_id/* drivers/input/joystick/gamecon.c 83 */;
	struct input_dev *cocci_id/* drivers/input/joystick/gamecon.c 787 */;
	struct timer_list *cocci_id/* drivers/input/joystick/gamecon.c 730 */;
	struct gc {
		struct pardevice *pd;
		struct gc_pad pads[GC_MAX_DEVICES];
		struct timer_list timer;
		int pad_count[GC_MAX];
		int used;
		int parportno;
		struct mutex mutex;
	} cocci_id/* drivers/input/joystick/gamecon.c 73 */;
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 713 */[GC_MAX_DEVICES];
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 712 */[GC_MAX_DEVICES][GC_PSX_BYTES];
	struct gc_pad {
		struct input_dev *dev;
		enum gc_type type;
		char phys[32];
	} cocci_id/* drivers/input/joystick/gamecon.c 67 */;
	enum gc_type{GC_NONE=0, GC_SNES, GC_NES, GC_NES4, GC_MULTI, GC_MULTI2, GC_N64, GC_PSX, GC_DDR, GC_SNESMOUSE, GC_MAX,} cocci_id/* drivers/input/joystick/gamecon.c 51 */;
	struct gc_pad *cocci_id/* drivers/input/joystick/gamecon.c 474 */;
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 472 */[GC_MULTI2_LENGTH];
	unsigned char *cocci_id/* drivers/input/joystick/gamecon.c 460 */;
	struct gc_config cocci_id/* drivers/input/joystick/gamecon.c 40 */[GC_MAX_PORTS];
	char cocci_id/* drivers/input/joystick/gamecon.c 364 */;
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 360 */[GC_SNESMOUSE_LENGTH];
	struct gc_config {
		int args[GC_MAX_DEVICES + 1];
		unsigned int nargs;
	} cocci_id/* drivers/input/joystick/gamecon.c 35 */;
	struct gc_subdev *cocci_id/* drivers/input/joystick/gamecon.c 294 */;
	unsigned int cocci_id/* drivers/input/joystick/gamecon.c 261 */;
	struct ff_rumble_effect *cocci_id/* drivers/input/joystick/gamecon.c 260 */;
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 257 */;
	unsigned long cocci_id/* drivers/input/joystick/gamecon.c 254 */;
	struct ff_effect *cocci_id/* drivers/input/joystick/gamecon.c 251 */;
	void *cocci_id/* drivers/input/joystick/gamecon.c 250 */;
	signed char cocci_id/* drivers/input/joystick/gamecon.c 210 */;
	unsigned char cocci_id/* drivers/input/joystick/gamecon.c 207 */[GC_N64_LENGTH];
	void __exit cocci_id/* drivers/input/joystick/gamecon.c 1047 */;
	int __init cocci_id/* drivers/input/joystick/gamecon.c 1024 */;
	const short cocci_id/* drivers/input/joystick/gamecon.c 102 */[];
	struct parport_driver cocci_id/* drivers/input/joystick/gamecon.c 1017 */;
	const unsigned char cocci_id/* drivers/input/joystick/gamecon.c 101 */[];
}
