cocci_test_suite() {
	struct bkey cocci_id/* drivers/md/bcache/request.c 968 */;
	size_t cocci_id/* drivers/md/bcache/request.c 93 */;
	struct cache_set *cocci_id/* drivers/md/bcache/request.c 91 */;
	struct keylist *cocci_id/* drivers/md/bcache/request.c 90 */;
	bio_end_io_t *cocci_id/* drivers/md/bcache/request.c 676 */;
	struct cached_dev cocci_id/* drivers/md/bcache/request.c 636 */;
	struct cached_dev *cocci_id/* drivers/md/bcache/request.c 635 */;
	struct search cocci_id/* drivers/md/bcache/request.c 634 */;
	struct search *cocci_id/* drivers/md/bcache/request.c 634 */;
	struct closure *cocci_id/* drivers/md/bcache/request.c 631 */;
	int cocci_id/* drivers/md/bcache/request.c 63 */;
	struct bio *cocci_id/* drivers/md/bcache/request.c 629 */;
	atomic_t *cocci_id/* drivers/md/bcache/request.c 61 */;
	struct btree_op *cocci_id/* drivers/md/bcache/request.c 505 */;
	struct btree *cocci_id/* drivers/md/bcache/request.c 505 */;
	struct bbio cocci_id/* drivers/md/bcache/request.c 479 */;
	struct bbio *cocci_id/* drivers/md/bcache/request.c 479 */;
	void *cocci_id/* drivers/md/bcache/request.c 47 */;
	struct search {
		struct closure cl;
		struct bbio bio;
		struct bio *orig_bio;
		struct bio *cache_miss;
		struct bcache_device *d;
		unsigned int insert_bio_sectors;
		unsigned int recoverable:1;
		unsigned int write:1;
		unsigned int read_dirty_data:1;
		unsigned int cache_missed:1;
		unsigned long start_time;
		struct btree_op op;
		struct data_insert_op iop;
	} cocci_id/* drivers/md/bcache/request.c 456 */;
	struct bvec_iter cocci_id/* drivers/md/bcache/request.c 43 */;
	struct bio_vec cocci_id/* drivers/md/bcache/request.c 42 */;
	struct io cocci_id/* drivers/md/bcache/request.c 414 */;
	struct io *cocci_id/* drivers/md/bcache/request.c 369 */;
	bool cocci_id/* drivers/md/bcache/request.c 363 */;
	struct hlist_head *cocci_id/* drivers/md/bcache/request.c 358 */;
	struct task_struct *cocci_id/* drivers/md/bcache/request.c 350 */;
	void cocci_id/* drivers/md/bcache/request.c 350 */;
	const struct cache_set *cocci_id/* drivers/md/bcache/request.c 324 */;
	struct data_insert_op cocci_id/* drivers/md/bcache/request.c 310 */;
	struct data_insert_op *cocci_id/* drivers/md/bcache/request.c 310 */;
	void cocci_id/* drivers/md/bcache/request.c 28 */(struct closure *cl);
	struct kmem_cache *cocci_id/* drivers/md/bcache/request.c 26 */;
	struct bio_set *cocci_id/* drivers/md/bcache/request.c 207 */;
	unsigned int cocci_id/* drivers/md/bcache/request.c 205 */;
	struct bkey *cocci_id/* drivers/md/bcache/request.c 152 */;
	int __init cocci_id/* drivers/md/bcache/request.c 1382 */;
	struct bcache_device *cocci_id/* drivers/md/bcache/request.c 1367 */;
	struct gendisk *cocci_id/* drivers/md/bcache/request.c 1260 */;
	struct cache *cocci_id/* drivers/md/bcache/request.c 1245 */;
	struct request_queue *cocci_id/* drivers/md/bcache/request.c 1237 */;
	unsigned long cocci_id/* drivers/md/bcache/request.c 1223 */;
	fmode_t cocci_id/* drivers/md/bcache/request.c 1222 */;
	blk_qc_t cocci_id/* drivers/md/bcache/request.c 1157 */;
	uint64_t cocci_id/* drivers/md/bcache/request.c 114 */;
	struct detached_dev_io_private cocci_id/* drivers/md/bcache/request.c 1102 */;
	struct detached_dev_io_private *cocci_id/* drivers/md/bcache/request.c 1094 */;
	struct detached_dev_io_private {
		struct bcache_device *d;
		unsigned long start_time;
		bio_end_io_t *bi_end_io;
		void *bi_private;
	} cocci_id/* drivers/md/bcache/request.c 1063 */;
	struct jset cocci_id/* drivers/md/bcache/request.c 102 */;
}