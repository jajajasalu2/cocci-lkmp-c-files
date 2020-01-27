cocci_test_suite() {
	u64 cocci_id/* fs/mbcache.c 75 */;
	bool cocci_id/* fs/mbcache.c 75 */;
	gfp_t cocci_id/* fs/mbcache.c 74 */;
	unsigned long cocci_id/* fs/mbcache.c 47 */(struct mb_cache *cache,
						    unsigned long nr_to_scan);
	struct kmem_cache *cocci_id/* fs/mbcache.c 45 */;
	void __exit cocci_id/* fs/mbcache.c 427 */;
	int __init cocci_id/* fs/mbcache.c 417 */;
	struct hlist_bl_head cocci_id/* fs/mbcache.c 358 */;
	int cocci_id/* fs/mbcache.c 344 */;
	struct work_struct *cocci_id/* fs/mbcache.c 331 */;
	struct mb_cache {
		struct hlist_bl_head *c_hash;
		int c_bucket_bits;
		unsigned long c_max_entries;
		spinlock_t c_list_lock;
		struct list_head c_list;
		unsigned long c_entry_count;
		struct shrinker c_shrink;
		struct work_struct c_shrink_work;
	} cocci_id/* fs/mbcache.c 28 */;
	struct mb_cache cocci_id/* fs/mbcache.c 273 */;
	struct shrink_control *cocci_id/* fs/mbcache.c 271 */;
	struct shrinker *cocci_id/* fs/mbcache.c 270 */;
	unsigned long cocci_id/* fs/mbcache.c 270 */;
	struct mb_cache_entry cocci_id/* fs/mbcache.c 143 */;
	struct hlist_bl_head *cocci_id/* fs/mbcache.c 134 */;
	struct hlist_bl_node *cocci_id/* fs/mbcache.c 133 */;
	u32 cocci_id/* fs/mbcache.c 130 */;
	struct mb_cache_entry *cocci_id/* fs/mbcache.c 128 */;
	struct mb_cache *cocci_id/* fs/mbcache.c 128 */;
	void cocci_id/* fs/mbcache.c 122 */;
}
