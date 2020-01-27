cocci_test_suite() {
	unsigned long long cocci_id/* drivers/md/dm-snap.c 941 */;
	struct hlist_bl_head cocci_id/* drivers/md/dm-snap.c 869 */;
	unsigned long cocci_id/* drivers/md/dm-snap.c 868 */;
	unsigned cocci_id/* drivers/md/dm-snap.c 852 */;
	uint32_t cocci_id/* drivers/md/dm-snap.c 849 */;
	gfp_t cocci_id/* drivers/md/dm-snap.c 720 */;
	struct hlist_bl_node *cocci_id/* drivers/md/dm-snap.c 676 */;
	struct hlist_bl_head *cocci_id/* drivers/md/dm-snap.c 674 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-snap.c 672 */;
	struct dm_exception_table *cocci_id/* drivers/md/dm-snap.c 671 */;
	unsigned int cocci_id/* drivers/md/dm-snap.c 657 */;
	struct dm_exception_table_lock *cocci_id/* drivers/md/dm-snap.c 642 */;
	struct dm_exception_table_lock {
		struct hlist_bl_head *complete_slot;
		struct hlist_bl_head *pending_slot;
	} cocci_id/* drivers/md/dm-snap.c 627 */;
	uint32_t cocci_id/* drivers/md/dm-snap.c 624 */(struct dm_exception_table *et,
							chunk_t chunk);
	struct dm_snapshot {
		struct rw_semaphore lock;
		struct dm_dev *origin;
		struct dm_dev *cow;
		struct dm_target *ti;
		struct list_head list;
		int valid;
		int snapshot_overflowed;
		int active;
		atomic_t pending_exceptions_count;
		spinlock_t pe_allocation_lock;
		sector_t exception_start_sequence;
		sector_t exception_complete_sequence;
		struct rb_root out_of_order_tree;
		mempool_t pending_pool;
		struct dm_exception_table pending;
		struct dm_exception_table complete;
		spinlock_t pe_lock;
		spinlock_t tracked_chunk_lock;
		struct hlist_head tracked_chunk_hash[DM_TRACKED_CHUNK_HASH_SIZE];
		struct dm_exception_store *store;
		unsigned in_progress;
		struct wait_queue_head in_progress_wait;
		struct dm_kcopyd_client *kcopyd_client;
		unsigned long state_bits;
		chunk_t first_merging_chunk;
		int num_merging_chunks;
		bool merge_failed:1;
		bool discard_zeroes_cow:1;
		bool discard_passdown_origin:1;
		struct bio_list bios_queued_during_merge;
	} cocci_id/* drivers/md/dm-snap.c 48 */;
	struct origin *cocci_id/* drivers/md/dm-snap.c 449 */;
	struct dm_snapshot **cocci_id/* drivers/md/dm-snap.c 444 */;
	struct dm_exception_table {
		uint32_t hash_mask;
		unsigned hash_shift;
		struct hlist_bl_head *table;
	} cocci_id/* drivers/md/dm-snap.c 42 */;
	struct list_head *cocci_id/* drivers/md/dm-snap.c 419 */;
	struct dm_origin *cocci_id/* drivers/md/dm-snap.c 417 */;
	struct block_device *cocci_id/* drivers/md/dm-snap.c 404 */;
	struct list_head cocci_id/* drivers/md/dm-snap.c 349 */;
	uint64_t cocci_id/* drivers/md/dm-snap.c 343 */;
	struct rw_semaphore cocci_id/* drivers/md/dm-snap.c 339 */;
	struct dm_origin {
		struct dm_dev *dev;
		struct dm_target *ti;
		unsigned split_boundary;
		struct list_head hash_list;
	} cocci_id/* drivers/md/dm-snap.c 324 */;
	struct origin {
		struct block_device *bdev;
		struct list_head hash_list;
		struct list_head snapshots;
	} cocci_id/* drivers/md/dm-snap.c 311 */;
	chunk_t cocci_id/* drivers/md/dm-snap.c 302 */;
	struct dm_snapshot *cocci_id/* drivers/md/dm-snap.c 302 */;
	void cocci_id/* drivers/md/dm-snap.c 302 */;
	void __exit cocci_id/* drivers/md/dm-snap.c 2832 */;
	struct dm_snap_tracked_chunk *cocci_id/* drivers/md/dm-snap.c 280 */;
	const char cocci_id/* drivers/md/dm-snap.c 28 */[];
	int cocci_id/* drivers/md/dm-snap.c 278 */;
	int __init cocci_id/* drivers/md/dm-snap.c 2766 */;
	struct target_type cocci_id/* drivers/md/dm-snap.c 2750 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-snap.c 2715 */;
	char *cocci_id/* drivers/md/dm-snap.c 2699 */;
	status_type_t cocci_id/* drivers/md/dm-snap.c 2698 */;
	struct dm_origin cocci_id/* drivers/md/dm-snap.c 2618 */;
	struct dm_target *cocci_id/* drivers/md/dm-snap.c 2608 */;
	char **cocci_id/* drivers/md/dm-snap.c 2608 */;
	bool cocci_id/* drivers/md/dm-snap.c 2541 */;
	struct dm_snap_tracked_chunk cocci_id/* drivers/md/dm-snap.c 246 */;
	struct dm_exception_table_lock cocci_id/* drivers/md/dm-snap.c 2428 */;
	struct bio *cocci_id/* drivers/md/dm-snap.c 2420 */;
	sector_t cocci_id/* drivers/md/dm-snap.c 2419 */;
	struct dm_snap_tracked_chunk {
		struct hlist_node node;
		chunk_t chunk;
	} cocci_id/* drivers/md/dm-snap.c 239 */;
	struct queue_limits *cocci_id/* drivers/md/dm-snap.c 2384 */;
	struct mapped_device *cocci_id/* drivers/md/dm-snap.c 2224 */;
	blk_status_t *cocci_id/* drivers/md/dm-snap.c 2176 */;
	struct dm_snap_pending_exception {
		struct dm_exception e;
		struct bio_list origin_bios;
		struct bio_list snapshot_bios;
		struct dm_snapshot *snap;
		int started;
		int copy_error;
		sector_t exception_sequence;
		struct rb_node out_of_order_node;
		struct bio *full_bio;
		bio_end_io_t *full_bio_end_io;
	} cocci_id/* drivers/md/dm-snap.c 198 */;
	struct dm_snap_pending_exception *cocci_id/* drivers/md/dm-snap.c 1885 */;
	struct dm_snap_pending_exception cocci_id/* drivers/md/dm-snap.c 1843 */;
	struct dm_exception *cocci_id/* drivers/md/dm-snap.c 1838 */;
	struct dm_exception_store *cocci_id/* drivers/md/dm-snap.c 183 */;
	struct dm_dev *cocci_id/* drivers/md/dm-snap.c 177 */;
	struct rb_node **cocci_id/* drivers/md/dm-snap.c 1764 */;
	struct rb_node *cocci_id/* drivers/md/dm-snap.c 1745 */;
	void *cocci_id/* drivers/md/dm-snap.c 1737 */;
	int cocci_id/* drivers/md/dm-snap.c 1576 */(struct dm_dev *origin,
						    struct bio *bio,
						    bool limit);
	union {
		struct dm_exception_table table_swap;
		struct dm_exception_store *store_swap;
	} cocci_id/* drivers/md/dm-snap.c 1432 */;
	fmode_t cocci_id/* drivers/md/dm-snap.c 1239 */;
	dev_t cocci_id/* drivers/md/dm-snap.c 1237 */;
	struct dm_arg_set cocci_id/* drivers/md/dm-snap.c 1233 */;
	const struct dm_arg cocci_id/* drivers/md/dm-snap.c 1183 */[];
	const char *cocci_id/* drivers/md/dm-snap.c 1181 */;
	struct dm_arg_set *cocci_id/* drivers/md/dm-snap.c 1176 */;
	void cocci_id/* drivers/md/dm-snap.c 1122 */(struct bio *bio);
	struct dm_io_region cocci_id/* drivers/md/dm-snap.c 1041 */;
	void cocci_id/* drivers/md/dm-snap.c 1014 */(int read_err,
						     unsigned long write_err,
						     void *context);
	int cocci_id/* drivers/md/dm-snap.c 1011 */(struct dm_snapshot *merging_snap,
						    sector_t sector,
						    unsigned chunk_size);
}
