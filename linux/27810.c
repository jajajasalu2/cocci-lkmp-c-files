cocci_test_suite() {
	void cocci_id/* fs/ocfs2/super.c 99 */(void);
	struct ocfs2_blockcheck_stats cocci_id/* fs/ocfs2/super.c 981 */;
	int cocci_id/* fs/ocfs2/super.c 98 */(void);
	struct buffer_head *cocci_id/* fs/ocfs2/super.c 979 */;
	struct mount_options cocci_id/* fs/ocfs2/super.c 976 */;
	void *cocci_id/* fs/ocfs2/super.c 972 */;
	void cocci_id/* fs/ocfs2/super.c 97 */(struct super_block *sb,
					       int mnt_err);
	int cocci_id/* fs/ocfs2/super.c 96 */(struct super_block *sb,
					      int *flags, char *data);
	struct ocfs2_mem_dqinfo *cocci_id/* fs/ocfs2/super.c 951 */;
	int cocci_id/* fs/ocfs2/super.c 95 */(struct super_block *sb);
	void cocci_id/* fs/ocfs2/super.c 94 */(struct super_block *sb);
	int cocci_id/* fs/ocfs2/super.c 93 */(struct seq_file *s,
					      struct dentry *root);
	unsigned int cocci_id/* fs/ocfs2/super.c 910 */[OCFS2_MAXQUOTAS];
	int cocci_id/* fs/ocfs2/super.c 91 */(struct super_block *sb,
					      struct mount_options *options);
	struct inode *cocci_id/* fs/ocfs2/super.c 908 */[OCFS2_MAXQUOTAS];
	int cocci_id/* fs/ocfs2/super.c 88 */(struct super_block *sb,
					      char *options,
					      struct mount_options *mopt,
					      int is_remount);
	struct mount_options {
		unsigned long commit_interval;
		unsigned long mount_opt;
		unsigned int atime_quantum;
		signed short slot;
		int localalloc_opt;
		unsigned int resv_level;
		int dir_resv_level;
		char cluster_stack[OCFS2_STACK_LABEL_LEN + 1];
	} cocci_id/* fs/ocfs2/super.c 76 */;
	struct ocfs1_vol_disk_hdr *cocci_id/* fs/ocfs2/super.c 730 */;
	struct dentry *cocci_id/* fs/ocfs2/super.c 70 */;
	struct kmem_cache *cocci_id/* fs/ocfs2/super.c 67 */;
	int *cocci_id/* fs/ocfs2/super.c 606 */;
	sector_t cocci_id/* fs/ocfs2/super.c 583 */;
	unsigned int cocci_id/* fs/ocfs2/super.c 569 */;
	struct ocfs2_inode_info *cocci_id/* fs/ocfs2/super.c 550 */;
	struct inode *cocci_id/* fs/ocfs2/super.c 548 */;
	tid_t cocci_id/* fs/ocfs2/super.c 398 */;
	const struct file_operations cocci_id/* fs/ocfs2/super.c 388 */;
	loff_t *cocci_id/* fs/ocfs2/super.c 367 */;
	size_t cocci_id/* fs/ocfs2/super.c 367 */;
	struct file *cocci_id/* fs/ocfs2/super.c 366 */;
	char __user *cocci_id/* fs/ocfs2/super.c 366 */;
	ssize_t cocci_id/* fs/ocfs2/super.c 366 */;
	char *cocci_id/* fs/ocfs2/super.c 345 */;
	sigset_t cocci_id/* fs/ocfs2/super.c 2601 */;
	sigset_t *cocci_id/* fs/ocfs2/super.c 2598 */;
	va_list cocci_id/* fs/ocfs2/super.c 2566 */;
	struct va_format cocci_id/* fs/ocfs2/super.c 2565 */;
	const char *cocci_id/* fs/ocfs2/super.c 2562 */;
	struct super_block *cocci_id/* fs/ocfs2/super.c 2562 */;
	void cocci_id/* fs/ocfs2/super.c 2562 */;
	int cocci_id/* fs/ocfs2/super.c 2539 */;
	struct ocfs2_super cocci_id/* fs/ocfs2/super.c 2502 */;
	struct ocfs2_dinode *cocci_id/* fs/ocfs2/super.c 2378 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/super.c 2373 */;
	unsigned long long cocci_id/* fs/ocfs2/super.c 2247 */;
	unsigned long cocci_id/* fs/ocfs2/super.c 2198 */;
	struct ocfs2_orphan_scan *cocci_id/* fs/ocfs2/super.c 219 */;
	struct ocfs2_journal cocci_id/* fs/ocfs2/super.c 2185 */;
	struct ocfs2_recovery_map *cocci_id/* fs/ocfs2/super.c 218 */;
	u32 cocci_id/* fs/ocfs2/super.c 2174 */;
	struct ocfs2_cluster_connection *cocci_id/* fs/ocfs2/super.c 217 */;
	u64 cocci_id/* fs/ocfs2/super.c 2003 */;
	struct ocfs2_journal *cocci_id/* fs/ocfs2/super.c 2001 */;
	struct ocfs2_blockcheck_stats *cocci_id/* fs/ocfs2/super.c 1995 */;
	unsigned cocci_id/* fs/ocfs2/super.c 1939 */;
	const unsigned char *cocci_id/* fs/ocfs2/super.c 1938 */;
	char cocci_id/* fs/ocfs2/super.c 1848 */[12];
	const match_table_t cocci_id/* fs/ocfs2/super.c 181 */;
	struct buffer_head **cocci_id/* fs/ocfs2/super.c 1756 */;
	struct ocfs2_quota_chunk cocci_id/* fs/ocfs2/super.c 1723 */;
	struct ocfs2_dquot cocci_id/* fs/ocfs2/super.c 1717 */;
	struct ocfs2_inode_info cocci_id/* fs/ocfs2/super.c 1711 */;
	struct kstatfs *cocci_id/* fs/ocfs2/super.c 1617 */;
	void __exit cocci_id/* fs/ocfs2/super.c 1596 */;
	int __init cocci_id/* fs/ocfs2/super.c 1562 */;
	enum{Opt_barrier, Opt_err_panic, Opt_err_ro, Opt_intr, Opt_nointr, Opt_hb_none, Opt_hb_local, Opt_hb_global, Opt_data_ordered, Opt_data_writeback, Opt_atime_quantum, Opt_slot, Opt_commit, Opt_localalloc, Opt_localflocks, Opt_stack, Opt_user_xattr, Opt_nouser_xattr, Opt_inode64, Opt_acl, Opt_noacl, Opt_usrquota, Opt_grpquota, Opt_coherency_buffered, Opt_coherency_full, Opt_resv_level, Opt_dir_resv_level, Opt_journal_async_commit, Opt_err_cont, Opt_err,} cocci_id/* fs/ocfs2/super.c 148 */;
	struct seq_file *cocci_id/* fs/ocfs2/super.c 1475 */;
	s16 cocci_id/* fs/ocfs2/super.c 1337 */;
	const struct super_operations cocci_id/* fs/ocfs2/super.c 133 */;
	struct dquot **cocci_id/* fs/ocfs2/super.c 128 */;
	substring_t cocci_id/* fs/ocfs2/super.c 1247 */[MAX_OPT_ARGS];
	int cocci_id/* fs/ocfs2/super.c 124 */(struct ocfs2_super *osb,
					       int unsuspend);
	void cocci_id/* fs/ocfs2/super.c 123 */(struct inode *inode);
	struct inode *cocci_id/* fs/ocfs2/super.c 122 */(struct super_block *sb);
	struct mount_options *cocci_id/* fs/ocfs2/super.c 1205 */;
	struct file_system_type cocci_id/* fs/ocfs2/super.c 1194 */;
	struct file_system_type *cocci_id/* fs/ocfs2/super.c 1186 */;
	int cocci_id/* fs/ocfs2/super.c 118 */(struct super_block *sb,
					       struct buffer_head **bh,
					       int block, int sect_size);
	int cocci_id/* fs/ocfs2/super.c 114 */(struct super_block *sb,
					       struct buffer_head *bh,
					       int sector_size,
					       struct ocfs2_blockcheck_stats *stats);
	int cocci_id/* fs/ocfs2/super.c 110 */(struct ocfs2_dinode *di,
					       struct buffer_head *bh,
					       u32 sectsize,
					       struct ocfs2_blockcheck_stats *stats);
	int cocci_id/* fs/ocfs2/super.c 109 */(struct ocfs2_super *osb);
	int cocci_id/* fs/ocfs2/super.c 104 */(struct super_block *sb,
					       int wait);
	int cocci_id/* fs/ocfs2/super.c 102 */(struct dentry *dentry,
					       struct kstatfs *buf);
	void cocci_id/* fs/ocfs2/super.c 100 */(struct ocfs2_super *osb);
}
