cocci_test_suite() {
	struct mpage_data cocci_id/* fs/mpage.c 745 */;
	struct blk_plug cocci_id/* fs/mpage.c 715 */;
	struct buffer_head *cocci_id/* fs/mpage.c 522 */;
	loff_t cocci_id/* fs/mpage.c 517 */;
	struct buffer_head cocci_id/* fs/mpage.c 516 */;
	struct block_device *cocci_id/* fs/mpage.c 511 */;
	unsigned cocci_id/* fs/mpage.c 509 */;
	sector_t cocci_id/* fs/mpage.c 508 */[MAX_BUF_PER_PAGE];
	sector_t cocci_id/* fs/mpage.c 506 */;
	unsigned long cocci_id/* fs/mpage.c 504 */;
	const unsigned cocci_id/* fs/mpage.c 503 */;
	struct inode *cocci_id/* fs/mpage.c 502 */;
	struct address_space *cocci_id/* fs/mpage.c 501 */;
	struct bio *cocci_id/* fs/mpage.c 500 */;
	struct bvec_iter_all cocci_id/* fs/mpage.c 50 */;
	struct mpage_data *cocci_id/* fs/mpage.c 499 */;
	void *cocci_id/* fs/mpage.c 497 */;
	struct writeback_control *cocci_id/* fs/mpage.c 496 */;
	struct page *cocci_id/* fs/mpage.c 496 */;
	int cocci_id/* fs/mpage.c 496 */;
	struct bio_vec *cocci_id/* fs/mpage.c 49 */;
	void cocci_id/* fs/mpage.c 461 */;
	struct mpage_data {
		struct bio *bio;
		sector_t last_block_in_bio;
		get_block_t *get_block;
		unsigned use_writepage;
	} cocci_id/* fs/mpage.c 450 */;
	struct mpage_readpage_args cocci_id/* fs/mpage.c 420 */;
	get_block_t cocci_id/* fs/mpage.c 418 */;
	struct list_head *cocci_id/* fs/mpage.c 385 */;
	gfp_t cocci_id/* fs/mpage.c 176 */;
	struct mpage_readpage_args *cocci_id/* fs/mpage.c 156 */;
	struct mpage_readpage_args {
		struct bio *bio;
		struct page *page;
		unsigned int nr_pages;
		bool is_readahead;
		sector_t last_block_in_bio;
		struct buffer_head map_bh;
		unsigned long first_logical_block;
		get_block_t *get_block;
	} cocci_id/* fs/mpage.c 136 */;
}
