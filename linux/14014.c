cocci_test_suite() {
	unsigned char *cocci_id/* drivers/media/rc/xbox_remote.c 92 */;
	struct urb *cocci_id/* drivers/media/rc/xbox_remote.c 89 */;
	struct xbox_remote {
		struct rc_dev *rdev;
		struct usb_device *udev;
		struct usb_interface *interface;
		struct urb *irq_urb;
		unsigned char inbuf[DATA_BUFSIZE]__aligned(sizeof(u16));
		char rc_name[NAME_BUFSIZE];
		char rc_phys[NAME_BUFSIZE];
	} cocci_id/* drivers/media/rc/xbox_remote.c 52 */;
	const struct usb_device_id cocci_id/* drivers/media/rc/xbox_remote.c 38 */[];
	struct usb_driver cocci_id/* drivers/media/rc/xbox_remote.c 297 */;
	struct xbox_remote *cocci_id/* drivers/media/rc/xbox_remote.c 281 */;
	struct usb_interface *cocci_id/* drivers/media/rc/xbox_remote.c 279 */;
	void cocci_id/* drivers/media/rc/xbox_remote.c 279 */;
	struct rc_dev *cocci_id/* drivers/media/rc/xbox_remote.c 194 */;
	struct usb_host_interface *cocci_id/* drivers/media/rc/xbox_remote.c 191 */;
	const struct usb_device_id *cocci_id/* drivers/media/rc/xbox_remote.c 188 */;
	struct usb_device *cocci_id/* drivers/media/rc/xbox_remote.c 169 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/rc/xbox_remote.c 167 */;
	int cocci_id/* drivers/media/rc/xbox_remote.c 166 */;
	__le16 *cocci_id/* drivers/media/rc/xbox_remote.c 111 */;
}
