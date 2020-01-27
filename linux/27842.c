cocci_test_suite() {
	struct dentry cocci_id/* fs/dcache.c 950 */;
	struct list_head *cocci_id/* fs/dcache.c 864 */;
	const struct qstr cocci_id/* fs/dcache.c 83 */;
	struct kmem_cache *cocci_id/* fs/dcache.c 81 */;
	struct hlist_bl_head *cocci_id/* fs/dcache.c 478 */;
	struct dentry *cocci_id/* fs/dcache.c 476 */;
	void cocci_id/* fs/dcache.c 476 */;
	struct list_lru_one *cocci_id/* fs/dcache.c 439 */;
	struct hlist_bl_head cocci_id/* fs/dcache.c 3180 */;
	void __init cocci_id/* fs/dcache.c 3163 */;
	int __init cocci_id/* fs/dcache.c 3133 */;
	unsigned long long cocci_id/* fs/dcache.c 3125 */;
	enum d_walk_ret cocci_id/* fs/dcache.c 3094 */;
	void *cocci_id/* fs/dcache.c 3094 */;
	struct name_snapshot *cocci_id/* fs/dcache.c 301 */;
	struct rw_semaphore *cocci_id/* fs/dcache.c 2952 */;
	struct mutex *cocci_id/* fs/dcache.c 2951 */;
	long *cocci_id/* fs/dcache.c 2767 */;
	struct rcu_head *cocci_id/* fs/dcache.c 267 */;
	unsigned cocci_id/* fs/dcache.c 2644 */;
	struct inode *cocci_id/* fs/dcache.c 2641 */;
	struct external_name {
		union {
			atomic_t count;
			struct rcu_head head;
		} u;
		unsigned char name[];
	} cocci_id/* fs/dcache.c 254 */;
	wait_queue_head_t *cocci_id/* fs/dcache.c 2516 */;
	struct hlist_bl_node *cocci_id/* fs/dcache.c 2343 */;
	unsigned int cocci_id/* fs/dcache.c 2341 */;
	const struct dentry *cocci_id/* fs/dcache.c 2339 */;
	const char *cocci_id/* fs/dcache.c 2273 */;
	const unsigned char *cocci_id/* fs/dcache.c 2219 */;
	u64 cocci_id/* fs/dcache.c 2218 */;
	unsigned *cocci_id/* fs/dcache.c 2216 */;
	struct qstr *cocci_id/* fs/dcache.c 2134 */;
	bool cocci_id/* fs/dcache.c 2001 */;
	unsigned long cocci_id/* fs/dcache.c 196 */;
	const struct dentry_operations *cocci_id/* fs/dcache.c 1835 */;
	struct qstr cocci_id/* fs/dcache.c 1827 */;
	struct external_name *cocci_id/* fs/dcache.c 1706 */;
	struct external_name cocci_id/* fs/dcache.c 1705 */;
	size_t cocci_id/* fs/dcache.c 1705 */;
	loff_t *cocci_id/* fs/dcache.c 169 */;
	size_t *cocci_id/* fs/dcache.c 169 */;
	int cocci_id/* fs/dcache.c 1688 */;
	char *cocci_id/* fs/dcache.c 1687 */;
	const struct qstr *cocci_id/* fs/dcache.c 1684 */;
	struct super_block *cocci_id/* fs/dcache.c 1684 */;
	struct ctl_table *cocci_id/* fs/dcache.c 168 */;
	void __user *cocci_id/* fs/dcache.c 168 */;
	struct dentry **cocci_id/* fs/dcache.c 1630 */;
	struct select_data cocci_id/* fs/dcache.c 1543 */;
	struct select_data *cocci_id/* fs/dcache.c 1476 */;
	struct select_data {
		struct dentry *start;
		union {
			long found;
			struct dentry *victim;
		};
		struct list_head dispose;
	} cocci_id/* fs/dcache.c 1465 */;
	struct check_mount cocci_id/* fs/dcache.c 1404 */;
	const struct path *cocci_id/* fs/dcache.c 1402 */;
	long cocci_id/* fs/dcache.c 140 */;
	struct path cocci_id/* fs/dcache.c 1383 */;
	struct check_mount *cocci_id/* fs/dcache.c 1382 */;
	struct check_mount {
		struct vfsmount *mnt;
		unsigned int mounted;
	} cocci_id/* fs/dcache.c 1375 */;
	enum d_walk_ret (*cocci_id/* fs/dcache.c 1270 */)(void *,
							  struct dentry *);
	enum d_walk_ret{D_WALK_CONTINUE, D_WALK_QUIT, D_WALK_NORETRY, D_WALK_SKIP,} cocci_id/* fs/dcache.c 1254 */;
	struct shrink_control *cocci_id/* fs/dcache.c 1196 */;
	struct dentry_stat_t cocci_id/* fs/dcache.c 118 */;
	spinlock_t *cocci_id/* fs/dcache.c 1127 */;
	enum lru_status cocci_id/* fs/dcache.c 1126 */;
	struct hlist_bl_head cocci_id/* fs/dcache.c 107 */[1 << IN_LOOKUP_SHIFT];
	__typeof__(long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
