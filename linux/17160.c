cocci_test_suite() {
	struct cache_dir *cocci_id/* arch/powerpc/kernel/cacheinfo.c 875 */;
	void cocci_id/* arch/powerpc/kernel/cacheinfo.c 852 */;
	struct kobj_type cocci_id/* arch/powerpc/kernel/cacheinfo.c 702 */;
	const struct sysfs_ops cocci_id/* arch/powerpc/kernel/cacheinfo.c 698 */;
	struct kobj_attribute *cocci_id/* arch/powerpc/kernel/cacheinfo.c 691 */[];
	struct attribute *cocci_id/* arch/powerpc/kernel/cacheinfo.c 681 */[];
	const struct cache_type_info cocci_id/* arch/powerpc/kernel/cacheinfo.c 68 */[];
	const struct cpumask *cocci_id/* arch/powerpc/kernel/cacheinfo.c 642 */;
	struct kobj_attribute cocci_id/* arch/powerpc/kernel/cacheinfo.c 598 */;
	struct cache *cocci_id/* arch/powerpc/kernel/cacheinfo.c 588 */;
	unsigned int cocci_id/* arch/powerpc/kernel/cacheinfo.c 587 */;
	struct kobject *cocci_id/* arch/powerpc/kernel/cacheinfo.c 585 */;
	struct kobj_attribute *cocci_id/* arch/powerpc/kernel/cacheinfo.c 585 */;
	char *cocci_id/* arch/powerpc/kernel/cacheinfo.c 585 */;
	ssize_t cocci_id/* arch/powerpc/kernel/cacheinfo.c 585 */;
	struct attribute *cocci_id/* arch/powerpc/kernel/cacheinfo.c 518 */;
	struct cache_index_dir *cocci_id/* arch/powerpc/kernel/cacheinfo.c 508 */;
	struct device *cocci_id/* arch/powerpc/kernel/cacheinfo.c 478 */;
	struct cache_type_info {
		const char *name;
		const char *size_prop;
		const char *line_size_props[2];
		const char *nr_sets_prop;
	} cocci_id/* arch/powerpc/kernel/cacheinfo.c 47 */;
	struct device_node *cocci_id/* arch/powerpc/kernel/cacheinfo.c 452 */;
	struct cache_index_dir {
		struct kobject kobj;
		struct cache_index_dir *next;
		struct cache *cache;
	} cocci_id/* arch/powerpc/kernel/cacheinfo.c 39 */;
	const struct device_node *cocci_id/* arch/powerpc/kernel/cacheinfo.c 346 */;
	bool cocci_id/* arch/powerpc/kernel/cacheinfo.c 332 */;
	struct cache_dir {
		struct kobject *kobj;
		struct cache_index_dir *index;
	} cocci_id/* arch/powerpc/kernel/cacheinfo.c 29 */;
	const struct cache *cocci_id/* arch/powerpc/kernel/cacheinfo.c 269 */;
	unsigned int *cocci_id/* arch/powerpc/kernel/cacheinfo.c 269 */;
	int cocci_id/* arch/powerpc/kernel/cacheinfo.c 269 */;
	const char *cocci_id/* arch/powerpc/kernel/cacheinfo.c 239 */;
	const __be32 *cocci_id/* arch/powerpc/kernel/cacheinfo.c 233 */;
	struct cache_index_dir cocci_id/* arch/powerpc/kernel/cacheinfo.c 134 */;
	struct cache {
		struct device_node *ofnode;
		struct cpumask shared_cpu_map;
		int type;
		int level;
		struct list_head list;
		struct cache *next_local;
	} cocci_id/* arch/powerpc/kernel/cacheinfo.c 116 */;
	__typeof__(struct cache_dir *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
