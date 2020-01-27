cocci_test_suite() {
	const char *cocci_id/* drivers/hid/hid-gt683r.c 97 */;
	size_t cocci_id/* drivers/hid/hid-gt683r.c 97 */;
	struct device_attribute *cocci_id/* drivers/hid/hid-gt683r.c 78 */;
	ssize_t cocci_id/* drivers/hid/hid-gt683r.c 77 */;
	struct gt683r_led *cocci_id/* drivers/hid/hid-gt683r.c 64 */;
	struct hid_device *cocci_id/* drivers/hid/hid-gt683r.c 63 */;
	struct device *cocci_id/* drivers/hid/hid-gt683r.c 62 */;
	int cocci_id/* drivers/hid/hid-gt683r.c 61 */;
	enum led_brightness cocci_id/* drivers/hid/hid-gt683r.c 59 */;
	struct led_classdev *cocci_id/* drivers/hid/hid-gt683r.c 58 */;
	void cocci_id/* drivers/hid/hid-gt683r.c 58 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-gt683r.c 53 */[];
	struct gt683r_led {
		struct hid_device *hdev;
		struct led_classdev led_devs[GT683R_LED_COUNT];
		struct mutex lock;
		struct work_struct work;
		enum led_brightness brightnesses[GT683R_LED_COUNT];
		enum gt683r_led_mode mode;
	} cocci_id/* drivers/hid/hid-gt683r.c 44 */;
	const char *const cocci_id/* drivers/hid/hid-gt683r.c 38 */[];
	enum gt683r_panels{GT683R_LED_BACK=0, GT683R_LED_SIDE=1, GT683R_LED_FRONT=2, GT683R_LED_COUNT,} cocci_id/* drivers/hid/hid-gt683r.c 31 */;
	struct hid_driver cocci_id/* drivers/hid/hid-gt683r.c 298 */;
	enum gt683r_led_mode{GT683R_LED_OFF=0, GT683R_LED_AUDIO=2, GT683R_LED_BREATHING=3, GT683R_LED_NORMAL=5,} cocci_id/* drivers/hid/hid-gt683r.c 24 */;
	char *cocci_id/* drivers/hid/hid-gt683r.c 228 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-gt683r.c 223 */;
	const struct attribute_group *cocci_id/* drivers/hid/hid-gt683r.c 217 */[];
	const struct attribute_group cocci_id/* drivers/hid/hid-gt683r.c 212 */;
	struct attribute *cocci_id/* drivers/hid/hid-gt683r.c 207 */[];
	struct gt683r_led cocci_id/* drivers/hid/hid-gt683r.c 183 */;
	u8 cocci_id/* drivers/hid/hid-gt683r.c 181 */;
	struct work_struct *cocci_id/* drivers/hid/hid-gt683r.c 178 */;
	u8 *cocci_id/* drivers/hid/hid-gt683r.c 122 */;
}
