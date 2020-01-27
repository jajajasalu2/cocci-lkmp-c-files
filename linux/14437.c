cocci_test_suite() {
	u64 cocci_id/* drivers/media/radio/radio-shark2.c 75 */;
	atomic_t cocci_id/* drivers/media/radio/radio-shark2.c 73 */;
	struct shark_device {
		struct usb_device *usbdev;
		struct v4l2_device v4l2_dev;
		struct radio_tea5777 tea;
#ifdef SHARK_USE_LEDS
		struct work_struct led_work;
		struct led_classdev leds[NO_LEDS];
		char led_names[NO_LEDS][32];
		atomic_t brightness[NO_LEDS];
		unsigned long brightness_new;
#endif
		u8 *transfer_buffer;
	} cocci_id/* drivers/media/radio/radio-shark2.c 57 */;
	enum{BLUE_LED, RED_LED, NO_LEDS,} cocci_id/* drivers/media/radio/radio-shark2.c 55 */;
	int cocci_id/* drivers/media/radio/radio-shark2.c 43 */;
	struct usb_driver cocci_id/* drivers/media/radio/radio-shark2.c 374 */;
	const struct usb_device_id cocci_id/* drivers/media/radio/radio-shark2.c 361 */[];
	pm_message_t cocci_id/* drivers/media/radio/radio-shark2.c 339 */;
	const struct usb_device_id *cocci_id/* drivers/media/radio/radio-shark2.c 281 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-shark2.c 258 */;
	struct usb_interface *cocci_id/* drivers/media/radio/radio-shark2.c 256 */;
	struct device *cocci_id/* drivers/media/radio/radio-shark2.c 204 */;
	const struct led_classdev cocci_id/* drivers/media/radio/radio-shark2.c 189 */[NO_LEDS];
	struct shark_device cocci_id/* drivers/media/radio/radio-shark2.c 171 */;
	struct shark_device *cocci_id/* drivers/media/radio/radio-shark2.c 170 */;
	enum led_brightness cocci_id/* drivers/media/radio/radio-shark2.c 168 */;
	struct led_classdev *cocci_id/* drivers/media/radio/radio-shark2.c 167 */;
	void cocci_id/* drivers/media/radio/radio-shark2.c 167 */;
	struct work_struct *cocci_id/* drivers/media/radio/radio-shark2.c 142 */;
	const struct radio_tea5777_ops cocci_id/* drivers/media/radio/radio-shark2.c 136 */;
	u32 cocci_id/* drivers/media/radio/radio-shark2.c 104 */;
	u32 *cocci_id/* drivers/media/radio/radio-shark2.c 100 */;
	struct radio_tea5777 *cocci_id/* drivers/media/radio/radio-shark2.c 100 */;
}
