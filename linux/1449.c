cocci_test_suite() {
	struct f_uac1_legacy_opts cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 994 */;
	struct f_uac1_legacy_opts *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 985 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 982 */;
	void cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 941 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 921 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 911 */[];
	struct usb_audio_control cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 90 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 815 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 808 */;
	struct uac_feature_unit_descriptor_0 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 80 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 704 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 702 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 698 */;
	u8 *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 679 */;
	struct gaudio *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 678 */;
	struct uac_input_terminal_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 67 */;
	unsigned cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 653 */;
	struct uac1_ac_header_descriptor_1 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 53 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 498 */;
	u8 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 497 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 495 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 493 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 492 */;
	int cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 492 */;
	size_t cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 450 */;
	struct usb_audio_control *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 431 */;
	struct usb_audio_control_selector *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 430 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 423 */;
	struct f_audio *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 421 */;
	u32 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 362 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 34 */;
	struct f_audio_buf cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 313 */;
	struct f_audio cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 303 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 301 */;
	struct f_audio {
		struct gaudio card;
		u8 ac_intf,ac_alt;
		u8 as_intf,as_alt;
		struct usb_ep *out_ep;
		spinlock_t lock;
		struct f_audio_buf *copy_buf;
		struct work_struct playback_work;
		struct list_head play_queue;
		struct list_head cs;
		u8 set_cmd;
		struct usb_audio_control *set_con;
	} cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 274 */;
	struct f_audio_buf *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 250 */;
	struct f_audio_buf {
		u8 *buf;
		int actual;
		struct list_head list;
	} cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 244 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 234 */[];
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 229 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 218 */[];
	enum{STR_AC_IF, STR_INPUT_TERMINAL, STR_INPUT_TERMINAL_CH_NAMES, STR_FEAT_DESC_0, STR_OUTPUT_TERMINAL, STR_AS_IF_ALT0, STR_AS_IF_ALT1,} cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 208 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 190 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 189 */[];
	struct uac_iso_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 180 */;
	int cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 18 */(struct usb_audio_control *con,
									 u8 cmd);
	int cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 17 */(struct usb_audio_control *con,
									 u8 cmd,
									 int value);
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 169 */;
	struct uac_format_type_i_discrete_descriptor_1 cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 158 */;
	struct uac1_as_header_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 147 */;
	struct uac1_output_terminal_descriptor cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 117 */;
	struct usb_audio_control_selector cocci_id/* drivers/usb/gadget/function/f_uac1_legacy.c 108 */;
}
