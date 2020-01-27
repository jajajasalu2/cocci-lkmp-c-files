cocci_test_suite() {
	const struct cpumask *cocci_id/* mm/slab.c 945 */;
	long cocci_id/* mm/slab.c 940 */;
	struct kmem_cache_node cocci_id/* mm/slab.c 826 */;
	struct list_head *cocci_id/* mm/slab.c 686 */;
	struct alien_cache cocci_id/* mm/slab.c 636 */;
	size_t cocci_id/* mm/slab.c 636 */;
	struct alien_cache *cocci_id/* mm/slab.c 633 */;
	void *cocci_id/* mm/slab.c 631 */(struct kmem_cache *, gfp_t);
	void *cocci_id/* mm/slab.c 630 */(struct kmem_cache *, gfp_t, int);
	int cocci_id/* mm/slab.c 618 */;
	struct alien_cache **cocci_id/* mm/slab.c 596 */;
	struct array_cache cocci_id/* mm/slab.c 535 */;
	char *cocci_id/* mm/slab.c 439 */;
	unsigned int cocci_id/* mm/slab.c 4172 */;
	bool cocci_id/* mm/slab.c 4169 */;
	const void *cocci_id/* mm/slab.c 4168 */;
	char cocci_id/* mm/slab.c 4119 */[MAX_SLABINFO_WRITE + 1];
	loff_t *cocci_id/* mm/slab.c 4117 */;
	const char __user *cocci_id/* mm/slab.c 4116 */;
	struct file *cocci_id/* mm/slab.c 4116 */;
	ssize_t cocci_id/* mm/slab.c 4116 */;
	struct seq_file *cocci_id/* mm/slab.c 4074 */;
	struct slabinfo *cocci_id/* mm/slab.c 4037 */;
	size_t *cocci_id/* mm/slab.c 401 */;
	struct delayed_work *cocci_id/* mm/slab.c 3985 */;
	struct work_struct *cocci_id/* mm/slab.c 3980 */;
	struct kmem_cache cocci_id/* mm/slab.c 382 */;
	struct array_cache __percpu *cocci_id/* mm/slab.c 3802 */;
	void **cocci_id/* mm/slab.c 3495 */;
	unsigned long cocci_id/* mm/slab.c 3433 */;
	void cocci_id/* mm/slab.c 3432 */;
	unsigned long long *cocci_id/* mm/slab.c 332 */;
	struct kmem_cache_node *cocci_id/* mm/slab.c 3175 */;
	struct page *cocci_id/* mm/slab.c 3174 */;
	enum zone_type cocci_id/* mm/slab.c 3109 */;
	struct zone *cocci_id/* mm/slab.c 3108 */;
	struct zoneref *cocci_id/* mm/slab.c 3107 */;
	struct zonelist *cocci_id/* mm/slab.c 3106 */;
	struct array_cache *cocci_id/* mm/slab.c 3041 */;
	gfp_t cocci_id/* mm/slab.c 3038 */;
	struct kmem_cache *cocci_id/* mm/slab.c 3038 */;
	void *cocci_id/* mm/slab.c 3038 */;
	slab_flags_t __force cocci_id/* mm/slab.c 254 */;
	union freelist_init_state cocci_id/* mm/slab.c 2435 */;
	union freelist_init_state *cocci_id/* mm/slab.c 2390 */;
	union freelist_init_state {
		struct {
			unsigned int pos;
			unsigned int *list;
			unsigned int count;
		};
		struct rnd_state rnd_state;
	} cocci_id/* mm/slab.c 2377 */;
	freelist_idx_t *cocci_id/* mm/slab.c 2323 */;
	struct page cocci_id/* mm/slab.c 2199 */;
	void cocci_id/* mm/slab.c 219 */(struct kmem_cache *cachep,
					 struct kmem_cache_node *n,
					 struct page *page, void **list);
	void cocci_id/* mm/slab.c 217 */(struct kmem_cache *cachep,
					 void **list);
	void cocci_id/* mm/slab.c 215 */(struct work_struct *unused);
	int cocci_id/* mm/slab.c 214 */(struct kmem_cache *cachep, gfp_t gfp);
	void cocci_id/* mm/slab.c 213 */(struct kmem_cache *cachep,
					 struct list_head *list);
	void cocci_id/* mm/slab.c 211 */(struct kmem_cache *cachep,
					 void **objpp, int len, int node,
					 struct list_head *list);
	int cocci_id/* mm/slab.c 209 */(struct kmem_cache *cache,
					struct kmem_cache_node *n, int tofree);
	struct kmem_cache_node __initdata cocci_id/* mm/slab.c 205 */[NUM_INIT_LISTS];
	freelist_idx_t cocci_id/* mm/slab.c 2042 */;
	struct alien_cache {
		spinlock_t lock;
		struct array_cache ac;
	} cocci_id/* mm/slab.c 196 */;
	unsigned long long cocci_id/* mm/slab.c 1928 */;
	struct array_cache {
		unsigned int avail;
		unsigned int limit;
		unsigned int batchcount;
		unsigned int touched;
		void *entry[];
	} cocci_id/* mm/slab.c 184 */;
	void (*cocci_id/* mm/slab.c 1791 */)(void *);
	slab_flags_t cocci_id/* mm/slab.c 1791 */;
	const char *cocci_id/* mm/slab.c 1790 */;
	int __ref cocci_id/* mm/slab.c 1743 */;
	unsigned short cocci_id/* mm/slab.c 167 */;
	char cocci_id/* mm/slab.c 1519 */;
	unsigned char cocci_id/* mm/slab.c 1453 */;
	unsigned char *cocci_id/* mm/slab.c 1447 */;
	struct rcu_head *cocci_id/* mm/slab.c 1405 */;
	int __init cocci_id/* mm/slab.c 1302 */;
	void __init cocci_id/* mm/slab.c 1154 */;
	struct memory_notify *cocci_id/* mm/slab.c 1121 */;
	struct notifier_block *cocci_id/* mm/slab.c 1118 */;
	int __meminit cocci_id/* mm/slab.c 1095 */;
	__typeof__(struct delayed_work) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
