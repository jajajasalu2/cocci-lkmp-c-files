cocci_test_suite() {
	const char *cocci_id/* drivers/media/mc/mc-device.c 877 */;
	struct usb_device *cocci_id/* drivers/media/mc/mc-device.c 876 */;
	struct pci_dev *cocci_id/* drivers/media/mc/mc-device.c 854 */;
	u32 cocci_id/* drivers/media/mc/mc-device.c 81 */;
	struct media_entity_notify *cocci_id/* drivers/media/mc/mc-device.c 786 */;
	int cocci_id/* drivers/media/mc/mc-device.c 735 */;
	struct media_devnode *cocci_id/* drivers/media/mc/mc-device.c 734 */;
	struct module *cocci_id/* drivers/media/mc/mc-device.c 732 */;
	struct media_device *cocci_id/* drivers/media/mc/mc-device.c 731 */;
	int __must_check cocci_id/* drivers/media/mc/mc-device.c 731 */;
	struct media_graph cocci_id/* drivers/media/mc/mc-device.c 658 */;
	struct media_device_info *cocci_id/* drivers/media/mc/mc-device.c 60 */;
	unsigned int cocci_id/* drivers/media/mc/mc-device.c 583 */;
	struct media_interface *cocci_id/* drivers/media/mc/mc-device.c 582 */;
	struct media_link *cocci_id/* drivers/media/mc/mc-device.c 581 */;
	struct media_entity *cocci_id/* drivers/media/mc/mc-device.c 578 */;
	void cocci_id/* drivers/media/mc/mc-device.c 578 */;
	struct device_attribute *cocci_id/* drivers/media/mc/mc-device.c 559 */;
	char *cocci_id/* drivers/media/mc/mc-device.c 559 */;
	struct device *cocci_id/* drivers/media/mc/mc-device.c 558 */;
	ssize_t cocci_id/* drivers/media/mc/mc-device.c 558 */;
	const struct media_file_operations cocci_id/* drivers/media/mc/mc-device.c 544 */;
	struct media_links_enum32 __user *cocci_id/* drivers/media/mc/mc-device.c 532 */;
	struct file *cocci_id/* drivers/media/mc/mc-device.c 53 */;
	unsigned long cocci_id/* drivers/media/mc/mc-device.c 522 */;
	struct media_links_enum32 cocci_id/* drivers/media/mc/mc-device.c 519 */;
	compat_uptr_t cocci_id/* drivers/media/mc/mc-device.c 496 */;
	struct media_links_enum cocci_id/* drivers/media/mc/mc-device.c 495 */;
	struct media_links_enum32 {
		__u32 entity;
		compat_uptr_t pads;
		compat_uptr_t links;
		__u32 reserved[4];
	} cocci_id/* drivers/media/mc/mc-device.c 485 */;
	uintptr_t cocci_id/* drivers/media/mc/mc-device.c 45 */;
	char cocci_id/* drivers/media/mc/mc-device.c 444 */[256];
	const struct media_ioctl_info *cocci_id/* drivers/media/mc/mc-device.c 442 */;
	__u64 cocci_id/* drivers/media/mc/mc-device.c 43 */;
	const struct media_ioctl_info cocci_id/* drivers/media/mc/mc-device.c 428 */[];
	struct media_ioctl_info {
		unsigned int cmd;
		unsigned short flags;
		long (*fn)(struct media_device *dev, void *arg);
		long (*arg_from_user)(void *karg, void __user *uarg,
				      unsigned int cmd);
		long (*arg_to_user)(void __user *uarg, void *karg,
				    unsigned int cmd);
	} cocci_id/* drivers/media/mc/mc-device.c 420 */;
	void __user *cocci_id/* drivers/media/mc/mc-device.c 386 */;
	void *cocci_id/* drivers/media/mc/mc-device.c 386 */;
	long cocci_id/* drivers/media/mc/mc-device.c 386 */;
	int *cocci_id/* drivers/media/mc/mc-device.c 374 */;
	struct media_intf_devnode *cocci_id/* drivers/media/mc/mc-device.c 295 */;
	struct media_v2_link cocci_id/* drivers/media/mc/mc-device.c 240 */;
	struct media_v2_pad cocci_id/* drivers/media/mc/mc-device.c 239 */;
	struct media_v2_interface cocci_id/* drivers/media/mc/mc-device.c 238 */;
	struct media_v2_entity cocci_id/* drivers/media/mc/mc-device.c 237 */;
	struct media_pad *cocci_id/* drivers/media/mc/mc-device.c 235 */;
	struct media_v2_topology *cocci_id/* drivers/media/mc/mc-device.c 232 */;
	struct media_link_desc *cocci_id/* drivers/media/mc/mc-device.c 202 */;
	struct media_link_desc cocci_id/* drivers/media/mc/mc-device.c 178 */;
	struct media_link_desc __user *cocci_id/* drivers/media/mc/mc-device.c 175 */;
	struct media_pad_desc cocci_id/* drivers/media/mc/mc-device.c 164 */;
	struct media_links_enum *cocci_id/* drivers/media/mc/mc-device.c 153 */;
	struct media_pad_desc *cocci_id/* drivers/media/mc/mc-device.c 144 */;
	const struct media_pad *cocci_id/* drivers/media/mc/mc-device.c 143 */;
	struct media_entity_desc *cocci_id/* drivers/media/mc/mc-device.c 100 */;
}
