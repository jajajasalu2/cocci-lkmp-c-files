cocci_test_suite() {
	void *cocci_id/* drivers/md/md-bitmap.c 960 */;
	enum bitmap_page_attr cocci_id/* drivers/md/md-bitmap.c 903 */;
	enum bitmap_page_attr{BITMAP_PAGE_DIRTY=0, BITMAP_PAGE_PENDING=1, BITMAP_PAGE_NEEDWRITE=2,} cocci_id/* drivers/md/md-bitmap.c 889 */;
	struct inode *cocci_id/* drivers/md/md-bitmap.c 855 */;
	struct page **cocci_id/* drivers/md/md-bitmap.c 836 */;
	bitmap_super_t cocci_id/* drivers/md/md-bitmap.c 753 */;
	struct bitmap_storage *cocci_id/* drivers/md/md-bitmap.c 749 */;
	loff_t cocci_id/* drivers/md/md-bitmap.c 591 */;
	unsigned char *cocci_id/* drivers/md/md-bitmap.c 55 */;
	unsigned long long cocci_id/* drivers/md/md-bitmap.c 499 */;
	__le32 *cocci_id/* drivers/md/md-bitmap.c 494 */;
	struct page *cocci_id/* drivers/md/md-bitmap.c 329 */;
	void cocci_id/* drivers/md/md-bitmap.c 328 */;
	struct buffer_head *cocci_id/* drivers/md/md-bitmap.c 317 */;
	void cocci_id/* drivers/md/md-bitmap.c 284 */(struct bitmap *bitmap);
	struct attribute_group cocci_id/* drivers/md/md-bitmap.c 2619 */;
	struct attribute *cocci_id/* drivers/md/md-bitmap.c 2608 */[];
	struct md_sysfs_entry cocci_id/* drivers/md/md-bitmap.c 2494 */;
	struct md_rdev *cocci_id/* drivers/md/md-bitmap.c 2484 */;
	unsigned long cocci_id/* drivers/md/md-bitmap.c 2470 */;
	const char *cocci_id/* drivers/md/md-bitmap.c 2468 */;
	size_t cocci_id/* drivers/md/md-bitmap.c 2468 */;
	struct mddev *cocci_id/* drivers/md/md-bitmap.c 2462 */;
	char *cocci_id/* drivers/md/md-bitmap.c 2462 */;
	ssize_t cocci_id/* drivers/md/md-bitmap.c 2461 */;
	struct file *cocci_id/* drivers/md/md-bitmap.c 2304 */;
	long long cocci_id/* drivers/md/md-bitmap.c 2264 */;
	struct block_device *cocci_id/* drivers/md/md-bitmap.c 215 */;
	struct bitmap_counts cocci_id/* drivers/md/md-bitmap.c 2067 */;
	struct bitmap_storage cocci_id/* drivers/md/md-bitmap.c 2066 */;
	struct seq_file *cocci_id/* drivers/md/md-bitmap.c 2026 */;
	struct md_rdev cocci_id/* drivers/md/md-bitmap.c 194 */;
	struct kernfs_node *cocci_id/* drivers/md/md-bitmap.c 1818 */;
	struct bitmap_page *cocci_id/* drivers/md/md-bitmap.c 1738 */;
	long cocci_id/* drivers/md/md-bitmap.c 1714 */;
	bool cocci_id/* drivers/md/md-bitmap.c 1613 */;
	bitmap_counter_t *cocci_id/* drivers/md/md-bitmap.c 1516 */;
	sector_t cocci_id/* drivers/md/md-bitmap.c 1513 */;
	sector_t *cocci_id/* drivers/md/md-bitmap.c 1513 */;
	struct bitmap *cocci_id/* drivers/md/md-bitmap.c 1513 */;
	int cocci_id/* drivers/md/md-bitmap.c 1513 */;
	bitmap_super_t *cocci_id/* drivers/md/md-bitmap.c 1276 */;
	bitmap_counter_t *cocci_id/* drivers/md/md-bitmap.c 1221 */(struct bitmap_counts *bitmap,
								    sector_t offset,
								    sector_t *blocks,
								    int create);
	struct bitmap_counts *cocci_id/* drivers/md/md-bitmap.c 119 */;
	void cocci_id/* drivers/md/md-bitmap.c 1047 */(struct bitmap *bitmap,
						       sector_t offset,
						       int needed);
}
