cocci_test_suite() {
	atomic_t cocci_id/* drivers/media/radio/radio-shark.c 78 */;
	struct shark_device {
		struct usb_device *usbdev;
		struct v4l2_device v4l2_dev;
		struct snd_tea575x tea;
#ifdef SHARK_USE_LEDS
		struct work_struct led_work;
		struct led_classdev leds[NO_LEDS];
		char led_names[NO_LEDS][32];
		atomic_t brightness[NO_LEDS];
		unsigned long brightness_new;
#endif
		u8 *transfer_buffer;
		u32 last_val;
	} cocci_id/* drivers/media/radio/radio-shark.c 61 */;
	enum{BLUE_LED, BLUE_PULSE_LED, RED_LED, NO_LEDS, BLUE_IS_PULSE,} cocci_id/* drivers/media/radio/radio-shark.c 59 */;
	struct usb_driver cocci_id/* drivers/media/radio/radio-shark.c 408 */;
	const struct usb_device_id cocci_id/* drivers/media/radio/radio-shark.c 395 */[];
	pm_message_t cocci_id/* drivers/media/radio/radio-shark.c 374 */;
	const struct usb_device_id *cocci_id/* drivers/media/radio/radio-shark.c 315 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/radio-shark.c 292 */;
	struct usb_interface *cocci_id/* drivers/media/radio/radio-shark.c 290 */;
	struct device *cocci_id/* drivers/media/radio/radio-shark.c 238 */;
	const struct led_classdev cocci_id/* drivers/media/radio/radio-shark.c 217 */[NO_LEDS];
	struct shark_device cocci_id/* drivers/media/radio/radio-shark.c 186 */;
	struct shark_device *cocci_id/* drivers/media/radio/radio-shark.c 185 */;
	enum led_brightness cocci_id/* drivers/media/radio/radio-shark.c 183 */;
	struct led_classdev *cocci_id/* drivers/media/radio/radio-shark.c 182 */;
	void cocci_id/* drivers/media/radio/radio-shark.c 182 */;
	int cocci_id/* drivers/media/radio/radio-shark.c 159 */;
	struct work_struct *cocci_id/* drivers/media/radio/radio-shark.c 155 */;
	const struct snd_tea575x_ops cocci_id/* drivers/media/radio/radio-shark.c 149 */;
	u32 cocci_id/* drivers/media/radio/radio-shark.c 104 */;
	struct snd_tea575x *cocci_id/* drivers/media/radio/radio-shark.c 104 */;
}
