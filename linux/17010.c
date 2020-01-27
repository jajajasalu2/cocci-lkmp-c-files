cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 99 */;
	struct egalax *cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 98 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 96 */;
	struct serio *cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 96 */;
	int cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 96 */;
	unsigned int cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 69 */;
	unsigned char cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 69 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 68 */;
	u8 cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 53 */;
	u16 cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 52 */;
	u8 *cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 51 */;
	struct egalax {
		struct input_dev *input;
		struct serio *serio;
		int idx;
		u8 data[EGALAX_FORMAT_MAX_LENGTH];
		char phys[32];
	} cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 40 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 176 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 164 */[];
	void cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 150 */;
	struct egalax cocci_id/* drivers/input/touchscreen/egalax_ts_serial.c 102 */;
}
