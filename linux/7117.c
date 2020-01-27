cocci_test_suite() {
	struct pdcspath_attribute {
		struct attribute attr;
		ssize_t (*show)(struct pdcspath_entry *entry, char *buf);
		ssize_t (*store)(struct pdcspath_entry *entry,
				 const char *buf, size_t count);
	} cocci_id/* drivers/parisc/pdc_stable.c 96 */;
	struct kset *cocci_id/* drivers/parisc/pdc_stable.c 949 */;
	const struct attribute_group cocci_id/* drivers/parisc/pdc_stable.c 944 */;
	u8 cocci_id/* drivers/parisc/pdc_stable.c 888 */[4];
	struct pdcspath_entry {
		rwlock_t rw_lock;
		short ready;
		unsigned long addr;
		char *name;
		struct device_path devpath;
		struct device *dev;
		struct kobject kobj;
	} cocci_id/* drivers/parisc/pdc_stable.c 86 */;
	u8 cocci_id/* drivers/parisc/pdc_stable.c 849 */[16];
	char cocci_id/* drivers/parisc/pdc_stable.c 748 */;
	char cocci_id/* drivers/parisc/pdc_stable.c 747 */[8];
	unsigned char cocci_id/* drivers/parisc/pdc_stable.c 746 */;
	size_t cocci_id/* drivers/parisc/pdc_stable.c 743 */;
	const char *cocci_id/* drivers/parisc/pdc_stable.c 742 */;
	unsigned short cocci_id/* drivers/parisc/pdc_stable.c 710 */;
	unsigned long cocci_id/* drivers/parisc/pdc_stable.c 709 */;
	u32 cocci_id/* drivers/parisc/pdc_stable.c 631 */[4];
	struct pdcspath_entry *cocci_id/* drivers/parisc/pdc_stable.c 540 */;
	char *cocci_id/* drivers/parisc/pdc_stable.c 537 */;
	struct kobj_attribute *cocci_id/* drivers/parisc/pdc_stable.c 536 */;
	struct kobject *cocci_id/* drivers/parisc/pdc_stable.c 535 */;
	ssize_t cocci_id/* drivers/parisc/pdc_stable.c 535 */;
	struct pdcspath_entry *cocci_id/* drivers/parisc/pdc_stable.c 499 */[];
	struct kobj_type cocci_id/* drivers/parisc/pdc_stable.c 487 */;
	struct attribute *cocci_id/* drivers/parisc/pdc_stable.c 480 */[];
	const struct sysfs_ops cocci_id/* drivers/parisc/pdc_stable.c 471 */;
	struct pdcspath_attribute *cocci_id/* drivers/parisc/pdc_stable.c 438 */;
	struct attribute *cocci_id/* drivers/parisc/pdc_stable.c 435 */;
	unsigned int cocci_id/* drivers/parisc/pdc_stable.c 382 */[6];
	struct device *cocci_id/* drivers/parisc/pdc_stable.c 269 */;
	char cocci_id/* drivers/parisc/pdc_stable.c 268 */[64];
	struct hardware_path cocci_id/* drivers/parisc/pdc_stable.c 266 */;
	short cocci_id/* drivers/parisc/pdc_stable.c 225 */;
	struct hardware_path *cocci_id/* drivers/parisc/pdc_stable.c 158 */;
	struct device_path *cocci_id/* drivers/parisc/pdc_stable.c 141 */;
	struct pdcspath_attribute cocci_id/* drivers/parisc/pdc_stable.c 117 */;
	struct kobj_attribute cocci_id/* drivers/parisc/pdc_stable.c 110 */;
	void cocci_id/* drivers/parisc/pdc_stable.c 1082 */;
	void __exit cocci_id/* drivers/parisc/pdc_stable.c 1081 */;
	u16 cocci_id/* drivers/parisc/pdc_stable.c 1044 */;
	struct pdcspath_entry cocci_id/* drivers/parisc/pdc_stable.c 103 */;
	u32 cocci_id/* drivers/parisc/pdc_stable.c 1027 */;
	int cocci_id/* drivers/parisc/pdc_stable.c 1026 */;
	int __init cocci_id/* drivers/parisc/pdc_stable.c 1023 */;
}
