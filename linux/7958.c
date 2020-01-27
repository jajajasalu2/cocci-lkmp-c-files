cocci_test_suite() {
	struct huawei_cdc_ncm_state *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 71 */;
	void *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 71 */;
	struct usb_driver *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 69 */;
	struct cdc_ncm_ctx *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 68 */;
	struct usb_interface *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 66 */;
	struct usbnet *cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 65 */;
	int cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 65 */;
	struct huawei_cdc_ncm_state {
		struct cdc_ncm_ctx *ctx;
		atomic_t pmcount;
		struct usb_driver *subdriver;
		struct usb_interface *control;
		struct usb_interface *data;
	} cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 29 */;
	struct usb_driver cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 212 */;
	unsigned long cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 194 */;
	const struct usb_device_id cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 191 */[];
	const struct driver_info cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 181 */;
	bool cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 161 */;
	pm_message_t cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 129 */;
	void cocci_id/* drivers/net/usb/huawei_cdc_ncm.c 115 */;
}
