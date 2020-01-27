cocci_test_suite() {
	void cocci_id/* drivers/usb/misc/lvstest.c 74 */;
	struct usb_driver cocci_id/* drivers/usb/misc/lvstest.c 466 */;
	struct lvs_rh *cocci_id/* drivers/usb/misc/lvstest.c 44 */;
	struct usb_hcd *cocci_id/* drivers/usb/misc/lvstest.c 43 */;
	struct usb_interface *cocci_id/* drivers/usb/misc/lvstest.c 40 */;
	struct usb_device *cocci_id/* drivers/usb/misc/lvstest.c 40 */;
	unsigned int cocci_id/* drivers/usb/misc/lvstest.c 399 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/usb/misc/lvstest.c 397 */;
	struct usb_host_interface *cocci_id/* drivers/usb/misc/lvstest.c 396 */;
	const struct usb_device_id *cocci_id/* drivers/usb/misc/lvstest.c 393 */;
	struct urb *cocci_id/* drivers/usb/misc/lvstest.c 385 */;
	u16 cocci_id/* drivers/usb/misc/lvstest.c 335 */;
	struct usb_port_status *cocci_id/* drivers/usb/misc/lvstest.c 333 */;
	struct usb_hub_descriptor *cocci_id/* drivers/usb/misc/lvstest.c 332 */;
	struct lvs_rh cocci_id/* drivers/usb/misc/lvstest.c 328 */;
	struct work_struct *cocci_id/* drivers/usb/misc/lvstest.c 326 */;
	struct attribute *cocci_id/* drivers/usb/misc/lvstest.c 313 */[];
	int cocci_id/* drivers/usb/misc/lvstest.c 299 */;
	const char *cocci_id/* drivers/usb/misc/lvstest.c 294 */;
	struct device_attribute *cocci_id/* drivers/usb/misc/lvstest.c 294 */;
	size_t cocci_id/* drivers/usb/misc/lvstest.c 294 */;
	struct device *cocci_id/* drivers/usb/misc/lvstest.c 293 */;
	ssize_t cocci_id/* drivers/usb/misc/lvstest.c 293 */;
	struct usb_device_descriptor *cocci_id/* drivers/usb/misc/lvstest.c 260 */;
	unsigned long cocci_id/* drivers/usb/misc/lvstest.c 232 */;
	struct lvs_rh {
		struct usb_interface *intf;
		bool present;
		int portnum;
		u8 buffer[8];
		struct usb_hub_descriptor descriptor;
		struct urb *urb;
		struct work_struct rh_work;
		struct usb_port_status port_status;
	} cocci_id/* drivers/usb/misc/lvstest.c 21 */;
}
