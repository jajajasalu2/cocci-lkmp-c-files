cocci_test_suite() {
	float cocci_id/* drivers/hid/hid-magicmouse.c 73 */;
	struct hid_driver cocci_id/* drivers/hid/hid-magicmouse.c 703 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-magicmouse.c 690 */[];
	struct hid_report *cocci_id/* drivers/hid/hid-magicmouse.c 587 */;
	const u8 cocci_id/* drivers/hid/hid-magicmouse.c 582 */[];
	const u8 *cocci_id/* drivers/hid/hid-magicmouse.c 581 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-magicmouse.c 579 */;
	struct hid_input *cocci_id/* drivers/hid/hid-magicmouse.c 560 */;
	struct hid_device *cocci_id/* drivers/hid/hid-magicmouse.c 559 */;
	struct hid_usage *cocci_id/* drivers/hid/hid-magicmouse.c 543 */;
	unsigned long **cocci_id/* drivers/hid/hid-magicmouse.c 543 */;
	int *cocci_id/* drivers/hid/hid-magicmouse.c 543 */;
	struct hid_field *cocci_id/* drivers/hid/hid-magicmouse.c 542 */;
	const struct kernel_param *cocci_id/* drivers/hid/hid-magicmouse.c 35 */;
	const char *cocci_id/* drivers/hid/hid-magicmouse.c 34 */;
	unsigned int cocci_id/* drivers/hid/hid-magicmouse.c 33 */;
	unsigned long cocci_id/* drivers/hid/hid-magicmouse.c 242 */;
	bool cocci_id/* drivers/hid/hid-magicmouse.c 22 */;
	struct input_dev *cocci_id/* drivers/hid/hid-magicmouse.c 194 */;
	u8 *cocci_id/* drivers/hid/hid-magicmouse.c 192 */;
	struct magicmouse_sc *cocci_id/* drivers/hid/hid-magicmouse.c 155 */;
	int cocci_id/* drivers/hid/hid-magicmouse.c 155 */;
	void cocci_id/* drivers/hid/hid-magicmouse.c 155 */;
	struct magicmouse_sc {
		struct input_dev *input;
		unsigned long quirks;
		int ntouches;
		int scroll_accel;
		unsigned long scroll_jiffies;
		struct {
			short x;
			short y;
			short scroll_x;
			short scroll_y;
			u8 size;
		} touches[16];
		int tracking_ids[16];
	} cocci_id/* drivers/hid/hid-magicmouse.c 114 */;
}
