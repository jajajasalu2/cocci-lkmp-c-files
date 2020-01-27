cocci_test_suite() {
	struct bop_ring_buffer {
		unsigned begin;
		unsigned end;
		struct block_op bops[MAX_RECURSIVE_ALLOCATIONS + 1];
	} cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 95 */;
	struct block_op {
		enum block_op_type type;
		dm_block_t block;
	} cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 90 */;
	enum block_op_type{BOP_INC, BOP_DEC,} cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 85 */;
	void *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 809 */;
	size_t cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 809 */;
	struct sm_metadata cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 768 */;
	struct dm_transaction_manager *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 762 */;
	struct dm_space_map *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 761 */;
	const struct dm_space_map cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 675 */;
	size_t *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 660 */;
	uint32_t cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 619 */;
	int *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 611 */;
	uint32_t *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 601 */;
	dm_block_t *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 582 */;
	int cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 546 */(struct dm_space_map *sm,
										 dm_block_t extra_blocks);
	struct disk_sm_root cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 531 */;
	bool cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 47 */;
	struct threshold *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 47 */;
	dm_sm_threshold_fn cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 39 */;
	struct threshold {
		bool threshold_set;
		bool value_set;
		dm_block_t threshold;
		dm_block_t current_value;
		dm_sm_threshold_fn fn;
		void *context;
	} cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 23 */;
	struct block_op cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 221 */;
	enum allocation_event cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 196 */;
	dm_block_t cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 181 */;
	enum block_op_type cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 181 */;
	struct sm_metadata *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 181 */;
	int cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 181 */;
	struct sm_metadata {
		struct dm_space_map sm;
		struct ll_disk ll;
		struct ll_disk old_ll;
		dm_block_t begin;
		unsigned recursion_count;
		unsigned allocated_this_transaction;
		struct bop_ring_buffer uncommitted;
		struct threshold threshold;
	} cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 166 */;
	struct block_op *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 140 */;
	unsigned cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 112 */;
	struct bop_ring_buffer *cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 107 */;
	void cocci_id/* drivers/md/persistent-data/dm-space-map-metadata.c 101 */;
}
