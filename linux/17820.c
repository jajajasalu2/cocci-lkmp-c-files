cocci_test_suite() {
	struct ia64_cpu cocci_id/* arch/ia64/kernel/topology.c 84 */;
	int __init cocci_id/* arch/ia64/kernel/topology.c 63 */;
	void __ref cocci_id/* arch/ia64/kernel/topology.c 56 */;
	int __ref cocci_id/* arch/ia64/kernel/topology.c 43 */;
	struct kobject cocci_id/* arch/ia64/kernel/topology.c 403 */;
	struct cache_info *cocci_id/* arch/ia64/kernel/topology.c 352 */;
	unsigned long cocci_id/* arch/ia64/kernel/topology.c 351 */;
	struct device *cocci_id/* arch/ia64/kernel/topology.c 350 */;
	unsigned int cocci_id/* arch/ia64/kernel/topology.c 348 */;
	u32 cocci_id/* arch/ia64/kernel/topology.c 32 */;
	int cocci_id/* arch/ia64/kernel/topology.c 32 */;
	void cocci_id/* arch/ia64/kernel/topology.c 32 */;
	struct cache_info cocci_id/* arch/ia64/kernel/topology.c 318 */;
	long cocci_id/* arch/ia64/kernel/topology.c 309 */;
	pal_cache_config_info_t cocci_id/* arch/ia64/kernel/topology.c 307 */;
	struct ia64_cpu *cocci_id/* arch/ia64/kernel/topology.c 30 */;
	struct kobj_type cocci_id/* arch/ia64/kernel/topology.c 286 */;
	const struct sysfs_ops cocci_id/* arch/ia64/kernel/topology.c 282 */;
	struct cache_attr *cocci_id/* arch/ia64/kernel/topology.c 274 */;
	struct kobject *cocci_id/* arch/ia64/kernel/topology.c 272 */;
	struct attribute *cocci_id/* arch/ia64/kernel/topology.c 272 */;
	char *cocci_id/* arch/ia64/kernel/topology.c 272 */;
	ssize_t cocci_id/* arch/ia64/kernel/topology.c 272 */;
	struct cache_attr cocci_id/* arch/ia64/kernel/topology.c 270 */;
	struct attribute *cocci_id/* arch/ia64/kernel/topology.c 257 */[];
	struct cache_attr {
		struct attribute attr;
		ssize_t (*show)(struct cache_info *, char *);
		ssize_t (*store)(struct cache_info *, const char *,
				 size_t count);
	} cocci_id/* arch/ia64/kernel/topology.c 235 */;
	cpumask_t cocci_id/* arch/ia64/kernel/topology.c 216 */;
	unsigned cocci_id/* arch/ia64/kernel/topology.c 207 */;
	pal_cache_shared_info_t cocci_id/* arch/ia64/kernel/topology.c 141 */;
	struct cpu_cache_info cocci_id/* arch/ia64/kernel/topology.c 134 */[NR_CPUS];
	struct cpu_cache_info {
		struct cache_info *cache_leaves;
		int num_cache_leaves;
		struct kobject kobj;
	} cocci_id/* arch/ia64/kernel/topology.c 128 */;
	struct cache_info {
		pal_cache_config_info_t cci;
		cpumask_t shared_cpu_map;
		int level;
		int type;
		struct kobject kobj;
	} cocci_id/* arch/ia64/kernel/topology.c 120 */;
	const char *cocci_id/* arch/ia64/kernel/topology.c 113 */[];
}
