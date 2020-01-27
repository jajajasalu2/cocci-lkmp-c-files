cocci_test_suite() {
	struct isp1760_udc *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 935 */;
	bool cocci_id/* drivers/usb/isp1760/isp1760-udc.c 933 */;
	struct isp1760_ep *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 933 */;
	int cocci_id/* drivers/usb/isp1760/isp1760-udc.c 933 */;
	unsigned long cocci_id/* drivers/usb/isp1760/isp1760-udc.c 913 */;
	gfp_t cocci_id/* drivers/usb/isp1760/isp1760-udc.c 807 */;
	struct usb_request *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 806 */;
	void cocci_id/* drivers/usb/isp1760/isp1760-udc.c 78 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 708 */;
	unsigned int cocci_id/* drivers/usb/isp1760/isp1760-udc.c 648 */;
	union {
		struct usb_ctrlrequest r;
		u32 data[2];
	} cocci_id/* drivers/usb/isp1760/isp1760-udc.c 644 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 521 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 451 */;
	struct isp1760_request cocci_id/* drivers/usb/isp1760/isp1760-udc.c 436 */;
	struct isp1760_request *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 433 */;
	u16 cocci_id/* drivers/usb/isp1760/isp1760-udc.c 420 */;
	struct isp1760_ep cocci_id/* drivers/usb/isp1760/isp1760-udc.c 40 */;
	struct usb_ep *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 38 */;
	struct isp1760_udc cocci_id/* drivers/usb/isp1760/isp1760-udc.c 35 */;
	struct usb_gadget *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 33 */;
	struct isp1760_request {
		struct usb_request req;
		struct list_head queue;
		struct isp1760_ep *ep;
		unsigned int packet_size;
	} cocci_id/* drivers/usb/isp1760/isp1760-udc.c 26 */;
	u16 *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 214 */;
	u32 *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 181 */;
	struct isp1760_device *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1440 */;
	u32 cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1407 */;
	struct timer_list *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1331 */;
	irqreturn_t cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1263 */;
	void *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1263 */;
	const struct usb_gadget_ops cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1250 */;
	struct usb_gadget_driver *cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1190 */;
	const struct usb_ep_ops cocci_id/* drivers/usb/isp1760/isp1760-udc.c 1040 */;
}
