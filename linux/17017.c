cocci_test_suite() {
	struct serio_driver cocci_id/* drivers/input/tablet/wacom_serial4.c 606 */;
	const struct serio_device_id cocci_id/* drivers/input/tablet/wacom_serial4.c 594 */[];
	struct wacom cocci_id/* drivers/input/tablet/wacom_serial4.c 524 */;
	struct input_dev *cocci_id/* drivers/input/tablet/wacom_serial4.c 521 */;
	struct serio_driver *cocci_id/* drivers/input/tablet/wacom_serial4.c 518 */;
	struct serio *cocci_id/* drivers/input/tablet/wacom_serial4.c 518 */;
	int cocci_id/* drivers/input/tablet/wacom_serial4.c 518 */;
	unsigned long cocci_id/* drivers/input/tablet/wacom_serial4.c 468 */;
	const char *cocci_id/* drivers/input/tablet/wacom_serial4.c 465 */;
	const u8 *cocci_id/* drivers/input/tablet/wacom_serial4.c 421 */;
	irqreturn_t cocci_id/* drivers/input/tablet/wacom_serial4.c 372 */;
	unsigned char cocci_id/* drivers/input/tablet/wacom_serial4.c 372 */;
	struct wacom *cocci_id/* drivers/input/tablet/wacom_serial4.c 366 */;
	void cocci_id/* drivers/input/tablet/wacom_serial4.c 366 */;
	unsigned int cocci_id/* drivers/input/tablet/wacom_serial4.c 312 */;
	u8 cocci_id/* drivers/input/tablet/wacom_serial4.c 311 */;
	char *cocci_id/* drivers/input/tablet/wacom_serial4.c 191 */;
	enum{MODEL_CINTIQ=0x504C, MODEL_CINTIQ2=0x4454, MODEL_DIGITIZER_II=0x5544, MODEL_GRAPHIRE=0x4554, MODEL_PENPARTNER=0x4354, MODEL_ARTPAD_II=0x4B54,} cocci_id/* drivers/input/tablet/wacom_serial4.c 179 */;
	struct wacom {
		struct input_dev *dev;
		struct completion cmd_done;
		int result;
		u8 expect;
		u8 eraser_mask;
		unsigned int extra_z_bits;
		unsigned int flags;
		unsigned int res_x,res_y;
		unsigned int max_x,max_y;
		unsigned int tool;
		unsigned int idx;
		u8 data[DATA_SIZE];
		char phys[32];
	} cocci_id/* drivers/input/tablet/wacom_serial4.c 163 */;
	const struct {
		int device_id;
		int input_id;
	} cocci_id/* drivers/input/tablet/wacom_serial4.c 153 */[];
	enum{STYLUS=1, ERASER, CURSOR,} cocci_id/* drivers/input/tablet/wacom_serial4.c 151 */;
}
