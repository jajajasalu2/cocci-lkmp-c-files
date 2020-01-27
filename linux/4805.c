cocci_test_suite() {
	struct hw_stats_attribute *cocci_id/* drivers/infiniband/core/sysfs.c 925 */;
	u8 cocci_id/* drivers/infiniband/core/sysfs.c 923 */;
	const char *cocci_id/* drivers/infiniband/core/sysfs.c 923 */;
	struct kobject *cocci_id/* drivers/infiniband/core/sysfs.c 912 */;
	struct attribute_group *cocci_id/* drivers/infiniband/core/sysfs.c 912 */;
	void cocci_id/* drivers/infiniband/core/sysfs.c 912 */;
	struct ib_device cocci_id/* drivers/infiniband/core/sysfs.c 896 */;
	struct hw_stats_attribute cocci_id/* drivers/infiniband/core/sysfs.c 893 */;
	struct hw_stats_attribute {
		struct attribute attr;
		ssize_t (*show)(struct kobject *kobj, struct attribute *attr,
				char *buf);
		ssize_t (*store)(struct kobject *kobj, struct attribute *attr,
				 const char *buf, size_t count);
		int index;
		u8 port_num;
	} cocci_id/* drivers/infiniband/core/sysfs.c 88 */;
	u64 cocci_id/* drivers/infiniband/core/sysfs.c 815 */;
	struct rdma_hw_stats *cocci_id/* drivers/infiniband/core/sysfs.c 813 */;
	struct port_table_attribute {
		struct port_attribute attr;
		char name[8];
		int index;
		__be16 attr_id;
	} cocci_id/* drivers/infiniband/core/sysfs.c 81 */;
	struct ib_class_port_info cocci_id/* drivers/infiniband/core/sysfs.c 779 */;
	struct attribute *cocci_id/* drivers/infiniband/core/sysfs.c 738 */;
	ssize_t (*cocci_id/* drivers/infiniband/core/sysfs.c 730 */)(struct ib_port *,
								     struct port_attribute *,
								     char *buf);
	struct attribute **cocci_id/* drivers/infiniband/core/sysfs.c 729 */;
	struct kobj_type cocci_id/* drivers/infiniband/core/sysfs.c 724 */;
	struct gid_attr_group *cocci_id/* drivers/infiniband/core/sysfs.c 696 */;
	struct port_attribute {
		struct attribute attr;
		ssize_t (*show)(struct ib_port *, struct port_attribute *,
				char *buf);
		ssize_t (*store)(struct ib_port *, struct port_attribute *,
				 const char *buf, size_t count);
	} cocci_id/* drivers/infiniband/core/sysfs.c 68 */;
	struct attribute_group cocci_id/* drivers/infiniband/core/sysfs.c 656 */;
	struct ib_port {
		struct kobject kobj;
		struct ib_device *ibdev;
		struct gid_attr_group *gid_attr_group;
		struct attribute_group gid_group;
		struct attribute_group pkey_group;
		struct attribute_group *pma_table;
		struct attribute_group *hw_stats_ag;
		struct rdma_hw_stats *hw_stats;
		u8 port_num;
	} cocci_id/* drivers/infiniband/core/sysfs.c 56 */;
	__be64 *cocci_id/* drivers/infiniband/core/sysfs.c 549 */;
	__be32 *cocci_id/* drivers/infiniband/core/sysfs.c 545 */;
	u8 cocci_id/* drivers/infiniband/core/sysfs.c 524 */[8];
	struct gid_attr_group {
		struct ib_port *port;
		struct kobject kobj;
		struct attribute_group ndev;
		struct attribute_group type;
	} cocci_id/* drivers/infiniband/core/sysfs.c 50 */;
	u16 cocci_id/* drivers/infiniband/core/sysfs.c 478 */;
	struct ib_mad *cocci_id/* drivers/infiniband/core/sysfs.c 475 */;
	void *cocci_id/* drivers/infiniband/core/sysfs.c 473 */;
	size_t cocci_id/* drivers/infiniband/core/sysfs.c 473 */;
	__be16 cocci_id/* drivers/infiniband/core/sysfs.c 472 */;
	const union ib_gid cocci_id/* drivers/infiniband/core/sysfs.c 407 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/core/sysfs.c 385 */;
	struct port_table_attribute cocci_id/* drivers/infiniband/core/sysfs.c 384 */;
	struct port_table_attribute *cocci_id/* drivers/infiniband/core/sysfs.c 383 */;
	size_t (*cocci_id/* drivers/infiniband/core/sysfs.c 381 */)(const struct ib_gid_attr *gid_attr,
								    char *buf);
	struct port_attribute *cocci_id/* drivers/infiniband/core/sysfs.c 380 */;
	struct ib_port *cocci_id/* drivers/infiniband/core/sysfs.c 380 */;
	char *cocci_id/* drivers/infiniband/core/sysfs.c 380 */;
	ssize_t cocci_id/* drivers/infiniband/core/sysfs.c 379 */;
	struct net_device *cocci_id/* drivers/infiniband/core/sysfs.c 363 */;
	const char *cocci_id/* drivers/infiniband/core/sysfs.c 294 */[];
	enum ib_port_phys_state cocci_id/* drivers/infiniband/core/sysfs.c 292 */;
	const struct sysfs_ops cocci_id/* drivers/infiniband/core/sysfs.c 145 */;
	struct kobj_type *cocci_id/* drivers/infiniband/core/sysfs.c 1393 */;
	struct gid_attr_group cocci_id/* drivers/infiniband/core/sysfs.c 136 */;
	struct port_attribute cocci_id/* drivers/infiniband/core/sysfs.c 135 */;
	unsigned int cocci_id/* drivers/infiniband/core/sysfs.c 1338 */;
	struct ib_port cocci_id/* drivers/infiniband/core/sysfs.c 1311 */;
	const struct attribute_group cocci_id/* drivers/infiniband/core/sysfs.c 1300 */;
	struct attribute *cocci_id/* drivers/infiniband/core/sysfs.c 1291 */[];
	struct device_attribute *cocci_id/* drivers/infiniband/core/sysfs.c 1280 */;
	struct device *cocci_id/* drivers/infiniband/core/sysfs.c 1280 */;
	struct ib_device_modify cocci_id/* drivers/infiniband/core/sysfs.c 1265 */;
	__be16 *cocci_id/* drivers/infiniband/core/sysfs.c 1245 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/core/sysfs.c 1042 */;
	bool cocci_id/* drivers/infiniband/core/sysfs.c 1040 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/sysfs.c 1039 */;
	struct ib_core_device *cocci_id/* drivers/infiniband/core/sysfs.c 1037 */;
	int cocci_id/* drivers/infiniband/core/sysfs.c 1037 */;
}
