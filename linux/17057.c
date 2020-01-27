cocci_test_suite() {
	u8 *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 79 */;
	size_t *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 79 */;
	u8 cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 78 */;
	char *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 38 */;
	struct usb_driver cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 288 */;
	unsigned long cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 28 */;
	int cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 27 */;
	const struct usb_device_id cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 269 */[];
	struct usb_interface *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 255 */;
	struct iforce_usb cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 25 */;
	struct iforce_usb *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 25 */;
	struct iforce *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 23 */;
	void cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 23 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 194 */;
	struct usb_host_interface *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 193 */;
	struct usb_device *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 192 */;
	const struct usb_device_id *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 190 */;
	struct device *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 142 */;
	struct urb *cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 138 */;
	const struct iforce_xport_ops cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 131 */;
	struct iforce_usb {
		struct iforce iforce;
		struct usb_device *usbdev;
		struct usb_interface *intf;
		struct urb *irq,*out;
		u8 data_in[IFORCE_MAX_LENGTH]____cacheline_aligned;
		u8 data_out[IFORCE_MAX_LENGTH]____cacheline_aligned;
	} cocci_id/* drivers/input/joystick/iforce/iforce-usb.c 12 */;
}
