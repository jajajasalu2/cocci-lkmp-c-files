cocci_test_suite() {
	struct kobj_type cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 64 */;
	void cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 540 */;
	char *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 522 */;
	unsigned int cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 519 */;
	const struct sysfs_ops cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 50 */;
	void (*cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 483 */)(void *data);
	umode_t (*cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 482 */)(void *data,
								     int type);
	ssize_t (*cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 481 */)(void *data,
								     int type,
								     char *buf);
	void *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 480 */;
	struct iscsi_boot_kset *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 479 */;
	struct iscsi_boot_attr cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 38 */;
	struct iscsi_boot_attr *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 37 */;
	const char *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 340 */;
	struct attribute_group *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 339 */;
	struct attribute_group cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 332 */;
	ssize_t cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 32 */;
	struct iscsi_boot_kobj cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 318 */;
	struct iscsi_boot_kobj *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 317 */;
	struct attribute *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 315 */;
	int cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 315 */;
	umode_t cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 314 */;
	struct kobject *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 314 */;
	struct attribute *cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 307 */[];
	struct iscsi_boot_attr {
		struct attribute attr;
		int type;
		ssize_t (*show)(void *data, int type, char *buf);
	} cocci_id/* drivers/scsi/iscsi_boot_sysfs.c 23 */;
}
