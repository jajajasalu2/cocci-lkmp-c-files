cocci_test_suite() {
	struct fw_cfg_dma_access *cocci_id/* drivers/firmware/qemu_fw_cfg.c 94 */;
	void __exit cocci_id/* drivers/firmware/qemu_fw_cfg.c 927 */;
	int __init cocci_id/* drivers/firmware/qemu_fw_cfg.c 911 */;
	u32 cocci_id/* drivers/firmware/qemu_fw_cfg.c 91 */;
	void *cocci_id/* drivers/firmware/qemu_fw_cfg.c 91 */;
	ssize_t cocci_id/* drivers/firmware/qemu_fw_cfg.c 91 */;
	const struct kernel_param_ops cocci_id/* drivers/firmware/qemu_fw_cfg.c 901 */;
	const struct kernel_param *cocci_id/* drivers/firmware/qemu_fw_cfg.c 864 */;
	resource_size_t cocci_id/* drivers/firmware/qemu_fw_cfg.c 803 */;
	phys_addr_t cocci_id/* drivers/firmware/qemu_fw_cfg.c 802 */;
	struct resource cocci_id/* drivers/firmware/qemu_fw_cfg.c 800 */[4];
	struct platform_device *cocci_id/* drivers/firmware/qemu_fw_cfg.c 771 */;
	struct platform_driver cocci_id/* drivers/firmware/qemu_fw_cfg.c 759 */;
	const struct acpi_device_id cocci_id/* drivers/firmware/qemu_fw_cfg.c 752 */[];
	const struct of_device_id cocci_id/* drivers/firmware/qemu_fw_cfg.c 745 */[];
	bool cocci_id/* drivers/firmware/qemu_fw_cfg.c 71 */;
	void cocci_id/* drivers/firmware/qemu_fw_cfg.c 71 */;
	__le32 cocci_id/* drivers/firmware/qemu_fw_cfg.c 677 */;
	struct fw_cfg_file cocci_id/* drivers/firmware/qemu_fw_cfg.c 645 */;
	struct fw_cfg_file *cocci_id/* drivers/firmware/qemu_fw_cfg.c 636 */;
	__be32 cocci_id/* drivers/firmware/qemu_fw_cfg.c 634 */;
	struct fw_cfg_sysfs_entry *cocci_id/* drivers/firmware/qemu_fw_cfg.c 584 */;
	const struct fw_cfg_file *cocci_id/* drivers/firmware/qemu_fw_cfg.c 581 */;
	struct kset cocci_id/* drivers/firmware/qemu_fw_cfg.c 533 */;
	void __iomem *cocci_id/* drivers/firmware/qemu_fw_cfg.c 53 */;
	char *cocci_id/* drivers/firmware/qemu_fw_cfg.c 498 */;
	const char *cocci_id/* drivers/firmware/qemu_fw_cfg.c 493 */;
	struct kobject *cocci_id/* drivers/firmware/qemu_fw_cfg.c 493 */;
	struct kset *cocci_id/* drivers/firmware/qemu_fw_cfg.c 492 */;
	int cocci_id/* drivers/firmware/qemu_fw_cfg.c 492 */;
	struct bin_attribute cocci_id/* drivers/firmware/qemu_fw_cfg.c 477 */;
	struct bin_attribute *cocci_id/* drivers/firmware/qemu_fw_cfg.c 463 */;
	struct file *cocci_id/* drivers/firmware/qemu_fw_cfg.c 462 */;
	struct kobj_type cocci_id/* drivers/firmware/qemu_fw_cfg.c 455 */;
	const struct sysfs_ops cocci_id/* drivers/firmware/qemu_fw_cfg.c 441 */;
	struct fw_cfg_sysfs_attribute *cocci_id/* drivers/firmware/qemu_fw_cfg.c 436 */;
	struct attribute *cocci_id/* drivers/firmware/qemu_fw_cfg.c 424 */[];
	struct fw_cfg_sysfs_attribute cocci_id/* drivers/firmware/qemu_fw_cfg.c 362 */;
	struct fw_cfg_sysfs_attribute {
		struct attribute attr;
		ssize_t (*show)(struct fw_cfg_sysfs_entry *entry, char *buf);
	} cocci_id/* drivers/firmware/qemu_fw_cfg.c 354 */;
	struct fw_cfg_sysfs_entry cocci_id/* drivers/firmware/qemu_fw_cfg.c 350 */;
	struct fw_cfg_vmcoreinfo cocci_id/* drivers/firmware/qemu_fw_cfg.c 327 */;
	struct fw_cfg_vmcoreinfo *cocci_id/* drivers/firmware/qemu_fw_cfg.c 324 */;
	struct fw_cfg_sysfs_entry {
		struct kobject kobj;
		u32 size;
		u16 select;
		char name[FW_CFG_MAX_FILE_PATH];
		struct list_head list;
	} cocci_id/* drivers/firmware/qemu_fw_cfg.c 313 */;
	const struct {
		struct attribute attr;
		ssize_t (*show)(struct kobject *k, struct attribute *a,
				char *buf);
	} cocci_id/* drivers/firmware/qemu_fw_cfg.c 304 */;
	struct attribute *cocci_id/* drivers/firmware/qemu_fw_cfg.c 299 */;
	struct resource *cocci_id/* drivers/firmware/qemu_fw_cfg.c 234 */;
	char cocci_id/* drivers/firmware/qemu_fw_cfg.c 233 */[FW_CFG_SIG_SIZE];
	acpi_status cocci_id/* drivers/firmware/qemu_fw_cfg.c 135 */;
	loff_t cocci_id/* drivers/firmware/qemu_fw_cfg.c 132 */;
	size_t cocci_id/* drivers/firmware/qemu_fw_cfg.c 132 */;
	u16 cocci_id/* drivers/firmware/qemu_fw_cfg.c 131 */;
	u64 cocci_id/* drivers/firmware/qemu_fw_cfg.c 112 */;
	struct fw_cfg_dma_access cocci_id/* drivers/firmware/qemu_fw_cfg.c 104 */;
}
