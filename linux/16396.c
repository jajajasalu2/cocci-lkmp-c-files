cocci_test_suite() {
	struct hidled_device {
		const struct hidled_config *config;
		struct hid_device *hdev;
		struct hidled_rgb *rgb;
		u8 *buf;
		struct mutex lock;
	} cocci_id/* drivers/hid/hid-led.c 96 */;
	struct hidled_rgb {
		struct hidled_device *ldev;
		struct hidled_led red;
		struct hidled_led green;
		struct hidled_led blue;
		u8 num;
	} cocci_id/* drivers/hid/hid-led.c 88 */;
	struct hidled_led {
		struct led_classdev cdev;
		struct hidled_rgb *rgb;
		char name[32];
	} cocci_id/* drivers/hid/hid-led.c 82 */;
	struct hidled_config {
		enum hidled_type type;
		const char *name;
		const char *short_name;
		enum led_brightness max_brightness;
		int num_leds;
		size_t report_size;
		enum hidled_report_type report_type;
		int (*init)(struct hidled_device *ldev);
		int (*write)(struct led_classdev *cdev,
			     enum led_brightness br);
	} cocci_id/* drivers/hid/hid-led.c 70 */;
	struct hidled_device cocci_id/* drivers/hid/hid-led.c 67 */;
	struct hid_driver cocci_id/* drivers/hid/hid-led.c 525 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-led.c 508 */[];
	struct hidraw *cocci_id/* drivers/hid/hid-led.c 491 */;
	struct hidled_rgb cocci_id/* drivers/hid/hid-led.c 483 */;
	union delcom_packet {
		__u8 data[8];
		struct {
			__u8 major_cmd;
			__u8 minor_cmd;
			__u8 data_lsb;
			__u8 data_msb;
		} tx;
		struct {
			__u8 cmd;
		} rx;
		struct {
			__le16 family_code;
			__le16 security_code;
			__u8 fw_version;
		} fw;
	} cocci_id/* drivers/hid/hid-led.c 45 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-led.c 448 */;
	struct hid_device *cocci_id/* drivers/hid/hid-led.c 448 */;
	const struct hidled_config *cocci_id/* drivers/hid/hid-led.c 413 */;
	unsigned int cocci_id/* drivers/hid/hid-led.c 411 */;
	const char *cocci_id/* drivers/hid/hid-led.c 410 */;
	const struct hidled_config cocci_id/* drivers/hid/hid-led.c 354 */[];
	struct hidled_device *cocci_id/* drivers/hid/hid-led.c 326 */;
	const unsigned char cocci_id/* drivers/hid/hid-led.c 31 */[];
	union delcom_packet cocci_id/* drivers/hid/hid-led.c 291 */;
	const struct hidled_led *cocci_id/* drivers/hid/hid-led.c 279 */;
	const struct hidled_config cocci_id/* drivers/hid/hid-led.c 253 */;
	__u8 cocci_id/* drivers/hid/hid-led.c 233 */[MAX_REPORT_SIZE];
	struct hidled_led *cocci_id/* drivers/hid/hid-led.c 232 */;
	u8 cocci_id/* drivers/hid/hid-led.c 230 */;
	enum hidled_type{RISO_KAGAKU, DREAM_CHEEKY, THINGM, DELCOM, LUXAFOR,} cocci_id/* drivers/hid/hid-led.c 23 */;
	enum led_brightness cocci_id/* drivers/hid/hid-led.c 229 */;
	struct led_classdev *cocci_id/* drivers/hid/hid-led.c 229 */;
	int cocci_id/* drivers/hid/hid-led.c 229 */;
	struct hidled_rgb *cocci_id/* drivers/hid/hid-led.c 203 */;
	enum hidled_report_type{RAW_REQUEST, OUTPUT_REPORT,} cocci_id/* drivers/hid/hid-led.c 18 */;
	__u8 *cocci_id/* drivers/hid/hid-led.c 145 */;
	bool cocci_id/* drivers/hid/hid-led.c 108 */;
	struct hidled_led cocci_id/* drivers/hid/hid-led.c 106 */;
}
