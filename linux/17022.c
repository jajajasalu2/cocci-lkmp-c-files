cocci_test_suite() {
	const int cocci_id/* drivers/input/tablet/pegasus_notetaker.c 93 */;
	u8 *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 91 */;
	int cocci_id/* drivers/input/tablet/pegasus_notetaker.c 91 */;
	struct pegasus {
		unsigned char *data;
		u8 data_len;
		dma_addr_t data_dma;
		struct input_dev *dev;
		struct usb_device *usbdev;
		struct usb_interface *intf;
		struct urb *irq;
		struct mutex pm_mutex;
		bool is_open;
		char name[128];
		char phys[64];
		struct work_struct init;
	} cocci_id/* drivers/input/tablet/pegasus_notetaker.c 73 */;
	struct usb_driver cocci_id/* drivers/input/tablet/pegasus_notetaker.c 453 */;
	const struct usb_device_id cocci_id/* drivers/input/tablet/pegasus_notetaker.c 446 */[];
	pm_message_t cocci_id/* drivers/input/tablet/pegasus_notetaker.c 404 */;
	struct usb_interface *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 389 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 267 */;
	const struct usb_device_id *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 264 */;
	struct pegasus *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 252 */;
	struct input_dev *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 250 */;
	void cocci_id/* drivers/input/tablet/pegasus_notetaker.c 250 */;
	struct pegasus cocci_id/* drivers/input/tablet/pegasus_notetaker.c 208 */;
	struct work_struct *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 206 */;
	struct usb_device *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 178 */;
	struct urb *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 175 */;
	s16 cocci_id/* drivers/input/tablet/pegasus_notetaker.c 163 */;
	__le16 *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 153 */;
	u16 cocci_id/* drivers/input/tablet/pegasus_notetaker.c 136 */;
	unsigned char *cocci_id/* drivers/input/tablet/pegasus_notetaker.c 134 */;
	u8 cocci_id/* drivers/input/tablet/pegasus_notetaker.c 127 */[];
	u8 cocci_id/* drivers/input/tablet/pegasus_notetaker.c 125 */;
}
