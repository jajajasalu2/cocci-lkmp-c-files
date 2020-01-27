cocci_test_suite() {
	struct igorplugusb *cocci_id/* drivers/media/rc/igorplugusb.c 95 */;
	struct usb_ctrlrequest *cocci_id/* drivers/media/rc/igorplugusb.c 94 */;
	struct urb *cocci_id/* drivers/media/rc/igorplugusb.c 92 */;
	void cocci_id/* drivers/media/rc/igorplugusb.c 92 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/igorplugusb.c 50 */;
	unsigned cocci_id/* drivers/media/rc/igorplugusb.c 48 */;
	void cocci_id/* drivers/media/rc/igorplugusb.c 46 */(struct igorplugusb *ir,
							     int cmd);
	struct igorplugusb {
		struct rc_dev *rc;
		struct device *dev;
		struct urb *urb;
		struct usb_ctrlrequest request;
		struct timer_list timer;
		uint8_t buf_in[MAX_PACKET];
		char phys[64];
	} cocci_id/* drivers/media/rc/igorplugusb.c 32 */;
	struct usb_driver cocci_id/* drivers/media/rc/igorplugusb.c 248 */;
	const struct usb_device_id cocci_id/* drivers/media/rc/igorplugusb.c 239 */[];
	struct usb_interface *cocci_id/* drivers/media/rc/igorplugusb.c 228 */;
	uint8_t *cocci_id/* drivers/media/rc/igorplugusb.c 179 */;
	struct rc_dev *cocci_id/* drivers/media/rc/igorplugusb.c 145 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/rc/igorplugusb.c 143 */;
	struct usb_host_interface *cocci_id/* drivers/media/rc/igorplugusb.c 142 */;
	struct usb_device *cocci_id/* drivers/media/rc/igorplugusb.c 141 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/igorplugusb.c 139 */;
	struct timer_list *cocci_id/* drivers/media/rc/igorplugusb.c 131 */;
	int cocci_id/* drivers/media/rc/igorplugusb.c 120 */;
}
