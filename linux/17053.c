cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/joystick/fsia6b.c 63 */;
	unsigned char cocci_id/* drivers/input/joystick/fsia6b.c 63 */;
	irqreturn_t cocci_id/* drivers/input/joystick/fsia6b.c 62 */;
	struct fsia6b {
		struct input_dev *dev;
		struct ibus_packet packet;
		char phys[32];
	} cocci_id/* drivers/input/joystick/fsia6b.c 55 */;
	struct ibus_packet {
		enum ibus_state state;
		int offset;
		u16 ibuf;
		u16 channel[IBUS_SERVO_COUNT];
	} cocci_id/* drivers/input/joystick/fsia6b.c 47 */;
	enum ibus_state{SYNC, COLLECT, PROCESS,} cocci_id/* drivers/input/joystick/fsia6b.c 45 */;
	int cocci_id/* drivers/input/joystick/fsia6b.c 35 */[IBUS_SERVO_COUNT];
	char *cocci_id/* drivers/input/joystick/fsia6b.c 30 */;
	struct serio_driver cocci_id/* drivers/input/joystick/fsia6b.c 220 */;
	const struct serio_device_id cocci_id/* drivers/input/joystick/fsia6b.c 208 */[];
	void cocci_id/* drivers/input/joystick/fsia6b.c 198 */;
	struct input_dev *cocci_id/* drivers/input/joystick/fsia6b.c 130 */;
	struct fsia6b *cocci_id/* drivers/input/joystick/fsia6b.c 129 */;
	struct serio_driver *cocci_id/* drivers/input/joystick/fsia6b.c 127 */;
	struct serio *cocci_id/* drivers/input/joystick/fsia6b.c 127 */;
	int cocci_id/* drivers/input/joystick/fsia6b.c 127 */;
}
