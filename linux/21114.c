cocci_test_suite() {
	void cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 44 */;
	void __exit cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 400 */;
	unsigned long *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 40 */;
	struct kmem_cache *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 39 */;
	unsigned int cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 372 */;
	int __init cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 370 */;
	struct subsys_interface cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 363 */;
	struct kobject cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 343 */;
	struct kobject *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 340 */;
	struct subsys_interface *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 337 */;
	struct device *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 337 */;
	struct kobj_type cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 332 */;
	const struct sysfs_ops cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 327 */;
	struct attribute *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 322 */[];
	struct sq_sysfs_attr cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 319 */;
	const char *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 301 */;
	size_t cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 301 */;
	struct sq_mapping **cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 290 */;
	char *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 288 */;
	ssize_t cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 288 */;
	struct sq_mapping {
		const char *name;
		unsigned long sq_addr;
		unsigned long addr;
		unsigned int size;
		struct sq_mapping *next;
	} cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 27 */;
	struct sq_sysfs_attr *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 269 */;
	struct attribute *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 266 */;
	struct sq_sysfs_attr {
		struct attribute attr;
		ssize_t (*show)(char *buf);
		ssize_t (*store)(const char *buf, size_t count);
	} cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 258 */;
	struct kobject *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 256 */[NR_CPUS];
	struct sq_mapping cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 25 */;
	void *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 231 */;
	unsigned long cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 112 */;
	struct vm_struct *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 104 */;
	pgprot_t cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 101 */;
	struct sq_mapping *cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 101 */;
	int cocci_id/* arch/sh/kernel/cpu/sh4/sq.c 101 */;
}
