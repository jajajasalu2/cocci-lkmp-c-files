cocci_test_suite() {
	struct parport_uss720_private *cocci_id/* drivers/usb/misc/uss720.c 99 */;
	struct parport *cocci_id/* drivers/usb/misc/uss720.c 98 */;
	struct uss720_async_request *cocci_id/* drivers/usb/misc/uss720.c 97 */;
	struct urb *cocci_id/* drivers/usb/misc/uss720.c 95 */;
	void cocci_id/* drivers/usb/misc/uss720.c 95 */;
	void __exit cocci_id/* drivers/usb/misc/uss720.c 816 */;
	int __init cocci_id/* drivers/usb/misc/uss720.c 798 */;
	struct uss720_async_request cocci_id/* drivers/usb/misc/uss720.c 79 */;
	struct usb_driver cocci_id/* drivers/usb/misc/uss720.c 785 */;
	struct kref *cocci_id/* drivers/usb/misc/uss720.c 77 */;
	const struct usb_device_id cocci_id/* drivers/usb/misc/uss720.c 768 */[];
	struct usb_interface *cocci_id/* drivers/usb/misc/uss720.c 747 */;
	struct parport_uss720_private cocci_id/* drivers/usb/misc/uss720.c 70 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/uss720.c 675 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/uss720.c 674 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/uss720.c 671 */;
	struct parport_operations cocci_id/* drivers/usb/misc/uss720.c 632 */;
	char *cocci_id/* drivers/usb/misc/uss720.c 604 */;
	const void *cocci_id/* drivers/usb/misc/uss720.c 597 */;
	struct usb_device *cocci_id/* drivers/usb/misc/uss720.c 582 */;
	void *cocci_id/* drivers/usb/misc/uss720.c 579 */;
	size_t cocci_id/* drivers/usb/misc/uss720.c 579 */;
	struct uss720_async_request {
		struct parport_uss720_private *priv;
		struct kref ref_count;
		struct list_head asynclist;
		struct completion compl;
		struct urb *urb;
		struct usb_ctrlrequest *dr;
		__u8 reg[7];
	} cocci_id/* drivers/usb/misc/uss720.c 56 */;
	struct parport_uss720_private {
		struct usb_device *usbdev;
		struct parport *pp;
		struct kref ref_count;
		__u8 reg[7];
		struct list_head asynclist;
		spinlock_t asynclock;
	} cocci_id/* drivers/usb/misc/uss720.c 47 */;
	struct parport_state *cocci_id/* drivers/usb/misc/uss720.c 431 */;
	struct pardevice *cocci_id/* drivers/usb/misc/uss720.c 431 */;
	unsigned char cocci_id/* drivers/usb/misc/uss720.c 308 */;
	unsigned long cocci_id/* drivers/usb/misc/uss720.c 276 */;
	__u8 cocci_id/* drivers/usb/misc/uss720.c 260 */;
	unsigned int cocci_id/* drivers/usb/misc/uss720.c 204 */;
	const unsigned char cocci_id/* drivers/usb/misc/uss720.c 196 */[9];
	gfp_t cocci_id/* drivers/usb/misc/uss720.c 192 */;
	unsigned char *cocci_id/* drivers/usb/misc/uss720.c 192 */;
	__u16 cocci_id/* drivers/usb/misc/uss720.c 123 */;
	int cocci_id/* drivers/usb/misc/uss720.c 100 */;
}