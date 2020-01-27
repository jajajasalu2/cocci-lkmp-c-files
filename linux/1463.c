cocci_test_suite() {
	struct usb_interface_assoc_descriptor cocci_id/* drivers/usb/gadget/function/f_ecm.c 99 */;
	struct f_ecm_opts cocci_id/* drivers/usb/gadget/function/f_ecm.c 925 */;
	int cocci_id/* drivers/usb/gadget/function/f_ecm.c 918 */;
	struct f_ecm_opts *cocci_id/* drivers/usb/gadget/function/f_ecm.c 917 */;
	struct f_ecm *cocci_id/* drivers/usb/gadget/function/f_ecm.c 916 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_ecm.c 914 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_ecm.c 914 */;
	struct net_device *cocci_id/* drivers/usb/gadget/function/f_ecm.c 879 */;
	void cocci_id/* drivers/usb/gadget/function/f_ecm.c 868 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_ecm.c 850 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_ecm.c 842 */[];
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_ecm.c 821 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_ecm.c 686 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_ecm.c 684 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_ecm.c 682 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_ecm.c 680 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_ecm.c 68 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_ecm.c 68 */;
	struct gether *cocci_id/* drivers/usb/gadget/function/f_ecm.c 665 */;
	struct f_ecm cocci_id/* drivers/usb/gadget/function/f_ecm.c 64 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_ecm.c 471 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_ecm.c 465 */;
	struct f_ecm {
		struct gether port;
		u8 ctrl_id,data_id;
		char ethaddr[14];
		struct usb_ep *notify;
		struct usb_request *notify_req;
		u8 notify_state;
		bool is_open;
	} cocci_id/* drivers/usb/gadget/function/f_ecm.c 46 */;
	enum ecm_notify_state{ECM_NOTIFY_NONE, ECM_NOTIFY_CONNECT, ECM_NOTIFY_SPEED,} cocci_id/* drivers/usb/gadget/function/f_ecm.c 40 */;
	__le32 *cocci_id/* drivers/usb/gadget/function/f_ecm.c 379 */;
	struct usb_cdc_notification *cocci_id/* drivers/usb/gadget/function/f_ecm.c 377 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_ecm.c 376 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_ecm.c 367 */[];
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_ecm.c 362 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_ecm.c 354 */[];
	struct usb_ss_ep_comp_descriptor cocci_id/* drivers/usb/gadget/function/f_ecm.c 321 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_ecm.c 215 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_ecm.c 213 */[];
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_ecm.c 197 */;
	struct usb_cdc_ether_desc cocci_id/* drivers/usb/gadget/function/f_ecm.c 142 */;
	struct usb_cdc_union_desc cocci_id/* drivers/usb/gadget/function/f_ecm.c 134 */;
	struct usb_cdc_header_desc cocci_id/* drivers/usb/gadget/function/f_ecm.c 126 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_ecm.c 113 */;
}