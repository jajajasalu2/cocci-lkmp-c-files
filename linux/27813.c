cocci_test_suite() {
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/inode.c 999 */;
	struct buffer_head *cocci_id/* fs/ocfs2/inode.c 998 */;
	sigset_t cocci_id/* fs/ocfs2/inode.c 997 */;
	unsigned long long cocci_id/* fs/ocfs2/inode.c 988 */;
	struct inode *cocci_id/* fs/ocfs2/inode.c 984 */;
	void cocci_id/* fs/ocfs2/inode.c 984 */;
	unsigned int cocci_id/* fs/ocfs2/inode.c 96 */;
	int *cocci_id/* fs/ocfs2/inode.c 891 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/inode.c 721 */;
	int cocci_id/* fs/ocfs2/inode.c 721 */;
	int cocci_id/* fs/ocfs2/inode.c 70 */(struct super_block *sb,
					      struct buffer_head *bh);
	int cocci_id/* fs/ocfs2/inode.c 65 */(struct inode *inode,
					      struct buffer_head **bh,
					      int flags, int type);
	int cocci_id/* fs/ocfs2/inode.c 61 */(struct ocfs2_super *osb,
					      struct inode *inode,
					      struct buffer_head *fe_bh);
	int cocci_id/* fs/ocfs2/inode.c 60 */(struct inode *inode,
					      void *opaque);
	int cocci_id/* fs/ocfs2/inode.c 57 */(struct inode *inode,
					      struct ocfs2_find_inode_args *args);
	struct lock_class_key cocci_id/* fs/ocfs2/inode.c 55 */[NUM_SYSTEM_INODES];
	struct ocfs2_find_inode_args {
		u64 fi_blkno;
		unsigned long fi_ino;
		unsigned int fi_flags;
		unsigned int fi_sysfile_type;
	} cocci_id/* fs/ocfs2/inode.c 47 */;
	u32 cocci_id/* fs/ocfs2/inode.c 411 */;
	struct lock_class_key cocci_id/* fs/ocfs2/inode.c 241 */;
	struct ocfs2_find_inode_args *cocci_id/* fs/ocfs2/inode.c 215 */;
	void *cocci_id/* fs/ocfs2/inode.c 213 */;
	tid_t cocci_id/* fs/ocfs2/inode.c 179 */;
	transaction_t *cocci_id/* fs/ocfs2/inode.c 178 */;
	const struct ocfs2_caching_operations cocci_id/* fs/ocfs2/inode.c 1653 */;
	struct ocfs2_caching_info *cocci_id/* fs/ocfs2/inode.c 1618 */;
	struct buffer_head **cocci_id/* fs/ocfs2/inode.c 1565 */;
	struct super_block *cocci_id/* fs/ocfs2/inode.c 1492 */;
	journal_t *cocci_id/* fs/ocfs2/inode.c 130 */;
	struct ocfs2_find_inode_args cocci_id/* fs/ocfs2/inode.c 129 */;
	handle_t *cocci_id/* fs/ocfs2/inode.c 1289 */;
	struct dentry *cocci_id/* fs/ocfs2/inode.c 1249 */;
	u64 cocci_id/* fs/ocfs2/inode.c 123 */;
	unsigned cocci_id/* fs/ocfs2/inode.c 123 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/inode.c 1115 */;
}
