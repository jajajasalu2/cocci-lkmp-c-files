cocci_test_suite() {
	struct ocfs2_dir_block_trailer cocci_id/* fs/ocfs2/dir.c 99 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/dir.c 845 */;
	u32 cocci_id/* fs/ocfs2/dir.c 833 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/dir.c 832 */;
	struct ocfs2_extent_rec *cocci_id/* fs/ocfs2/dir.c 775 */;
	struct ocfs2_extent_block *cocci_id/* fs/ocfs2/dir.c 774 */;
	unsigned int *cocci_id/* fs/ocfs2/dir.c 770 */;
	struct buffer_head *cocci_id/* fs/ocfs2/dir.c 671 */[NAMEI_RA_SIZE];
	struct ocfs2_dir_entry **cocci_id/* fs/ocfs2/dir.c 668 */;
	int cocci_id/* fs/ocfs2/dir.c 65 */(struct inode *inode);
	int cocci_id/* fs/ocfs2/dir.c 58 */(struct super_block *sb,
					    handle_t *handle,
					    struct inode *dir,
					    struct buffer_head *parent_fe_bh,
					    struct ocfs2_alloc_context *data_ac,
					    struct ocfs2_alloc_context *meta_ac,
					    struct buffer_head **new_bh);
	struct ocfs2_dir_block_trailer *cocci_id/* fs/ocfs2/dir.c 462 */;
	struct ocfs2_cached_dealloc_ctxt cocci_id/* fs/ocfs2/dir.c 4403 */;
	struct ocfs2_dx_root_block cocci_id/* fs/ocfs2/dir.c 4084 */;
	struct ocfs2_dx_entry cocci_id/* fs/ocfs2/dir.c 3775 */;
	struct ocfs2_extent_tree cocci_id/* fs/ocfs2/dir.c 3700 */;
	u32 *cocci_id/* fs/ocfs2/dir.c 3542 */;
	struct ocfs2_dx_entry *cocci_id/* fs/ocfs2/dir.c 3508 */;
	void *cocci_id/* fs/ocfs2/dir.c 3506 */;
	const struct ocfs2_dx_entry *cocci_id/* fs/ocfs2/dir.c 3484 */;
	const void *cocci_id/* fs/ocfs2/dir.c 3482 */;
	const char *const cocci_id/* fs/ocfs2/dir.c 328 */;
	const int cocci_id/* fs/ocfs2/dir.c 305 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/dir.c 2778 */;
	struct ocfs2_dx_hinfo cocci_id/* fs/ocfs2/dir.c 2597 */;
	__u32 cocci_id/* fs/ocfs2/dir.c 258 */[8];
	int *cocci_id/* fs/ocfs2/dir.c 2496 */;
	struct ocfs2_extent_tree *cocci_id/* fs/ocfs2/dir.c 2470 */;
	u64 *cocci_id/* fs/ocfs2/dir.c 2433 */;
	struct buffer_head **cocci_id/* fs/ocfs2/dir.c 2432 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/dir.c 2431 */;
	u16 cocci_id/* fs/ocfs2/dir.c 2294 */;
	__u32 *cocci_id/* fs/ocfs2/dir.c 226 */;
	int cocci_id/* fs/ocfs2/dir.c 214 */;
	struct ocfs2_empty_dir_priv cocci_id/* fs/ocfs2/dir.c 2118 */;
	__u32 cocci_id/* fs/ocfs2/dir.c 211 */;
	__u32 cocci_id/* fs/ocfs2/dir.c 209 */[4];
	const __u32 cocci_id/* fs/ocfs2/dir.c 209 */[];
	void cocci_id/* fs/ocfs2/dir.c 209 */;
	struct ocfs2_empty_dir_priv *cocci_id/* fs/ocfs2/dir.c 2075 */;
	unsigned cocci_id/* fs/ocfs2/dir.c 2039 */;
	loff_t cocci_id/* fs/ocfs2/dir.c 2038 */;
	struct ocfs2_empty_dir_priv {
		struct dir_context ctx;
		unsigned seen_dot;
		unsigned seen_dot_dot;
		unsigned seen_other;
		unsigned dx_dir;
	} cocci_id/* fs/ocfs2/dir.c 2030 */;
	struct ocfs2_dir_lookup_result cocci_id/* fs/ocfs2/dir.c 2015 */;
	struct file *cocci_id/* fs/ocfs2/dir.c 1926 */;
	struct dir_context *cocci_id/* fs/ocfs2/dir.c 1915 */;
	bool cocci_id/* fs/ocfs2/dir.c 1904 */;
	unsigned long long cocci_id/* fs/ocfs2/dir.c 1659 */;
	char *cocci_id/* fs/ocfs2/dir.c 1596 */;
	unsigned int cocci_id/* fs/ocfs2/dir.c 1594 */;
	struct super_block *cocci_id/* fs/ocfs2/dir.c 1592 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/dir.c 1591 */;
	struct ocfs2_dir_entry *cocci_id/* fs/ocfs2/dir.c 1590 */;
	unsigned short cocci_id/* fs/ocfs2/dir.c 1589 */;
	unsigned long cocci_id/* fs/ocfs2/dir.c 1588 */;
	struct ocfs2_dir_lookup_result *cocci_id/* fs/ocfs2/dir.c 1586 */;
	struct buffer_head *cocci_id/* fs/ocfs2/dir.c 1585 */;
	u64 cocci_id/* fs/ocfs2/dir.c 1584 */;
	const char *cocci_id/* fs/ocfs2/dir.c 1583 */;
	struct inode *cocci_id/* fs/ocfs2/dir.c 1582 */;
	handle_t *cocci_id/* fs/ocfs2/dir.c 1581 */;
	struct ocfs2_dx_leaf *cocci_id/* fs/ocfs2/dir.c 1462 */;
	struct ocfs2_dx_hinfo *cocci_id/* fs/ocfs2/dir.c 1457 */;
	struct ocfs2_inline_data *cocci_id/* fs/ocfs2/dir.c 1355 */;
	struct ocfs2_dx_entry_list *cocci_id/* fs/ocfs2/dir.c 1241 */;
	struct ocfs2_dx_root_block *cocci_id/* fs/ocfs2/dir.c 1240 */;
	ocfs2_journal_access_func cocci_id/* fs/ocfs2/dir.c 1134 */;
}
