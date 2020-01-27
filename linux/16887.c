cocci_test_suite() {
	struct serio_driver cocci_id/* drivers/input/mouse/vsxxxaa.c 527 */;
	struct serio_device_id cocci_id/* drivers/input/mouse/vsxxxaa.c 515 */[];
	struct vsxxxaa cocci_id/* drivers/input/mouse/vsxxxaa.c 462 */;
	struct input_dev *cocci_id/* drivers/input/mouse/vsxxxaa.c 459 */;
	struct serio_driver *cocci_id/* drivers/input/mouse/vsxxxaa.c 456 */;
	struct serio *cocci_id/* drivers/input/mouse/vsxxxaa.c 456 */;
	unsigned int cocci_id/* drivers/input/mouse/vsxxxaa.c 436 */;
	irqreturn_t cocci_id/* drivers/input/mouse/vsxxxaa.c 435 */;
	unsigned char cocci_id/* drivers/input/mouse/vsxxxaa.c 309 */;
	unsigned char *cocci_id/* drivers/input/mouse/vsxxxaa.c 255 */;
	size_t cocci_id/* drivers/input/mouse/vsxxxaa.c 191 */;
	struct vsxxxaa *cocci_id/* drivers/input/mouse/vsxxxaa.c 165 */;
	int cocci_id/* drivers/input/mouse/vsxxxaa.c 165 */;
	void cocci_id/* drivers/input/mouse/vsxxxaa.c 137 */;
	struct vsxxxaa {
		struct input_dev *dev;
		struct serio *serio;
#define BUFLEN 15
		unsigned char buf[BUFLEN];
		unsigned char count;
		unsigned char version;
		unsigned char country;
		unsigned char type;
		char name[64];
		char phys[32];
	} cocci_id/* drivers/input/mouse/vsxxxaa.c 101 */;
}
