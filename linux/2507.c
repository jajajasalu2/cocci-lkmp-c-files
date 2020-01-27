cocci_test_suite() {
	struct dm_transaction_manager {
		int is_clone;
		struct dm_transaction_manager *real;
		struct dm_block_manager *bm;
		struct dm_space_map *sm;
		spinlock_t lock;
		struct hlist_head buckets[DM_HASH_SIZE];
		struct prefetch_set prefetches;
	} cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 88 */;
	struct shadow_info {
		struct hlist_node hlist;
		dm_block_t where;
	} cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 77 */;
	struct prefetch_set *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 49 */;
	void *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 400 */;
	size_t cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 400 */;
	struct dm_space_map **cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 398 */;
	struct dm_transaction_manager **cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 397 */;
	uint32_t *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 374 */;
	void cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 362 */;
	int *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 305 */;
	struct dm_block *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 269 */;
	struct dm_block **cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 265 */;
	struct dm_block_validator *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 264 */;
	dm_block_t cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 263 */;
	struct dm_transaction_manager *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 263 */;
	int cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 263 */;
	struct prefetch_set {
		struct mutex lock;
		dm_block_t blocks[PREFETCH_SIZE];
	} cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 26 */;
	struct dm_space_map *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 161 */;
	struct dm_block_manager *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 160 */;
	struct hlist_head *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 143 */;
	struct hlist_node *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 142 */;
	struct shadow_info *cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 127 */;
	unsigned cocci_id/* drivers/md/persistent-data/dm-transaction-manager.c 126 */;
}
