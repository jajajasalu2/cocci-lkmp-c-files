cocci_test_suite() {
	dev_t cocci_id/* drivers/fsi/fsi-core.c 98 */;
	dev_t *cocci_id/* drivers/fsi/fsi-core.c 937 */;
	int *cocci_id/* drivers/fsi/fsi-core.c 937 */;
	enum fsi_dev_type cocci_id/* drivers/fsi/fsi-core.c 936 */;
	struct fsi_slave *cocci_id/* drivers/fsi/fsi-core.c 936 */;
	int cocci_id/* drivers/fsi/fsi-core.c 936 */;
	struct fsi_master cocci_id/* drivers/fsi/fsi-core.c 92 */;
	const struct device_type cocci_id/* drivers/fsi/fsi-core.c 904 */;
	kuid_t *cocci_id/* drivers/fsi/fsi-core.c 893 */;
	kgid_t *cocci_id/* drivers/fsi/fsi-core.c 893 */;
	umode_t *cocci_id/* drivers/fsi/fsi-core.c 892 */;
	struct device *cocci_id/* drivers/fsi/fsi-core.c 892 */;
	char *cocci_id/* drivers/fsi/fsi-core.c 892 */;
	const struct attribute_group *cocci_id/* drivers/fsi/fsi-core.c 887 */[];
	const struct attribute_group cocci_id/* drivers/fsi/fsi-core.c 883 */;
	struct attribute *cocci_id/* drivers/fsi/fsi-core.c 875 */[];
	struct device_attribute *cocci_id/* drivers/fsi/fsi-core.c 865 */;
	ssize_t cocci_id/* drivers/fsi/fsi-core.c 864 */;
	const struct file_operations cocci_id/* drivers/fsi/fsi-core.c 785 */;
	struct fsi_slave {
		struct device dev;
		struct fsi_master *master;
		struct cdev cdev;
		int cdev_idx;
		int id;
		int link;
		u32 cfam_id;
		int chip_id;
		uint32_t size;
		u8 t_send_delay;
		u8 t_echo_delay;
	} cocci_id/* drivers/fsi/fsi-core.c 78 */;
	struct fsi_slave cocci_id/* drivers/fsi/fsi-core.c 778 */;
	struct inode *cocci_id/* drivers/fsi/fsi-core.c 776 */;
	loff_t cocci_id/* drivers/fsi/fsi-core.c 761 */;
	struct file *cocci_id/* drivers/fsi/fsi-core.c 761 */;
	const char __user *cocci_id/* drivers/fsi/fsi-core.c 724 */;
	__be32 cocci_id/* drivers/fsi/fsi-core.c 703 */;
	loff_t *cocci_id/* drivers/fsi/fsi-core.c 689 */;
	char __user *cocci_id/* drivers/fsi/fsi-core.c 688 */;
	const struct bin_attribute cocci_id/* drivers/fsi/fsi-core.c 626 */;
	struct kobject *cocci_id/* drivers/fsi/fsi-core.c 573 */;
	struct bin_attribute *cocci_id/* drivers/fsi/fsi-core.c 573 */;
	unsigned long cocci_id/* drivers/fsi/fsi-core.c 547 */;
	size_t cocci_id/* drivers/fsi/fsi-core.c 547 */;
	struct device_node *cocci_id/* drivers/fsi/fsi-core.c 443 */;
	const int cocci_id/* drivers/fsi/fsi-core.c 43 */;
	const __be32 *cocci_id/* drivers/fsi/fsi-core.c 413 */;
	unsigned int cocci_id/* drivers/fsi/fsi-core.c 412 */;
	bool cocci_id/* drivers/fsi/fsi-core.c 409 */;
	u8 cocci_id/* drivers/fsi/fsi-core.c 255 */;
	uint8_t *cocci_id/* drivers/fsi/fsi-core.c 180 */;
	uint32_t *cocci_id/* drivers/fsi/fsi-core.c 179 */;
	void cocci_id/* drivers/fsi/fsi-core.c 155 */;
	void *cocci_id/* drivers/fsi/fsi-core.c 148 */;
	const void *cocci_id/* drivers/fsi/fsi-core.c 138 */;
	int __init cocci_id/* drivers/fsi/fsi-core.c 1366 */;
	struct bus_type cocci_id/* drivers/fsi/fsi-core.c 1360 */;
	const struct fsi_device_id *cocci_id/* drivers/fsi/fsi-core.c 1327 */;
	struct fsi_driver *cocci_id/* drivers/fsi/fsi-core.c 1326 */;
	struct fsi_device *cocci_id/* drivers/fsi/fsi-core.c 1325 */;
	struct device_driver *cocci_id/* drivers/fsi/fsi-core.c 1323 */;
	struct class cocci_id/* drivers/fsi/fsi-core.c 1275 */;
	const char *cocci_id/* drivers/fsi/fsi-core.c 1256 */;
	struct fsi_master *cocci_id/* drivers/fsi/fsi-core.c 1168 */;
	uint8_t cocci_id/* drivers/fsi/fsi-core.c 1124 */;
	uint32_t cocci_id/* drivers/fsi/fsi-core.c 1109 */;
	int cocci_id/* drivers/fsi/fsi-core.c 109 */(struct fsi_master *master,
						     int link);
	int cocci_id/* drivers/fsi/fsi-core.c 107 */(struct fsi_master *master,
						     int link,
						     uint8_t slave_id,
						     uint32_t addr,
						     const void *val,
						     size_t size);
	int cocci_id/* drivers/fsi/fsi-core.c 105 */(struct fsi_master *master,
						     int link,
						     uint8_t slave_id,
						     uint32_t addr, void *val,
						     size_t size);
}
