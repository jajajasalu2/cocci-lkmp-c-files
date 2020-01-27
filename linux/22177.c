cocci_test_suite() {
	unsigned long *cocci_id/* mm/zswap.c 977 */;
	void *cocci_id/* mm/zswap.c 975 */;
	unsigned long cocci_id/* mm/zswap.c 975 */;
	struct kernel_param_ops cocci_id/* mm/zswap.c 89 */;
	int cocci_id/* mm/zswap.c 87 */(const char *,
					const struct kernel_param *);
	struct writeback_control cocci_id/* mm/zswap.c 852 */;
	struct zswap_header *cocci_id/* mm/zswap.c 842 */;
	struct zpool *cocci_id/* mm/zswap.c 840 */;
	struct page **cocci_id/* mm/zswap.c 815 */;
	swp_entry_t cocci_id/* mm/zswap.c 814 */;
	enum zswap_get_swap_ret{ZSWAP_SWAPCACHE_NEW, ZSWAP_SWAPCACHE_EXIST, ZSWAP_SWAPCACHE_FAIL,} cocci_id/* mm/zswap.c 792 */;
	char **cocci_id/* mm/zswap.c 679 */;
	struct zswap_pool *cocci_id/* mm/zswap.c 669 */;
	char *cocci_id/* mm/zswap.c 667 */;
	const struct kernel_param *cocci_id/* mm/zswap.c 666 */;
	const char *cocci_id/* mm/zswap.c 666 */;
	int cocci_id/* mm/zswap.c 666 */;
	u64 cocci_id/* mm/zswap.c 66 */;
	struct kref *cocci_id/* mm/zswap.c 638 */;
	struct work_struct *cocci_id/* mm/zswap.c 625 */;
	int __must_check cocci_id/* mm/zswap.c 617 */;
	bool cocci_id/* mm/zswap.c 569 */;
	void cocci_id/* mm/zswap.c 567 */;
	char cocci_id/* mm/zswap.c 507 */[38];
	typeof(*pool) cocci_id/* mm/zswap.c 436 */;
	struct crypto_comp *cocci_id/* mm/zswap.c 419 */;
	struct zswap_pool cocci_id/* mm/zswap.c 418 */;
	struct hlist_node *cocci_id/* mm/zswap.c 416 */;
	unsigned int cocci_id/* mm/zswap.c 416 */;
	u8 *cocci_id/* mm/zswap.c 389 */;
	pgoff_t cocci_id/* mm/zswap.c 359 */;
	struct rb_root *cocci_id/* mm/zswap.c 358 */;
	struct zswap_tree *cocci_id/* mm/zswap.c 345 */;
	struct zswap_entry cocci_id/* mm/zswap.c 296 */;
	struct rb_node **cocci_id/* mm/zswap.c 291 */;
	struct zswap_entry **cocci_id/* mm/zswap.c 289 */;
	struct rb_node *cocci_id/* mm/zswap.c 269 */;
	gfp_t cocci_id/* mm/zswap.c 248 */;
	struct zswap_entry *cocci_id/* mm/zswap.c 248 */;
	void __init cocci_id/* mm/zswap.c 243 */;
	struct kmem_cache *cocci_id/* mm/zswap.c 235 */;
	const struct zpool_ops cocci_id/* mm/zswap.c 207 */;
	void cocci_id/* mm/zswap.c 205 */(struct zswap_pool *pool);
	int cocci_id/* mm/zswap.c 204 */(struct zswap_pool *pool);
	int cocci_id/* mm/zswap.c 203 */(struct zpool *pool,
					 unsigned long handle);
	atomic_t cocci_id/* mm/zswap.c 184 */;
	struct zswap_tree *cocci_id/* mm/zswap.c 177 */[MAX_SWAPFILES];
	struct zswap_tree {
		struct rb_root rbroot;
		spinlock_t lock;
	} cocci_id/* mm/zswap.c 172 */;
	struct zswap_header {
		swp_entry_t swpentry;
	} cocci_id/* mm/zswap.c 163 */;
	struct zswap_entry {
		struct rb_node rbnode;
		pgoff_t offset;
		int refcount;
		unsigned int length;
		struct zswap_pool *pool;
		union {
			unsigned long handle;
			unsigned long value;
		};
	} cocci_id/* mm/zswap.c 151 */;
	int __init cocci_id/* mm/zswap.c 1298 */;
	void __exit cocci_id/* mm/zswap.c 1282 */;
	struct dentry *cocci_id/* mm/zswap.c 1249 */;
	struct frontswap_ops cocci_id/* mm/zswap.c 1235 */;
	unsigned cocci_id/* mm/zswap.c 1220 */;
	struct zswap_pool {
		struct zpool *zpool;
		struct crypto_comp *__percpu*tfm;
		struct kref kref;
		struct list_head list;
		struct work_struct work;
		struct hlist_node node;
		char tfm_name[CRYPTO_MAX_ALG_NAME];
	} cocci_id/* mm/zswap.c 121 */;
	struct zswap_header cocci_id/* mm/zswap.c 1160 */;
	struct page *cocci_id/* mm/zswap.c 1130 */;
	__typeof__(u8 *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
