cocci_test_suite() {
	const struct usb_device_id cocci_id/* drivers/input/tablet/kbtab.c 83 */[];
	unsigned char *cocci_id/* drivers/input/tablet/kbtab.c 34 */;
	struct urb *cocci_id/* drivers/input/tablet/kbtab.c 31 */;
	struct kbtab {
		unsigned char *data;
		dma_addr_t data_dma;
		struct input_dev *dev;
		struct usb_interface *intf;
		struct urb *irq;
		char phys[32];
	} cocci_id/* drivers/input/tablet/kbtab.c 22 */;
	struct usb_driver cocci_id/* drivers/input/tablet/kbtab.c 197 */;
	struct usb_device *cocci_id/* drivers/input/tablet/kbtab.c 187 */;
	struct usb_interface *cocci_id/* drivers/input/tablet/kbtab.c 184 */;
	int cocci_id/* drivers/input/tablet/kbtab.c 18 */;
	struct kbtab cocci_id/* drivers/input/tablet/kbtab.c 124 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/tablet/kbtab.c 112 */;
	const struct usb_device_id *cocci_id/* drivers/input/tablet/kbtab.c 109 */;
	struct kbtab *cocci_id/* drivers/input/tablet/kbtab.c 104 */;
	struct input_dev *cocci_id/* drivers/input/tablet/kbtab.c 102 */;
	void cocci_id/* drivers/input/tablet/kbtab.c 102 */;
}
