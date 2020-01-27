cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/input/misc/yealink.c 983 */;
	void *cocci_id/* drivers/input/misc/yealink.c 931 */;
	struct yealink_dev cocci_id/* drivers/input/misc/yealink.c 871 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/input/misc/yealink.c 857 */;
	struct usb_host_interface *cocci_id/* drivers/input/misc/yealink.c 856 */;
	struct driver_info *cocci_id/* drivers/input/misc/yealink.c 855 */;
	struct usb_device *cocci_id/* drivers/input/misc/yealink.c 854 */;
	const struct usb_device_id *cocci_id/* drivers/input/misc/yealink.c 852 */;
	struct yealink_dev {
		struct input_dev *idev;
		struct usb_device *udev;
		struct usb_interface *intf;
		struct yld_ctl_packet *irq_data;
		dma_addr_t irq_dma;
		struct urb *urb_irq;
		struct yld_ctl_packet *ctl_data;
		dma_addr_t ctl_dma;
		struct usb_ctrlrequest *ctl_req;
		struct urb *urb_ctl;
		char phys[64];
		u8 lcdMap[ARRAY_SIZE(lcdMap)];
		int key_code;
		unsigned int shutdown:1;
		int stat_ix;
		union {
			struct yld_status s;
			u8 b[sizeof(struct yld_status)];
		} master,copy;
	} cocci_id/* drivers/input/misc/yealink.c 85 */;
	struct usb_interface *cocci_id/* drivers/input/misc/yealink.c 839 */;
	const struct usb_device_id cocci_id/* drivers/input/misc/yealink.c 802 */[];
	const struct driver_info cocci_id/* drivers/input/misc/yealink.c 798 */;
	struct driver_info {
		char *name;
	} cocci_id/* drivers/input/misc/yealink.c 794 */;
	const struct attribute_group cocci_id/* drivers/input/misc/yealink.c 786 */;
	struct attribute *cocci_id/* drivers/input/misc/yealink.c 774 */[];
	const char *cocci_id/* drivers/input/misc/yealink.c 733 */;
	size_t cocci_id/* drivers/input/misc/yealink.c 733 */;
	int cocci_id/* drivers/input/misc/yealink.c 679 */;
	struct yealink_dev *cocci_id/* drivers/input/misc/yealink.c 678 */;
	char *cocci_id/* drivers/input/misc/yealink.c 676 */;
	struct device_attribute *cocci_id/* drivers/input/misc/yealink.c 675 */;
	struct device *cocci_id/* drivers/input/misc/yealink.c 675 */;
	ssize_t cocci_id/* drivers/input/misc/yealink.c 675 */;
	struct input_dev *cocci_id/* drivers/input/misc/yealink.c 529 */;
	void cocci_id/* drivers/input/misc/yealink.c 529 */;
	struct yld_status {
		u8 lcd[24];
		u8 led;
		u8 dialtone;
		u8 ringtone;
		u8 keynum;
	}__attribute__((packed)) cocci_id/* drivers/input/misc/yealink.c 49 */;
	struct urb *cocci_id/* drivers/input/misc/yealink.c 448 */;
	struct yld_status cocci_id/* drivers/input/misc/yealink.c 353 */;
	u8 cocci_id/* drivers/input/misc/yealink.c 265 */[];
	u8 cocci_id/* drivers/input/misc/yealink.c 251 */;
	u8 *cocci_id/* drivers/input/misc/yealink.c 249 */;
	struct yld_ctl_packet *cocci_id/* drivers/input/misc/yealink.c 247 */;
}
