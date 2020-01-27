cocci_test_suite() {
	struct ocfs2_extent_block *cocci_id/* fs/ocfs2/refcounttree.c 958 */;
	struct ocfs2_refcount_tree cocci_id/* fs/ocfs2/refcounttree.c 70 */;
	void *cocci_id/* fs/ocfs2/refcounttree.c 623 */;
	u16 cocci_id/* fs/ocfs2/refcounttree.c 561 */;
	struct rb_root *cocci_id/* fs/ocfs2/refcounttree.c 532 */;
	struct path cocci_id/* fs/ocfs2/refcounttree.c 4424 */;
	const char __user *cocci_id/* fs/ocfs2/refcounttree.c 4419 */;
	struct ocfs2_cow_context {
		struct inode *inode;
		u32 cow_start;
		u32 cow_len;
		struct ocfs2_extent_tree data_et;
		struct ocfs2_refcount_tree *ref_tree;
		struct buffer_head *ref_root_bh;
		struct ocfs2_alloc_context *meta_ac;
		struct ocfs2_alloc_context *data_ac;
		struct ocfs2_cached_dealloc_ctxt dealloc;
		void *cow_object;
		struct ocfs2_post_refcount *post_refcount;
		int extra_credits;
		int (*get_clusters)(struct ocfs2_cow_context *context,
				    u32 v_cluster, u32 *p_cluster,
				    u32 *num_clusters,
				    unsigned int *extent_flags);
		int (*cow_duplicate_clusters)(handle_t *handle,
					      struct inode *inode, u32 cpos,
					      u32 old_cluster,
					      u32 new_cluster, u32 new_len);
	} cocci_id/* fs/ocfs2/refcounttree.c 44 */;
	struct ocfs2_lock_holder cocci_id/* fs/ocfs2/refcounttree.c 4255 */;
	bool cocci_id/* fs/ocfs2/refcounttree.c 4180 */;
	struct inode *cocci_id/* fs/ocfs2/refcounttree.c 4179 */;
	struct dentry *cocci_id/* fs/ocfs2/refcounttree.c 4177 */;
	struct ocfs2_refcount_tree *cocci_id/* fs/ocfs2/refcounttree.c 416 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/refcounttree.c 415 */;
	u64 *cocci_id/* fs/ocfs2/refcounttree.c 394 */;
	struct ocfs2_cached_dealloc_ctxt cocci_id/* fs/ocfs2/refcounttree.c 3804 */;
	loff_t cocci_id/* fs/ocfs2/refcounttree.c 3802 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/refcounttree.c 3798 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/refcounttree.c 3797 */;
	struct ocfs2_post_refcount *cocci_id/* fs/ocfs2/refcounttree.c 3687 */;
	struct ocfs2_extent_tree *cocci_id/* fs/ocfs2/refcounttree.c 3682 */;
	struct ocfs2_xattr_value_root *cocci_id/* fs/ocfs2/refcounttree.c 3628 */;
	struct ocfs2_xattr_value_buf *cocci_id/* fs/ocfs2/refcounttree.c 3621 */;
	struct ocfs2_cow_context cocci_id/* fs/ocfs2/refcounttree.c 3435 */;
	struct ocfs2_refcount_tree **cocci_id/* fs/ocfs2/refcounttree.c 324 */;
	unsigned int *cocci_id/* fs/ocfs2/refcounttree.c 3196 */;
	u32 *cocci_id/* fs/ocfs2/refcounttree.c 3194 */;
	struct ocfs2_cow_context *cocci_id/* fs/ocfs2/refcounttree.c 3193 */;
	struct page *cocci_id/* fs/ocfs2/refcounttree.c 3150 */;
	pgoff_t cocci_id/* fs/ocfs2/refcounttree.c 3149 */;
	struct ocfs2_extent_rec cocci_id/* fs/ocfs2/refcounttree.c 3061 */;
	struct address_space *cocci_id/* fs/ocfs2/refcounttree.c 2915 */;
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/refcounttree.c 2841 */;
	struct kref *cocci_id/* fs/ocfs2/refcounttree.c 269 */;
	void cocci_id/* fs/ocfs2/refcounttree.c 261 */;
	int *cocci_id/* fs/ocfs2/refcounttree.c 2373 */;
	unsigned long long cocci_id/* fs/ocfs2/refcounttree.c 2235 */;
	struct super_block *cocci_id/* fs/ocfs2/refcounttree.c 2231 */;
	unsigned int cocci_id/* fs/ocfs2/refcounttree.c 2230 */;
	struct ocfs2_refcount_rec cocci_id/* fs/ocfs2/refcounttree.c 2229 */;
	struct ocfs2_cached_dealloc_ctxt *cocci_id/* fs/ocfs2/refcounttree.c 2225 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/refcounttree.c 2224 */;
	u64 cocci_id/* fs/ocfs2/refcounttree.c 2223 */;
	u32 cocci_id/* fs/ocfs2/refcounttree.c 2223 */;
	struct buffer_head *cocci_id/* fs/ocfs2/refcounttree.c 2222 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/refcounttree.c 2221 */;
	handle_t *cocci_id/* fs/ocfs2/refcounttree.c 2220 */;
	int cocci_id/* fs/ocfs2/refcounttree.c 2220 */;
	struct rb_node **cocci_id/* fs/ocfs2/refcounttree.c 219 */;
	struct rb_node *cocci_id/* fs/ocfs2/refcounttree.c 196 */;
	const struct ocfs2_caching_operations cocci_id/* fs/ocfs2/refcounttree.c 184 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/refcounttree.c 1662 */;
	struct ocfs2_refcount_block *cocci_id/* fs/ocfs2/refcounttree.c 1660 */;
	struct ocfs2_extent_tree cocci_id/* fs/ocfs2/refcounttree.c 1659 */;
	struct ocfs2_path *cocci_id/* fs/ocfs2/refcounttree.c 1658 */;
	struct ocfs2_refcount_rec *cocci_id/* fs/ocfs2/refcounttree.c 1654 */;
	const struct ocfs2_refcount_rec *cocci_id/* fs/ocfs2/refcounttree.c 1384 */;
	const void *cocci_id/* fs/ocfs2/refcounttree.c 1382 */;
	struct ocfs2_refcount_block cocci_id/* fs/ocfs2/refcounttree.c 1339 */;
	struct buffer_head **cocci_id/* fs/ocfs2/refcounttree.c 1277 */;
	struct ocfs2_refcount_list *cocci_id/* fs/ocfs2/refcounttree.c 1241 */;
	enum ocfs2_ref_rec_contig cocci_id/* fs/ocfs2/refcounttree.c 1147 */;
	enum ocfs2_ref_rec_contig{REF_CONTIG_NONE=0, REF_CONTIG_LEFT, REF_CONTIG_RIGHT, REF_CONTIG_LEFTRIGHT,} cocci_id/* fs/ocfs2/refcounttree.c 1140 */;
	struct ocfs2_extent_rec *cocci_id/* fs/ocfs2/refcounttree.c 1066 */;
}
