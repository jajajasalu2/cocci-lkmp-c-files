cocci_test_suite() {
	int cocci_id/* drivers/md/dm-region-hash.c 587 */;
	struct dm_region_hash {
		uint32_t region_size;
		unsigned region_shift;
		struct dm_dirty_log *log;
		rwlock_t hash_lock;
		unsigned mask;
		unsigned nr_buckets;
		unsigned prime;
		unsigned shift;
		struct list_head *buckets;
		int flush_failure;
		unsigned max_recovery;
		spinlock_t region_lock;
		atomic_t recovery_in_flight;
		struct list_head clean_regions;
		struct list_head quiesced_regions;
		struct list_head recovered_regions;
		struct list_head failed_recovered_regions;
		struct semaphore recovery_count;
		mempool_t region_pool;
		void *context;
		sector_t target_begin;
		void (*dispatch_bios)(void *context, struct bio_list *bios);
		void (*wakeup_workers)(void *context);
		void (*wakeup_all_recovery_waiters)(void *context);
	} cocci_id/* drivers/md/dm-region-hash.c 57 */;
	unsigned long cocci_id/* drivers/md/dm-region-hash.c 540 */;
	struct bio_list *cocci_id/* drivers/md/dm-region-hash.c 526 */;
	region_t cocci_id/* drivers/md/dm-region-hash.c 288 */;
	struct dm_region_hash *cocci_id/* drivers/md/dm-region-hash.c 288 */;
	struct dm_region *cocci_id/* drivers/md/dm-region-hash.c 288 */;
	void cocci_id/* drivers/md/dm-region-hash.c 283 */;
	struct list_head *cocci_id/* drivers/md/dm-region-hash.c 274 */;
	struct dm_region cocci_id/* drivers/md/dm-region-hash.c 226 */;
	size_t cocci_id/* drivers/md/dm-region-hash.c 172 */;
	uint32_t cocci_id/* drivers/md/dm-region-hash.c 167 */;
	struct dm_dirty_log *cocci_id/* drivers/md/dm-region-hash.c 167 */;
	sector_t cocci_id/* drivers/md/dm-region-hash.c 166 */;
	unsigned cocci_id/* drivers/md/dm-region-hash.c 166 */;
	void (*cocci_id/* drivers/md/dm-region-hash.c 164 */)(void *context);
	void (*cocci_id/* drivers/md/dm-region-hash.c 162 */)(void *context,
							      struct bio_list *bios);
	void *cocci_id/* drivers/md/dm-region-hash.c 162 */;
	struct bio *cocci_id/* drivers/md/dm-region-hash.c 128 */;
	struct dm_region {
		struct dm_region_hash *rh;
		region_t key;
		int state;
		struct list_head hash_list;
		struct list_head list;
		atomic_t pending;
		struct bio_list delayed_bios;
	} cocci_id/* drivers/md/dm-region-hash.c 102 */;
}
