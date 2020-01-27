cocci_test_suite() {
	int64_t cocci_id/* drivers/md/bcache/writeback.c 83 */;
	struct sectors_dirty_init cocci_id/* drivers/md/bcache/writeback.c 790 */;
	struct sectors_dirty_init *cocci_id/* drivers/md/bcache/writeback.c 769 */;
	struct btree_op *cocci_id/* drivers/md/bcache/writeback.c 766 */;
	struct btree *cocci_id/* drivers/md/bcache/writeback.c 766 */;
	struct sectors_dirty_init {
		struct btree_op op;
		unsigned int inode;
		size_t count;
		struct bkey start;
	} cocci_id/* drivers/md/bcache/writeback.c 759 */;
	bool cocci_id/* drivers/md/bcache/writeback.c 662 */;
	void *cocci_id/* drivers/md/bcache/writeback.c 658 */;
	struct bkey cocci_id/* drivers/md/bcache/writeback.c 623 */;
	void cocci_id/* drivers/md/bcache/writeback.c 61 */;
	struct cached_dev cocci_id/* drivers/md/bcache/writeback.c 563 */;
	struct keybuf *cocci_id/* drivers/md/bcache/writeback.c 560 */;
	struct bkey *cocci_id/* drivers/md/bcache/writeback.c 560 */;
	struct bcache_device *cocci_id/* drivers/md/bcache/writeback.c 525 */;
	int cocci_id/* drivers/md/bcache/writeback.c 523 */;
	unsigned int cocci_id/* drivers/md/bcache/writeback.c 522 */;
	uint32_t cocci_id/* drivers/md/bcache/writeback.c 47 */;
	struct bio_vec cocci_id/* drivers/md/bcache/writeback.c 463 */;
	uint16_t cocci_id/* drivers/md/bcache/writeback.c 405 */;
	struct closure cocci_id/* drivers/md/bcache/writeback.c 404 */;
	size_t cocci_id/* drivers/md/bcache/writeback.c 401 */;
	struct cache_set *cocci_id/* drivers/md/bcache/writeback.c 32 */;
	struct dirty_io *cocci_id/* drivers/md/bcache/writeback.c 316 */;
	struct keybuf_key *cocci_id/* drivers/md/bcache/writeback.c 315 */;
	struct bio *cocci_id/* drivers/md/bcache/writeback.c 313 */;
	uint64_t cocci_id/* drivers/md/bcache/writeback.c 30 */;
	struct cached_dev *cocci_id/* drivers/md/bcache/writeback.c 30 */;
	struct keylist cocci_id/* drivers/md/bcache/writeback.c 286 */;
	struct dirty_io cocci_id/* drivers/md/bcache/writeback.c 269 */;
	struct closure *cocci_id/* drivers/md/bcache/writeback.c 267 */;
	struct dirty_io {
		struct closure cl;
		struct cached_dev *dc;
		uint16_t sequence;
		struct bio bio;
	} cocci_id/* drivers/md/bcache/writeback.c 245 */;
	struct work_struct *cocci_id/* drivers/md/bcache/writeback.c 173 */;
}
