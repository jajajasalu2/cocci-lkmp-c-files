cocci_test_suite() {
	struct elo {
		struct input_dev *dev;
		struct serio *serio;
		struct mutex cmd_mutex;
		struct completion cmd_done;
		int id;
		int idx;
		unsigned char expected_packet;
		unsigned char csum;
		unsigned char data[ELO_MAX_LENGTH];
		unsigned char response[ELO10_PACKET_LEN];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/elo.c 51 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/elo.c 393 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/elo.c 381 */[];
	struct elo cocci_id/* drivers/input/touchscreen/elo.c 310 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/elo.c 307 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/elo.c 304 */;
	struct serio *cocci_id/* drivers/input/touchscreen/elo.c 304 */;
	void cocci_id/* drivers/input/touchscreen/elo.c 286 */;
	unsigned char cocci_id/* drivers/input/touchscreen/elo.c 262 */[ELO10_PACKET_LEN];
	const char *cocci_id/* drivers/input/touchscreen/elo.c 260 */[];
	unsigned char cocci_id/* drivers/input/touchscreen/elo.c 224 */;
	struct elo *cocci_id/* drivers/input/touchscreen/elo.c 220 */;
	unsigned char *cocci_id/* drivers/input/touchscreen/elo.c 220 */;
	int cocci_id/* drivers/input/touchscreen/elo.c 220 */;
	unsigned int cocci_id/* drivers/input/touchscreen/elo.c 198 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/elo.c 197 */;
}
