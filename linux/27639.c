cocci_test_suite() {
	long cocci_id/* fs/iomap/buffered-io.c 902 */;
	const struct iomap_ops *cocci_id/* fs/iomap/buffered-io.c 880 */;
	loff_t *cocci_id/* fs/iomap/buffered-io.c 88 */;
	unsigned *cocci_id/* fs/iomap/buffered-io.c 88 */;
	struct kiocb *cocci_id/* fs/iomap/buffered-io.c 879 */;
	struct iov_iter *cocci_id/* fs/iomap/buffered-io.c 879 */;
	ssize_t cocci_id/* fs/iomap/buffered-io.c 878 */;
	const struct iomap_page_ops *cocci_id/* fs/iomap/buffered-io.c 644 */;
	struct page **cocci_id/* fs/iomap/buffered-io.c 642 */;
	struct iomap_page *cocci_id/* fs/iomap/buffered-io.c 602 */;
	struct page *cocci_id/* fs/iomap/buffered-io.c 600 */;
	struct iomap *cocci_id/* fs/iomap/buffered-io.c 600 */;
	loff_t cocci_id/* fs/iomap/buffered-io.c 599 */;
	struct inode *cocci_id/* fs/iomap/buffered-io.c 599 */;
	unsigned cocci_id/* fs/iomap/buffered-io.c 599 */;
	int cocci_id/* fs/iomap/buffered-io.c 598 */;
	struct bio cocci_id/* fs/iomap/buffered-io.c 588 */;
	struct bio_vec cocci_id/* fs/iomap/buffered-io.c 587 */;
	enum{IOMAP_WRITE_F_UNSHARE=(1 << 0),} cocci_id/* fs/iomap/buffered-io.c 566 */;
	enum migrate_mode cocci_id/* fs/iomap/buffered-io.c 540 */;
	struct address_space *cocci_id/* fs/iomap/buffered-io.c 539 */;
	struct page cocci_id/* fs/iomap/buffered-io.c 434 */;
	struct bio_set cocci_id/* fs/iomap/buffered-io.c 42 */;
	struct iomap_readpage_ctx cocci_id/* fs/iomap/buffered-io.c 335 */;
	gfp_t cocci_id/* fs/iomap/buffered-io.c 304 */;
	struct iomap_page {
		atomic_t read_count;
		atomic_t write_count;
		spinlock_t uptodate_lock;
	DECLARE_BITMAP(uptodate,PAGE_SIZE/512)
		;
	} cocci_id/* fs/iomap/buffered-io.c 28 */;
	struct iomap_readpage_ctx *cocci_id/* fs/iomap/buffered-io.c 254 */;
	size_t cocci_id/* fs/iomap/buffered-io.c 226 */;
	struct iomap_readpage_ctx {
		struct page *cur_page;
		bool cur_page_in_bio;
		bool is_readahead;
		struct bio *bio;
		struct list_head *pages;
	} cocci_id/* fs/iomap/buffered-io.c 214 */;
	int __init cocci_id/* fs/iomap/buffered-io.c 1657 */;
	const struct iomap_writeback_ops *cocci_id/* fs/iomap/buffered-io.c 1630 */;
	u64 cocci_id/* fs/iomap/buffered-io.c 1527 */;
	pgoff_t cocci_id/* fs/iomap/buffered-io.c 1526 */;
	void *cocci_id/* fs/iomap/buffered-io.c 1522 */;
	unsigned long cocci_id/* fs/iomap/buffered-io.c 151 */;
	bool cocci_id/* fs/iomap/buffered-io.c 1370 */;
	sector_t cocci_id/* fs/iomap/buffered-io.c 1367 */;
	struct writeback_control *cocci_id/* fs/iomap/buffered-io.c 1365 */;
	struct list_head *cocci_id/* fs/iomap/buffered-io.c 1365 */;
	struct iomap_writepage_ctx *cocci_id/* fs/iomap/buffered-io.c 1364 */;
	void cocci_id/* fs/iomap/buffered-io.c 1362 */;
	struct iomap_ioend cocci_id/* fs/iomap/buffered-io.c 1306 */;
	struct bio *cocci_id/* fs/iomap/buffered-io.c 1297 */;
	struct iomap_ioend *cocci_id/* fs/iomap/buffered-io.c 1292 */;
	void (*cocci_id/* fs/iomap/buffered-io.c 1213 */)(struct iomap_ioend *ioend,
							  struct iomap_ioend *next);
	struct list_head cocci_id/* fs/iomap/buffered-io.c 1179 */;
	struct bvec_iter_all cocci_id/* fs/iomap/buffered-io.c 1151 */;
	struct bio_vec *cocci_id/* fs/iomap/buffered-io.c 1150 */;
	vm_fault_t cocci_id/* fs/iomap/buffered-io.c 1075 */;
	struct vm_fault *cocci_id/* fs/iomap/buffered-io.c 1075 */;
	unsigned int cocci_id/* fs/iomap/buffered-io.c 105 */;
	bool *cocci_id/* fs/iomap/buffered-io.c 1041 */;
}
