cocci_test_suite() {
	const struct xattr_handler *cocci_id/* fs/ocfs2/xattr.c 92 */[];
	size_t *cocci_id/* fs/ocfs2/xattr.c 883 */;
	struct ocfs2_xattr_def_value_root cocci_id/* fs/ocfs2/xattr.c 88 */;
	struct ocfs2_extent_tree cocci_id/* fs/ocfs2/xattr.c 774 */;
	handle_t *cocci_id/* fs/ocfs2/xattr.c 773 */;
	u64 cocci_id/* fs/ocfs2/xattr.c 772 */;
	struct ocfs2_xattr_set_ctxt *cocci_id/* fs/ocfs2/xattr.c 769 */;
	unsigned int cocci_id/* fs/ocfs2/xattr.c 768 */;
	u32 cocci_id/* fs/ocfs2/xattr.c 767 */;
	struct ocfs2_xattr_value_buf *cocci_id/* fs/ocfs2/xattr.c 766 */;
	struct inode *cocci_id/* fs/ocfs2/xattr.c 765 */;
	int cocci_id/* fs/ocfs2/xattr.c 765 */;
	const struct xattr_handler cocci_id/* fs/ocfs2/xattr.c 7306 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/xattr.c 7297 */;
	const struct xattr *cocci_id/* fs/ocfs2/xattr.c 7260 */;
	const struct qstr *cocci_id/* fs/ocfs2/xattr.c 7214 */;
	struct ocfs2_refcount_tree *cocci_id/* fs/ocfs2/xattr.c 7142 */;
	struct ocfs2_cached_dealloc_ctxt cocci_id/* fs/ocfs2/xattr.c 7141 */;
	struct ocfs2_xattr_reflink cocci_id/* fs/ocfs2/xattr.c 7137 */;
	bool cocci_id/* fs/ocfs2/xattr.c 7134 */;
	enum ocfs2_alloc_restarted cocci_id/* fs/ocfs2/xattr.c 708 */;
	struct ocfs2_reflink_xattr_tree_args cocci_id/* fs/ocfs2/xattr.c 7058 */;
	struct ocfs2_xattr_set_ctxt {
		handle_t *handle;
		struct ocfs2_alloc_context *meta_ac;
		struct ocfs2_alloc_context *data_ac;
		struct ocfs2_cached_dealloc_ctxt dealloc;
		int set_abort;
	} cocci_id/* fs/ocfs2/xattr.c 69 */;
	struct ocfs2_refcount_block *cocci_id/* fs/ocfs2/xattr.c 6757 */;
	struct ocfs2_value_tree_metas cocci_id/* fs/ocfs2/xattr.c 6755 */;
	struct ocfs2_extent_tree *cocci_id/* fs/ocfs2/xattr.c 6749 */;
	struct ocfs2_xattr_header *cocci_id/* fs/ocfs2/xattr.c 6730 */;
	struct ocfs2_value_tree_metas *cocci_id/* fs/ocfs2/xattr.c 6728 */;
	void *cocci_id/* fs/ocfs2/xattr.c 6726 */;
	struct ocfs2_value_tree_metas {
		int num_metas;
		int credits;
		int num_recs;
	} cocci_id/* fs/ocfs2/xattr.c 6703 */;
	struct ocfs2_reflink_xattr_tree_args *cocci_id/* fs/ocfs2/xattr.c 6690 */;
	struct ocfs2_xattr_value_root **cocci_id/* fs/ocfs2/xattr.c 6686 */;
	struct ocfs2_reflink_xattr_tree_args {
		struct ocfs2_xattr_reflink *reflink;
		struct buffer_head *old_blk_bh;
		struct buffer_head *new_blk_bh;
		struct ocfs2_xattr_bucket *old_bucket;
		struct ocfs2_xattr_bucket *new_bucket;
	} cocci_id/* fs/ocfs2/xattr.c 6668 */;
	struct ocfs2_xattr_reflink *cocci_id/* fs/ocfs2/xattr.c 6582 */;
	struct ocfs2_xattr_set_ctxt cocci_id/* fs/ocfs2/xattr.c 6553 */;
	struct buffer_head **cocci_id/* fs/ocfs2/xattr.c 6548 */;
	struct ocfs2_extent_rec cocci_id/* fs/ocfs2/xattr.c 6528 */;
	get_xattr_value_root *cocci_id/* fs/ocfs2/xattr.c 6346 */;
	int cocci_id/* fs/ocfs2/xattr.c 6201 */(struct super_block *sb,
						struct buffer_head *bh,
						struct ocfs2_xattr_header *xh,
						int offset,
						struct ocfs2_xattr_value_root **xv,
						struct buffer_head **ret_bh,
						void *para);
	struct ocfs2_xattr_reflink {
		struct inode *old_inode;
		struct inode *new_inode;
		struct buffer_head *old_bh;
		struct buffer_head *new_bh;
		struct ocfs2_caching_info *ref_ci;
		struct buffer_head *ref_root_bh;
		struct ocfs2_cached_dealloc_ctxt *dealloc;
		should_xattr_reflinked *xattr_reflinked;
	} cocci_id/* fs/ocfs2/xattr.c 6185 */;
	int cocci_id/* fs/ocfs2/xattr.c 6180 */(struct ocfs2_xattr_entry *xe);
	umode_t cocci_id/* fs/ocfs2/xattr.c 618 */;
	struct ocfs2_xattr_tree_value_refcount_para cocci_id/* fs/ocfs2/xattr.c 6124 */;
	struct ocfs2_xattr_tree_value_refcount_para *cocci_id/* fs/ocfs2/xattr.c 6042 */;
	struct ocfs2_xattr_tree_value_refcount_para {
		struct ocfs2_caching_info *ref_ci;
		struct buffer_head *ref_root_bh;
		struct ocfs2_cached_dealloc_ctxt *dealloc;
	} cocci_id/* fs/ocfs2/xattr.c 5994 */;
	struct ocfs2_cached_dealloc_ctxt *cocci_id/* fs/ocfs2/xattr.c 5942 */;
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/xattr.c 582 */;
	struct ocfs2_xattr_bucket {
		struct inode *bu_inode;
		struct buffer_head *bu_bhs[OCFS2_XATTR_MAX_BLOCKS_PER_BUCKET];
		int bu_blocks;
	} cocci_id/* fs/ocfs2/xattr.c 58 */;
	struct ocfs2_security_xattr_info *cocci_id/* fs/ocfs2/xattr.c 579 */;
	struct ocfs2_post_refcount *cocci_id/* fs/ocfs2/xattr.c 5779 */;
	struct ocfs2_post_refcount cocci_id/* fs/ocfs2/xattr.c 5778 */;
	struct ocfs2_xattr_value_buf cocci_id/* fs/ocfs2/xattr.c 5775 */;
	struct ocfs2_refcount_tree **cocci_id/* fs/ocfs2/xattr.c 5764 */;
	struct ocfs2_rm_xattr_bucket_para *cocci_id/* fs/ocfs2/xattr.c 5666 */;
	const char *cocci_id/* fs/ocfs2/xattr.c 5520 */;
	const struct xattr_handler *cocci_id/* fs/ocfs2/xattr.c 535 */;
	struct ocfs2_xattr_def_value_root {
		struct ocfs2_xattr_value_root xv;
		struct ocfs2_extent_rec er;
	} cocci_id/* fs/ocfs2/xattr.c 53 */;
	unsigned long long cocci_id/* fs/ocfs2/xattr.c 5288 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/xattr.c 5280 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/xattr.c 5277 */;
	struct ocfs2_xattr_tree_root *cocci_id/* fs/ocfs2/xattr.c 5276 */;
	struct ocfs2_xattr_block *cocci_id/* fs/ocfs2/xattr.c 5274 */;
	struct ocfs2_xattr_bucket *cocci_id/* fs/ocfs2/xattr.c 5271 */;
	int *cocci_id/* fs/ocfs2/xattr.c 5101 */;
	u32 *cocci_id/* fs/ocfs2/xattr.c 5099 */;
	size_t cocci_id/* fs/ocfs2/xattr.c 4390 */;
	struct ocfs2_xattr_entry cocci_id/* fs/ocfs2/xattr.c 4229 */;
	struct ocfs2_xattr_header cocci_id/* fs/ocfs2/xattr.c 4228 */;
	struct ocfs2_xattr_block cocci_id/* fs/ocfs2/xattr.c 4212 */;
	void cocci_id/* fs/ocfs2/xattr.c 4184 */;
	const struct ocfs2_xattr_entry *cocci_id/* fs/ocfs2/xattr.c 4156 */;
	struct ocfs2_xattr_tree_list cocci_id/* fs/ocfs2/xattr.c 4136 */;
	xattr_tree_rec_func *cocci_id/* fs/ocfs2/xattr.c 4083 */;
	struct ocfs2_xattr_tree_list *cocci_id/* fs/ocfs2/xattr.c 4050 */;
	struct ocfs2_xattr_tree_list {
		char *buffer;
		size_t buffer_size;
		size_t result;
	} cocci_id/* fs/ocfs2/xattr.c 4020 */;
	xattr_bucket_func *cocci_id/* fs/ocfs2/xattr.c 3970 */;
	u16 *cocci_id/* fs/ocfs2/xattr.c 3753 */;
	struct ocfs2_extent_rec *cocci_id/* fs/ocfs2/xattr.c 3695 */;
	struct ocfs2_extent_block *cocci_id/* fs/ocfs2/xattr.c 3694 */;
	u64 *cocci_id/* fs/ocfs2/xattr.c 3687 */;
	struct ocfs2_xattr_info cocci_id/* fs/ocfs2/xattr.c 3543 */;
	struct ocfs2_xattr_search *cocci_id/* fs/ocfs2/xattr.c 3306 */;
	struct ocfs2_xattr_info *cocci_id/* fs/ocfs2/xattr.c 3305 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/xattr.c 3304 */;
	struct ocfs2_xattr_bucket cocci_id/* fs/ocfs2/xattr.c 329 */;
	struct super_block *cocci_id/* fs/ocfs2/xattr.c 313 */;
	char *cocci_id/* fs/ocfs2/xattr.c 3050 */;
	int cocci_id/* fs/ocfs2/xattr.c 302 */(struct super_block *sb,
					       struct ocfs2_xattr_bucket *bucket,
					       int offset,
					       struct ocfs2_xattr_value_root **xv,
					       struct buffer_head **bh);
	struct ocfs2_xa_loc cocci_id/* fs/ocfs2/xattr.c 2960 */;
	int cocci_id/* fs/ocfs2/xattr.c 294 */(struct inode *inode,
					       struct ocfs2_dinode *di,
					       struct ocfs2_xattr_info *xi,
					       struct ocfs2_xattr_search *xis,
					       struct ocfs2_xattr_search *xbs,
					       struct ocfs2_refcount_tree **ref_tree,
					       int *meta_need, int *credits);
	int cocci_id/* fs/ocfs2/xattr.c 290 */(struct inode *inode,
					       handle_t *handle, u64 src_blk,
					       u64 last_blk, u64 to_blk,
					       unsigned int start_bucket,
					       u32 *first_hash);
	int cocci_id/* fs/ocfs2/xattr.c 283 */(struct inode *inode,
					       struct buffer_head *root_bh,
					       u64 blkno, u32 cpos, u32 len,
					       void *para);
	int cocci_id/* fs/ocfs2/xattr.c 280 */(struct inode *inode,
					       struct ocfs2_xattr_bucket *bucket,
					       void *para);
	int cocci_id/* fs/ocfs2/xattr.c 276 */(struct inode *inode,
					       struct buffer_head *root_bh,
					       xattr_tree_rec_func *rec_func,
					       void *para);
	int cocci_id/* fs/ocfs2/xattr.c 268 */(struct inode *inode,
					       struct ocfs2_xattr_info *xi,
					       struct ocfs2_xattr_search *xs,
					       struct ocfs2_xattr_set_ctxt *ctxt);
	struct ocfs2_inline_data *cocci_id/* fs/ocfs2/xattr.c 2650 */;
	int cocci_id/* fs/ocfs2/xattr.c 264 */(struct inode *inode,
					       struct ocfs2_xattr_search *xs,
					       struct ocfs2_xattr_set_ctxt *ctxt);
	int cocci_id/* fs/ocfs2/xattr.c 259 */(struct inode *inode,
					       struct buffer_head *blk_bh,
					       char *buffer,
					       size_t buffer_size);
	int cocci_id/* fs/ocfs2/xattr.c 253 */(struct inode *inode,
					       struct buffer_head *root_bh,
					       int name_index,
					       const char *name,
					       struct ocfs2_xattr_search *xs);
	int cocci_id/* fs/ocfs2/xattr.c 249 */(struct inode *inode,
					       int name_index,
					       const char *name,
					       struct ocfs2_xattr_search *xs);
	struct ocfs2_rm_xattr_bucket_para cocci_id/* fs/ocfs2/xattr.c 2461 */;
	struct ocfs2_rm_xattr_bucket_para {
		struct ocfs2_caching_info *ref_ci;
		struct buffer_head *ref_root_bh;
	} cocci_id/* fs/ocfs2/xattr.c 2445 */;
	int cocci_id/* fs/ocfs2/xattr.c 243 */(struct super_block *sb,
					       struct ocfs2_xattr_header *xh,
					       int index, int *block_off,
					       int *new_offset);
	struct ocfs2_xattr_entry *cocci_id/* fs/ocfs2/xattr.c 233 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/xattr.c 2323 */;
	struct ocfs2_xa_loc *cocci_id/* fs/ocfs2/xattr.c 2267 */;
	uint64_t cocci_id/* fs/ocfs2/xattr.c 220 */;
	__le64 cocci_id/* fs/ocfs2/xattr.c 2130 */;
	struct ocfs2_xa_loc {
		struct inode *xl_inode;
		struct ocfs2_xattr_header *xl_header;
		int xl_size;
		struct ocfs2_xattr_entry *xl_entry;
		void *xl_storage;
		const struct ocfs2_xa_loc_operations *xl_ops;
	} cocci_id/* fs/ocfs2/xattr.c 188 */;
	const struct ocfs2_xa_loc_operations cocci_id/* fs/ocfs2/xattr.c 1691 */;
	ocfs2_journal_access_func cocci_id/* fs/ocfs2/xattr.c 1547 */;
	struct ocfs2_xattr_value_root *cocci_id/* fs/ocfs2/xattr.c 1361 */;
	struct ocfs2_xa_loc_operations {
		int (*xlo_journal_access)(handle_t *handle,
					  struct ocfs2_xa_loc *loc, int type);
		void (*xlo_journal_dirty)(handle_t *handle,
					  struct ocfs2_xa_loc *loc);
		void *(*xlo_offset_pointer)(struct ocfs2_xa_loc *loc,
					    int offset);
		int (*xlo_can_reuse)(struct ocfs2_xa_loc *loc,
				     struct ocfs2_xattr_info *xi);
		int (*xlo_check_space)(struct ocfs2_xa_loc *loc,
				       struct ocfs2_xattr_info *xi);
		int (*xlo_get_free_start)(struct ocfs2_xa_loc *loc);
		void (*xlo_wipe_namevalue)(struct ocfs2_xa_loc *loc);
		void (*xlo_add_entry)(struct ocfs2_xa_loc *loc, u32 name_hash);
		void (*xlo_add_namevalue)(struct ocfs2_xa_loc *loc, int size);
		void (*xlo_fill_value_buf)(struct ocfs2_xa_loc *loc,
					   struct ocfs2_xattr_value_buf *vb);
	} cocci_id/* fs/ocfs2/xattr.c 136 */;
	struct buffer_head *cocci_id/* fs/ocfs2/xattr.c 1359 */;
	u16 cocci_id/* fs/ocfs2/xattr.c 1354 */;
	const void *cocci_id/* fs/ocfs2/xattr.c 1350 */;
	struct ocfs2_lock_holder cocci_id/* fs/ocfs2/xattr.c 1328 */;
	struct ocfs2_xattr_search cocci_id/* fs/ocfs2/xattr.c 1290 */;
	struct ocfs2_xattr_search {
		struct buffer_head *inode_bh;
		struct buffer_head *xattr_bh;
		struct ocfs2_xattr_header *header;
		struct ocfs2_xattr_bucket *bucket;
		void *base;
		void *end;
		struct ocfs2_xattr_entry *here;
		int not_found;
	} cocci_id/* fs/ocfs2/xattr.c 119 */;
	struct ocfs2_xattr_info {
		int xi_name_index;
		const char *xi_name;
		int xi_name_len;
		const void *xi_value;
		size_t xi_value_len;
	} cocci_id/* fs/ocfs2/xattr.c 111 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/xattr.c 1033 */;
	struct dentry *cocci_id/* fs/ocfs2/xattr.c 1026 */;
	ssize_t cocci_id/* fs/ocfs2/xattr.c 1026 */;
	const struct xattr_handler *cocci_id/* fs/ocfs2/xattr.c 101 */[OCFS2_XATTR_MAX];
}
