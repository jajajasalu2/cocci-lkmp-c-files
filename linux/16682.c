cocci_test_suite() {
	struct hil_dev {
		struct input_dev *dev;
		struct serio *serio;
		hil_packet data[HIL_PACKET_MAX_LENGTH];
		int idx4;
		char idd[HIL_PACKET_MAX_LENGTH];
		char rsc[HIL_PACKET_MAX_LENGTH];
		char exd[HIL_PACKET_MAX_LENGTH];
		char rnm[HIL_PACKET_MAX_LENGTH + 1];
		struct completion cmd_done;
		bool is_pointer;
		unsigned int nbtn,naxes;
		unsigned int btnmap[7];
	} cocci_id/* drivers/input/keyboard/hil_kbd.c 69 */;
	const char cocci_id/* drivers/input/keyboard/hil_kbd.c 67 */[][16];
	unsigned int cocci_id/* drivers/input/keyboard/hil_kbd.c 64 */[HIL_KEYCODES_SET3_TBLSIZE]__read_mostly;
	struct serio_driver cocci_id/* drivers/input/keyboard/hil_kbd.c 574 */;
	const struct serio_device_id cocci_id/* drivers/input/keyboard/hil_kbd.c 562 */[];
	unsigned int cocci_id/* drivers/input/keyboard/hil_kbd.c 55 */[HIL_KEYCODES_SET1_TBLSIZE]__read_mostly;
	uint8_t cocci_id/* drivers/input/keyboard/hil_kbd.c 447 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/hil_kbd.c 446 */;
	struct hil_dev *cocci_id/* drivers/input/keyboard/hil_kbd.c 445 */;
	struct serio_driver *cocci_id/* drivers/input/keyboard/hil_kbd.c 443 */;
	struct serio *cocci_id/* drivers/input/keyboard/hil_kbd.c 443 */;
	int cocci_id/* drivers/input/keyboard/hil_kbd.c 443 */;
	const char *cocci_id/* drivers/input/keyboard/hil_kbd.c 360 */;
	uint8_t *cocci_id/* drivers/input/keyboard/hil_kbd.c 357 */;
	void cocci_id/* drivers/input/keyboard/hil_kbd.c 314 */;
	unsigned char cocci_id/* drivers/input/keyboard/hil_kbd.c 275 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/hil_kbd.c 274 */;
	int8_t cocci_id/* drivers/input/keyboard/hil_kbd.c 243 */;
	bool cocci_id/* drivers/input/keyboard/hil_kbd.c 211 */;
	unsigned int cocci_id/* drivers/input/keyboard/hil_kbd.c 170 */;
	char *cocci_id/* drivers/input/keyboard/hil_kbd.c 105 */;
	hil_packet cocci_id/* drivers/input/keyboard/hil_kbd.c 104 */;
}
