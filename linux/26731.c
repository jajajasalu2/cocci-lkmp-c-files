cocci_test_suite() {
	struct meta_anchor cocci_id/* fs/jfs/jfs_metapage.c 97 */;
	struct meta_anchor *cocci_id/* fs/jfs/jfs_metapage.c 90 */;
	struct seq_file *cocci_id/* fs/jfs/jfs_metapage.c 805 */;
	void *cocci_id/* fs/jfs/jfs_metapage.c 805 */;
	sector_t cocci_id/* fs/jfs/jfs_metapage.c 766 */;
	s64 cocci_id/* fs/jfs/jfs_metapage.c 764 */;
	void cocci_id/* fs/jfs/jfs_metapage.c 764 */;
	struct meta_anchor {
		int mp_count;
		atomic_t io_count;
		struct metapage *mp[MPS_PER_PAGE];
	} cocci_id/* fs/jfs/jfs_metapage.c 74 */;
	mempool_t *cocci_id/* fs/jfs/jfs_metapage.c 68 */;
	struct kmem_cache *cocci_id/* fs/jfs/jfs_metapage.c 67 */;
	struct page *cocci_id/* fs/jfs/jfs_metapage.c 583 */;
	struct address_space *cocci_id/* fs/jfs/jfs_metapage.c 581 */;
	unsigned int cocci_id/* fs/jfs/jfs_metapage.c 576 */;
	int cocci_id/* fs/jfs/jfs_metapage.c 576 */;
	struct metapage *cocci_id/* fs/jfs/jfs_metapage.c 575 */;
	struct inode *cocci_id/* fs/jfs/jfs_metapage.c 575 */;
	unsigned long cocci_id/* fs/jfs/jfs_metapage.c 575 */;
	const struct address_space_operations cocci_id/* fs/jfs/jfs_metapage.c 567 */;
	struct file *cocci_id/* fs/jfs/jfs_metapage.c 471 */;
	struct writeback_control *cocci_id/* fs/jfs/jfs_metapage.c 335 */;
	struct jfs_log *cocci_id/* fs/jfs/jfs_metapage.c 281 */;
	struct bio *cocci_id/* fs/jfs/jfs_metapage.c 266 */;
	struct {
		uint pagealloc;
		uint pagefree;
		uint lockwait;
	} cocci_id/* fs/jfs/jfs_metapage.c 24 */;
	int *cocci_id/* fs/jfs/jfs_metapage.c 235 */;
	struct metapage cocci_id/* fs/jfs/jfs_metapage.c 198 */;
	int __init cocci_id/* fs/jfs/jfs_metapage.c 193 */;
	gfp_t cocci_id/* fs/jfs/jfs_metapage.c 173 */;
	void (*cocci_id/* fs/jfs/jfs_metapage.c 139 */)(struct page *);
}
