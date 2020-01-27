cocci_test_suite() {
	__be64 *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 89 */;
	unsigned long cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 79 */;
	u64 cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 78 */;
	struct mlx4_active_ports cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 711 */;
	char cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 706 */[32];
	struct mlx4_port *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 637 */;
	struct mlx4_ib_dev *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 635 */;
	int cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 635 */;
	__be64 cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 53 */;
	struct port_table_attribute cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 510 */;
	struct port_table_attribute *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 502 */;
	struct mlx4_ib_iov_sysfs_attr cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 50 */;
	ssize_t (*cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 497 */)(struct mlx4_port *,
									struct port_attribute *,
									const char *buf,
									size_t count);
	ssize_t (*cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 495 */)(struct mlx4_port *,
									struct port_attribute *,
									char *buf);
	struct attribute **cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 494 */;
	struct device_attribute *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 47 */;
	struct device *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 46 */;
	struct port_table_attribute {
		struct port_attribute attr;
		char name[8];
		int index;
	} cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 433 */;
	struct kobj_type cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 428 */;
	const struct sysfs_ops cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 423 */;
	const char *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 412 */;
	size_t cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 412 */;
	struct port_attribute cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 402 */;
	struct port_attribute *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 401 */;
	ssize_t cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 398 */;
	struct port_attribute {
		struct attribute attr;
		ssize_t (*show)(struct mlx4_port *, struct port_attribute *,
				char *buf);
		ssize_t (*store)(struct mlx4_port *, struct port_attribute *,
				 const char *buf, size_t count);
	} cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 391 */;
	struct mlx4_port cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 378 */;
	struct mlx4_port {
		struct kobject kobj;
		struct mlx4_ib_dev *dev;
		struct attribute_group pkey_group;
		struct attribute_group gid_group;
		struct device_attribute enable_smi_admin;
		struct device_attribute smi_enabled;
		int slave;
		u8 port_num;
	} cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 364 */;
	struct mlx4_ib_iov_sysfs_attr_ar cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 245 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 227 */;
	struct mlx4_ib_iov_port *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 225 */;
	char cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 224 */[11];
	void cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 213 */;
	struct attribute *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 201 */;
	ssize_t (*cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 167 */)(struct device *dev,
									struct device_attribute *attr,
									const char *buf,
									size_t count);
	ssize_t (*cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 164 */)(struct device *dev,
									struct device_attribute *attr,
									char *buf);
	struct kobject *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 163 */;
	char *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 163 */;
	struct mlx4_ib_iov_sysfs_attr *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 162 */;
	void *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 162 */;
	u16 cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 146 */;
	__be16 *cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 127 */;
	union ib_gid cocci_id/* drivers/infiniband/hw/mlx4/sysfs.c 119 */;
}
