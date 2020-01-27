cocci_test_suite() {
	struct hid_driver cocci_id/* drivers/hid/hid-bigbenff.c 405 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-bigbenff.c 399 */[];
	unsigned int *cocci_id/* drivers/hid/hid-bigbenff.c 389 */;
	__u8 *cocci_id/* drivers/hid/hid-bigbenff.c 388 */;
	void *cocci_id/* drivers/hid/hid-bigbenff.c 359 */;
	struct led_classdev cocci_id/* drivers/hid/hid-bigbenff.c 354 */;
	struct hid_input cocci_id/* drivers/hid/hid-bigbenff.c 339 */;
	struct hid_report cocci_id/* drivers/hid/hid-bigbenff.c 337 */;
	size_t cocci_id/* drivers/hid/hid-bigbenff.c 314 */;
	char *cocci_id/* drivers/hid/hid-bigbenff.c 313 */;
	struct list_head *cocci_id/* drivers/hid/hid-bigbenff.c 311 */;
	struct hid_input *cocci_id/* drivers/hid/hid-bigbenff.c 310 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-bigbenff.c 307 */;
	void cocci_id/* drivers/hid/hid-bigbenff.c 297 */;
	int cocci_id/* drivers/hid/hid-bigbenff.c 282 */;
	struct bigben_device *cocci_id/* drivers/hid/hid-bigbenff.c 281 */;
	struct hid_device *cocci_id/* drivers/hid/hid-bigbenff.c 280 */;
	struct device *cocci_id/* drivers/hid/hid-bigbenff.c 279 */;
	enum led_brightness cocci_id/* drivers/hid/hid-bigbenff.c 277 */;
	struct led_classdev *cocci_id/* drivers/hid/hid-bigbenff.c 277 */;
	bool cocci_id/* drivers/hid/hid-bigbenff.c 251 */;
	u8 cocci_id/* drivers/hid/hid-bigbenff.c 224 */;
	struct ff_effect *cocci_id/* drivers/hid/hid-bigbenff.c 221 */;
	struct input_dev *cocci_id/* drivers/hid/hid-bigbenff.c 220 */;
	struct hid_field *cocci_id/* drivers/hid/hid-bigbenff.c 191 */;
	struct bigben_device cocci_id/* drivers/hid/hid-bigbenff.c 190 */;
	struct work_struct *cocci_id/* drivers/hid/hid-bigbenff.c 187 */;
	struct bigben_device {
		struct hid_device *hid;
		struct hid_report *report;
		u8 led_state;
		u8 right_motor_on;
		u8 left_motor_force;
		struct led_classdev *leds[NUM_LEDS];
		bool work_led;
		bool work_ff;
		struct work_struct worker;
	} cocci_id/* drivers/hid/hid-bigbenff.c 174 */;
	__u8 cocci_id/* drivers/hid/hid-bigbenff.c 102 */[];
}