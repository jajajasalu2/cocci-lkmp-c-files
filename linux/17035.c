cocci_test_suite() {
	struct adi {
		struct input_dev *dev;
		int length;
		int ret;
		int idx;
		unsigned char id;
		char buttons;
		char axes10;
		char axes8;
		signed char pad;
		char hats;
		char *abs;
		short *key;
		char name[ADI_MAX_NAME_LENGTH];
		char cname[ADI_MAX_CNAME_LENGTH];
		char phys[ADI_MAX_PHYS_LENGTH];
		unsigned char data[ADI_MAX_LENGTH];
	} cocci_id/* drivers/input/joystick/adi.c 92 */;
	struct {
		int x;
		int y;
	} cocci_id/* drivers/input/joystick/adi.c 83 */[];
	short *cocci_id/* drivers/input/joystick/adi.c 76 */[];
	char *cocci_id/* drivers/input/joystick/adi.c 73 */[];
	short cocci_id/* drivers/input/joystick/adi.c 71 */[];
	char cocci_id/* drivers/input/joystick/adi.c 65 */[];
	struct gameport_driver cocci_id/* drivers/input/joystick/adi.c 542 */;
	struct adi_port cocci_id/* drivers/input/joystick/adi.c 462 */;
	struct gameport_driver *cocci_id/* drivers/input/joystick/adi.c 456 */;
	struct gameport *cocci_id/* drivers/input/joystick/adi.c 456 */;
	int cocci_id/* drivers/input/joystick/adi.c 456 */;
	char cocci_id/* drivers/input/joystick/adi.c 388 */[ADI_MAX_NAME_LENGTH];
	const int cocci_id/* drivers/input/joystick/adi.c 300 */[];
	struct adi_port *cocci_id/* drivers/input/joystick/adi.c 288 */;
	struct input_dev *cocci_id/* drivers/input/joystick/adi.c 286 */;
	void cocci_id/* drivers/input/joystick/adi.c 286 */;
	short *cocci_id/* drivers/input/joystick/adi.c 204 */;
	char *cocci_id/* drivers/input/joystick/adi.c 203 */;
	struct adi *cocci_id/* drivers/input/joystick/adi.c 200 */;
	unsigned long cocci_id/* drivers/input/joystick/adi.c 128 */;
	int cocci_id/* drivers/input/joystick/adi.c 127 */[2];
	unsigned char cocci_id/* drivers/input/joystick/adi.c 126 */;
	struct adi_port {
		struct gameport *gameport;
		struct adi adi[2];
		int bad;
		int reads;
	} cocci_id/* drivers/input/joystick/adi.c 111 */;
}
