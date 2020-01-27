cocci_test_suite() {
	const unsigned char *cocci_id/* drivers/usb/gadget/function/f_tcm.c 890 */;
	unsigned int cocci_id/* drivers/usb/gadget/function/f_tcm.c 78 */;
	struct bulk_cs_wrap *cocci_id/* drivers/usb/gadget/function/f_tcm.c 76 */;
	struct uas_stream *cocci_id/* drivers/usb/gadget/function/f_tcm.c 739 */;
	struct iu cocci_id/* drivers/usb/gadget/function/f_tcm.c 660 */;
	struct sense_iu *cocci_id/* drivers/usb/gadget/function/f_tcm.c 545 */;
	void cocci_id/* drivers/usb/gadget/function/f_tcm.c 508 */(struct usb_ep *ep,
								   struct usb_request *req);
	u8 *cocci_id/* drivers/usb/gadget/function/f_tcm.c 427 */;
	u16 cocci_id/* drivers/usb/gadget/function/f_tcm.c 424 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/function/f_tcm.c 423 */;
	struct f_uas cocci_id/* drivers/usb/gadget/function/f_tcm.c 41 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/function/f_tcm.c 389 */;
	struct f_uas *cocci_id/* drivers/usb/gadget/function/f_tcm.c 362 */;
	void cocci_id/* drivers/usb/gadget/function/f_tcm.c 362 */;
	struct tpg_instance cocci_id/* drivers/usb/gadget/function/f_tcm.c 35 */[TPG_INSTANCES];
	struct tpg_instance {
		struct usb_function_instance *func_inst;
		struct usbg_tpg *tpg;
	} cocci_id/* drivers/usb/gadget/function/f_tcm.c 30 */;
	int cocci_id/* drivers/usb/gadget/function/f_tcm.c 293 */;
	struct usb_request *cocci_id/* drivers/usb/gadget/function/f_tcm.c 290 */;
	struct usb_ep *cocci_id/* drivers/usb/gadget/function/f_tcm.c 290 */;
	int cocci_id/* drivers/usb/gadget/function/f_tcm.c 288 */(struct f_uas *,
								  void *,
								  unsigned int);
	int cocci_id/* drivers/usb/gadget/function/f_tcm.c 242 */(struct usbg_cmd *,
								  struct usb_request *);
	void cocci_id/* drivers/usb/gadget/function/f_tcm.c 241 */(struct usb_ep *,
								   struct usb_request *);
	unsigned cocci_id/* drivers/usb/gadget/function/f_tcm.c 2292 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2289 */;
	struct f_tcm_opts *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2244 */;
	const char *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2229 */;
	const struct config_item_type cocci_id/* drivers/usb/gadget/function/f_tcm.c 2164 */;
	struct configfs_item_operations cocci_id/* drivers/usb/gadget/function/f_tcm.c 2160 */;
	struct config_item *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2153 */;
	const struct usb_ctrlrequest *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2137 */;
	struct guas_setup_wq cocci_id/* drivers/usb/gadget/function/f_tcm.c 2077 */;
	struct guas_setup_wq *cocci_id/* drivers/usb/gadget/function/f_tcm.c 2077 */;
	struct guas_setup_wq {
		struct work_struct work;
		struct f_uas *fu;
		unsigned int alt;
	} cocci_id/* drivers/usb/gadget/function/f_tcm.c 2069 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/function/f_tcm.c 206 */;
	struct f_tcm_opts cocci_id/* drivers/usb/gadget/function/f_tcm.c 1997 */;
	struct usb_string *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1990 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1987 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1982 */[];
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/function/f_tcm.c 1977 */;
	struct usb_string cocci_id/* drivers/usb/gadget/function/f_tcm.c 1971 */[];
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1915 */;
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1914 */[];
	struct usb_ss_ep_comp_descriptor cocci_id/* drivers/usb/gadget/function/f_tcm.c 1799 */;
	struct usb_pipe_usage_descriptor cocci_id/* drivers/usb/gadget/function/f_tcm.c 1777 */;
	struct usb_endpoint_descriptor cocci_id/* drivers/usb/gadget/function/f_tcm.c 1762 */;
	struct usb_interface_descriptor cocci_id/* drivers/usb/gadget/function/f_tcm.c 1742 */;
	const struct target_core_fabric_ops cocci_id/* drivers/usb/gadget/function/f_tcm.c 1706 */;
	struct se_lun *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1683 */;
	struct configfs_attribute *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1677 */[];
	unsigned char cocci_id/* drivers/usb/gadget/function/f_tcm.c 1643 */[USBG_NAMELEN];
	struct se_session *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1602 */;
	char *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1564 */;
	size_t cocci_id/* drivers/usb/gadget/function/f_tcm.c 1508 */;
	void cocci_id/* drivers/usb/gadget/function/f_tcm.c 1505 */(struct usbg_tpg *);
	struct usbg_tpg cocci_id/* drivers/usb/gadget/function/f_tcm.c 1499 */;
	struct se_portal_group *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1498 */;
	ssize_t cocci_id/* drivers/usb/gadget/function/f_tcm.c 1496 */;
	struct usbg_tport cocci_id/* drivers/usb/gadget/function/f_tcm.c 1477 */;
	struct usbg_tport *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1476 */;
	struct se_wwn *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1474 */;
	bool cocci_id/* drivers/usb/gadget/function/f_tcm.c 146 */;
	u64 cocci_id/* drivers/usb/gadget/function/f_tcm.c 1459 */;
	struct config_group *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1454 */;
	struct target_fabric_configfs *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1453 */;
	int cocci_id/* drivers/usb/gadget/function/f_tcm.c 1418 */(struct usbg_tpg *);
	unsigned long cocci_id/* drivers/usb/gadget/function/f_tcm.c 1340 */;
	struct se_node_acl *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1327 */;
	u32 cocci_id/* drivers/usb/gadget/function/f_tcm.c 1206 */;
	struct bulk_cb_wrap *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1202 */;
	void *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1200 */;
	struct usbg_tpg *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1171 */;
	struct tcm_usbg_nexus *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1170 */;
	struct se_cmd *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1169 */;
	struct usbg_cmd cocci_id/* drivers/usb/gadget/function/f_tcm.c 1168 */;
	struct usbg_cmd *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1168 */;
	struct work_struct *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1166 */;
	struct command_iu *cocci_id/* drivers/usb/gadget/function/f_tcm.c 1095 */;
	void cocci_id/* drivers/usb/gadget/function/f_tcm.c 1090 */(struct se_cmd *);
}
