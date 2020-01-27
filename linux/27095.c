cocci_test_suite() {
	struct xfs_mru_cache {
		struct radix_tree_root store;
		struct list_head *lists;
		struct list_head reap_list;
		spinlock_t lock;
		unsigned int grp_count;
		unsigned int grp_time;
		unsigned int lru_grp;
		unsigned long time_zero;
		xfs_mru_cache_free_func_t free_func;
		struct delayed_work work;
		unsigned int queued;
		void *data;
	} cocci_id/* fs/xfs/xfs_mru_cache.c 91 */;
	xfs_mru_cache_free_func_t cocci_id/* fs/xfs/xfs_mru_cache.c 321 */;
	void *cocci_id/* fs/xfs/xfs_mru_cache.c 318 */;
	struct xfs_mru_cache **cocci_id/* fs/xfs/xfs_mru_cache.c 317 */;
	int cocci_id/* fs/xfs/xfs_mru_cache.c 315 */;
	struct xfs_mru_cache cocci_id/* fs/xfs/xfs_mru_cache.c 269 */;
	struct work_struct *cocci_id/* fs/xfs/xfs_mru_cache.c 266 */;
	struct list_head cocci_id/* fs/xfs/xfs_mru_cache.c 233 */;
	struct xfs_mru_cache_elem *cocci_id/* fs/xfs/xfs_mru_cache.c 232 */;
	struct xfs_mru_cache *cocci_id/* fs/xfs/xfs_mru_cache.c 229 */;
	void cocci_id/* fs/xfs/xfs_mru_cache.c 227 */;
	unsigned long cocci_id/* fs/xfs/xfs_mru_cache.c 195 */;
	unsigned int cocci_id/* fs/xfs/xfs_mru_cache.c 194 */;
	struct list_head *cocci_id/* fs/xfs/xfs_mru_cache.c 132 */;
	struct workqueue_struct *cocci_id/* fs/xfs/xfs_mru_cache.c 106 */;
}
