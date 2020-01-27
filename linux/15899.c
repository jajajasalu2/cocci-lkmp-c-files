cocci_test_suite() {
	void __exit cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 929 */;
	int __init cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 896 */;
	const struct gigaset_ops cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 874 */;
	pm_message_t cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 831 */;
	struct usb_cardstate *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 798 */;
	struct usb_interface *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 795 */;
	void cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 795 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 655 */;
	struct usb_host_interface *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 652 */;
	const struct usb_device_id *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 648 */;
	unsigned long cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 587 */;
	struct usb_cardstate cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 574 */;
	struct usb_device *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 538 */;
	const unsigned char cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 536 */[6];
	struct cmdbuf_t *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 489 */;
	const struct usb_device_id cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 47 */[];
	unsigned char *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 349 */;
	struct inbuf_t *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 345 */;
	struct urb *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 342 */;
	int cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 293 */(struct cardstate *cs);
	struct bc_state *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 285 */;
	int cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 27 */;
	u32 cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 211 */;
	u16 cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 210 */;
	struct cardstate *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 208 */;
	unsigned cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 208 */;
	u8 cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 175 */;
	struct usb_cardstate {
		struct usb_device *udev;
		struct usb_interface *interface;
		int busy;
		unsigned char *bulk_out_buffer;
		int bulk_out_size;
		int bulk_out_epnum;
		struct urb *bulk_out_urb;
		unsigned char *rcvbuf;
		int rcvbuf_size;
		struct urb *read_urb;
		char bchars[6];
	} cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 127 */;
	struct usb_driver cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 114 */;
	struct gigaset_driver *cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 111 */;
	int cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 109 */(struct usb_interface *intf);
	int cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 107 */(struct usb_interface *intf,
									 pm_message_t message);
	void cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 104 */(struct usb_interface *interface);
	int cocci_id/* drivers/staging/isdn/gigaset/usb-gigaset.c 102 */(struct usb_interface *interface,
									 const struct usb_device_id *id);
}
