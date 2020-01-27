cocci_test_suite() {
	unsigned int cocci_id/* fs/ocfs2/namei.c 98 */;
	void cocci_id/* fs/ocfs2/namei.c 93 */(struct inode *inode1,
					       struct inode *inode2);
	int cocci_id/* fs/ocfs2/namei.c 86 */(struct ocfs2_super *osb,
					      struct buffer_head **bh1,
					      struct inode *inode1,
					      struct buffer_head **bh2,
					      struct inode *inode2,
					      int rename);
	int cocci_id/* fs/ocfs2/namei.c 81 */(struct ocfs2_super *osb,
					      handle_t *handle,
					      struct inode *inode,
					      const char *symname);
	int cocci_id/* fs/ocfs2/namei.c 72 */(struct ocfs2_super *osb,
					      handle_t *handle,
					      struct inode *inode,
					      struct buffer_head *fe_bh,
					      char *name,
					      struct ocfs2_dir_lookup_result *lookup,
					      struct inode *orphan_dir_inode,
					      bool dio);
	sigset_t cocci_id/* fs/ocfs2/namei.c 687 */;
	umode_t cocci_id/* fs/ocfs2/namei.c 659 */;
	int cocci_id/* fs/ocfs2/namei.c 65 */(struct ocfs2_super *osb,
					      struct inode **ret_orphan_dir,
					      u64 blkno, char *name,
					      struct ocfs2_dir_lookup_result *lookup,
					      bool dio);
	int cocci_id/* fs/ocfs2/namei.c 56 */(struct ocfs2_super *osb,
					      struct inode *dir,
					      struct inode *inode, dev_t dev,
					      struct buffer_head **new_fe_bh,
					      struct buffer_head *parent_fe_bh,
					      handle_t *handle,
					      struct ocfs2_alloc_context *inode_ac);
	struct timespec64 cocci_id/* fs/ocfs2/namei.c 506 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/namei.c 505 */;
	struct ocfs2_extent_list *cocci_id/* fs/ocfs2/namei.c 503 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/namei.c 502 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/namei.c 501 */;
	u64 cocci_id/* fs/ocfs2/namei.c 498 */;
	u16 cocci_id/* fs/ocfs2/namei.c 498 */;
	struct ocfs2_alloc_context *cocci_id/* fs/ocfs2/namei.c 497 */;
	handle_t *cocci_id/* fs/ocfs2/namei.c 496 */;
	struct buffer_head *cocci_id/* fs/ocfs2/namei.c 495 */;
	struct buffer_head **cocci_id/* fs/ocfs2/namei.c 494 */;
	dev_t cocci_id/* fs/ocfs2/namei.c 493 */;
	struct inode *cocci_id/* fs/ocfs2/namei.c 491 */;
	int cocci_id/* fs/ocfs2/namei.c 491 */;
	const struct inode_operations cocci_id/* fs/ocfs2/namei.c 2893 */;
	loff_t cocci_id/* fs/ocfs2/namei.c 2678 */;
	struct ocfs2_dir_lookup_result cocci_id/* fs/ocfs2/namei.c 2605 */;
	char cocci_id/* fs/ocfs2/namei.c 2603 */[OCFS2_DIO_ORPHAN_PREFIX_LEN + OCFS2_ORPHAN_NAMELEN + 1];
	unsigned long cocci_id/* fs/ocfs2/namei.c 253 */;
	char cocci_id/* fs/ocfs2/namei.c 2490 */[OCFS2_ORPHAN_NAMELEN + 1];
	struct inode **cocci_id/* fs/ocfs2/namei.c 2483 */;
	struct ocfs2_security_xattr_info cocci_id/* fs/ocfs2/namei.c 242 */;
	struct ocfs2_alloc_context **cocci_id/* fs/ocfs2/namei.c 2418 */;
	u64 *cocci_id/* fs/ocfs2/namei.c 2416 */;
	bool cocci_id/* fs/ocfs2/namei.c 2120 */;
	struct ocfs2_dentry_lock *cocci_id/* fs/ocfs2/namei.c 212 */;
	struct ocfs2_dir_lookup_result *cocci_id/* fs/ocfs2/namei.c 2119 */;
	char *cocci_id/* fs/ocfs2/namei.c 2118 */;
	struct dentry *cocci_id/* fs/ocfs2/namei.c 210 */;
	void cocci_id/* fs/ocfs2/namei.c 209 */;
	long long cocci_id/* fs/ocfs2/namei.c 2057 */;
	struct super_block *cocci_id/* fs/ocfs2/namei.c 1690 */;
	const char *cocci_id/* fs/ocfs2/namei.c 1686 */;
	u32 cocci_id/* fs/ocfs2/namei.c 1212 */;
	unsigned long long cocci_id/* fs/ocfs2/namei.c 1088 */;
}
