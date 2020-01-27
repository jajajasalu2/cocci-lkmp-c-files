cocci_test_suite() {
	struct analog {
		struct input_dev *dev;
		int mask;
		short *buttons;
		char name[ANALOG_MAX_NAME_LENGTH];
		char phys[ANALOG_MAX_PHYS_LENGTH];
	} cocci_id/* drivers/input/joystick/analog.c 97 */;
	unsigned char cocci_id/* drivers/input/joystick/analog.c 95 */[];
	short cocci_id/* drivers/input/joystick/analog.c 87 */[];
	void __exit cocci_id/* drivers/input/joystick/analog.c 780 */;
	int __init cocci_id/* drivers/input/joystick/analog.c 774 */;
	struct gameport_driver cocci_id/* drivers/input/joystick/analog.c 765 */;
	char *cocci_id/* drivers/input/joystick/analog.c 737 */;
	struct analog_types cocci_id/* drivers/input/joystick/analog.c 720 */[];
	struct analog_types {
		char *name;
		int value;
	} cocci_id/* drivers/input/joystick/analog.c 715 */;
	struct analog_port cocci_id/* drivers/input/joystick/analog.c 667 */;
	struct gameport_driver *cocci_id/* drivers/input/joystick/analog.c 661 */;
	int cocci_id/* drivers/input/joystick/analog.c 541 */[4];
	int cocci_id/* drivers/input/joystick/analog.c 43 */[ANALOG_PORTS];
	char *cocci_id/* drivers/input/joystick/analog.c 41 */[ANALOG_PORTS];
	unsigned long cocci_id/* drivers/input/joystick/analog.c 379 */;
	u64 cocci_id/* drivers/input/joystick/analog.c 378 */;
	unsigned int cocci_id/* drivers/input/joystick/analog.c 377 */;
	struct gameport *cocci_id/* drivers/input/joystick/analog.c 376 */;
	void cocci_id/* drivers/input/joystick/analog.c 374 */;
	struct input_dev *cocci_id/* drivers/input/joystick/analog.c 362 */;
	bool cocci_id/* drivers/input/joystick/analog.c 32 */;
	unsigned char cocci_id/* drivers/input/joystick/analog.c 286 */;
	struct analog_port *cocci_id/* drivers/input/joystick/analog.c 284 */;
	int cocci_id/* drivers/input/joystick/analog.c 284 */;
	char cocci_id/* drivers/input/joystick/analog.c 284 */;
	unsigned char cocci_id/* drivers/input/joystick/analog.c 239 */[4];
	u64 cocci_id/* drivers/input/joystick/analog.c 237 */[4];
	struct analog *cocci_id/* drivers/input/joystick/analog.c 186 */;
	int *cocci_id/* drivers/input/joystick/analog.c 186 */;
	struct analog_port {
		struct gameport *gameport;
		struct analog analog[2];
		unsigned char mask;
		char saitek;
		char cooked;
		int bads;
		int reads;
		int speed;
		int loop;
		int fuzz;
		int axes[4];
		int buttons;
		int initial[4];
		int axtime;
	} cocci_id/* drivers/input/joystick/analog.c 105 */;
}
