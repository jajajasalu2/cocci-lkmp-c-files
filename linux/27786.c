cocci_test_suite() {
	bool *cocci_id/* fs/buffer.c 87 */;
	struct mem_cgroup *cocci_id/* fs/buffer.c 860 */;
	long cocci_id/* fs/buffer.c 859 */;
	bool cocci_id/* fs/buffer.c 855 */;
	struct blk_plug cocci_id/* fs/buffer.c 719 */;
	struct list_head cocci_id/* fs/buffer.c 716 */;
	spinlock_t *cocci_id/* fs/buffer.c 713 */;
	struct list_head *cocci_id/* fs/buffer.c 713 */;
	unsigned long cocci_id/* fs/buffer.c 618 */;
	int cocci_id/* fs/buffer.c 55 */(int op, int op_flags,
					 struct buffer_head *bh,
					 enum rw_hint hint,
					 struct writeback_control *wbc);
	int cocci_id/* fs/buffer.c 54 */(spinlock_t *lock,
					 struct list_head *list);
	struct super_block *cocci_id/* fs/buffer.c 539 */;
	struct buffer_head cocci_id/* fs/buffer.c 3495 */;
	void __init cocci_id/* fs/buffer.c 3489 */;
	struct bh_accounting {
		int nr;
		int ratelimit;
	} cocci_id/* fs/buffer.c 3386 */;
	struct kmem_cache *cocci_id/* fs/buffer.c 3376 */;
	struct address_space *const cocci_id/* fs/buffer.c 3299 */;
	struct buffer_head **cocci_id/* fs/buffer.c 3271 */;
	struct buffer_head *cocci_id/* fs/buffer.c 3171 */[];
	struct decrypt_bh_ctx cocci_id/* fs/buffer.c 317 */;
	struct decrypt_bh_ctx *cocci_id/* fs/buffer.c 316 */;
	struct work_struct *cocci_id/* fs/buffer.c 314 */;
	struct decrypt_bh_ctx {
		struct work_struct work;
		struct buffer_head *bh;
	} cocci_id/* fs/buffer.c 309 */;
	enum rw_hint cocci_id/* fs/buffer.c 3089 */;
	struct bio_vec cocci_id/* fs/buffer.c 3080 */;
	struct hd_struct *cocci_id/* fs/buffer.c 3039 */;
	struct bio_vec *cocci_id/* fs/buffer.c 3037 */;
	struct bio *cocci_id/* fs/buffer.c 3011 */;
	const pgoff_t cocci_id/* fs/buffer.c 2964 */;
	struct inode *const cocci_id/* fs/buffer.c 2962 */;
	const unsigned cocci_id/* fs/buffer.c 2580 */;
	get_block_t cocci_id/* fs/buffer.c 2497 */;
	struct vm_fault *cocci_id/* fs/buffer.c 2496 */;
	struct vm_area_struct *cocci_id/* fs/buffer.c 2496 */;
	void **cocci_id/* fs/buffer.c 2448 */;
	unsigned long long cocci_id/* fs/buffer.c 240 */;
	loff_t *cocci_id/* fs/buffer.c 2371 */;
	void *cocci_id/* fs/buffer.c 2131 */;
	struct file *cocci_id/* fs/buffer.c 2129 */;
	struct page **cocci_id/* fs/buffer.c 2107 */;
	unsigned cocci_id/* fs/buffer.c 2063 */;
	struct page *cocci_id/* fs/buffer.c 2062 */;
	struct inode *cocci_id/* fs/buffer.c 2062 */;
	int cocci_id/* fs/buffer.c 2062 */;
	get_block_t *cocci_id/* fs/buffer.c 2056 */;
	loff_t cocci_id/* fs/buffer.c 2055 */;
	pgoff_t cocci_id/* fs/buffer.c 202 */;
	sector_t cocci_id/* fs/buffer.c 1977 */;
	struct iomap *cocci_id/* fs/buffer.c 1971 */;
	unsigned int cocci_id/* fs/buffer.c 1717 */;
	bh_end_io_t *cocci_id/* fs/buffer.c 1711 */;
	struct writeback_control *cocci_id/* fs/buffer.c 1710 */;
	struct pagevec cocci_id/* fs/buffer.c 1607 */;
	gfp_t cocci_id/* fs/buffer.c 1394 */;
	struct block_device *cocci_id/* fs/buffer.c 1393 */;
	char *cocci_id/* fs/buffer.c 134 */;
	struct bh_lru *cocci_id/* fs/buffer.c 1271 */;
	struct bh_lru {
		struct buffer_head *bhs[BH_LRU_SIZE];
	} cocci_id/* fs/buffer.c 1242 */;
	struct address_space *cocci_id/* fs/buffer.c 1197 */;
	struct buffer_head *cocci_id/* fs/buffer.c 1193 */;
	void cocci_id/* fs/buffer.c 1193 */;
	__typeof__(struct bh_lru) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct bh_accounting) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
