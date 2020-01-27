cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/usb/misc/usbsevseg.c 406 */;
	pm_message_t cocci_id/* drivers/usb/misc/usbsevseg.c 372 */;
	void cocci_id/* drivers/usb/misc/usbsevseg.c 361 */;
	struct usb_sevsegdev {
		struct usb_device *udev;
		struct usb_interface *intf;
		u8 powered;
		u8 mode_msb;
		u8 mode_lsb;
		u8 decimals[MAXLEN];
		u8 textmode;
		u8 text[MAXLEN];
		u16 textlength;
		u8 shadow_power;
		u8 has_interface_pm;
	} cocci_id/* drivers/usb/misc/usbsevseg.c 34 */;
	struct usb_sevsegdev cocci_id/* drivers/usb/misc/usbsevseg.c 337 */;
	struct usb_device *cocci_id/* drivers/usb/misc/usbsevseg.c 333 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/usbsevseg.c 331 */;
	const char *cocci_id/* drivers/usb/misc/usbsevseg.c 32 */[];
	struct attribute *cocci_id/* drivers/usb/misc/usbsevseg.c 319 */[];
	const struct usb_device_id cocci_id/* drivers/usb/misc/usbsevseg.c 25 */[];
	const char *cocci_id/* drivers/usb/misc/usbsevseg.c 244 */;
	size_t cocci_id/* drivers/usb/misc/usbsevseg.c 244 */;
	int cocci_id/* drivers/usb/misc/usbsevseg.c 226 */;
	struct usb_sevsegdev *cocci_id/* drivers/usb/misc/usbsevseg.c 225 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/usbsevseg.c 224 */;
	struct device_attribute *cocci_id/* drivers/usb/misc/usbsevseg.c 222 */;
	char *cocci_id/* drivers/usb/misc/usbsevseg.c 222 */;
	struct device *cocci_id/* drivers/usb/misc/usbsevseg.c 221 */;
	ssize_t cocci_id/* drivers/usb/misc/usbsevseg.c 221 */;
	u8 cocci_id/* drivers/usb/misc/usbsevseg.c 121 */;
	unsigned char *cocci_id/* drivers/usb/misc/usbsevseg.c 120 */;
	gfp_t cocci_id/* drivers/usb/misc/usbsevseg.c 116 */;
}
