cocci_test_suite() {
	int cocci_id/* fs/ocfs2/suballoc.c 98 */(struct buffer_head *bg_bh,
						 int nr);
	int cocci_id/* fs/ocfs2/suballoc.c 93 */(struct ocfs2_alloc_context *ac,
						 handle_t *handle,
						 u32 bits_wanted,
						 u32 min_bits,
						 struct ocfs2_suballoc_result *res);
	int cocci_id/* fs/ocfs2/suballoc.c 88 */(struct inode *inode,
						 struct buffer_head *group_bh,
						 u32 bits_wanted,
						 u32 min_bits, u64 max_block,
						 struct ocfs2_suballoc_result *res);
	void cocci_id/* fs/ocfs2/suballoc.c 878 */;
	int cocci_id/* fs/ocfs2/suballoc.c 76 */(struct ocfs2_super *osb,
						 struct inode *alloc_inode,
						 struct buffer_head *bh,
						 u64 max_block,
						 u64 *last_alloc_group,
						 int flags);
	int cocci_id/* fs/ocfs2/suballoc.c 69 */(handle_t *handle,
						 struct inode *alloc_inode,
						 struct buffer_head *bg_bh,
						 u64 group_blkno,
						 unsigned int group_clusters,
						 u16 my_chain,
						 struct ocfs2_chain_list *cl);
	u16 cocci_id/* fs/ocfs2/suballoc.c 68 */(struct ocfs2_chain_list *cl);
	u64 *cocci_id/* fs/ocfs2/suballoc.c 657 */;
	struct ocfs2_extent_rec *cocci_id/* fs/ocfs2/suballoc.c 553 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/suballoc.c 552 */;
	struct ocfs2_suballoc_result {
		u64 sr_bg_blkno;
		u64 sr_bg_stable_blkno;
		u64 sr_blkno;
		unsigned int sr_bit_offset;
		unsigned int sr_bits;
	} cocci_id/* fs/ocfs2/suballoc.c 42 */;
	struct super_block *cocci_id/* fs/ocfs2/suballoc.c 353 */;
	struct buffer_head **cocci_id/* fs/ocfs2/suballoc.c 296 */;
	int *cocci_id/* fs/ocfs2/suballoc.c 2816 */;
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/suballoc.c 2629 */;
	struct ocfs2_extent_tree *cocci_id/* fs/ocfs2/suballoc.c 2627 */;
	unsigned long long cocci_id/* fs/ocfs2/suballoc.c 2569 */;
	u16 cocci_id/* fs/ocfs2/suballoc.c 2553 */;
	void (*cocci_id/* fs/ocfs2/suballoc.c 2549 */)(unsigned int bit,
						       unsigned long *bitmap);
	u64 cocci_id/* fs/ocfs2/suballoc.c 2547 */;
	struct buffer_head *cocci_id/* fs/ocfs2/suballoc.c 2546 */;
	struct inode *cocci_id/* fs/ocfs2/suballoc.c 2545 */;
	struct ocfs2_group_desc *cocci_id/* fs/ocfs2/suballoc.c 2462 */;
	struct ocfs2_chain_list *cocci_id/* fs/ocfs2/suballoc.c 2460 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/suballoc.c 2459 */;
	unsigned long *cocci_id/* fs/ocfs2/suballoc.c 2421 */;
	struct journal_head *cocci_id/* fs/ocfs2/suballoc.c 2392 */;
	void (*cocci_id/* fs/ocfs2/suballoc.c 2386 */)(unsigned int bit,
						       unsigned long *bmap);
	struct ocfs2_super *cocci_id/* fs/ocfs2/suballoc.c 2307 */;
	struct ocfs2_suballoc_result cocci_id/* fs/ocfs2/suballoc.c 2306 */;
	unsigned int cocci_id/* fs/ocfs2/suballoc.c 2305 */;
	u32 *cocci_id/* fs/ocfs2/suballoc.c 2301 */;
	u32 cocci_id/* fs/ocfs2/suballoc.c 2299 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/suballoc.c 2298 */;
	handle_t *cocci_id/* fs/ocfs2/suballoc.c 2297 */;
	int cocci_id/* fs/ocfs2/suballoc.c 2297 */;
	u16 *cocci_id/* fs/ocfs2/suballoc.c 2274 */;
	unsigned int *cocci_id/* fs/ocfs2/suballoc.c 1993 */;
	struct ocfs2_suballoc_result *cocci_id/* fs/ocfs2/suballoc.c 1620 */;
	void *cocci_id/* fs/ocfs2/suballoc.c 1282 */;
	struct ocfs2_alloc_context cocci_id/* fs/ocfs2/suballoc.c 1151 */;
	int cocci_id/* fs/ocfs2/suballoc.c 115 */(struct ocfs2_super *osb,
						  u32 bits_wanted,
						  u64 max_block, int flags,
						  struct ocfs2_alloc_context **ac);
	void cocci_id/* fs/ocfs2/suballoc.c 111 */(struct inode *inode,
						   u64 data_blkno,
						   u64 *bg_blkno,
						   u16 *bg_bit_off);
	u32 cocci_id/* fs/ocfs2/suballoc.c 108 */(struct inode *inode,
						  u64 bg_blkno,
						  u16 bg_bit_off);
	int cocci_id/* fs/ocfs2/suballoc.c 106 */(struct ocfs2_group_desc *bg,
						  u32 wanted);
	int cocci_id/* fs/ocfs2/suballoc.c 100 */(handle_t *handle,
						  struct inode *alloc_inode,
						  struct buffer_head *fe_bh,
						  struct buffer_head *bg_bh,
						  struct buffer_head *prev_bg_bh,
						  u16 chain);
}
