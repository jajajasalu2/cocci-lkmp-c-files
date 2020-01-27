cocci_test_suite() {
	struct uio_map *cocci_id/* drivers/uio/uio.c 96 */;
	struct kobject *cocci_id/* drivers/uio/uio.c 94 */;
	struct uio_device *cocci_id/* drivers/uio/uio.c 920 */;
	struct uio_info *cocci_id/* drivers/uio/uio.c 918 */;
	struct device *cocci_id/* drivers/uio/uio.c 917 */;
	struct module *cocci_id/* drivers/uio/uio.c 916 */;
	int cocci_id/* drivers/uio/uio.c 916 */;
	void cocci_id/* drivers/uio/uio.c 869 */;
	struct attribute *cocci_id/* drivers/uio/uio.c 86 */[];
	dev_t cocci_id/* drivers/uio/uio.c 832 */;
	const char cocci_id/* drivers/uio/uio.c 830 */[];
	struct map_sysfs_entry cocci_id/* drivers/uio/uio.c 79 */;
	unsigned long cocci_id/* drivers/uio/uio.c 765 */;
	struct map_sysfs_entry {
		struct attribute attr;
		ssize_t (*show)(struct uio_mem *, char *);
		ssize_t (*store)(struct uio_mem *, const char *, size_t);
	} cocci_id/* drivers/uio/uio.c 71 */;
	const struct vm_operations_struct cocci_id/* drivers/uio/uio.c 708 */;
	unsigned long long cocci_id/* drivers/uio/uio.c 68 */;
	struct page *cocci_id/* drivers/uio/uio.c 670 */;
	vm_fault_t cocci_id/* drivers/uio/uio.c 667 */;
	struct vm_fault *cocci_id/* drivers/uio/uio.c 667 */;
	struct vm_area_struct *cocci_id/* drivers/uio/uio.c 655 */;
	const char __user *cocci_id/* drivers/uio/uio.c 618 */;
	s32 cocci_id/* drivers/uio/uio.c 570 */;
	loff_t *cocci_id/* drivers/uio/uio.c 564 */;
	size_t cocci_id/* drivers/uio/uio.c 564 */;
	char __user *cocci_id/* drivers/uio/uio.c 563 */;
	struct uio_mem *cocci_id/* drivers/uio/uio.c 56 */;
	__poll_t cocci_id/* drivers/uio/uio.c 543 */;
	poll_table *cocci_id/* drivers/uio/uio.c 543 */;
	struct uio_listener *cocci_id/* drivers/uio/uio.c 520 */;
	struct file *cocci_id/* drivers/uio/uio.c 518 */;
	struct uio_map cocci_id/* drivers/uio/uio.c 46 */;
	struct inode *cocci_id/* drivers/uio/uio.c 459 */;
	struct uio_listener {
		struct uio_device *dev;
		s32 event_count;
	} cocci_id/* drivers/uio/uio.c 454 */;
	irqreturn_t cocci_id/* drivers/uio/uio.c 442 */;
	void *cocci_id/* drivers/uio/uio.c 442 */;
	struct uio_map {
		struct kobject kobj;
		struct uio_mem *mem;
	} cocci_id/* drivers/uio/uio.c 42 */;
	const struct file_operations cocci_id/* drivers/uio/uio.c 33 */;
	struct cdev *cocci_id/* drivers/uio/uio.c 31 */;
	bool cocci_id/* drivers/uio/uio.c 277 */;
	struct class cocci_id/* drivers/uio/uio.c 272 */;
	unsigned int cocci_id/* drivers/uio/uio.c 259 */;
	struct device_attribute *cocci_id/* drivers/uio/uio.c 256 */;
	char *cocci_id/* drivers/uio/uio.c 256 */;
	ssize_t cocci_id/* drivers/uio/uio.c 255 */;
	struct portio_sysfs_entry *cocci_id/* drivers/uio/uio.c 193 */;
	struct uio_portio *cocci_id/* drivers/uio/uio.c 184 */;
	struct portio_sysfs_entry cocci_id/* drivers/uio/uio.c 165 */;
	struct portio_sysfs_entry {
		struct attribute attr;
		ssize_t (*show)(struct uio_port *, char *);
		ssize_t (*store)(struct uio_port *, const char *, size_t);
	} cocci_id/* drivers/uio/uio.c 159 */;
	const char *cocci_id/* drivers/uio/uio.c 151 */[];
	struct uio_port *cocci_id/* drivers/uio/uio.c 131 */;
	struct uio_portio cocci_id/* drivers/uio/uio.c 129 */;
	struct uio_portio {
		struct kobject kobj;
		struct uio_port *port;
	} cocci_id/* drivers/uio/uio.c 125 */;
	struct kobj_type cocci_id/* drivers/uio/uio.c 119 */;
	const struct sysfs_ops cocci_id/* drivers/uio/uio.c 115 */;
	struct map_sysfs_entry *cocci_id/* drivers/uio/uio.c 105 */;
	void __exit cocci_id/* drivers/uio/uio.c 1038 */;
	int __init cocci_id/* drivers/uio/uio.c 1033 */;
	struct attribute *cocci_id/* drivers/uio/uio.c 100 */;
}
