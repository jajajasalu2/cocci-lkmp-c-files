cocci_test_suite() {
	int cocci_id/* drivers/hid/hid-udraw-ps3.c 90 */;
	struct udraw {
		struct input_dev *joy_input_dev;
		struct input_dev *touch_input_dev;
		struct input_dev *pen_input_dev;
		struct input_dev *accel_input_dev;
		struct hid_device *hdev;
		int last_one_finger_x;
		int last_one_finger_y;
		int last_two_finger_x;
		int last_two_finger_y;
	} cocci_id/* drivers/hid/hid-udraw-ps3.c 68 */;
	struct {
		int min;
		int max;
	} cocci_id/* drivers/hid/hid-udraw-ps3.c 49 */[];
	struct hid_driver cocci_id/* drivers/hid/hid-udraw-ps3.c 460 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-udraw-ps3.c 454 */[];
	struct udraw cocci_id/* drivers/hid/hid-udraw-ps3.c 412 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-udraw-ps3.c 407 */;
	enum{AXIS_X, AXIS_Y, AXIS_Z,} cocci_id/* drivers/hid/hid-udraw-ps3.c 39 */;
	bool cocci_id/* drivers/hid/hid-udraw-ps3.c 357 */;
	enum{TOUCH_NONE, TOUCH_PEN, TOUCH_FINGER, TOUCH_TWOFINGER,} cocci_id/* drivers/hid/hid-udraw-ps3.c 32 */;
	const char *cocci_id/* drivers/hid/hid-udraw-ps3.c 279 */;
	struct input_dev *cocci_id/* drivers/hid/hid-udraw-ps3.c 278 */;
	struct hid_device *cocci_id/* drivers/hid/hid-udraw-ps3.c 278 */;
	struct udraw *cocci_id/* drivers/hid/hid-udraw-ps3.c 273 */;
	void cocci_id/* drivers/hid/hid-udraw-ps3.c 271 */;
	u8 *cocci_id/* drivers/hid/hid-udraw-ps3.c 102 */;
	struct hid_report *cocci_id/* drivers/hid/hid-udraw-ps3.c 101 */;
}
