cocci_test_suite() {
	const struct ast_vhub_full_cdesc {
		struct usb_config_descriptor cfg;
		struct usb_interface_descriptor intf;
		struct usb_endpoint_descriptor ep;
	}__attribute__((packed)) cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 96 */;
	struct usb_device_descriptor *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 76 */;
	struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 699 */;
	enum std_req_rc cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 698 */;
	struct ast_vhub_ep *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 698 */;
	u8 cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 628 */;
	const struct usb_device_descriptor cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 58 */;
	enum{AST_VHUB_STR_MANUF=3, AST_VHUB_STR_PRODUCT=2, AST_VHUB_STR_SERIAL=1,} cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 52 */;
	unsigned long cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 498 */;
	struct ast_vhub cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 496 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 493 */;
	struct ast_vhub_port *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 432 */;
	bool cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 430 */;
	u16 cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 428 */;
	unsigned int cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 427 */;
	struct ast_vhub *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 426 */;
	void cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 426 */;
	size_t cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 268 */;
	u32 cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 236 */;
	int cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 214 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 169 */;
	const struct usb_gadget_strings cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 167 */;
	const struct usb_string cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 151 */[];
	const struct usb_hub_descriptor cocci_id/* drivers/usb/gadget/udc/aspeed-vhub/hub.c 136 */;
}
