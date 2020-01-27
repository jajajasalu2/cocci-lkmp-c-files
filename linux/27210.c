cocci_test_suite() {
	struct bio_post_read_ctx cocci_id/* fs/ext4/readpage.c 98 */;
	struct work_struct *cocci_id/* fs/ext4/readpage.c 95 */;
	void cocci_id/* fs/ext4/readpage.c 93 */(struct bio_post_read_ctx *ctx);
	struct bvec_iter_all cocci_id/* fs/ext4/readpage.c 73 */;
	struct bio_vec *cocci_id/* fs/ext4/readpage.c 72 */;
	struct page *cocci_id/* fs/ext4/readpage.c 71 */;
	struct bio *cocci_id/* fs/ext4/readpage.c 69 */;
	void cocci_id/* fs/ext4/readpage.c 69 */;
	struct bio_post_read_ctx {
		struct bio *bio;
		struct work_struct work;
		unsigned int cur_step;
		unsigned int enabled_steps;
	} cocci_id/* fs/ext4/readpage.c 62 */;
	enum bio_post_read_step{STEP_INITIAL=0, STEP_DECRYPT, STEP_VERITY,} cocci_id/* fs/ext4/readpage.c 56 */;
	mempool_t *cocci_id/* fs/ext4/readpage.c 53 */;
	struct kmem_cache *cocci_id/* fs/ext4/readpage.c 52 */;
	int __init cocci_id/* fs/ext4/readpage.c 414 */;
	struct ext4_map_blocks cocci_id/* fs/ext4/readpage.c 231 */;
	struct block_device *cocci_id/* fs/ext4/readpage.c 228 */;
	sector_t cocci_id/* fs/ext4/readpage.c 226 */[MAX_BUF_PER_PAGE];
	const unsigned cocci_id/* fs/ext4/readpage.c 220 */;
	struct inode *cocci_id/* fs/ext4/readpage.c 219 */;
	sector_t cocci_id/* fs/ext4/readpage.c 217 */;
	unsigned cocci_id/* fs/ext4/readpage.c 214 */;
	struct list_head *cocci_id/* fs/ext4/readpage.c 213 */;
	struct address_space *cocci_id/* fs/ext4/readpage.c 212 */;
	int cocci_id/* fs/ext4/readpage.c 212 */;
	loff_t cocci_id/* fs/ext4/readpage.c 203 */;
	unsigned int cocci_id/* fs/ext4/readpage.c 183 */;
	pgoff_t cocci_id/* fs/ext4/readpage.c 173 */;
	const struct inode *cocci_id/* fs/ext4/readpage.c 173 */;
	bool cocci_id/* fs/ext4/readpage.c 144 */;
	struct bio_post_read_ctx *cocci_id/* fs/ext4/readpage.c 115 */;
}
