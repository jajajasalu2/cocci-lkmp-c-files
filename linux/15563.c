cocci_test_suite() {
	struct kref *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 51 */;
	struct gasket_sysfs_mapping cocci_id/* drivers/staging/gasket/gasket_sysfs.c 48 */[GASKET_SYSFS_NUM_MAPPINGS];
	ulong cocci_id/* drivers/staging/gasket/gasket_sysfs.c 350 */;
	const char *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 348 */;
	size_t cocci_id/* drivers/staging/gasket/gasket_sysfs.c 348 */;
	ssize_t cocci_id/* drivers/staging/gasket/gasket_sysfs.c 346 */;
	struct device_attribute *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 298 */;
	struct gasket_sysfs_attribute *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 297 */;
	struct gasket_sysfs_mapping *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 222 */;
	const struct gasket_sysfs_attribute *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 218 */;
	struct device *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 217 */;
	int cocci_id/* drivers/staging/gasket/gasket_sysfs.c 217 */;
	struct gasket_dev *cocci_id/* drivers/staging/gasket/gasket_sysfs.c 153 */;
	struct gasket_sysfs_mapping {
		struct device *device;
		struct gasket_dev *gasket_dev;
		struct gasket_sysfs_attribute *attributes;
		int attribute_count;
		struct mutex mutex;
		struct kref refcount;
	} cocci_id/* drivers/staging/gasket/gasket_sysfs.c 15 */;
	void cocci_id/* drivers/staging/gasket/gasket_sysfs.c 142 */;
}
