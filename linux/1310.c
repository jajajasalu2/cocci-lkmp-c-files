cocci_test_suite() {
	signed char *cocci_id/* drivers/usb/storage/onetouch.c 91 */;
	struct urb *cocci_id/* drivers/usb/storage/onetouch.c 88 */;
	struct usb_onetouch {
		char name[128];
		char phys[64];
		struct input_dev *dev;
		struct usb_device *udev;
		struct urb *irq;
		unsigned char *data;
		dma_addr_t data_dma;
		unsigned int is_open:1;
	} cocci_id/* drivers/usb/storage/onetouch.c 36 */;
	void cocci_id/* drivers/usb/storage/onetouch.c 34 */(void *onetouch_);
	int cocci_id/* drivers/usb/storage/onetouch.c 33 */(struct us_data *ss);
	struct usb_driver cocci_id/* drivers/usb/storage/onetouch.c 293 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/onetouch.c 276 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/onetouch.c 275 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/onetouch.c 273 */;
	void *cocci_id/* drivers/usb/storage/onetouch.c 260 */;
	void cocci_id/* drivers/usb/storage/onetouch.c 260 */;
	struct usb_onetouch cocci_id/* drivers/usb/storage/onetouch.c 186 */;
	struct input_dev *cocci_id/* drivers/usb/storage/onetouch.c 169 */;
	struct usb_onetouch *cocci_id/* drivers/usb/storage/onetouch.c 168 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/storage/onetouch.c 167 */;
	struct usb_host_interface *cocci_id/* drivers/usb/storage/onetouch.c 166 */;
	struct usb_device *cocci_id/* drivers/usb/storage/onetouch.c 165 */;
	struct us_data *cocci_id/* drivers/usb/storage/onetouch.c 163 */;
	int cocci_id/* drivers/usb/storage/onetouch.c 163 */;
}
