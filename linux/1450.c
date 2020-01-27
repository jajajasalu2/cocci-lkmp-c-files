cocci_test_suite() {
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_uac2.c 986 */;
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_uac2.c 98 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_uac2.c 979 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_uac2.c 945 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_uac2.c 895 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_uac2.c 895 */;
	int cocci_id/* drivers/usb/gadget/function/f_uac2.c 894 */;
	struct cntrl_range_lay3 cocci_id/* drivers/usb/gadget/function/f_uac2.c 863 */;
	u8 *cocci_id/* drivers/usb/gadget/function/f_uac2.c 841 */;
	struct cntrl_cur_lay3 cocci_id/* drivers/usb/gadget/function/f_uac2.c 830 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_uac2.c 820 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_uac2.c 82 */[];
	char cocci_id/* drivers/usb/gadget/function/f_uac2.c 79 */[8];
	unsigned cocci_id/* drivers/usb/gadget/function/f_uac2.c 781 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_uac2.c 697 */;
	enum{STR_ASSOC, STR_IF_CTRL, STR_CLKSRC_IN, STR_CLKSRC_OUT, STR_USB_IT, STR_IO_IT, STR_USB_OT, STR_IO_OT, STR_AS_OUT_ALT0, STR_AS_OUT_ALT1, STR_AS_IN_ALT0, STR_AS_IN_ALT1,} cocci_id/* drivers/usb/gadget/function/f_uac2.c 64 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_uac2.c 601 */;
	struct device *cocci_id/* drivers/usb/gadget/function/f_uac2.c 599 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_uac2.c 598 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_uac2.c 597 */;
	struct g_audio *cocci_id/* drivers/usb/gadget/function/f_uac2.c 596 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_uac2.c 593 */;
	struct f_uac2 cocci_id/* drivers/usb/gadget/function/f_uac2.c 53 */;
	bool cocci_id/* drivers/usb/gadget/function/f_uac2.c 452 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/f_uac2.c 452 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/gadget/function/f_uac2.c 451 */;
	const struct f_uac2_opts *cocci_id/* drivers/usb/gadget/function/f_uac2.c 450 */;
	struct f_uac2 {
		struct g_audio g_audio;
		u8 ac_intf,as_in_intf,as_out_intf;
		u8 ac_alt,as_in_alt,as_out_alt;
	} cocci_id/* drivers/usb/gadget/function/f_uac2.c 45 */;
	struct cntrl_range_lay3 {
		__le16 wNumSubRanges;
		__le32 dMIN;
		__le32 dMAX;
		__le32 dRES;
	}__packed cocci_id/* drivers/usb/gadget/function/f_uac2.c 443 */;
	struct cntrl_cur_lay3 {
		__le32 dCUR;
	} cocci_id/* drivers/usb/gadget/function/f_uac2.c 439 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_uac2.c 380 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_uac2.c 379 */[];
	struct uac2_iso_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 368 */;
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 348 */;
	struct uac2_format_type_i_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 340 */;
	struct uac2_as_header_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 327 */;
	struct uac2_ac_header_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 211 */;
	struct uac2_output_terminal_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 198 */;
	struct uac2_input_terminal_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 170 */;
	struct uac_clock_source_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 132 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 120 */;
	struct f_uac2_opts cocci_id/* drivers/usb/gadget/function/f_uac2.c 1120 */;
	struct f_uac2_opts *cocci_id/* drivers/usb/gadget/function/f_uac2.c 1114 */;
	struct f_uac2 *cocci_id/* drivers/usb/gadget/function/f_uac2.c 1113 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_uac2.c 1111 */;
	struct usb_interface_assoc_descriptor cocci_id/* drivers/usb/gadget/function/f_uac2.c 108 */;
	void cocci_id/* drivers/usb/gadget/function/f_uac2.c 1064 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_uac2.c 1050 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_uac2.c 1039 */[];
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_uac2.c 103 */[];
}
