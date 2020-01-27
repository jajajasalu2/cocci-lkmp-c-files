cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/hid/usbhid/usbmouse.c 99 */;
	void cocci_id/* drivers/hid/usbhid/usbmouse.c 99 */;
	int cocci_id/* drivers/hid/usbhid/usbmouse.c 54 */;
	signed char *cocci_id/* drivers/hid/usbhid/usbmouse.c 52 */;
	struct urb *cocci_id/* drivers/hid/usbhid/usbmouse.c 49 */;
	struct usb_mouse {
		char name[128];
		char phys[64];
		struct usb_device *usbdev;
		struct input_dev *dev;
		struct urb *irq;
		signed char *data;
		dma_addr_t data_dma;
	} cocci_id/* drivers/hid/usbhid/usbmouse.c 38 */;
	struct usb_driver cocci_id/* drivers/hid/usbhid/usbmouse.c 225 */;
	const struct usb_device_id cocci_id/* drivers/hid/usbhid/usbmouse.c 217 */[];
	struct usb_interface *cocci_id/* drivers/hid/usbhid/usbmouse.c 203 */;
	struct usb_mouse cocci_id/* drivers/hid/usbhid/usbmouse.c 128 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/hid/usbhid/usbmouse.c 110 */;
	struct usb_host_interface *cocci_id/* drivers/hid/usbhid/usbmouse.c 109 */;
	struct usb_device *cocci_id/* drivers/hid/usbhid/usbmouse.c 108 */;
	const struct usb_device_id *cocci_id/* drivers/hid/usbhid/usbmouse.c 106 */;
	struct usb_mouse *cocci_id/* drivers/hid/usbhid/usbmouse.c 101 */;
}
