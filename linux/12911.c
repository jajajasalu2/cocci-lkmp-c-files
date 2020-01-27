cocci_test_suite() {
	struct instance_attribute {
		struct attribute attr;
		ssize_t (*show)(struct edac_pci_ctl_info *, char *);
		ssize_t (*store)(struct edac_pci_ctl_info *, const char *,
				 size_t);
	} cocci_id/* drivers/edac/edac_pci_sysfs.c 90 */;
	struct instance_attribute cocci_id/* drivers/edac/edac_pci_sysfs.c 71 */;
	struct edac_pci_ctl_info cocci_id/* drivers/edac/edac_pci_sysfs.c 70 */;
	void cocci_id/* drivers/edac/edac_pci_sysfs.c 672 */;
	pci_parity_check_fn_t cocci_id/* drivers/edac/edac_pci_sysfs.c 626 */;
	void (*cocci_id/* drivers/edac/edac_pci_sysfs.c 618 */)(struct pci_dev *dev);
	u16 cocci_id/* drivers/edac/edac_pci_sysfs.c 532 */;
	unsigned long cocci_id/* drivers/edac/edac_pci_sysfs.c 531 */;
	u8 cocci_id/* drivers/edac/edac_pci_sysfs.c 511 */;
	struct pci_dev *cocci_id/* drivers/edac/edac_pci_sysfs.c 509 */;
	u32 cocci_id/* drivers/edac/edac_pci_sysfs.c 489 */;
	struct kobject cocci_id/* drivers/edac/edac_pci_sysfs.c 362 */;
	struct bus_type *cocci_id/* drivers/edac/edac_pci_sysfs.c 339 */;
	struct attribute **cocci_id/* drivers/edac/edac_pci_sysfs.c 330 */;
	struct kobj_type cocci_id/* drivers/edac/edac_pci_sysfs.c 327 */;
	atomic_t cocci_id/* drivers/edac/edac_pci_sysfs.c 30 */;
	struct edac_pci_dev_attribute *cocci_id/* drivers/edac/edac_pci_sysfs.c 295 */[];
	struct edac_pci_dev_attribute cocci_id/* drivers/edac/edac_pci_sysfs.c 267 */;
	const struct sysfs_ops cocci_id/* drivers/edac/edac_pci_sysfs.c 261 */;
	size_t cocci_id/* drivers/edac/edac_pci_sysfs.c 251 */;
	const char *cocci_id/* drivers/edac/edac_pci_sysfs.c 250 */;
	struct edac_pci_dev_attribute *cocci_id/* drivers/edac/edac_pci_sysfs.c 241 */;
	char *cocci_id/* drivers/edac/edac_pci_sysfs.c 239 */;
	struct attribute *cocci_id/* drivers/edac/edac_pci_sysfs.c 238 */;
	ssize_t cocci_id/* drivers/edac/edac_pci_sysfs.c 238 */;
	struct edac_pci_dev_attribute {
		struct attribute attr;
		void *value;
		ssize_t (*show)(void *, char *);
		ssize_t (*store)(void *, const char *, size_t);
	} cocci_id/* drivers/edac/edac_pci_sysfs.c 230 */;
	int *cocci_id/* drivers/edac/edac_pci_sysfs.c 216 */;
	void *cocci_id/* drivers/edac/edac_pci_sysfs.c 214 */;
	struct edac_pci_attr cocci_id/* drivers/edac/edac_pci_sysfs.c 211 */;
	int cocci_id/* drivers/edac/edac_pci_sysfs.c 20 */;
	struct kobject *cocci_id/* drivers/edac/edac_pci_sysfs.c 158 */;
	struct edac_pci_ctl_info *cocci_id/* drivers/edac/edac_pci_sysfs.c 156 */;
	struct instance_attribute *cocci_id/* drivers/edac/edac_pci_sysfs.c 138 */[];
	struct instance_attribute *cocci_id/* drivers/edac/edac_pci_sysfs.c 101 */;
}
