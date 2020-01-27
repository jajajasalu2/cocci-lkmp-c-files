cocci_test_suite() {
	const struct kernel_param_ops cocci_id/* drivers/input/misc/ati_remote2.c 92 */;
	pm_message_t cocci_id/* drivers/input/misc/ati_remote2.c 913 */;
	struct usb_host_interface *cocci_id/* drivers/input/misc/ati_remote2.c 893 */;
	struct usb_interface *cocci_id/* drivers/input/misc/ati_remote2.c 890 */;
	struct ati_remote2 cocci_id/* drivers/input/misc/ati_remote2.c 809 */;
	struct usb_device *cocci_id/* drivers/input/misc/ati_remote2.c 801 */;
	const struct usb_device_id *cocci_id/* drivers/input/misc/ati_remote2.c 799 */;
	struct attribute_group cocci_id/* drivers/input/misc/ati_remote2.c 795 */;
	struct attribute *cocci_id/* drivers/input/misc/ati_remote2.c 789 */[];
	size_t cocci_id/* drivers/input/misc/ati_remote2.c 713 */;
	unsigned int *cocci_id/* drivers/input/misc/ati_remote2.c 71 */;
	struct device_attribute *cocci_id/* drivers/input/misc/ati_remote2.c 701 */;
	struct device *cocci_id/* drivers/input/misc/ati_remote2.c 700 */;
	ssize_t cocci_id/* drivers/input/misc/ati_remote2.c 700 */;
	const struct kernel_param *cocci_id/* drivers/input/misc/ati_remote2.c 67 */;
	char *cocci_id/* drivers/input/misc/ati_remote2.c 66 */;
	const char *cocci_id/* drivers/input/misc/ati_remote2.c 58 */;
	const struct input_keymap_entry *cocci_id/* drivers/input/misc/ati_remote2.c 523 */;
	unsigned int cocci_id/* drivers/input/misc/ati_remote2.c 485 */;
	struct input_keymap_entry *cocci_id/* drivers/input/misc/ati_remote2.c 482 */;
	int cocci_id/* drivers/input/misc/ati_remote2.c 455 */;
	struct urb *cocci_id/* drivers/input/misc/ati_remote2.c 452 */;
	u8 *cocci_id/* drivers/input/misc/ati_remote2.c 350 */;
	s8 cocci_id/* drivers/input/misc/ati_remote2.c 331 */;
	enum{ATI_REMOTE2_MAX_CHANNEL_MASK=0xFFFF, ATI_REMOTE2_MAX_MODE_MASK=0x1F,} cocci_id/* drivers/input/misc/ati_remote2.c 31 */;
	struct ati_remote2 *cocci_id/* drivers/input/misc/ati_remote2.c 294 */;
	struct input_dev *cocci_id/* drivers/input/misc/ati_remote2.c 292 */;
	void cocci_id/* drivers/input/misc/ati_remote2.c 292 */;
	struct usb_driver cocci_id/* drivers/input/misc/ati_remote2.c 215 */;
	int cocci_id/* drivers/input/misc/ati_remote2.c 213 */(struct usb_interface *interface);
	int cocci_id/* drivers/input/misc/ati_remote2.c 209 */(struct usb_interface *interface,
							       pm_message_t message);
	void cocci_id/* drivers/input/misc/ati_remote2.c 208 */(struct usb_interface *interface);
	int cocci_id/* drivers/input/misc/ati_remote2.c 207 */(struct usb_interface *interface,
							       const struct usb_device_id *id);
	struct ati_remote2 {
		struct input_dev *idev;
		struct usb_device *udev;
		struct usb_interface *intf[2];
		struct usb_endpoint_descriptor *ep[2];
		struct urb *urb[2];
		void *buf[2];
		dma_addr_t buf_dma[2];
		unsigned long jiffies;
		int mode;
		char name[64];
		char phys[64];
		u16 keycode[ATI_REMOTE2_MODES][ARRAY_SIZE(ati_remote2_key_table)];
		unsigned int flags;
		unsigned int channel_mask;
		unsigned int mode_mask;
	} cocci_id/* drivers/input/misc/ati_remote2.c 182 */;
	const struct {
		u8 hw_code;
		u16 keycode;
	} cocci_id/* drivers/input/misc/ati_remote2.c 130 */[];
	enum{ATI_REMOTE2_AUX1, ATI_REMOTE2_AUX2, ATI_REMOTE2_AUX3, ATI_REMOTE2_AUX4, ATI_REMOTE2_PC, ATI_REMOTE2_MODES,} cocci_id/* drivers/input/misc/ati_remote2.c 121 */;
	enum{ATI_REMOTE2_OPENED=0x1, ATI_REMOTE2_SUSPENDED=0x2,} cocci_id/* drivers/input/misc/ati_remote2.c 116 */;
	const struct usb_device_id cocci_id/* drivers/input/misc/ati_remote2.c 108 */[];
}
