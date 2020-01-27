cocci_test_suite() {
	struct device *cocci_id/* drivers/usb/misc/appledisplay.c 80 */;
	struct urb *cocci_id/* drivers/usb/misc/appledisplay.c 77 */;
	void cocci_id/* drivers/usb/misc/appledisplay.c 77 */;
	atomic_t cocci_id/* drivers/usb/misc/appledisplay.c 75 */;
	struct appledisplay {
		struct usb_device *udev;
		struct urb *urb;
		struct backlight_device *bd;
		u8 *urbdata;
		u8 *msgdata;
		struct delayed_work work;
		int button_pressed;
		struct mutex sysfslock;
	} cocci_id/* drivers/usb/misc/appledisplay.c 63 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/appledisplay.c 48 */[];
	void __exit cocci_id/* drivers/usb/misc/appledisplay.c 352 */;
	int __init cocci_id/* drivers/usb/misc/appledisplay.c 347 */;
	struct usb_driver cocci_id/* drivers/usb/misc/appledisplay.c 340 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/appledisplay.c 322 */;
	struct appledisplay cocci_id/* drivers/usb/misc/appledisplay.c 223 */;
	char cocci_id/* drivers/usb/misc/appledisplay.c 210 */[20];
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/appledisplay.c 207 */;
	struct usb_device *cocci_id/* drivers/usb/misc/appledisplay.c 206 */;
	struct backlight_properties cocci_id/* drivers/usb/misc/appledisplay.c 204 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/appledisplay.c 202 */;
	struct work_struct *cocci_id/* drivers/usb/misc/appledisplay.c 186 */;
	const struct backlight_ops cocci_id/* drivers/usb/misc/appledisplay.c 181 */;
	struct appledisplay *cocci_id/* drivers/usb/misc/appledisplay.c 154 */;
	struct backlight_device *cocci_id/* drivers/usb/misc/appledisplay.c 152 */;
	int cocci_id/* drivers/usb/misc/appledisplay.c 152 */;
}
