cocci_test_suite() {
	struct iforce_serio cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 76 */;
	u8 *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 73 */;
	size_t *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 73 */;
	u8 cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 72 */;
	struct iforce *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 72 */;
	unsigned long cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 31 */;
	struct serio_driver cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 241 */;
	const struct serio_device_id cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 229 */[];
	void cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 219 */;
	struct iforce_serio *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 191 */;
	struct serio_driver *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 189 */;
	struct serio *cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 189 */;
	int cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 189 */;
	unsigned int cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 128 */;
	unsigned char cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 128 */;
	irqreturn_t cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 127 */;
	struct iforce_serio {
		struct iforce iforce;
		struct serio *serio;
		int idx,pkt,len,id;
		u8 csum;
		u8 expect_packet;
		u8 cmd_response[IFORCE_MAX_LENGTH];
		u8 cmd_response_len;
		u8 data_in[IFORCE_MAX_LENGTH];
	} cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 12 */;
	const struct iforce_xport_ops cocci_id/* drivers/input/joystick/iforce/iforce-serio.c 113 */;
}
