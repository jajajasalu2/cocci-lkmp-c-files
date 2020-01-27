cocci_test_suite() {
	u32 cocci_id/* drivers/md/raid5-cache.c 826 */;
	u16 cocci_id/* drivers/md/raid5-cache.c 824 */;
	struct r5l_log {
		struct md_rdev *rdev;
		u32 uuid_checksum;
		sector_t device_size;
		sector_t max_free_space;
		sector_t last_checkpoint;
		u64 last_cp_seq;
		sector_t log_start;
		u64 seq;
		sector_t next_checkpoint;
		struct mutex io_mutex;
		struct r5l_io_unit *current_io;
		spinlock_t io_list_lock;
		struct list_head running_ios;
		struct list_head io_end_ios;
		struct list_head flushing_ios;
		struct list_head finished_ios;
		struct bio flush_bio;
		struct list_head no_mem_stripes;
		struct kmem_cache *io_kc;
		mempool_t io_pool;
		struct bio_set bs;
		mempool_t meta_pool;
		struct md_thread *reclaim_thread;
		unsigned long reclaim_target;
		wait_queue_head_t iounit_wait;
		struct list_head no_space_stripes;
		spinlock_t no_space_stripes_lock;
		bool need_cache_flush;
		enum r5c_journal_mode r5c_journal_mode;
		struct list_head stripe_in_journal_list;
		spinlock_t stripe_in_journal_lock;
		atomic_t stripe_in_journal_count;
		struct work_struct deferred_io_work;
		struct work_struct disable_writeback_work;
		spinlock_t tree_lock;
		struct radix_tree_root big_stripe_tree;
	} cocci_id/* drivers/md/raid5-cache.c 82 */;
	unsigned int cocci_id/* drivers/md/raid5-cache.c 809 */;
	struct mddev *cocci_id/* drivers/md/raid5-cache.c 686 */;
	struct r5l_log cocci_id/* drivers/md/raid5-cache.c 684 */;
	struct work_struct *cocci_id/* drivers/md/raid5-cache.c 682 */;
	struct r5l_io_unit cocci_id/* drivers/md/raid5-cache.c 597 */;
	void cocci_id/* drivers/md/raid5-cache.c 559 */(struct r5l_io_unit *io);
	char *cocci_id/* drivers/md/raid5-cache.c 49 */[];
	void cocci_id/* drivers/md/raid5-cache.c 326 */(struct r5l_log *log,
							sector_t space);
	char cocci_id/* drivers/md/raid5-cache.c 3068 */[BDEVNAME_SIZE];
	struct request_queue *cocci_id/* drivers/md/raid5-cache.c 3066 */;
	struct md_rdev *cocci_id/* drivers/md/raid5-cache.c 3050 */;
	struct bio *cocci_id/* drivers/md/raid5-cache.c 296 */;
	void *cocci_id/* drivers/md/raid5-cache.c 2947 */;
	sector_t cocci_id/* drivers/md/raid5-cache.c 2943 */;
	bool cocci_id/* drivers/md/raid5-cache.c 2943 */;
	struct stripe_head *cocci_id/* drivers/md/raid5-cache.c 2887 */;
	int cocci_id/* drivers/md/raid5-cache.c 2887 */;
	enum r5l_io_unit_state cocci_id/* drivers/md/raid5-cache.c 286 */;
	struct r5l_io_unit *cocci_id/* drivers/md/raid5-cache.c 285 */;
	void cocci_id/* drivers/md/raid5-cache.c 285 */;
	uintptr_t cocci_id/* drivers/md/raid5-cache.c 2811 */;
	void **cocci_id/* drivers/md/raid5-cache.c 2810 */;
	struct stripe_head_state *cocci_id/* drivers/md/raid5-cache.c 2804 */;
	struct md_sysfs_entry cocci_id/* drivers/md/raid5-cache.c 2622 */;
	const char *cocci_id/* drivers/md/raid5-cache.c 2598 */;
	size_t cocci_id/* drivers/md/raid5-cache.c 2598 */;
	char *cocci_id/* drivers/md/raid5-cache.c 2530 */;
	ssize_t cocci_id/* drivers/md/raid5-cache.c 2530 */;
	enum r5l_io_unit_state{IO_UNIT_RUNNING=0, IO_UNIT_IO_START=1, IO_UNIT_IO_END=2, IO_UNIT_STRIPE_END=3,} cocci_id/* drivers/md/raid5-cache.c 244 */;
	struct page *cocci_id/* drivers/md/raid5-cache.c 2359 */;
	struct r5dev *cocci_id/* drivers/md/raid5-cache.c 2215 */;
	__le32 cocci_id/* drivers/md/raid5-cache.c 2201 */;
	struct r5l_payload_data_parity cocci_id/* drivers/md/raid5-cache.c 2200 */;
	struct r5l_payload_flush cocci_id/* drivers/md/raid5-cache.c 2130 */;
	struct r5l_io_unit {
		struct r5l_log *log;
		struct page *meta_page;
		int meta_offset;
		struct bio *current_bio;
		atomic_t pending_stripe;
		u64 seq;
		sector_t log_start;
		sector_t log_end;
		struct list_head log_sibling;
		struct list_head stripe_list;
		int state;
		bool need_split_bio;
		struct bio *split_bio;
		unsigned int has_flush:1;
		unsigned int has_fua:1;
		unsigned int has_null_flush:1;
		unsigned int has_flush_payload:1;
		unsigned int io_deferred:1;
		struct bio_list flush_barriers;
	} cocci_id/* drivers/md/raid5-cache.c 211 */;
	struct r5l_meta_block cocci_id/* drivers/md/raid5-cache.c 2105 */;
	struct r5l_payload_flush *cocci_id/* drivers/md/raid5-cache.c 2086 */;
	struct r5l_payload_data_parity *cocci_id/* drivers/md/raid5-cache.c 2085 */;
	struct r5l_meta_block *cocci_id/* drivers/md/raid5-cache.c 2084 */;
	struct list_head *cocci_id/* drivers/md/raid5-cache.c 2080 */;
	struct r5l_recovery_ctx *cocci_id/* drivers/md/raid5-cache.c 2079 */;
	u64 cocci_id/* drivers/md/raid5-cache.c 1784 */;
	struct r5l_recovery_ctx {
		struct page *meta_page;
		sector_t meta_total_blocks;
		sector_t pos;
		u64 seq;
		int data_parity_stripes;
		int data_only_stripes;
		struct list_head cached_list;
		struct page *ra_pool[R5L_RECOVERY_PAGE_POOL_SIZE];
		sector_t pool_offset;
		int total_pages;
		int valid_pages;
		struct bio *ra_bio;
	} cocci_id/* drivers/md/raid5-cache.c 1611 */;
	struct md_thread *cocci_id/* drivers/md/raid5-cache.c 1551 */;
	struct block_device *cocci_id/* drivers/md/raid5-cache.c 1318 */;
	void cocci_id/* drivers/md/raid5-cache.c 1314 */(struct r5l_log *log,
							 sector_t cp);
	unsigned long cocci_id/* drivers/md/raid5-cache.c 1228 */;
	struct r5conf *cocci_id/* drivers/md/raid5-cache.c 1227 */;
	struct r5l_log *cocci_id/* drivers/md/raid5-cache.c 1226 */;
	struct stripe_head cocci_id/* drivers/md/raid5-cache.c 1171 */;
}