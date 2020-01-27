cocci_test_suite() {
	struct usb_cdc_union_desc cocci_id/* drivers/usb/gadget/function/f_phonet.c 92 */;
	const struct usb_cdc_header_desc cocci_id/* drivers/usb/gadget/function/f_phonet.c 76 */;
	int cocci_id/* drivers/usb/gadget/function/f_phonet.c 713 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_phonet.c 708 */;
	struct f_phonet_opts cocci_id/* drivers/usb/gadget/function/f_phonet.c 675 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_phonet.c 670 */;
	struct f_phonet_opts *cocci_id/* drivers/usb/gadget/function/f_phonet.c 667 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_phonet.c 664 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_phonet.c 66 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_phonet.c 601 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_phonet.c 596 */[];
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_phonet.c 589 */;
	char *cocci_id/* drivers/usb/gadget/function/f_phonet.c 589 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/f_phonet.c 589 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_phonet.c 585 */;
	struct f_phonet cocci_id/* drivers/usb/gadget/function/f_phonet.c 58 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_phonet.c 483 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_phonet.c 480 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_phonet.c 478 */;
	unsigned long cocci_id/* drivers/usb/gadget/function/f_phonet.c 468 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_phonet.c 453 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_phonet.c 444 */;
	struct f_phonet {
		struct usb_function function;
		struct {
			struct sk_buff *skb;
			spinlock_t lock;
		} rx;
		struct net_device *dev;
		struct usb_ep *in_ep,*out_ep;
		struct usb_request *in_req;
		struct usb_request *out_reqv[0];
	} cocci_id/* drivers/usb/gadget/function/f_phonet.c 41 */;
	struct phonet_port *cocci_id/* drivers/usb/gadget/function/f_phonet.c 381 */;
	struct net_device *cocci_id/* drivers/usb/gadget/function/f_phonet.c 380 */;
	struct f_phonet *cocci_id/* drivers/usb/gadget/function/f_phonet.c 379 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_phonet.c 377 */;
	void cocci_id/* drivers/usb/gadget/function/f_phonet.c 377 */;
	struct phonet_port {
		struct f_phonet *usb;
		spinlock_t lock;
	} cocci_id/* drivers/usb/gadget/function/f_phonet.c 36 */;
	struct page *cocci_id/* drivers/usb/gadget/function/f_phonet.c 315 */;
	gfp_t cocci_id/* drivers/usb/gadget/function/f_phonet.c 292 */;
	const struct net_device_ops cocci_id/* drivers/usb/gadget/function/f_phonet.c 262 */;
	netdev_tx_t cocci_id/* drivers/usb/gadget/function/f_phonet.c 224 */;
	struct sk_buff *cocci_id/* drivers/usb/gadget/function/f_phonet.c 224 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_phonet.c 163 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_phonet.c 162 */[];
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_phonet.c 124 */;
}
