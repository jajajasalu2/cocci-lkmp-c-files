cocci_test_suite() {
	struct usb_interface_assoc_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 93 */;
	int cocci_id/* drivers/usb/gadget/function/f_acm.c 825 */;
	void cocci_id/* drivers/usb/gadget/function/f_acm.c 822 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_acm.c 807 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_acm.c 799 */[];
	char *cocci_id/* drivers/usb/gadget/function/f_acm.c 783 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/f_acm.c 783 */;
	const char *cocci_id/* drivers/usb/gadget/function/f_acm.c 777 */;
	size_t cocci_id/* drivers/usb/gadget/function/f_acm.c 777 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_acm.c 770 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_acm.c 763 */;
	struct f_acm cocci_id/* drivers/usb/gadget/function/f_acm.c 76 */;
	struct f_serial_opts cocci_id/* drivers/usb/gadget/function/f_acm.c 749 */;
	struct f_acm *cocci_id/* drivers/usb/gadget/function/f_acm.c 729 */;
	struct f_serial_opts *cocci_id/* drivers/usb/gadget/function/f_acm.c 728 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_acm.c 726 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_acm.c 726 */;
	struct usb_cdc_notification cocci_id/* drivers/usb/gadget/function/f_acm.c 666 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_acm.c 612 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_acm.c 610 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_acm.c 608 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_acm.c 606 */;
	struct gserial *cocci_id/* drivers/usb/gadget/function/f_acm.c 572 */;
	__le16 cocci_id/* drivers/usb/gadget/function/f_acm.c 535 */;
	const unsigned cocci_id/* drivers/usb/gadget/function/f_acm.c 496 */;
	struct usb_cdc_notification *cocci_id/* drivers/usb/gadget/function/f_acm.c 495 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_acm.c 494 */;
	void *cocci_id/* drivers/usb/gadget/function/f_acm.c 491 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_acm.c 491 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_acm.c 490 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_acm.c 490 */;
	struct f_acm {
		struct gserial port;
		u8 ctrl_id,data_id;
		u8 port_num;
		u8 pending;
		spinlock_t lock;
		struct usb_ep *notify;
		struct usb_request *notify_req;
		struct usb_cdc_line_coding port_line_coding;
		u16 port_handshake_bits;
#define ACM_CTRL_RTS (1 << 1)
#define ACM_CTRL_DTR (1 << 0)
				u16 serial_state;
#define ACM_CTRL_OVERRUN (1 << 6)
#define ACM_CTRL_PARITY (1 << 5)
#define ACM_CTRL_FRAMING (1 << 4)
#define ACM_CTRL_RI (1 << 3)
#define ACM_CTRL_BRK (1 << 2)
#define ACM_CTRL_DSR (1 << 1)
#define ACM_CTRL_DCD (1 << 0)
								} cocci_id/* drivers/usb/gadget/function/f_acm.c 40 */;
	struct usb_cdc_line_coding cocci_id/* drivers/usb/gadget/function/f_acm.c 359 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_acm.c 336 */;
	struct usb_cdc_line_coding *cocci_id/* drivers/usb/gadget/function/f_acm.c 323 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_acm.c 292 */[];
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_acm.c 287 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_acm.c 280 */[];
	struct usb_ss_ep_comp_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 251 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_acm.c 186 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_acm.c 185 */[];
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 171 */;
	struct usb_cdc_union_desc cocci_id/* drivers/usb/gadget/function/f_acm.c 152 */;
	struct usb_cdc_acm_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 145 */;
	struct usb_cdc_call_mgmt_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 136 */;
	struct usb_cdc_header_desc cocci_id/* drivers/usb/gadget/function/f_acm.c 129 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_acm.c 107 */;
}
