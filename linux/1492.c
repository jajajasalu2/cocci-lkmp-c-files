cocci_test_suite() {
	struct usb_gadget_strings cocci_id/* drivers/usb/gadget/legacy/multi.c 94 */;
	struct usb_gadget_strings *cocci_id/* drivers/usb/gadget/legacy/multi.c 93 */[];
	struct usb_string cocci_id/* drivers/usb/gadget/legacy/multi.c 84 */[];
	enum{MULTI_STRING_RNDIS_CONFIG_IDX=USB_GADGET_FIRST_AVAIL_IDX, MULTI_STRING_CDC_CONFIG_IDX,} cocci_id/* drivers/usb/gadget/legacy/multi.c 79 */;
	const struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/legacy/multi.c 77 */[2];
	struct usb_device_descriptor cocci_id/* drivers/usb/gadget/legacy/multi.c 62 */;
	enum{__MULTI_NO_CONFIG,

#ifdef CONFIG_USB_G_MULTI_RNDIS
 MULTI_RNDIS_CONFIG_NUM,

#endif


#ifdef CONFIG_USB_G_MULTI_CDC
 MULTI_CDC_CONFIG_NUM,

#endif
} cocci_id/* drivers/usb/gadget/legacy/multi.c 51 */;
	struct usb_composite_driver cocci_id/* drivers/usb/gadget/legacy/multi.c 481 */;
	 cocci_id/* drivers/usb/gadget/legacy/multi.c 43 */();
	struct usb_descriptor_header *cocci_id/* drivers/usb/gadget/legacy/multi.c 399 */;
	struct f_rndis_opts cocci_id/* drivers/usb/gadget/legacy/multi.c 334 */;
	struct f_ecm_opts cocci_id/* drivers/usb/gadget/legacy/multi.c 318 */;
	struct fsg_config cocci_id/* drivers/usb/gadget/legacy/multi.c 304 */;
	struct fsg_opts *cocci_id/* drivers/usb/gadget/legacy/multi.c 303 */;
	struct f_rndis_opts *cocci_id/* drivers/usb/gadget/legacy/multi.c 301 */;
	struct f_ecm_opts *cocci_id/* drivers/usb/gadget/legacy/multi.c 298 */;
	struct usb_gadget *cocci_id/* drivers/usb/gadget/legacy/multi.c 296 */;
	int __ref cocci_id/* drivers/usb/gadget/legacy/multi.c 294 */;
	struct usb_configuration cocci_id/* drivers/usb/gadget/legacy/multi.c 270 */;
	struct usb_composite_dev *cocci_id/* drivers/usb/gadget/legacy/multi.c 268 */;
	int cocci_id/* drivers/usb/gadget/legacy/multi.c 268 */;
	struct usb_configuration *cocci_id/* drivers/usb/gadget/legacy/multi.c 216 */;
	struct usb_function *cocci_id/* drivers/usb/gadget/legacy/multi.c 212 */;
	struct usb_function_instance *cocci_id/* drivers/usb/gadget/legacy/multi.c 123 */;
	unsigned int cocci_id/* drivers/usb/gadget/legacy/multi.c 109 */;
	struct fsg_module_parameters cocci_id/* drivers/usb/gadget/legacy/multi.c 106 */;
}
