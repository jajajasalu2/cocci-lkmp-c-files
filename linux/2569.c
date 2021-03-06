cocci_test_suite() {
	struct remap_info cocci_id/* drivers/md/dm-thin.c 932 */;
	struct remap_info *cocci_id/* drivers/md/dm-thin.c 908 */;
	struct dm_bio_prison_cell *cocci_id/* drivers/md/dm-thin.c 906 */;
	void *cocci_id/* drivers/md/dm-thin.c 905 */;
	struct remap_info {
		struct thin_c *tc;
		struct bio_list defer_bios;
		struct bio_list issue_bios;
	} cocci_id/* drivers/md/dm-thin.c 899 */;
	void cocci_id/* drivers/md/dm-thin.c 897 */(struct thin_c *tc,
						    struct bio *bio);
	struct pool *cocci_id/* drivers/md/dm-thin.c 831 */;
	struct dm_thin_new_mapping *cocci_id/* drivers/md/dm-thin.c 829 */;
	void cocci_id/* drivers/md/dm-thin.c 829 */;
	struct dm_thin_new_mapping {
		struct list_head list;
		bool pass_discard:1;
		bool maybe_shared:1;
		atomic_t prepare_actions;
		blk_status_t status;
		struct thin_c *tc;
		dm_block_t virt_begin,virt_end;
		dm_block_t data_block;
		struct dm_bio_prison_cell *cell;
		struct bio *bio;
		bio_end_io_t *saved_bi_end_io;
	} cocci_id/* drivers/md/dm-thin.c 800 */;
	struct bio_list *cocci_id/* drivers/md/dm-thin.c 593 */;
	struct dm_thin_endio_hook {
		struct thin_c *tc;
		struct dm_deferred_entry *shared_read_entry;
		struct dm_deferred_entry *all_io_entry;
		struct dm_thin_new_mapping *overwrite_mapping;
		struct rb_node rb_node;
		struct dm_bio_prison_cell *cell;
	} cocci_id/* drivers/md/dm-thin.c 584 */;
	struct dm_thin_pool_table {
		struct mutex mutex;
		struct list_head pools;
	} cocci_id/* drivers/md/dm-thin.c 522 */;
	blk_status_t cocci_id/* drivers/md/dm-thin.c 491 */;
	void (*cocci_id/* drivers/md/dm-thin.c 474 */)(void *,
						       struct dm_bio_prison_cell *);
	int __init cocci_id/* drivers/md/dm-thin.c 4495 */;
	struct dm_bio_prison_cell **cocci_id/* drivers/md/dm-thin.c 443 */;
	struct dm_cell_key *cocci_id/* drivers/md/dm-thin.c 442 */;
	ssize_t cocci_id/* drivers/md/dm-thin.c 4392 */;
	blk_status_t *cocci_id/* drivers/md/dm-thin.c 4318 */;
	struct target_type cocci_id/* drivers/md/dm-thin.c 4098 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-thin.c 4031 */;
	uint64_t cocci_id/* drivers/md/dm-thin.c 3909 */;
	status_type_t cocci_id/* drivers/md/dm-thin.c 3904 */;
	struct pool_features *cocci_id/* drivers/md/dm-thin.c 3874 */;
	char *cocci_id/* drivers/md/dm-thin.c 3874 */;
	struct discard_op *cocci_id/* drivers/md/dm-thin.c 386 */;
	struct discard_op {
		struct thin_c *tc;
		struct blk_plug plug;
		struct bio *parent_bio;
		struct bio *bio;
	} cocci_id/* drivers/md/dm-thin.c 379 */;
	dm_thin_id cocci_id/* drivers/md/dm-thin.c 3718 */;
	dm_thin_id *cocci_id/* drivers/md/dm-thin.c 3681 */;
	unsigned cocci_id/* drivers/md/dm-thin.c 3670 */;
	bool cocci_id/* drivers/md/dm-thin.c 365 */;
	unsigned long long cocci_id/* drivers/md/dm-thin.c 3475 */;
	bool *cocci_id/* drivers/md/dm-thin.c 3453 */;
	struct thin_c {
		struct list_head list;
		struct dm_dev *pool_dev;
		struct dm_dev *origin_dev;
		sector_t origin_size;
		dm_thin_id dev_id;
		struct pool *pool;
		struct dm_thin_device *td;
		struct mapped_device *thin_md;
		bool requeue_mode:1;
		spinlock_t lock;
		struct list_head deferred_cells;
		struct bio_list deferred_bio_list;
		struct bio_list retry_on_resume_list;
		struct rb_root sort_bio_list;
		refcount_t refcount;
		struct completion can_destroy;
	} cocci_id/* drivers/md/dm-thin.c 337 */;
	unsigned long long *cocci_id/* drivers/md/dm-thin.c 3347 */;
	fmode_t cocci_id/* drivers/md/dm-thin.c 3291 */;
	struct dm_dev *cocci_id/* drivers/md/dm-thin.c 3287 */;
	struct dm_arg_set cocci_id/* drivers/md/dm-thin.c 3286 */;
	struct pool_features cocci_id/* drivers/md/dm-thin.c 3285 */;
	struct pool_c {
		struct dm_target *ti;
		struct pool *pool;
		struct dm_dev *data_dev;
		struct dm_dev *metadata_dev;
		struct dm_target_callbacks callbacks;
		dm_block_t low_water_blocks;
		struct pool_features requested_pf;
		struct pool_features adjusted_pf;
		struct bio flush_bio;
	} cocci_id/* drivers/md/dm-thin.c 321 */;
	const struct dm_arg cocci_id/* drivers/md/dm-thin.c 3140 */[];
	struct dm_arg_set *cocci_id/* drivers/md/dm-thin.c 3133 */;
	char **cocci_id/* drivers/md/dm-thin.c 3085 */;
	int *cocci_id/* drivers/md/dm-thin.c 3085 */;
	unsigned long cocci_id/* drivers/md/dm-thin.c 3084 */;
	int cocci_id/* drivers/md/dm-thin.c 3084 */;
	struct block_device *cocci_id/* drivers/md/dm-thin.c 3083 */;
	struct mapped_device *cocci_id/* drivers/md/dm-thin.c 3082 */;
	const char *cocci_id/* drivers/md/dm-thin.c 295 */[];
	struct dm_pool_metadata *cocci_id/* drivers/md/dm-thin.c 2942 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-thin.c 2932 */;
	enum pool_mode cocci_id/* drivers/md/dm-thin.c 2872 */;
	struct pool_c *cocci_id/* drivers/md/dm-thin.c 2867 */;
	struct dm_target *cocci_id/* drivers/md/dm-thin.c 2865 */;
	void cocci_id/* drivers/md/dm-thin.c 286 */(struct pool *pool,
						    const char *op, int r);
	char cocci_id/* drivers/md/dm-thin.c 2848 */[BDEVNAME_SIZE];
	struct queue_limits *cocci_id/* drivers/md/dm-thin.c 2846 */;
	uint32_t cocci_id/* drivers/md/dm-thin.c 2833 */;
	struct request_queue *cocci_id/* drivers/md/dm-thin.c 2828 */;
	struct pool_c cocci_id/* drivers/md/dm-thin.c 2799 */;
	struct dm_target_callbacks *cocci_id/* drivers/md/dm-thin.c 2797 */;
	const char *cocci_id/* drivers/md/dm-thin.c 2626 */;
	struct noflush_work cocci_id/* drivers/md/dm-thin.c 2499 */;
	void (*cocci_id/* drivers/md/dm-thin.c 2497 */)(struct work_struct *);
	struct noflush_work *cocci_id/* drivers/md/dm-thin.c 2484 */;
	struct noflush_work {
		struct pool_work pw;
		struct thin_c *tc;
	} cocci_id/* drivers/md/dm-thin.c 2472 */;
	struct pool_work *cocci_id/* drivers/md/dm-thin.c 2456 */;
	struct pool_work cocci_id/* drivers/md/dm-thin.c 2453 */;
	struct pool_work {
		struct work_struct worker;
		struct completion complete;
	} cocci_id/* drivers/md/dm-thin.c 2446 */;
	struct pool cocci_id/* drivers/md/dm-thin.c 2434 */;
	struct work_struct *cocci_id/* drivers/md/dm-thin.c 2432 */;
	struct thin_c cocci_id/* drivers/md/dm-thin.c 2318 */;
	void cocci_id/* drivers/md/dm-thin.c 2304 */(struct thin_c *tc);
	struct pool {
		struct list_head list;
		struct dm_target *ti;
		struct mapped_device *pool_md;
		struct block_device *md_dev;
		struct dm_pool_metadata *pmd;
		dm_block_t low_water_blocks;
		uint32_t sectors_per_block;
		int sectors_per_block_shift;
		struct pool_features pf;
		bool low_water_triggered:1;
		bool suspended:1;
		bool out_of_data_space:1;
		struct dm_bio_prison *prison;
		struct dm_kcopyd_client *copier;
		struct work_struct worker;
		struct workqueue_struct *wq;
		struct throttle throttle;
		struct delayed_work waker;
		struct delayed_work no_space_timeout;
		unsigned long last_commit_jiffies;
		unsigned ref_count;
		spinlock_t lock;
		struct bio_list deferred_flush_bios;
		struct bio_list deferred_flush_completions;
		struct list_head prepared_mappings;
		struct list_head prepared_discards;
		struct list_head prepared_discards_pt2;
		struct list_head active_thins;
		struct dm_deferred_set *shared_read_ds;
		struct dm_deferred_set *all_io_ds;
		struct dm_thin_new_mapping *next_mapping;
		process_bio_fn process_bio;
		process_bio_fn process_discard;
		process_cell_fn process_cell;
		process_cell_fn process_discard_cell;
		process_mapping_fn process_prepared_mapping;
		process_mapping_fn process_prepared_discard;
		process_mapping_fn process_prepared_discard_pt2;
		struct dm_bio_prison_cell **cell_sort_array;
		mempool_t mapping_pool;
	} cocci_id/* drivers/md/dm-thin.c 229 */;
	void (*cocci_id/* drivers/md/dm-thin.c 225 */)(struct dm_thin_new_mapping *m);
	void (*cocci_id/* drivers/md/dm-thin.c 224 */)(struct thin_c *tc,
						       struct dm_bio_prison_cell *cell);
	void (*cocci_id/* drivers/md/dm-thin.c 223 */)(struct thin_c *tc,
						       struct bio *bio);
	const void *cocci_id/* drivers/md/dm-thin.c 2223 */;
	struct blk_plug cocci_id/* drivers/md/dm-thin.c 2170 */;
	struct bio_list cocci_id/* drivers/md/dm-thin.c 2147 */;
	struct bio *cocci_id/* drivers/md/dm-thin.c 2131 */;
	struct dm_thin_endio_hook *cocci_id/* drivers/md/dm-thin.c 2130 */;
	struct pool_features {
		enum pool_mode mode;
		bool zero_new_blocks:1;
		bool discard_enabled:1;
		bool discard_passdown:1;
		bool error_if_no_space:1;
	} cocci_id/* drivers/md/dm-thin.c 213 */;
	struct rb_node *cocci_id/* drivers/md/dm-thin.c 2129 */;
	struct thin_c *cocci_id/* drivers/md/dm-thin.c 2127 */;
	sector_t cocci_id/* drivers/md/dm-thin.c 2108 */;
	struct rb_node **cocci_id/* drivers/md/dm-thin.c 2106 */;
	struct dm_thin_lookup_result cocci_id/* drivers/md/dm-thin.c 2016 */;
	dm_block_t cocci_id/* drivers/md/dm-thin.c 2015 */;
	enum pool_mode{PM_WRITE, PM_OUT_OF_DATA_SPACE, PM_OUT_OF_METADATA_SPACE, PM_READ_ONLY, PM_FAIL,} cocci_id/* drivers/md/dm-thin.c 200 */;
	struct dm_thin_endio_hook cocci_id/* drivers/md/dm-thin.c 1824 */;
	struct dm_thin_lookup_result *cocci_id/* drivers/md/dm-thin.c 1787 */;
	struct dm_cell_key cocci_id/* drivers/md/dm-thin.c 1679 */;
	dm_block_t *cocci_id/* drivers/md/dm-thin.c 1521 */;
	struct throttle *cocci_id/* drivers/md/dm-thin.c 151 */;
	struct throttle {
		struct rw_semaphore lock;
		unsigned long threshold;
		bool throttle_applied;
	} cocci_id/* drivers/md/dm-thin.c 145 */;
	void cocci_id/* drivers/md/dm-thin.c 1439 */(struct pool *pool);
	void cocci_id/* drivers/md/dm-thin.c 1437 */(struct pool *pool,
						     enum pool_mode new_mode);
	struct dm_io_region cocci_id/* drivers/md/dm-thin.c 1290 */;
	struct dm_thin_device *cocci_id/* drivers/md/dm-thin.c 129 */;
	struct dm_thin_new_mapping cocci_id/* drivers/md/dm-thin.c 1278 */;
	bio_end_io_t *cocci_id/* drivers/md/dm-thin.c 1256 */;
	bio_end_io_t **cocci_id/* drivers/md/dm-thin.c 1255 */;
	struct list_head cocci_id/* drivers/md/dm-thin.c 1228 */;
	process_mapping_fn *cocci_id/* drivers/md/dm-thin.c 1226 */;
	struct list_head *cocci_id/* drivers/md/dm-thin.c 1225 */;
	enum lock_space cocci_id/* drivers/md/dm-thin.c 120 */;
	enum lock_space{VIRTUAL, PHYSICAL,} cocci_id/* drivers/md/dm-thin.c 115 */;
	struct discard_op cocci_id/* drivers/md/dm-thin.c 1088 */;
}
