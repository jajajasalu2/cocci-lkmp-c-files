cocci_test_suite() {
	struct hlist_head *cocci_id/* drivers/md/bcache/btree.c 873 */;
	void *cocci_id/* drivers/md/bcache/btree.c 847 */;
	unsigned long cocci_id/* drivers/md/bcache/btree.c 801 */;
	struct closure cocci_id/* drivers/md/bcache/btree.c 788 */;
	struct cache_set cocci_id/* drivers/md/bcache/btree.c 774 */;
	struct shrink_control *cocci_id/* drivers/md/bcache/btree.c 772 */;
	struct shrinker *cocci_id/* drivers/md/bcache/btree.c 771 */;
	gfp_t cocci_id/* drivers/md/bcache/btree.c 619 */;
	struct work_struct *cocci_id/* drivers/md/bcache/btree.c 521 */;
	struct bset *cocci_id/* drivers/md/bcache/btree.c 461 */;
	struct closure *cocci_id/* drivers/md/bcache/btree.c 459 */;
	struct btree *cocci_id/* drivers/md/bcache/btree.c 459 */;
	void cocci_id/* drivers/md/bcache/btree.c 459 */;
	struct btree_write *cocci_id/* drivers/md/bcache/btree.c 362 */;
	struct btree cocci_id/* drivers/md/bcache/btree.c 361 */;
	struct bio *cocci_id/* drivers/md/bcache/btree.c 303 */;
	keybuf_pred_fn *cocci_id/* drivers/md/bcache/btree.c 2635 */;
	struct keybuf_key cocci_id/* drivers/md/bcache/btree.c 2620 */;
	struct keybuf_key *cocci_id/* drivers/md/bcache/btree.c 2572 */;
	struct keybuf *cocci_id/* drivers/md/bcache/btree.c 2572 */;
	struct refill cocci_id/* drivers/md/bcache/btree.c 2536 */;
	struct bkey cocci_id/* drivers/md/bcache/btree.c 2535 */;
	struct refill *cocci_id/* drivers/md/bcache/btree.c 2491 */;
	struct refill {
		struct btree_op op;
		unsigned int nr_found;
		struct keybuf *buf;
		struct bkey *end;
		keybuf_pred_fn *pred;
	} cocci_id/* drivers/md/bcache/btree.c 2480 */;
	btree_map_keys_fn *cocci_id/* drivers/md/bcache/btree.c 2457 */;
	btree_map_nodes_fn *cocci_id/* drivers/md/bcache/btree.c 2424 */;
	struct bkey *cocci_id/* drivers/md/bcache/btree.c 2424 */;
	struct cache_set *cocci_id/* drivers/md/bcache/btree.c 2423 */;
	struct btree_op *cocci_id/* drivers/md/bcache/btree.c 2423 */;
	int cocci_id/* drivers/md/bcache/btree.c 2423 */;
	struct btree_insert_op cocci_id/* drivers/md/bcache/btree.c 2337 */;
	atomic_t *cocci_id/* drivers/md/bcache/btree.c 2335 */;
	struct keylist *cocci_id/* drivers/md/bcache/btree.c 2334 */;
	struct btree_insert_op *cocci_id/* drivers/md/bcache/btree.c 2323 */;
	struct btree_insert_op {
		struct btree_op op;
		struct keylist *keys;
		atomic_t *journal_ref;
		struct bkey *replace_key;
	} cocci_id/* drivers/md/bcache/btree.c 2314 */;
	struct keylist cocci_id/* drivers/md/bcache/btree.c 2282 */;
	struct btree_iter *cocci_id/* drivers/md/bcache/btree.c 208 */;
	const char *cocci_id/* drivers/md/bcache/btree.c 206 */;
	long cocci_id/* drivers/md/bcache/btree.c 2033 */;
	struct btree_op cocci_id/* drivers/md/bcache/btree.c 1964 */;
	struct btree_iter cocci_id/* drivers/md/bcache/btree.c 1930 */;
	uint64_t cocci_id/* drivers/md/bcache/btree.c 1843 */;
	struct gc_stat cocci_id/* drivers/md/bcache/btree.c 1840 */;
	uint64_t *cocci_id/* drivers/md/bcache/btree.c 1810 */;
	struct cached_dev cocci_id/* drivers/md/bcache/btree.c 1796 */;
	struct cached_dev *cocci_id/* drivers/md/bcache/btree.c 1790 */;
	struct bcache_device *cocci_id/* drivers/md/bcache/btree.c 1789 */;
	struct cache *cocci_id/* drivers/md/bcache/btree.c 1773 */;
	struct gc_stat *cocci_id/* drivers/md/bcache/btree.c 1710 */;
	struct gc_merge_info cocci_id/* drivers/md/bcache/btree.c 1626 */[GC_MERGE_NODES];
	size_t cocci_id/* drivers/md/bcache/btree.c 1593 */;
	struct btree *cocci_id/* drivers/md/bcache/btree.c 1382 */[GC_MERGE_NODES];
	struct gc_merge_info *cocci_id/* drivers/md/bcache/btree.c 1379 */;
	int cocci_id/* drivers/md/bcache/btree.c 1373 */(struct btree *b,
							 struct btree_op *op,
							 struct keylist *insert_keys,
							 atomic_t *journal_ref,
							 struct bkey *replace_key);
	struct gc_merge_info {
		struct btree *b;
		unsigned int keys;
	} cocci_id/* drivers/md/bcache/btree.c 1368 */;
	struct bset_tree *cocci_id/* drivers/md/bcache/btree.c 1330 */;
	struct bucket *cocci_id/* drivers/md/bcache/btree.c 1250 */;
	bool cocci_id/* drivers/md/bcache/btree.c 125 */;
	unsigned int cocci_id/* drivers/md/bcache/btree.c 1249 */;
	uint8_t cocci_id/* drivers/md/bcache/btree.c 1245 */;
}
