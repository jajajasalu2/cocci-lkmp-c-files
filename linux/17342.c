cocci_test_suite() {
	struct attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 91 */;
	struct kobject *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 90 */;
	struct kset *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 88 */;
	struct elog_attribute cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 85 */;
	const char *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 72 */;
	char *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 65 */;
	struct elog_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 64 */;
	ssize_t cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 63 */;
	struct elog_attribute {
		struct attribute attr;
		ssize_t (*show)(struct elog_obj *elog,
				struct elog_attribute *attr, char *buf);
		ssize_t (*store)(struct elog_obj *elog,
				 struct elog_attribute *attr, const char *buf,
				 size_t count);
	} cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 30 */;
	int __init cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 281 */;
	struct elog_obj cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 28 */;
	char cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 245 */[2 + 16 + 1];
	__be64 cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 238 */;
	irqreturn_t cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 236 */;
	void *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 236 */;
	struct elog_obj {
		struct kobject kobj;
		struct bin_attribute raw_attr;
		uint64_t id;
		uint64_t type;
		size_t size;
		char *buffer;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 20 */;
	int cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 185 */;
	uint64_t cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 182 */;
	struct elog_obj *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 182 */;
	size_t cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 182 */;
	loff_t cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 154 */;
	struct bin_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 153 */;
	struct file *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 152 */;
	struct kobj_type cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 143 */;
	struct attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 136 */[];
	void cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 127 */;
	const struct sysfs_ops cocci_id/* arch/powerpc/platforms/powernv/opal-elog.c 122 */;
}
