cocci_test_suite() {
	void cocci_id/* drivers/firmware/edd.c 91 */;
	struct edd_info *cocci_id/* drivers/firmware/edd.c 85 */;
	unsigned char cocci_id/* drivers/firmware/edd.c 82 */;
	void __exit cocci_id/* drivers/firmware/edd.c 776 */;
	int __init cocci_id/* drivers/firmware/edd.c 735 */;
	struct pci_dev *cocci_id/* drivers/firmware/edd.c 675 */;
	int cocci_id/* drivers/firmware/edd.c 671 */;
	struct edd_attribute cocci_id/* drivers/firmware/edd.c 67 */;
	struct edd_device *cocci_id/* drivers/firmware/edd.c 64 */[EDD_MBR_SIG_MAX];
	const char *cocci_id/* drivers/firmware/edd.c 636 */;
	struct kset *cocci_id/* drivers/firmware/edd.c 625 */;
	struct pci_dev *cocci_id/* drivers/firmware/edd.c 62 */(struct edd_device *edev);
	struct kobj_type cocci_id/* drivers/firmware/edd.c 619 */;
	int cocci_id/* drivers/firmware/edd.c 61 */(struct edd_device *edev,
						    const char *type);
	struct edd_attribute *cocci_id/* drivers/firmware/edd.c 586 */[];
	struct attribute *cocci_id/* drivers/firmware/edd.c 581 */[];
	u8 *cocci_id/* drivers/firmware/edd.c 544 */;
	struct edd_attribute {
		struct attribute attr;
		ssize_t (*show)(struct edd_device *edev, char *buf);
		int (*test)(struct edd_device *edev);
	} cocci_id/* drivers/firmware/edd.c 54 */;
	u8 cocci_id/* drivers/firmware/edd.c 526 */;
	struct edd_device {
		unsigned int index;
		unsigned int mbr_signature;
		struct edd_info *info;
		struct kobject kobj;
	} cocci_id/* drivers/firmware/edd.c 47 */;
	const struct sysfs_ops cocci_id/* drivers/firmware/edd.c 116 */;
	struct edd_attribute *cocci_id/* drivers/firmware/edd.c 108 */;
	struct edd_device *cocci_id/* drivers/firmware/edd.c 107 */;
	struct kobject *cocci_id/* drivers/firmware/edd.c 105 */;
	struct attribute *cocci_id/* drivers/firmware/edd.c 105 */;
	char *cocci_id/* drivers/firmware/edd.c 105 */;
	ssize_t cocci_id/* drivers/firmware/edd.c 104 */;
	struct edd_device cocci_id/* drivers/firmware/edd.c 102 */;
}
