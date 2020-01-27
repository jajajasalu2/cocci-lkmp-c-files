cocci_test_suite() {
	const char *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 88 */;
	char *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 67 */;
	struct dump_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 66 */;
	ssize_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 65 */;
	void __init cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 395 */;
	char cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 370 */[22];
	irqreturn_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 366 */;
	void *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 366 */;
	int cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 325 */;
	uint32_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 321 */;
	struct dump_obj *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 321 */;
	size_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 321 */;
	struct dump_attribute {
		struct attribute attr;
		ssize_t (*show)(struct dump_obj *dump,
				struct dump_attribute *attr, char *buf);
		ssize_t (*store)(struct dump_obj *dump,
				 struct dump_attribute *attr, const char *buf,
				 size_t count);
	} cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 30 */;
	loff_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 284 */;
	struct bin_attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 283 */;
	struct kobject *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 282 */;
	struct file *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 282 */;
	struct dump_obj cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 28 */;
	uint64_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 240 */;
	struct opal_sg_list *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 239 */;
	__be32 cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 215 */;
	uint32_t *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 213 */;
	struct kobj_type cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 207 */;
	struct attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 200 */[];
	struct dump_obj {
		struct kobject kobj;
		struct bin_attribute dump_attr;
		uint32_t id;
		uint32_t type;
		uint32_t size;
		char *buffer;
	} cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 20 */;
	void cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 191 */;
	const struct sysfs_ops cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 186 */;
	struct attribute *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 155 */;
	struct kset *cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 152 */;
	struct attribute_group cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 148 */;
	uint8_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 115 */;
	int64_t cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 115 */;
	struct dump_attribute cocci_id/* arch/powerpc/platforms/powernv/opal-dump.c 105 */;
}
