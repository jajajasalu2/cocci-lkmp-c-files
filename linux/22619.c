cocci_test_suite() {
	struct line6_pcm_properties cocci_id/* sound/usb/line6/toneport.c 73 */;
	struct snd_ratden cocci_id/* sound/usb/line6/toneport.c 66 */;
	int cocci_id/* sound/usb/line6/toneport.c 62 */(struct usb_device *usbdev,
							int cmd1, int cmd2);
	struct usb_driver cocci_id/* sound/usb/line6/toneport.c 566 */;
	struct usb_interface *cocci_id/* sound/usb/line6/toneport.c 558 */;
	const struct line6_properties cocci_id/* sound/usb/line6/toneport.c 489 */[];
	const struct usb_device_id cocci_id/* sound/usb/line6/toneport.c 476 */[];
	const struct usb_device_id *cocci_id/* sound/usb/line6/toneport.c 408 */;
	struct usb_line6_toneport {
		struct usb_line6 line6;
		int source;
		u32 serial_number;
		u8 firmware_version;
		enum line6_device_type type;
		struct toneport_led leds[2];
	} cocci_id/* sound/usb/line6/toneport.c 40 */;
	struct usb_line6_toneport *cocci_id/* sound/usb/line6/toneport.c 397 */;
	struct usb_line6 *cocci_id/* sound/usb/line6/toneport.c 395 */;
	void cocci_id/* sound/usb/line6/toneport.c 395 */;
	u32 cocci_id/* sound/usb/line6/toneport.c 371 */;
	u32 *cocci_id/* sound/usb/line6/toneport.c 361 */;
	struct toneport_led {
		struct led_classdev dev;
		char name[64];
		struct usb_line6_toneport *toneport;
		bool registered;
	} cocci_id/* sound/usb/line6/toneport.c 33 */;
	struct led_classdev *cocci_id/* sound/usb/line6/toneport.c 310 */;
	struct usb_line6_toneport cocci_id/* sound/usb/line6/toneport.c 31 */;
	struct toneport_led *cocci_id/* sound/usb/line6/toneport.c 309 */;
	struct device *cocci_id/* sound/usb/line6/toneport.c 305 */;
	struct toneport_led cocci_id/* sound/usb/line6/toneport.c 299 */;
	enum led_brightness cocci_id/* sound/usb/line6/toneport.c 296 */;
	const int cocci_id/* sound/usb/line6/toneport.c 286 */[2];
	const char *const cocci_id/* sound/usb/line6/toneport.c 285 */[2];
	bool cocci_id/* sound/usb/line6/toneport.c 272 */;
	const struct snd_kcontrol_new cocci_id/* sound/usb/line6/toneport.c 244 */;
	unsigned int cocci_id/* sound/usb/line6/toneport.c 224 */;
	enum line6_device_type{LINE6_GUITARPORT, LINE6_PODSTUDIO_GX, LINE6_PODSTUDIO_UX1, LINE6_PODSTUDIO_UX2, LINE6_TONEPORT_GX, LINE6_TONEPORT_UX1, LINE6_TONEPORT_UX2,} cocci_id/* sound/usb/line6/toneport.c 21 */;
	const int cocci_id/* sound/usb/line6/toneport.c 192 */;
	struct snd_line6_pcm *cocci_id/* sound/usb/line6/toneport.c 156 */;
	struct snd_ctl_elem_value *cocci_id/* sound/usb/line6/toneport.c 154 */;
	struct snd_kcontrol *cocci_id/* sound/usb/line6/toneport.c 153 */;
	int cocci_id/* sound/usb/line6/toneport.c 153 */;
	struct snd_ctl_elem_info *cocci_id/* sound/usb/line6/toneport.c 143 */;
	struct usb_device *cocci_id/* sound/usb/line6/toneport.c 125 */;
	const struct {
		const char *name;
		int code;
	} cocci_id/* sound/usb/line6/toneport.c 115 */[];
}
