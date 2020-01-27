cocci_test_suite() {
	struct synusb {
		struct usb_device *udev;
		struct usb_interface *intf;
		struct urb *urb;
		unsigned char *data;
		struct mutex pm_mutex;
		bool is_open;
		struct input_dev *input;
		char name[128];
		char phys[64];
		unsigned long flags;
	} cocci_id/* drivers/input/mouse/synaptics_usb.c 75 */;
	struct usb_driver cocci_id/* drivers/input/mouse/synaptics_usb.c 546 */;
	const struct usb_device_id cocci_id/* drivers/input/mouse/synaptics_usb.c 531 */[];
	pm_message_t cocci_id/* drivers/input/mouse/synaptics_usb.c 473 */;
	struct usb_device *cocci_id/* drivers/input/mouse/synaptics_usb.c 458 */;
	struct usb_interface *cocci_id/* drivers/input/mouse/synaptics_usb.c 455 */;
	unsigned int cocci_id/* drivers/input/mouse/synaptics_usb.c 298 */;
	const struct usb_device_id *cocci_id/* drivers/input/mouse/synaptics_usb.c 292 */;
	int cocci_id/* drivers/input/mouse/synaptics_usb.c 277 */;
	struct synusb *cocci_id/* drivers/input/mouse/synaptics_usb.c 276 */;
	struct input_dev *cocci_id/* drivers/input/mouse/synaptics_usb.c 274 */;
	void cocci_id/* drivers/input/mouse/synaptics_usb.c 274 */;
	struct usb_host_interface *cocci_id/* drivers/input/mouse/synaptics_usb.c 224 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/mouse/synaptics_usb.c 223 */;
	struct urb *cocci_id/* drivers/input/mouse/synaptics_usb.c 188 */;
	s16 cocci_id/* drivers/input/mouse/synaptics_usb.c 110 */;
	__be16 *cocci_id/* drivers/input/mouse/synaptics_usb.c 110 */;
}
