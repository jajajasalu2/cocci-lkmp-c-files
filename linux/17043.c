cocci_test_suite() {
	unsigned char *cocci_id/* drivers/input/joystick/twidjoy.c 93 */;
	struct twidjoy {
		struct input_dev *dev;
		int idx;
		unsigned char data[TWIDJOY_MAX_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/joystick/twidjoy.c 78 */;
	struct twidjoy_button_spec {
		int bitshift;
		int bitmask;
		int buttons[3];
	} cocci_id/* drivers/input/joystick/twidjoy.c 55 */[];
	struct serio_driver cocci_id/* drivers/input/joystick/twidjoy.c 236 */;
	const struct serio_device_id cocci_id/* drivers/input/joystick/twidjoy.c 224 */[];
	struct twidjoy cocci_id/* drivers/input/joystick/twidjoy.c 177 */;
	struct input_dev *cocci_id/* drivers/input/joystick/twidjoy.c 173 */;
	struct twidjoy *cocci_id/* drivers/input/joystick/twidjoy.c 172 */;
	struct twidjoy_button_spec *cocci_id/* drivers/input/joystick/twidjoy.c 171 */;
	struct serio_driver *cocci_id/* drivers/input/joystick/twidjoy.c 169 */;
	struct serio *cocci_id/* drivers/input/joystick/twidjoy.c 169 */;
	int cocci_id/* drivers/input/joystick/twidjoy.c 169 */;
	void cocci_id/* drivers/input/joystick/twidjoy.c 153 */;
	irqreturn_t cocci_id/* drivers/input/joystick/twidjoy.c 125 */;
	unsigned int cocci_id/* drivers/input/joystick/twidjoy.c 125 */;
	unsigned char cocci_id/* drivers/input/joystick/twidjoy.c 125 */;
}
