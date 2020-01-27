cocci_test_suite() {
	void __exit cocci_id/* drivers/md/dm-log-userspace-base.c 919 */;
	int __init cocci_id/* drivers/md/dm-log-userspace-base.c 890 */;
	struct dm_dirty_log_type cocci_id/* drivers/md/dm-log-userspace-base.c 869 */;
	size_t *cocci_id/* drivers/md/dm-log-userspace-base.c 86 */;
	const char *cocci_id/* drivers/md/dm-log-userspace-base.c 84 */;
	struct {
		int64_t is_recovering;
		uint64_t in_sync_hint;
	} cocci_id/* drivers/md/dm-log-userspace-base.c 839 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-log-userspace-base.c 82 */;
	status_type_t cocci_id/* drivers/md/dm-log-userspace-base.c 794 */;
	struct {
		region_t r;
		int64_t i;
	} cocci_id/* drivers/md/dm-log-userspace-base.c 743 */;
	struct {
		int64_t i;
		region_t r;
	} cocci_id/* drivers/md/dm-log-userspace-base.c 717 */;
	region_t *cocci_id/* drivers/md/dm-log-userspace-base.c 712 */;
	unsigned long cocci_id/* drivers/md/dm-log-userspace-base.c 679 */;
	region_t cocci_id/* drivers/md/dm-log-userspace-base.c 677 */;
	struct dm_dirty_log *cocci_id/* drivers/md/dm-log-userspace-base.c 677 */;
	mempool_t *cocci_id/* drivers/md/dm-log-userspace-base.c 572 */;
	uint64_t cocci_id/* drivers/md/dm-log-userspace-base.c 513 */;
	uint64_t cocci_id/* drivers/md/dm-log-userspace-base.c 491 */[MAX_FLUSH_GROUP_COUNT];
	struct dm_dirty_log_flush_entry *cocci_id/* drivers/md/dm-log-userspace-base.c 489 */;
	uint32_t cocci_id/* drivers/md/dm-log-userspace-base.c 488 */;
	struct list_head *cocci_id/* drivers/md/dm-log-userspace-base.c 483 */;
	int64_t cocci_id/* drivers/md/dm-log-userspace-base.c 439 */;
	struct log_c {
		struct dm_target *ti;
		struct dm_dev *log_dev;
		char *usr_argv_str;
		uint32_t usr_argc;
		uint32_t region_size;
		region_t region_count;
		uint64_t luid;
		char uuid[DM_UUID_LEN];
		spinlock_t flush_lock;
		struct list_head mark_list;
		struct list_head clear_list;
		uint64_t in_sync_hint;
		struct workqueue_struct *dmlog_wq;
		struct delayed_work flush_log_work;
		atomic_t sched_flush;
		uint32_t integrated_flush;
		mempool_t flush_entry_pool;
	} cocci_id/* drivers/md/dm-log-userspace-base.c 36 */;
	struct dm_dirty_log_flush_entry {
		int type;
		region_t region;
		struct list_head list;
	} cocci_id/* drivers/md/dm-log-userspace-base.c 22 */;
	size_t cocci_id/* drivers/md/dm-log-userspace-base.c 198 */;
	struct log_c cocci_id/* drivers/md/dm-log-userspace-base.c 159 */;
	struct log_c *cocci_id/* drivers/md/dm-log-userspace-base.c 159 */;
	struct work_struct *cocci_id/* drivers/md/dm-log-userspace-base.c 156 */;
	void cocci_id/* drivers/md/dm-log-userspace-base.c 156 */;
	unsigned long long cocci_id/* drivers/md/dm-log-userspace-base.c 148 */;
	char *cocci_id/* drivers/md/dm-log-userspace-base.c 130 */;
	char **cocci_id/* drivers/md/dm-log-userspace-base.c 126 */;
	unsigned cocci_id/* drivers/md/dm-log-userspace-base.c 126 */;
	struct dm_target *cocci_id/* drivers/md/dm-log-userspace-base.c 125 */;
	int cocci_id/* drivers/md/dm-log-userspace-base.c 125 */;
}
