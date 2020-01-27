cocci_test_suite() {
	int cocci_id/* drivers/input/tablet/acecad.c 46 */;
	unsigned char *cocci_id/* drivers/input/tablet/acecad.c 42 */;
	struct urb *cocci_id/* drivers/input/tablet/acecad.c 39 */;
	struct usb_acecad {
		char name[128];
		char phys[64];
		struct usb_interface *intf;
		struct input_dev *input;
		struct urb *irq;
		unsigned char *data;
		dma_addr_t data_dma;
	} cocci_id/* drivers/input/tablet/acecad.c 28 */;
	struct usb_driver cocci_id/* drivers/input/tablet/acecad.c 250 */;
	const struct usb_device_id cocci_id/* drivers/input/tablet/acecad.c 242 */[];
	struct usb_device *cocci_id/* drivers/input/tablet/acecad.c 232 */;
	struct usb_interface *cocci_id/* drivers/input/tablet/acecad.c 229 */;
	struct usb_acecad cocci_id/* drivers/input/tablet/acecad.c 135 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/tablet/acecad.c 118 */;
	struct usb_host_interface *cocci_id/* drivers/input/tablet/acecad.c 117 */;
	const struct usb_device_id *cocci_id/* drivers/input/tablet/acecad.c 114 */;
	struct usb_acecad *cocci_id/* drivers/input/tablet/acecad.c 109 */;
	struct input_dev *cocci_id/* drivers/input/tablet/acecad.c 107 */;
	void cocci_id/* drivers/input/tablet/acecad.c 107 */;
}
