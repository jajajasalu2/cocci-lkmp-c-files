cocci_test_suite() {
	u8 cocci_id/* mm/slub.c 856 */;
	u8 *cocci_id/* mm/slub.c 732 */;
	char cocci_id/* mm/slub.c 698 */[100];
	va_list cocci_id/* mm/slub.c 620 */;
	struct va_format cocci_id/* mm/slub.c 619 */;
	loff_t *cocci_id/* mm/slub.c 5920 */;
	const char __user *cocci_id/* mm/slub.c 5919 */;
	struct file *cocci_id/* mm/slub.c 5919 */;
	struct seq_file *cocci_id/* mm/slub.c 5915 */;
	struct slabinfo *cocci_id/* mm/slub.c 5893 */;
	struct saved_alias cocci_id/* mm/slub.c 5836 */;
	struct saved_alias *cocci_id/* mm/slub.c 5822 */;
	struct saved_alias {
		struct kmem_cache *s;
		const char *name;
		struct saved_alias *next;
	} cocci_id/* mm/slub.c 5816 */;
	struct work_struct *cocci_id/* mm/slub.c 5698 */;
	struct kset *cocci_id/* mm/slub.c 5650 */;
	const struct kset_uevent_ops cocci_id/* mm/slub.c 5644 */;
	struct kobj_type *cocci_id/* mm/slub.c 5637 */;
	struct kobj_type cocci_id/* mm/slub.c 5630 */;
	const struct sysfs_ops cocci_id/* mm/slub.c 5625 */;
	struct kobject *cocci_id/* mm/slub.c 5620 */;
	struct slab_attribute *cocci_id/* mm/slub.c 5584 */;
	char cocci_id/* mm/slub.c 5582 */[64];
	struct attribute *cocci_id/* mm/slub.c 5496 */;
	const struct attribute_group cocci_id/* mm/slub.c 5491 */;
	struct attribute *cocci_id/* mm/slub.c 5418 */[];
	enum stat_item cocci_id/* mm/slub.c 5367 */;
	enum track_item cocci_id/* mm/slub.c 535 */;
	unsigned cocci_id/* mm/slub.c 5349 */;
	struct track *cocci_id/* mm/slub.c 534 */;
	char *cocci_id/* mm/slub.c 5018 */;
	ssize_t cocci_id/* mm/slub.c 5018 */;
	struct slab_attribute {
		struct attribute attr;
		ssize_t (*show)(struct kmem_cache *s, char *buf);
		ssize_t (*store)(struct kmem_cache *s, const char *x,
				 size_t count);
	} cocci_id/* mm/slub.c 4906 */;
	struct slab_attribute cocci_id/* mm/slub.c 4903 */;
	enum slab_stat_type{SL_ALL, SL_PARTIAL, SL_CPU, SL_OBJECTS, SL_TOTAL,} cocci_id/* mm/slub.c 4753 */;
	struct loc_track cocci_id/* mm/slub.c 4612 */;
	struct location cocci_id/* mm/slub.c 4576 */;
	struct location *cocci_id/* mm/slub.c 4520 */;
	long cocci_id/* mm/slub.c 4519 */;
	const struct track *cocci_id/* mm/slub.c 4517 */;
	struct loc_track *cocci_id/* mm/slub.c 4516 */;
	struct loc_track {
		unsigned long max;
		unsigned long count;
		struct location *loc;
	} cocci_id/* mm/slub.c 4483 */;
	struct location {
		unsigned long count;
		unsigned long addr;
		long long sum_time;
		long min_time;
		long max_time;
		long min_pid;
		long max_pid;
	DECLARE_BITMAP(cpus,NR_CPUS)
		;
		nodemask_t nodes;
	} cocci_id/* mm/slub.c 4471 */;
	void (*cocci_id/* mm/slub.c 4273 */)(void *);
	slab_flags_t cocci_id/* mm/slub.c 4273 */;
	struct kmem_cache cocci_id/* mm/slub.c 4226 */;
	struct kmem_cache *__initcocci_id/* mm/slub.c 4193 */;
	struct notifier_block cocci_id/* mm/slub.c 4178 */;
	struct notifier_block *cocci_id/* mm/slub.c 4151 */;
	struct memory_notify *cocci_id/* mm/slub.c 4115 */;
	struct list_head cocci_id/* mm/slub.c 3980 */[SHRINK_PROMOTE_MAX];
	struct list_head cocci_id/* mm/slub.c 3979 */;
	size_t cocci_id/* mm/slub.c 3872 */;
	unsigned int cocci_id/* mm/slub.c 3871 */;
	bool cocci_id/* mm/slub.c 3868 */;
	const void *cocci_id/* mm/slub.c 3867 */;
	const char *cocci_id/* mm/slub.c 366 */;
	struct track cocci_id/* mm/slub.c 3554 */;
	struct kmem_cache_node cocci_id/* mm/slub.c 3372 */;
	struct kmem_cache_cpu cocci_id/* mm/slub.c 3339 */;
	struct detached_freelist cocci_id/* mm/slub.c 3124 */;
	struct detached_freelist *cocci_id/* mm/slub.c 3048 */;
	void **cocci_id/* mm/slub.c 3048 */;
	struct detached_freelist {
		struct page *page;
		void *tail;
		void *freelist;
		int cnt;
		struct kmem_cache *s;
	} cocci_id/* mm/slub.c 3026 */;
	struct kmem_cache *cocci_id/* mm/slub.c 3010 */;
	void *cocci_id/* mm/slub.c 3010 */;
	unsigned long cocci_id/* mm/slub.c 3010 */;
	void cocci_id/* mm/slub.c 3010 */;
	struct page cocci_id/* mm/slub.c 2836 */;
	unsigned long *cocci_id/* mm/slub.c 272 */;
	const struct kmem_cache *cocci_id/* mm/slub.c 269 */;
	struct page *cocci_id/* mm/slub.c 2544 */;
	struct kmem_cache_cpu *cocci_id/* mm/slub.c 2541 */;
	gfp_t cocci_id/* mm/slub.c 2540 */;
	int cocci_id/* mm/slub.c 2540 */;
	struct kmem_cache_cpu **cocci_id/* mm/slub.c 2445 */;
	int (*cocci_id/* mm/slub.c 2393 */)(struct page *);
	void cocci_id/* mm/slub.c 217 */(struct kmem_cache *s);
	int cocci_id/* mm/slub.c 216 */(struct kmem_cache *, const char *);
	int cocci_id/* mm/slub.c 215 */(struct kmem_cache *);
	enum track_item{TRACK_ALLOC, TRACK_FREE,} cocci_id/* mm/slub.c 212 */;
	enum slab_modes cocci_id/* mm/slub.c 2045 */;
	enum slab_modes{M_NONE, M_PARTIAL, M_FULL, M_FREE,} cocci_id/* mm/slub.c 2042 */;
	struct track {
		unsigned long addr;
#ifdef CONFIG_STACKTRACE
		unsigned long addrs[TRACK_ADDRS_COUNT];
#endif
		int cpu;
		int pid;
		unsigned long when;
	} cocci_id/* mm/slub.c 202 */;
	slab_flags_t __force cocci_id/* mm/slub.c 194 */;
	enum zone_type cocci_id/* mm/slub.c 1892 */;
	struct zone *cocci_id/* mm/slub.c 1891 */;
	struct zoneref *cocci_id/* mm/slub.c 1890 */;
	struct zonelist *cocci_id/* mm/slub.c 1889 */;
	bool cocci_id/* mm/slub.c 1831 */(struct page *page, gfp_t gfpflags);
	void cocci_id/* mm/slub.c 1830 */(struct kmem_cache *s,
					  struct page *page, int drain);
	int *cocci_id/* mm/slub.c 1792 */;
	struct kmem_cache_node *cocci_id/* mm/slub.c 1760 */;
	struct rcu_head *cocci_id/* mm/slub.c 1735 */;
	void __init cocci_id/* mm/slub.c 1537 */;
	struct kmem_cache_order_objects cocci_id/* mm/slub.c 1490 */;
	int __init cocci_id/* mm/slub.c 1221 */;
}
