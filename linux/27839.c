cocci_test_suite() {
	void cocci_id/* fs/ocfs2/localalloc.c 912 */;
	struct ocfs2_reservation_map *cocci_id/* fs/ocfs2/localalloc.c 833 */;
	struct ocfs2_alloc_reservation cocci_id/* fs/ocfs2/localalloc.c 831 */;
	struct ocfs2_alloc_reservation *cocci_id/* fs/ocfs2/localalloc.c 827 */;
	struct ocfs2_local_alloc *cocci_id/* fs/ocfs2/localalloc.c 726 */;
	void *cocci_id/* fs/ocfs2/localalloc.c 724 */;
	u32 *cocci_id/* fs/ocfs2/localalloc.c 719 */;
	u32 cocci_id/* fs/ocfs2/localalloc.c 718 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/localalloc.c 717 */;
	handle_t *cocci_id/* fs/ocfs2/localalloc.c 716 */;
	int cocci_id/* fs/ocfs2/localalloc.c 61 */(struct ocfs2_super *osb,
						   struct inode *local_alloc_inode);
	int cocci_id/* fs/ocfs2/localalloc.c 57 */(struct ocfs2_super *osb,
						   handle_t *handle,
						   struct ocfs2_alloc_context *ac);
	int cocci_id/* fs/ocfs2/localalloc.c 52 */(struct ocfs2_super *osb,
						   struct ocfs2_alloc_context **ac,
						   struct inode **bitmap_inode,
						   struct buffer_head **bitmap_bh);
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/localalloc.c 485 */;
	struct inode *cocci_id/* fs/ocfs2/localalloc.c 484 */;
	struct buffer_head *cocci_id/* fs/ocfs2/localalloc.c 483 */;
	struct ocfs2_dinode **cocci_id/* fs/ocfs2/localalloc.c 480 */;
	int cocci_id/* fs/ocfs2/localalloc.c 46 */(struct ocfs2_super *osb,
						   handle_t *handle,
						   struct ocfs2_dinode *alloc,
						   struct inode *main_bm_inode,
						   struct buffer_head *main_bm_bh);
	void cocci_id/* fs/ocfs2/localalloc.c 44 */(struct ocfs2_dinode *alloc);
	int cocci_id/* fs/ocfs2/localalloc.c 39 */(struct ocfs2_super *osb,
						   struct ocfs2_dinode *alloc,
						   u32 *numbits,
						   struct ocfs2_alloc_reservation *resv);
	u32 cocci_id/* fs/ocfs2/localalloc.c 37 */(struct ocfs2_dinode *alloc);
	unsigned long long cocci_id/* fs/ocfs2/localalloc.c 265 */;
	u64 cocci_id/* fs/ocfs2/localalloc.c 244 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/localalloc.c 244 */;
	int cocci_id/* fs/ocfs2/localalloc.c 244 */;
	struct ocfs2_super cocci_id/* fs/ocfs2/localalloc.c 230 */;
	struct work_struct *cocci_id/* fs/ocfs2/localalloc.c 227 */;
	struct ocfs2_alloc_context cocci_id/* fs/ocfs2/localalloc.c 1105 */;
	struct buffer_head **cocci_id/* fs/ocfs2/localalloc.c 1101 */;
	struct inode **cocci_id/* fs/ocfs2/localalloc.c 1100 */;
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/localalloc.c 1099 */;
	struct super_block *cocci_id/* fs/ocfs2/localalloc.c 109 */;
	enum ocfs2_la_event cocci_id/* fs/ocfs2/localalloc.c 1042 */;
	unsigned int cocci_id/* fs/ocfs2/localalloc.c 103 */;
	enum ocfs2_la_event{OCFS2_LA_EVENT_SLIDE, OCFS2_LA_EVENT_FRAGMENTED, OCFS2_LA_EVENT_ENOSPC,} cocci_id/* fs/ocfs2/localalloc.c 1019 */;
}
