cocci_test_suite() {
	struct device *cocci_id/* drivers/input/misc/powermate.c 89 */;
	void cocci_id/* drivers/input/misc/powermate.c 83 */(struct urb *urb);
	char cocci_id/* drivers/input/misc/powermate.c 80 */[];
	struct powermate_device {
		signed char *data;
		dma_addr_t data_dma;
		struct urb *irq,*config;
		struct usb_ctrlrequest *configcr;
		struct usb_device *udev;
		struct usb_interface *intf;
		struct input_dev *input;
		spinlock_t lock;
		int static_brightness;
		int pulse_speed;
		int pulse_table;
		int pulse_asleep;
		int pulse_awake;
		int requires_update;
		char phys[64];
	} cocci_id/* drivers/input/misc/powermate.c 62 */;
	struct usb_driver cocci_id/* drivers/input/misc/powermate.c 445 */;
	const struct usb_device_id cocci_id/* drivers/input/misc/powermate.c 436 */[];
	struct usb_interface *cocci_id/* drivers/input/misc/powermate.c 419 */;
	struct powermate_device cocci_id/* drivers/input/misc/powermate.c 323 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/misc/powermate.c 304 */;
	struct usb_host_interface *cocci_id/* drivers/input/misc/powermate.c 303 */;
	const struct usb_device_id *cocci_id/* drivers/input/misc/powermate.c 300 */;
	struct usb_device *cocci_id/* drivers/input/misc/powermate.c 278 */;
	struct powermate_device *cocci_id/* drivers/input/misc/powermate.c 278 */;
	int cocci_id/* drivers/input/misc/powermate.c 278 */;
	struct input_dev *cocci_id/* drivers/input/misc/powermate.c 253 */;
	unsigned int cocci_id/* drivers/input/misc/powermate.c 253 */;
	unsigned long cocci_id/* drivers/input/misc/powermate.c 197 */;
	struct urb *cocci_id/* drivers/input/misc/powermate.c 194 */;
	void cocci_id/* drivers/input/misc/powermate.c 194 */;
	void *cocci_id/* drivers/input/misc/powermate.c 186 */;
}
