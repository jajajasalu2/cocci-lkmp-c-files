cocci_test_suite() {
	struct usb_kbd {
		struct input_dev *dev;
		struct usb_device *usbdev;
		unsigned char old[8];
		struct urb *irq,*led;
		unsigned char newleds;
		char name[128];
		char phys[64];
		unsigned char *new;
		struct usb_ctrlrequest *cr;
		unsigned char *leds;
		dma_addr_t new_dma;
		dma_addr_t leds_dma;
		spinlock_t leds_lock;
		bool led_urb_submitted;
	} cocci_id/* drivers/hid/usbhid/usbkbd.c 80 */;
	struct usb_driver cocci_id/* drivers/hid/usbhid/usbkbd.c 391 */;
	const struct usb_device_id cocci_id/* drivers/hid/usbhid/usbkbd.c 383 */[];
	struct usb_interface *cocci_id/* drivers/hid/usbhid/usbkbd.c 369 */;
	const unsigned char cocci_id/* drivers/hid/usbhid/usbkbd.c 35 */[256];
	void *cocci_id/* drivers/hid/usbhid/usbkbd.c 348 */;
	struct usb_kbd cocci_id/* drivers/hid/usbhid/usbkbd.c 284 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/hid/usbhid/usbkbd.c 266 */;
	struct usb_host_interface *cocci_id/* drivers/hid/usbhid/usbkbd.c 265 */;
	const struct usb_device_id *cocci_id/* drivers/hid/usbhid/usbkbd.c 262 */;
	struct usb_ctrlrequest cocci_id/* drivers/hid/usbhid/usbkbd.c 244 */;
	struct usb_kbd *cocci_id/* drivers/hid/usbhid/usbkbd.c 236 */;
	struct usb_device *cocci_id/* drivers/hid/usbhid/usbkbd.c 236 */;
	int cocci_id/* drivers/hid/usbhid/usbkbd.c 236 */;
	struct input_dev *cocci_id/* drivers/hid/usbhid/usbkbd.c 229 */;
	void cocci_id/* drivers/hid/usbhid/usbkbd.c 229 */;
	unsigned long cocci_id/* drivers/hid/usbhid/usbkbd.c 156 */;
	unsigned int cocci_id/* drivers/hid/usbhid/usbkbd.c 153 */;
	struct urb *cocci_id/* drivers/hid/usbhid/usbkbd.c 100 */;
}
