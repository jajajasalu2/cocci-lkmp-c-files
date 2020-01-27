cocci_test_suite() {
	int (*cocci_id/* drivers/md/persistent-data/dm-btree.c 985 */)(void *context,
								       uint64_t *keys,
								       void *leaf);
	struct ro_spine cocci_id/* drivers/md/persistent-data/dm-btree.c 909 */;
	__le64 cocci_id/* drivers/md/persistent-data/dm-btree.c 712 */;
	struct dm_transaction_manager *cocci_id/* drivers/md/persistent-data/dm-btree.c 71 */;
	unsigned *cocci_id/* drivers/md/persistent-data/dm-btree.c 694 */;
	struct dm_btree_value_type *cocci_id/* drivers/md/persistent-data/dm-btree.c 693 */;
	dm_block_t cocci_id/* drivers/md/persistent-data/dm-btree.c 692 */;
	struct shadow_spine *cocci_id/* drivers/md/persistent-data/dm-btree.c 692 */;
	struct dm_block *cocci_id/* drivers/md/persistent-data/dm-btree.c 625 */;
	unsigned cocci_id/* drivers/md/persistent-data/dm-btree.c 624 */;
	uint64_t cocci_id/* drivers/md/persistent-data/dm-btree.c 41 */;
	struct btree_node *cocci_id/* drivers/md/persistent-data/dm-btree.c 41 */;
	int cocci_id/* drivers/md/persistent-data/dm-btree.c 41 */;
	uint32_t cocci_id/* drivers/md/persistent-data/dm-btree.c 349 */;
	uint64_t *cocci_id/* drivers/md/persistent-data/dm-btree.c 346 */;
	void *cocci_id/* drivers/md/persistent-data/dm-btree.c 346 */;
	size_t cocci_id/* drivers/md/persistent-data/dm-btree.c 346 */;
	int (*cocci_id/* drivers/md/persistent-data/dm-btree.c 345 */)(struct btree_node *,
								       uint64_t);
	struct ro_spine *cocci_id/* drivers/md/persistent-data/dm-btree.c 344 */;
	struct frame *cocci_id/* drivers/md/persistent-data/dm-btree.c 293 */;
	struct del_stack *cocci_id/* drivers/md/persistent-data/dm-btree.c 273 */;
	struct dm_block_manager *cocci_id/* drivers/md/persistent-data/dm-btree.c 197 */;
	struct frame **cocci_id/* drivers/md/persistent-data/dm-btree.c 177 */;
	struct del_stack {
		struct dm_btree_info *info;
		struct dm_transaction_manager *tm;
		int top;
		struct frame spine[MAX_SPINE_DEPTH];
	} cocci_id/* drivers/md/persistent-data/dm-btree.c 170 */;
	struct frame {
		struct dm_block *b;
		struct btree_node *n;
		unsigned level;
		unsigned nr_children;
		unsigned current_child;
	} cocci_id/* drivers/md/persistent-data/dm-btree.c 162 */;
	dm_block_t *cocci_id/* drivers/md/persistent-data/dm-btree.c 126 */;
	struct node_header cocci_id/* drivers/md/persistent-data/dm-btree.c 119 */;
	struct cursor_node *cocci_id/* drivers/md/persistent-data/dm-btree.c 1151 */;
	void cocci_id/* drivers/md/persistent-data/dm-btree.c 1117 */;
	bool cocci_id/* drivers/md/persistent-data/dm-btree.c 1100 */;
	struct dm_btree_cursor *cocci_id/* drivers/md/persistent-data/dm-btree.c 1100 */;
	struct dm_btree_info *cocci_id/* drivers/md/persistent-data/dm-btree.c 1099 */;
}
