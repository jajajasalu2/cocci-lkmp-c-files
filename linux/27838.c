cocci_test_suite() {
	u16 cocci_id/* fs/ocfs2/alloc.c 994 */;
	struct buffer_head *cocci_id/* fs/ocfs2/alloc.c 991 */[];
	struct ocfs2_merge_ctxt {
		enum ocfs2_contig_type c_contig_type;
		int c_has_empty_extent;
		int c_split_covers_rec;
	} cocci_id/* fs/ocfs2/alloc.c 872 */;
	struct ocfs2_insert_type {
		enum ocfs2_split_type ins_split;
		enum ocfs2_append_type ins_appending;
		enum ocfs2_contig_type ins_contig;
		int ins_contig_index;
		int ins_tree_depth;
	} cocci_id/* fs/ocfs2/alloc.c 864 */;
	enum ocfs2_split_type{SPLIT_NONE=0, SPLIT_LEFT, SPLIT_RIGHT,} cocci_id/* fs/ocfs2/alloc.c 858 */;
	enum ocfs2_append_type{APPEND_NONE=0, APPEND_TAIL,} cocci_id/* fs/ocfs2/alloc.c 853 */;
	struct ocfs2_trim_fs_info cocci_id/* fs/ocfs2/alloc.c 7665 */;
	struct fstrim_range *cocci_id/* fs/ocfs2/alloc.c 7661 */;
	struct ocfs2_group_desc *cocci_id/* fs/ocfs2/alloc.c 7469 */;
	struct ocfs2_refcount_tree *cocci_id/* fs/ocfs2/alloc.c 7237 */;
	struct ocfs2_cached_dealloc_ctxt cocci_id/* fs/ocfs2/alloc.c 7236 */;
	struct ocfs2_extent_tree cocci_id/* fs/ocfs2/alloc.c 7235 */;
	struct page *cocci_id/* fs/ocfs2/alloc.c 7069 */;
	loff_t cocci_id/* fs/ocfs2/alloc.c 7061 */;
	struct page **cocci_id/* fs/ocfs2/alloc.c 7060 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/alloc.c 7056 */;
	struct ocfs2_inline_data *cocci_id/* fs/ocfs2/alloc.c 7031 */;
	struct ocfs2_dinode cocci_id/* fs/ocfs2/alloc.c 7011 */;
	unsigned long cocci_id/* fs/ocfs2/alloc.c 6883 */;
	struct address_space *cocci_id/* fs/ocfs2/alloc.c 6882 */;
	u64 *cocci_id/* fs/ocfs2/alloc.c 6807 */;
	struct ocfs2_cached_block_free *cocci_id/* fs/ocfs2/alloc.c 6756 */;
	struct ocfs2_per_slot_free_list *cocci_id/* fs/ocfs2/alloc.c 6755 */;
	struct ocfs2_per_slot_free_list {
		struct ocfs2_per_slot_free_list *f_next_suballocator;
		int f_inode_type;
		int f_slot;
		struct ocfs2_cached_block_free *f_first;
	} cocci_id/* fs/ocfs2/alloc.c 6379 */;
	struct ocfs2_cached_block_free {
		struct ocfs2_cached_block_free *free_next;
		u64 free_bg;
		u64 free_blk;
		unsigned int free_bit;
	} cocci_id/* fs/ocfs2/alloc.c 6372 */;
	struct ocfs2_extent_tree_operations {
		void (*eo_set_last_eb_blk)(struct ocfs2_extent_tree *et,
					   u64 blkno);
		u64 (*eo_get_last_eb_blk)(struct ocfs2_extent_tree *et);
		void (*eo_update_clusters)(struct ocfs2_extent_tree *et,
					   u32 new_clusters);
		void (*eo_extent_map_insert)(struct ocfs2_extent_tree *et,
					     struct ocfs2_extent_rec *rec);
		void (*eo_extent_map_truncate)(struct ocfs2_extent_tree *et,
					       u32 clusters);
		int (*eo_insert_check)(struct ocfs2_extent_tree *et,
				       struct ocfs2_extent_rec *rec);
		int (*eo_sanity_check)(struct ocfs2_extent_tree *et);
		void (*eo_fill_root_el)(struct ocfs2_extent_tree *et);
		void (*eo_fill_max_leaf_clusters)(struct ocfs2_extent_tree *et);
		enum ocfs2_contig_type (*eo_extent_contig)(struct ocfs2_extent_tree *et,
							   struct ocfs2_extent_rec *ext,
							   struct ocfs2_extent_rec *insert_rec);
	} cocci_id/* fs/ocfs2/alloc.c 63 */;
	struct ocfs2_dinode **cocci_id/* fs/ocfs2/alloc.c 6180 */;
	struct inode **cocci_id/* fs/ocfs2/alloc.c 6145 */;
	tid_t cocci_id/* fs/ocfs2/alloc.c 6114 */;
	struct ocfs2_super cocci_id/* fs/ocfs2/alloc.c 6080 */;
	struct work_struct *cocci_id/* fs/ocfs2/alloc.c 6076 */;
	struct ocfs2_journal *cocci_id/* fs/ocfs2/alloc.c 5996 */;
	struct ocfs2_truncate_log *cocci_id/* fs/ocfs2/alloc.c 5995 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/alloc.c 5994 */;
	struct inode *cocci_id/* fs/ocfs2/alloc.c 5990 */;
	unsigned int cocci_id/* fs/ocfs2/alloc.c 5989 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/alloc.c 5986 */;
	struct ocfs2_truncate_rec cocci_id/* fs/ocfs2/alloc.c 5923 */;
	struct ocfs2_path_item *cocci_id/* fs/ocfs2/alloc.c 578 */;
	bool cocci_id/* fs/ocfs2/alloc.c 5697 */;
	void cocci_id/* fs/ocfs2/alloc.c 566 */(handle_t *handle,
						struct ocfs2_extent_tree *et,
						struct ocfs2_path *path,
						struct ocfs2_extent_rec *insert_rec);
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/alloc.c 5654 */;
	int cocci_id/* fs/ocfs2/alloc.c 564 */(struct ocfs2_cached_dealloc_ctxt *ctxt,
					       struct ocfs2_extent_block *eb);
	enum ocfs2_contig_type cocci_id/* fs/ocfs2/alloc.c 532 */;
	struct ocfs2_extent_rec cocci_id/* fs/ocfs2/alloc.c 5161 */;
	enum ocfs2_contig_type cocci_id/* fs/ocfs2/alloc.c 51 */(struct super_block *sb,
								 struct ocfs2_extent_rec *ext,
								 struct ocfs2_extent_rec *insert_rec);
	struct ocfs2_merge_ctxt cocci_id/* fs/ocfs2/alloc.c 5070 */;
	u8 cocci_id/* fs/ocfs2/alloc.c 4787 */;
	enum ocfs2_alloc_restarted cocci_id/* fs/ocfs2/alloc.c 4784 */;
	enum ocfs2_alloc_restarted *cocci_id/* fs/ocfs2/alloc.c 4779 */;
	u32 *cocci_id/* fs/ocfs2/alloc.c 4774 */;
	struct ocfs2_insert_type cocci_id/* fs/ocfs2/alloc.c 4713 */;
	struct ocfs2_xattr_value_buf *cocci_id/* fs/ocfs2/alloc.c 471 */;
	int *cocci_id/* fs/ocfs2/alloc.c 4575 */;
	enum ocfs2_contig_type{CONTIG_NONE=0, CONTIG_LEFT, CONTIG_RIGHT, CONTIG_LEFTRIGHT,} cocci_id/* fs/ocfs2/alloc.c 44 */;
	struct ocfs2_merge_ctxt *cocci_id/* fs/ocfs2/alloc.c 4355 */;
	const struct ocfs2_extent_tree_operations *cocci_id/* fs/ocfs2/alloc.c 435 */;
	ocfs2_journal_access_func cocci_id/* fs/ocfs2/alloc.c 433 */;
	struct ocfs2_extent_tree *cocci_id/* fs/ocfs2/alloc.c 430 */;
	void cocci_id/* fs/ocfs2/alloc.c 430 */;
	struct ocfs2_insert_type *cocci_id/* fs/ocfs2/alloc.c 4242 */;
	struct ocfs2_refcount_block *cocci_id/* fs/ocfs2/alloc.c 386 */;
	struct ocfs2_dx_root_block *cocci_id/* fs/ocfs2/alloc.c 371 */;
	struct ocfs2_xattr_tree_root *cocci_id/* fs/ocfs2/alloc.c 316 */;
	struct ocfs2_xattr_block *cocci_id/* fs/ocfs2/alloc.c 292 */;
	struct super_block *cocci_id/* fs/ocfs2/alloc.c 2911 */;
	struct ocfs2_path **cocci_id/* fs/ocfs2/alloc.c 2905 */;
	struct ocfs2_cached_dealloc_ctxt *cocci_id/* fs/ocfs2/alloc.c 2904 */;
	struct ocfs2_path *cocci_id/* fs/ocfs2/alloc.c 2903 */;
	handle_t *cocci_id/* fs/ocfs2/alloc.c 2900 */;
	enum ocfs2_split_type cocci_id/* fs/ocfs2/alloc.c 2365 */;
	struct buffer_head **cocci_id/* fs/ocfs2/alloc.c 1910 */;
	struct find_path_data cocci_id/* fs/ocfs2/alloc.c 1898 */;
	struct find_path_data *cocci_id/* fs/ocfs2/alloc.c 1889 */;
	struct find_path_data {
		int index;
		struct ocfs2_path *path;
	} cocci_id/* fs/ocfs2/alloc.c 1883 */;
	unsigned long long cocci_id/* fs/ocfs2/alloc.c 1805 */;
	struct ocfs2_extent_rec *cocci_id/* fs/ocfs2/alloc.c 1798 */;
	struct ocfs2_extent_block *cocci_id/* fs/ocfs2/alloc.c 1796 */;
	struct buffer_head *cocci_id/* fs/ocfs2/alloc.c 1795 */;
	u64 cocci_id/* fs/ocfs2/alloc.c 1794 */;
	path_insert_t *cocci_id/* fs/ocfs2/alloc.c 1790 */;
	void *cocci_id/* fs/ocfs2/alloc.c 1790 */;
	u32 cocci_id/* fs/ocfs2/alloc.c 1789 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/alloc.c 1789 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/alloc.c 1788 */;
	int cocci_id/* fs/ocfs2/alloc.c 1788 */;
	void cocci_id/* fs/ocfs2/alloc.c 1780 */(void *, struct buffer_head *);
	const struct ocfs2_extent_tree_operations cocci_id/* fs/ocfs2/alloc.c 161 */;
	int cocci_id/* fs/ocfs2/alloc.c 155 */(handle_t *handle,
					       struct ocfs2_extent_tree *et,
					       struct buffer_head **new_eb_bh,
					       int blk_wanted, int *blk_given);
	void cocci_id/* fs/ocfs2/alloc.c 153 */(struct ocfs2_extent_tree *et);
	int cocci_id/* fs/ocfs2/alloc.c 152 */(struct ocfs2_extent_tree *et);
	int cocci_id/* fs/ocfs2/alloc.c 150 */(struct ocfs2_extent_tree *et,
					       struct ocfs2_extent_rec *rec);
	void cocci_id/* fs/ocfs2/alloc.c 148 */(struct ocfs2_extent_tree *et,
						u32 clusters);
	void cocci_id/* fs/ocfs2/alloc.c 146 */(struct ocfs2_extent_tree *et,
						struct ocfs2_extent_rec *rec);
	void cocci_id/* fs/ocfs2/alloc.c 142 */(struct ocfs2_extent_tree *et,
						u64 blkno);
	u64 cocci_id/* fs/ocfs2/alloc.c 141 */(struct ocfs2_extent_tree *et);
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/alloc.c 1151 */;
}
