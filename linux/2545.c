cocci_test_suite() {
	unsigned int cocci_id/* drivers/md/dm-clone-target.c 970 */;
	struct dm_clone_region_hydration *cocci_id/* drivers/md/dm-clone-target.c 967 */;
	struct batch_info *cocci_id/* drivers/md/dm-clone-target.c 966 */;
	struct batch_info {
		struct dm_clone_region_hydration *head;
		unsigned int nr_batched_regions;
	} cocci_id/* drivers/md/dm-clone-target.c 961 */;
	struct dm_io_region cocci_id/* drivers/md/dm-clone-target.c 788 */;
	struct clone {
		struct dm_target *ti;
		struct dm_target_callbacks callbacks;
		struct dm_dev *metadata_dev;
		struct dm_dev *dest_dev;
		struct dm_dev *source_dev;
		unsigned long nr_regions;
		sector_t region_size;
		unsigned int region_shift;
		struct mutex commit_lock;
		struct dm_clone_metadata *cmd;
		struct bio flush_bio;
		struct hash_table_bucket *ht;
		atomic_t ios_in_flight;
		wait_queue_head_t hydration_stopped;
		mempool_t hydration_pool;
		unsigned long last_commit_jiffies;
		spinlock_t lock;
		struct bio_list deferred_bios;
		struct bio_list deferred_discard_bios;
		struct bio_list deferred_flush_bios;
		struct bio_list deferred_flush_completions;
		unsigned int hydration_threshold;
		unsigned int hydration_batch_size;
		unsigned long hydration_offset;
		atomic_t hydrations_in_flight;
		unsigned int nr_ctr_args;
		const char **ctr_args;
		struct workqueue_struct *wq;
		struct work_struct worker;
		struct delayed_work waker;
		struct dm_kcopyd_client *kcopyd_client;
		enum clone_metadata_mode mode;
		unsigned long flags;
	} cocci_id/* drivers/md/dm-clone-target.c 69 */;
	struct hash_table_bucket *cocci_id/* drivers/md/dm-clone-target.c 636 */;
	enum clone_metadata_mode{CM_WRITE, CM_READ_ONLY, CM_FAIL,} cocci_id/* drivers/md/dm-clone-target.c 61 */;
	unsigned long cocci_id/* drivers/md/dm-clone-target.c 605 */;
	struct kmem_cache *cocci_id/* drivers/md/dm-clone-target.c 58 */;
	struct hash_table_bucket cocci_id/* drivers/md/dm-clone-target.c 574 */;
	struct hash_table_bucket {
		struct hlist_head head;
		spinlock_t lock;
	} cocci_id/* drivers/md/dm-clone-target.c 548 */;
	struct dm_clone_region_hydration {
		struct clone *clone;
		unsigned long region_nr;
		struct bio *overwrite_bio;
		bio_end_io_t *overwrite_bio_end_io;
		struct bio_list deferred_bios;
		blk_status_t status;
		struct list_head list;
		struct hlist_node h;
	} cocci_id/* drivers/md/dm-clone-target.c 520 */;
	struct bio_list cocci_id/* drivers/md/dm-clone-target.c 389 */;
	blk_status_t cocci_id/* drivers/md/dm-clone-target.c 308 */;
	struct bio_list *cocci_id/* drivers/md/dm-clone-target.c 308 */;
	unsigned long *cocci_id/* drivers/md/dm-clone-target.c 296 */;
	struct bio *cocci_id/* drivers/md/dm-clone-target.c 295 */;
	int cocci_id/* drivers/md/dm-clone-target.c 232 */;
	void __exit cocci_id/* drivers/md/dm-clone-target.c 2216 */;
	int __init cocci_id/* drivers/md/dm-clone-target.c 2199 */;
	struct target_type cocci_id/* drivers/md/dm-clone-target.c 2180 */;
	char *cocci_id/* drivers/md/dm-clone-target.c 2137 */;
	struct dm_dev *cocci_id/* drivers/md/dm-clone-target.c 2096 */;
	iterate_devices_callout_fn cocci_id/* drivers/md/dm-clone-target.c 2092 */;
	void *cocci_id/* drivers/md/dm-clone-target.c 2092 */;
	u64 cocci_id/* drivers/md/dm-clone-target.c 2075 */;
	struct queue_limits *cocci_id/* drivers/md/dm-clone-target.c 2072 */;
	const char *cocci_id/* drivers/md/dm-clone-target.c 205 */;
	struct clone *cocci_id/* drivers/md/dm-clone-target.c 203 */;
	void cocci_id/* drivers/md/dm-clone-target.c 203 */;
	struct request_queue *cocci_id/* drivers/md/dm-clone-target.c 2016 */;
	bool cocci_id/* drivers/md/dm-clone-target.c 2014 */;
	struct block_device *cocci_id/* drivers/md/dm-clone-target.c 2014 */;
	const char **cocci_id/* drivers/md/dm-clone-target.c 1900 */;
	struct dm_arg_set cocci_id/* drivers/md/dm-clone-target.c 1779 */;
	struct dm_target *cocci_id/* drivers/md/dm-clone-target.c 1775 */;
	char **cocci_id/* drivers/md/dm-clone-target.c 1775 */;
	const char *cocci_id/* drivers/md/dm-clone-target.c 171 */[];
	enum clone_metadata_mode cocci_id/* drivers/md/dm-clone-target.c 169 */;
	struct dm_arg cocci_id/* drivers/md/dm-clone-target.c 1639 */;
	const struct dm_arg cocci_id/* drivers/md/dm-clone-target.c 1587 */;
	struct dm_arg_set *cocci_id/* drivers/md/dm-clone-target.c 1579 */;
	sector_t cocci_id/* drivers/md/dm-clone-target.c 1515 */;
	struct clone cocci_id/* drivers/md/dm-clone-target.c 1506 */;
	struct dm_target_callbacks *cocci_id/* drivers/md/dm-clone-target.c 1503 */;
	unsigned long long cocci_id/* drivers/md/dm-clone-target.c 1460 */;
	char cocci_id/* drivers/md/dm-clone-target.c 1428 */[BDEVNAME_SIZE];
	dm_block_t cocci_id/* drivers/md/dm-clone-target.c 1426 */;
	ssize_t cocci_id/* drivers/md/dm-clone-target.c 1425 */;
	status_type_t cocci_id/* drivers/md/dm-clone-target.c 1419 */;
	ssize_t *cocci_id/* drivers/md/dm-clone-target.c 1400 */;
	blk_status_t *cocci_id/* drivers/md/dm-clone-target.c 1370 */;
	struct work_struct *cocci_id/* drivers/md/dm-clone-target.c 1298 */;
	typeof(*clone) cocci_id/* drivers/md/dm-clone-target.c 1273 */;
	struct blk_plug cocci_id/* drivers/md/dm-clone-target.c 1171 */;
	bool *cocci_id/* drivers/md/dm-clone-target.c 1117 */;
	struct batch_info cocci_id/* drivers/md/dm-clone-target.c 1054 */;
}
