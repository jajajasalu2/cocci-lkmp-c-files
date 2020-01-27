cocci_test_suite() {
	struct u2fzero_transfer_context *cocci_id/* drivers/hid/hid-u2fzero.c 98 */;
	struct urb *cocci_id/* drivers/hid/hid-u2fzero.c 96 */;
	void cocci_id/* drivers/hid/hid-u2fzero.c 96 */;
	struct u2fzero_transfer_context {
		struct completion done;
		int status;
	} cocci_id/* drivers/hid/hid-u2fzero.c 91 */;
	struct u2fzero_device {
		struct hid_device *hdev;
		struct urb *urb;
		struct led_classdev ldev;
		struct hwrng hwrng;
		char *led_name;
		char *rng_name;
		u8 *buf_out;
		u8 *buf_in;
		struct mutex lock;
		bool present;
	} cocci_id/* drivers/hid/hid-u2fzero.c 59 */;
	size_t cocci_id/* drivers/hid/hid-u2fzero.c 53 */;
	struct u2f_hid_report {
		u8 report_type;
		struct u2f_hid_msg msg;
	}__packed cocci_id/* drivers/hid/hid-u2fzero.c 48 */;
	struct hid_driver cocci_id/* drivers/hid/hid-u2fzero.c 363 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-u2fzero.c 356 */[];
	struct hidraw *cocci_id/* drivers/hid/hid-u2fzero.c 322 */;
	struct u2f_hid_msg {
		u32 cid;
		union {
			struct {
				u8 cmd;
				u8 bcnth;
				u8 bcntl;
				u8 data[HID_REPORT_SIZE - 7];
			} init;
			struct {
				u8 seq;
				u8 data[HID_REPORT_SIZE - 5];
			} cont;
		};
	}__packed cocci_id/* drivers/hid/hid-u2fzero.c 32 */;
	struct u2f_hid_msg cocci_id/* drivers/hid/hid-u2fzero.c 302 */;
	const struct hid_device_id *cocci_id/* drivers/hid/hid-u2fzero.c 283 */;
	struct usb_host_endpoint *cocci_id/* drivers/hid/hid-u2fzero.c 250 */;
	unsigned int cocci_id/* drivers/hid/hid-u2fzero.c 249 */;
	struct usbhid_device *cocci_id/* drivers/hid/hid-u2fzero.c 248 */;
	struct usb_device *cocci_id/* drivers/hid/hid-u2fzero.c 247 */;
	struct hid_device *cocci_id/* drivers/hid/hid-u2fzero.c 246 */;
	bool cocci_id/* drivers/hid/hid-u2fzero.c 177 */;
	struct hwrng *cocci_id/* drivers/hid/hid-u2fzero.c 176 */;
	void *cocci_id/* drivers/hid/hid-u2fzero.c 176 */;
	enum led_brightness cocci_id/* drivers/hid/hid-u2fzero.c 167 */;
	struct u2f_hid_report cocci_id/* drivers/hid/hid-u2fzero.c 153 */;
	struct u2fzero_device cocci_id/* drivers/hid/hid-u2fzero.c 152 */;
	struct u2fzero_device *cocci_id/* drivers/hid/hid-u2fzero.c 151 */;
	struct led_classdev *cocci_id/* drivers/hid/hid-u2fzero.c 149 */;
	int cocci_id/* drivers/hid/hid-u2fzero.c 149 */;
	struct u2fzero_transfer_context cocci_id/* drivers/hid/hid-u2fzero.c 110 */;
	struct u2f_hid_msg *cocci_id/* drivers/hid/hid-u2fzero.c 106 */;
	struct u2f_hid_report *cocci_id/* drivers/hid/hid-u2fzero.c 105 */;
}
