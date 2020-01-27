cocci_test_suite() {
	unsigned char *cocci_id/* drivers/md/persistent-data/dm-array.c 99 */;
	struct dm_array_cursor *cocci_id/* drivers/md/persistent-data/dm-array.c 931 */;
	struct walk_info cocci_id/* drivers/md/persistent-data/dm-array.c 889 */;
	int (*cocci_id/* drivers/md/persistent-data/dm-array.c 886 */)(void *,
								       uint64_t key,
								       void *leaf);
	struct walk_info *cocci_id/* drivers/md/persistent-data/dm-array.c 857 */;
	uint64_t *cocci_id/* drivers/md/persistent-data/dm-array.c 855 */;
	struct walk_info {
		struct dm_array_info *info;
		int (*fn)(void *context, uint64_t key, void *leaf);
		void *context;
	} cocci_id/* drivers/md/persistent-data/dm-array.c 849 */;
	struct dm_btree_value_type *cocci_id/* drivers/md/persistent-data/dm-array.c 806 */;
	void *cocci_id/* drivers/md/persistent-data/dm-array.c 805 */;
	struct dm_block_validator cocci_id/* drivers/md/persistent-data/dm-array.c 79 */;
	value_fn cocci_id/* drivers/md/persistent-data/dm-array.c 722 */;
	struct resize cocci_id/* drivers/md/persistent-data/dm-array.c 660 */;
	const void *cocci_id/* drivers/md/persistent-data/dm-array.c 657 */;
	struct dm_transaction_manager *cocci_id/* drivers/md/persistent-data/dm-array.c 632 */;
	unsigned long long cocci_id/* drivers/md/persistent-data/dm-array.c 61 */;
	__le64 cocci_id/* drivers/md/persistent-data/dm-array.c 589 */;
	uint64_t cocci_id/* drivers/md/persistent-data/dm-array.c 588 */;
	__le32 cocci_id/* drivers/md/persistent-data/dm-array.c 57 */;
	struct array_block *cocci_id/* drivers/md/persistent-data/dm-array.c 56 */;
	struct dm_block_validator *cocci_id/* drivers/md/persistent-data/dm-array.c 52 */;
	struct resize *cocci_id/* drivers/md/persistent-data/dm-array.c 437 */;
	void cocci_id/* drivers/md/persistent-data/dm-array.c 40 */;
	struct resize {
		struct dm_array_info *info;
		dm_block_t root;
		size_t size_of_block;
		unsigned max_entries;
		unsigned old_nr_full_blocks,new_nr_full_blocks;
		unsigned old_nr_entries_in_last_block,new_nr_entries_in_last_block;
		const void *value;
	} cocci_id/* drivers/md/persistent-data/dm-array.c 389 */;
	dm_block_t *cocci_id/* drivers/md/persistent-data/dm-array.c 304 */;
	dm_block_t cocci_id/* drivers/md/persistent-data/dm-array.c 303 */;
	struct dm_block *cocci_id/* drivers/md/persistent-data/dm-array.c 303 */;
	struct dm_array_info *cocci_id/* drivers/md/persistent-data/dm-array.c 302 */;
	unsigned cocci_id/* drivers/md/persistent-data/dm-array.c 302 */;
	int cocci_id/* drivers/md/persistent-data/dm-array.c 302 */;
	struct dm_block **cocci_id/* drivers/md/persistent-data/dm-array.c 283 */;
	struct array_block **cocci_id/* drivers/md/persistent-data/dm-array.c 283 */;
	struct array_block {
		__le32 csum;
		__le32 max_entries;
		__le32 nr_entries;
		__le32 value_size;
		__le64 blocknr;
	}__packed cocci_id/* drivers/md/persistent-data/dm-array.c 23 */;
	uint32_t cocci_id/* drivers/md/persistent-data/dm-array.c 153 */;
	size_t cocci_id/* drivers/md/persistent-data/dm-array.c 152 */;
	struct array_block cocci_id/* drivers/md/persistent-data/dm-array.c 146 */;
	void (*cocci_id/* drivers/md/persistent-data/dm-array.c 111 */)(void *,
									const void *);
	void **cocci_id/* drivers/md/persistent-data/dm-array.c 1000 */;
}
