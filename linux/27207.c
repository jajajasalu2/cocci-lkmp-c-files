cocci_test_suite() {
	struct rsvd_count {
		int ndelonly;
		bool first_do_lblk_found;
		ext4_lblk_t first_do_lblk;
		ext4_lblk_t last_do_lblk;
		struct extent_status *left_es;
		bool partial;
		ext4_lblk_t lclu;
	} cocci_id/* fs/ext4/extents_status.c 971 */;
	ext4_lblk_t *cocci_id/* fs/ext4/extents_status.c 902 */;
	struct rb_node **cocci_id/* fs/ext4/extents_status.c 751 */;
	int cocci_id/* fs/ext4/extents_status.c 748 */;
	struct ext4_map_blocks cocci_id/* fs/ext4/extents_status.c 668 */;
	unsigned short cocci_id/* fs/ext4/extents_status.c 585 */;
	struct ext4_extent *cocci_id/* fs/ext4/extents_status.c 582 */;
	struct ext4_ext_path *cocci_id/* fs/ext4/extents_status.c 581 */;
	__u64 cocci_id/* fs/ext4/extents_status.c 502 */;
	int (*cocci_id/* fs/ext4/extents_status.c 257 */)(struct extent_status *es);
	void cocci_id/* fs/ext4/extents_status.c 256 */;
	struct rb_root *cocci_id/* fs/ext4/extents_status.c 210 */;
	struct extent_status cocci_id/* fs/ext4/extents_status.c 2057 */;
	unsigned long long cocci_id/* fs/ext4/extents_status.c 2028 */;
	struct rb_node *cocci_id/* fs/ext4/extents_status.c 2026 */;
	struct ext4_sb_info *cocci_id/* fs/ext4/extents_status.c 2025 */;
	struct extent_status *cocci_id/* fs/ext4/extents_status.c 2024 */;
	struct ext4_es_tree *cocci_id/* fs/ext4/extents_status.c 2023 */;
	ext4_lblk_t cocci_id/* fs/ext4/extents_status.c 2020 */;
	struct inode *cocci_id/* fs/ext4/extents_status.c 2020 */;
	unsigned int cocci_id/* fs/ext4/extents_status.c 2020 */;
	struct pending_reservation cocci_id/* fs/ext4/extents_status.c 1829 */;
	struct ext4_pending_tree *cocci_id/* fs/ext4/extents_status.c 1821 */;
	struct pending_reservation *cocci_id/* fs/ext4/extents_status.c 1818 */;
	struct super_block *cocci_id/* fs/ext4/extents_status.c 1567 */;
	struct seq_file *cocci_id/* fs/ext4/extents_status.c 1565 */;
	void *cocci_id/* fs/ext4/extents_status.c 1565 */;
	int __init cocci_id/* fs/ext4/extents_status.c 156 */;
	struct ext4_sb_info cocci_id/* fs/ext4/extents_status.c 1539 */;
	struct shrink_control *cocci_id/* fs/ext4/extents_status.c 1534 */;
	struct shrinker *cocci_id/* fs/ext4/extents_status.c 1533 */;
	unsigned long cocci_id/* fs/ext4/extents_status.c 1533 */;
	void cocci_id/* fs/ext4/extents_status.c 153 */(struct inode *inode,
							ext4_lblk_t lblk,
							ext4_lblk_t len);
	int cocci_id/* fs/ext4/extents_status.c 151 */(struct ext4_sb_info *sbi,
						       int nr_to_scan,
						       struct ext4_inode_info *locked_ei);
	int cocci_id/* fs/ext4/extents_status.c 150 */(struct ext4_inode_info *ei,
						       int *nr_to_scan);
	int cocci_id/* fs/ext4/extents_status.c 148 */(struct inode *inode,
						       ext4_lblk_t lblk,
						       ext4_lblk_t end,
						       int *reserved);
	int cocci_id/* fs/ext4/extents_status.c 147 */(struct inode *inode,
						       struct extent_status *newes);
	struct ext4_inode_info cocci_id/* fs/ext4/extents_status.c 1467 */;
	u64 cocci_id/* fs/ext4/extents_status.c 1451 */;
	ktime_t cocci_id/* fs/ext4/extents_status.c 1450 */;
	struct ext4_es_stats *cocci_id/* fs/ext4/extents_status.c 1449 */;
	struct ext4_inode_info *cocci_id/* fs/ext4/extents_status.c 1446 */;
	struct kmem_cache *cocci_id/* fs/ext4/extents_status.c 144 */;
	struct rsvd_count cocci_id/* fs/ext4/extents_status.c 1296 */;
	bool cocci_id/* fs/ext4/extents_status.c 1295 */;
	ext4_fsblk_t cocci_id/* fs/ext4/extents_status.c 1293 */;
	int *cocci_id/* fs/ext4/extents_status.c 1286 */;
	struct rsvd_count *cocci_id/* fs/ext4/extents_status.c 1035 */;
	long cocci_id/* fs/ext4/extents_status.c 1034 */;
}
