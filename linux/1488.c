cocci_test_suite() {
	struct usb_request *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 92 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 81 */;
	void cocci_id/* drivers/usb/gadget/legacy/dbgp.c 81 */;
	char cocci_id/* drivers/usb/gadget/legacy/dbgp.c 68 */;
	char *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 66 */;
	unsigned cocci_id/* drivers/usb/gadget/legacy/dbgp.c 66 */;
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/legacy/dbgp.c 51 */;
	struct usb_debug_descriptor cocci_id/* drivers/usb/gadget/legacy/dbgp.c 46 */;
	void __exit cocci_id/* drivers/usb/gadget/legacy/dbgp.c 415 */;
	int __init cocci_id/* drivers/usb/gadget/legacy/dbgp.c 410 */;
	struct usb_gadget_driver cocci_id/* drivers/usb/gadget/legacy/dbgp.c 396 */;
	struct usb_device_descriptor cocci_id/* drivers/usb/gadget/legacy/dbgp.c 36 */;
	void *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 345 */;
	u16 cocci_id/* drivers/usb/gadget/legacy/dbgp.c 342 */;
	u8 cocci_id/* drivers/usb/gadget/legacy/dbgp.c 341 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 338 */;
	struct gserial cocci_id/* drivers/usb/gadget/legacy/dbgp.c 301 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 278 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 277 */;
	struct dbgp {
		struct usb_gadget *gadget;
		struct usb_request *req;
		struct usb_ep *i_ep;
		struct usb_ep *o_ep;
#ifdef CONFIG_USB_G_DBGP_SERIAL
		struct gserial *serial;
#endif
	} cocci_id/* drivers/usb/gadget/legacy/dbgp.c 26 */;
	unsigned char cocci_id/* drivers/usb/gadget/legacy/dbgp.c 232 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/legacy/dbgp.c 167 */;
	int cocci_id/* drivers/usb/gadget/legacy/dbgp.c 167 */;
}
