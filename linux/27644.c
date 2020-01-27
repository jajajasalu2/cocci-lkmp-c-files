cocci_test_suite() {
	struct iomap_swapfile_info *cocci_id/* fs/iomap/swapfile.c 82 */;
	struct iomap *cocci_id/* fs/iomap/swapfile.c 79 */;
	void *cocci_id/* fs/iomap/swapfile.c 79 */;
	uint64_t cocci_id/* fs/iomap/swapfile.c 33 */;
	unsigned long cocci_id/* fs/iomap/swapfile.c 32 */;
	loff_t cocci_id/* fs/iomap/swapfile.c 145 */;
	struct inode *cocci_id/* fs/iomap/swapfile.c 144 */;
	struct address_space *cocci_id/* fs/iomap/swapfile.c 143 */;
	sector_t cocci_id/* fs/iomap/swapfile.c 141 */;
	struct iomap_swapfile_info {
		struct iomap iomap;
		struct swap_info_struct *sis;
		uint64_t lowest_ppage;
		uint64_t highest_ppage;
		unsigned long nr_pages;
		int nr_extents;
	} cocci_id/* fs/iomap/swapfile.c 14 */;
	struct iomap_swapfile_info cocci_id/* fs/iomap/swapfile.c 139 */;
	const struct iomap_ops *cocci_id/* fs/iomap/swapfile.c 137 */;
	sector_t *cocci_id/* fs/iomap/swapfile.c 136 */;
	struct file *cocci_id/* fs/iomap/swapfile.c 136 */;
	struct swap_info_struct *cocci_id/* fs/iomap/swapfile.c 135 */;
	int cocci_id/* fs/iomap/swapfile.c 135 */;
}
