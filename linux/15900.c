cocci_test_suite() {
	struct bas_cardstate {
		struct usb_device *udev;
		struct cardstate *cs;
		struct usb_interface *interface;
		unsigned char minor;
		struct urb *urb_ctrl;
		struct usb_ctrlrequest dr_ctrl;
		struct timer_list timer_ctrl;
		int retry_ctrl;
		struct timer_list timer_atrdy;
		struct urb *urb_cmd_out;
		struct usb_ctrlrequest dr_cmd_out;
		int retry_cmd_out;
		struct urb *urb_cmd_in;
		struct usb_ctrlrequest dr_cmd_in;
		struct timer_list timer_cmd_in;
		unsigned char *rcvbuf;
		struct urb *urb_int_in;
		unsigned char *int_in_buf;
		struct work_struct int_in_wq;
		struct timer_list timer_int_in;
		int retry_int_in;
		spinlock_t lock;
		int basstate;
		int pending;
		wait_queue_head_t waitqueue;
		int rcvbuf_size;
		int retry_cmd_in;
	} cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 87 */;
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 83 */(struct cardstate *);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 82 */(struct cardstate *,
									unsigned char *,
									int);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 81 */(struct bc_state *,
									int,
									int,
									int);
	void cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 80 */(struct bas_bc_state *);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 79 */(struct cardstate *,
									int);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 77 */(struct usb_interface *intf);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 72 */(struct usb_interface *intf,
									pm_message_t message);
	void cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 69 */(struct usb_interface *interface);
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 65 */(struct usb_interface *interface,
									const struct usb_device_id *id);
	struct bas_cardstate cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 607 */;
	struct work_struct *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 604 */;
	unsigned char *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 581 */;
	int cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 549 */;
	const struct usb_device_id cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 52 */[];
	struct inbuf_t *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 477 */;
	unsigned long cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 375 */;
	struct bc_state *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 343 */;
	unsigned cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 310 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 290 */;
	void __exit cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2616 */;
	int __init cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2585 */;
	struct urb *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 258 */;
	enum debuglevel cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 257 */;
	const char *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 257 */;
	const struct gigaset_ops cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2563 */;
	pm_message_t cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2452 */;
	struct usb_interface *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2407 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2279 */;
	struct usb_device *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2275 */;
	struct usb_host_interface *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2274 */;
	const struct usb_device_id *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2272 */;
	struct bas_bc_state *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2236 */;
	struct isowbuf_t cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2140 */;
	struct bas_bc_state cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2125 */;
	const unsigned char cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 2075 */[6];
	struct cardstate *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1843 */;
	struct bas_cardstate *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1842 */;
	struct timer_list *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1840 */;
	void cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1840 */;
	struct cmdbuf_t *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1745 */;
	char cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 156 */[28];
	char *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 154 */;
	struct usb_driver cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 139 */;
	struct gigaset_driver *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 136 */;
	struct sk_buff *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1168 */;
	struct isow_urbctx_t *cocci_id/* drivers/staging/isdn/gigaset/bas-gigaset.c 1080 */;
}
