cocci_test_suite() {
	int cocci_id/* drivers/input/joystick/pxrc.c 81 */;
	u8 *cocci_id/* drivers/input/joystick/pxrc.c 33 */;
	struct urb *cocci_id/* drivers/input/joystick/pxrc.c 30 */;
	struct usb_driver cocci_id/* drivers/input/joystick/pxrc.c 265 */;
	const struct usb_device_id cocci_id/* drivers/input/joystick/pxrc.c 259 */[];
	struct pxrc {
		struct input_dev *input;
		struct usb_interface *intf;
		struct urb *urb;
		struct mutex pm_mutex;
		bool is_open;
		char phys[64];
	} cocci_id/* drivers/input/joystick/pxrc.c 21 */;
	pm_message_t cocci_id/* drivers/input/joystick/pxrc.c 207 */;
	struct usb_interface *cocci_id/* drivers/input/joystick/pxrc.c 202 */;
	size_t cocci_id/* drivers/input/joystick/pxrc.c 126 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/joystick/pxrc.c 125 */;
	struct usb_device *cocci_id/* drivers/input/joystick/pxrc.c 123 */;
	const struct usb_device_id *cocci_id/* drivers/input/joystick/pxrc.c 121 */;
	void *cocci_id/* drivers/input/joystick/pxrc.c 113 */;
	struct pxrc *cocci_id/* drivers/input/joystick/pxrc.c 105 */;
	struct input_dev *cocci_id/* drivers/input/joystick/pxrc.c 103 */;
	void cocci_id/* drivers/input/joystick/pxrc.c 103 */;
}
