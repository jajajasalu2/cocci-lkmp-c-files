cocci_test_suite() {
	int cocci_id/* fs/ext4/super.c 941 */(struct super_block *sb,
					      int type);
	struct list_head *cocci_id/* fs/ext4/super.c 924 */;
	char cocci_id/* fs/ext4/super.c 886 */[BDEVNAME_SIZE];
	dev_t cocci_id/* fs/ext4/super.c 883 */;
	struct block_device *cocci_id/* fs/ext4/super.c 883 */;
	struct inode *cocci_id/* fs/ext4/super.c 86 */(struct super_block *sb,
						       unsigned int journal_inum);
	void cocci_id/* fs/ext4/super.c 85 */(void);
	void cocci_id/* fs/ext4/super.c 84 */(struct super_block *sb);
	struct ext4_group_info *cocci_id/* fs/ext4/super.c 830 */;
	int cocci_id/* fs/ext4/super.c 82 */(struct super_block *sb,
					     int readonly);
	int cocci_id/* fs/ext4/super.c 80 */(struct super_block *sb);
	unsigned long long cocci_id/* fs/ext4/super.c 794 */;
	struct dentry *cocci_id/* fs/ext4/super.c 78 */(struct file_system_type *fs_type,
							int flags,
							const char *dev_name,
							void *data);
	unsigned long cocci_id/* fs/ext4/super.c 767 */;
	ext4_group_t cocci_id/* fs/ext4/super.c 766 */;
	int cocci_id/* fs/ext4/super.c 75 */(struct dentry *dentry,
					     struct kstatfs *buf);
	const struct inode *cocci_id/* fs/ext4/super.c 747 */;
	int cocci_id/* fs/ext4/super.c 74 */(struct super_block *sb,
					     int *flags, char *data);
	int cocci_id/* fs/ext4/super.c 73 */(struct super_block *sb, int wait);
	void cocci_id/* fs/ext4/super.c 71 */(struct super_block *sb,
					      struct ext4_super_block *es);
	int cocci_id/* fs/ext4/super.c 68 */(struct super_block *sb, int sync);
	va_list cocci_id/* fs/ext4/super.c 676 */;
	struct va_format cocci_id/* fs/ext4/super.c 675 */;
	unsigned int cocci_id/* fs/ext4/super.c 673 */;
	const char *cocci_id/* fs/ext4/super.c 672 */;
	struct super_block *cocci_id/* fs/ext4/super.c 672 */;
	void cocci_id/* fs/ext4/super.c 672 */;
	int cocci_id/* fs/ext4/super.c 67 */(struct seq_file *seq,
					     struct dentry *root);
	int cocci_id/* fs/ext4/super.c 65 */(struct super_block *,
					     struct ext4_super_block *,
					     unsigned long journal_devnum);
	char cocci_id/* fs/ext4/super.c 640 */[16];
	int cocci_id/* fs/ext4/super.c 638 */;
	struct ratelimit_state cocci_id/* fs/ext4/super.c 63 */;
	struct mutex cocci_id/* fs/ext4/super.c 62 */;
	void __exit cocci_id/* fs/ext4/super.c 6165 */;
	int __init cocci_id/* fs/ext4/super.c 6092 */;
	wait_queue_head_t cocci_id/* fs/ext4/super.c 6090 */[EXT4_WQ_HASH_SZ];
	struct file_system_type *cocci_id/* fs/ext4/super.c 6018 */;
	ssize_t cocci_id/* fs/ext4/super.c 5922 */;
	bool cocci_id/* fs/ext4/super.c 5849 */[EXT4_MAXQUOTAS];
	unsigned long cocci_id/* fs/ext4/super.c 5844 */[EXT4_MAXQUOTAS];
	const struct path *cocci_id/* fs/ext4/super.c 5735 */;
	handle_t *cocci_id/* fs/ext4/super.c 5644 */;
	struct dquot *cocci_id/* fs/ext4/super.c 5618 */;
	char cocci_id/* fs/ext4/super.c 561 */[80];
	struct inode *cocci_id/* fs/ext4/super.c 560 */;
	struct ext4_super_block *cocci_id/* fs/ext4/super.c 559 */;
	s64 cocci_id/* fs/ext4/super.c 5578 */;
	struct kstatfs *cocci_id/* fs/ext4/super.c 5571 */;
	ext4_fsblk_t cocci_id/* fs/ext4/super.c 554 */;
	struct kqid cocci_id/* fs/ext4/super.c 5532 */;
	kprojid_t cocci_id/* fs/ext4/super.c 5530 */;
	struct file *cocci_id/* fs/ext4/super.c 553 */;
	char *cocci_id/* fs/ext4/super.c 5266 */[EXT4_MAXQUOTAS];
	struct ext4_mount_options cocci_id/* fs/ext4/super.c 5259 */;
	struct ext4_mount_options {
		unsigned long s_mount_opt;
		unsigned long s_mount_opt2;
		kuid_t s_resuid;
		kgid_t s_resgid;
		unsigned long s_commit_interval;
		u32 s_min_batch_time,s_max_batch_time;
#ifdef CONFIG_QUOTA
		int s_jquota_fmt;
		char *s_qf_names[EXT4_MAXQUOTAS];
#endif
	} cocci_id/* fs/ext4/super.c 5241 */;
	tid_t cocci_id/* fs/ext4/super.c 5136 */;
	struct buffer_head *cocci_id/* fs/ext4/super.c 4977 */;
	struct request_queue *cocci_id/* fs/ext4/super.c 4606 */;
	struct ext4_journal_cb_entry cocci_id/* fs/ext4/super.c 425 */;
	u64 cocci_id/* fs/ext4/super.c 4233 */;
	uint64_t cocci_id/* fs/ext4/super.c 4221 */;
	struct ext4_journal_cb_entry *cocci_id/* fs/ext4/super.c 416 */;
	transaction_t *cocci_id/* fs/ext4/super.c 411 */;
	struct backing_dev_info *cocci_id/* fs/ext4/super.c 406 */;
	__u16 cocci_id/* fs/ext4/super.c 3856 */;
	struct unicode_map *cocci_id/* fs/ext4/super.c 3855 */;
	const struct ext4_sb_encodings *cocci_id/* fs/ext4/super.c 3854 */;
	unsigned cocci_id/* fs/ext4/super.c 3810 */;
	struct ext4_inode *cocci_id/* fs/ext4/super.c 3797 */;
	struct ext4_inode cocci_id/* fs/ext4/super.c 3796 */;
	struct blockgroup_lock cocci_id/* fs/ext4/super.c 3624 */;
	__u64 cocci_id/* fs/ext4/super.c 3614 */;
	struct dax_device *cocci_id/* fs/ext4/super.c 3596 */;
	void *cocci_id/* fs/ext4/super.c 3594 */;
	time64_t cocci_id/* fs/ext4/super.c 349 */;
	__u8 *cocci_id/* fs/ext4/super.c 349 */;
	__le32 *cocci_id/* fs/ext4/super.c 349 */;
	struct ext4_group_desc *cocci_id/* fs/ext4/super.c 3448 */;
	struct ext4_li_request cocci_id/* fs/ext4/super.c 3223 */;
	struct ext4_li_request *cocci_id/* fs/ext4/super.c 3219 */;
	struct ext4_lazy_init *cocci_id/* fs/ext4/super.c 3117 */;
	struct task_struct *cocci_id/* fs/ext4/super.c 3104 */;
	struct timer_list *cocci_id/* fs/ext4/super.c 2988 */;
	u32 cocci_id/* fs/ext4/super.c 286 */;
	loff_t cocci_id/* fs/ext4/super.c 2794 */;
	__u32 cocci_id/* fs/ext4/super.c 251 */;
	ext4_group_t *cocci_id/* fs/ext4/super.c 2468 */;
	__le32 cocci_id/* fs/ext4/super.c 2406 */;
	struct ext4_group_desc cocci_id/* fs/ext4/super.c 2404 */;
	__le16 cocci_id/* fs/ext4/super.c 2401 */;
	struct flex_groups cocci_id/* fs/ext4/super.c 2348 */;
	struct flex_groups *cocci_id/* fs/ext4/super.c 2338 */;
	unsigned short cocci_id/* fs/ext4/super.c 2301 */;
	__s16 cocci_id/* fs/ext4/super.c 2299 */;
	char cocci_id/* fs/ext4/super.c 2188 */;
	const struct mount_opts *cocci_id/* fs/ext4/super.c 2187 */;
	struct ext4_sb_info *cocci_id/* fs/ext4/super.c 2184 */;
	struct seq_file *cocci_id/* fs/ext4/super.c 2181 */;
	const struct match_token *cocci_id/* fs/ext4/super.c 2168 */;
	substring_t cocci_id/* fs/ext4/super.c 2076 */[MAX_OPT_ARGS];
	struct ext4_sb_info __maybe_unused *cocci_id/* fs/ext4/super.c 2074 */;
	struct path cocci_id/* fs/ext4/super.c 1956 */;
	kgid_t cocci_id/* fs/ext4/super.c 1811 */;
	kuid_t cocci_id/* fs/ext4/super.c 1810 */;
	unsigned int *cocci_id/* fs/ext4/super.c 1806 */;
	substring_t *cocci_id/* fs/ext4/super.c 1805 */;
	unsigned long *cocci_id/* fs/ext4/super.c 1805 */;
	struct ext4_super_block cocci_id/* fs/ext4/super.c 180 */;
	__u16 *cocci_id/* fs/ext4/super.c 1785 */;
	const struct ext4_sb_encodings **cocci_id/* fs/ext4/super.c 1784 */;
	const struct ext4_super_block *cocci_id/* fs/ext4/super.c 1783 */;
	const struct ext4_sb_encodings {
		__u16 magic;
		char *name;
		char *version;
	} cocci_id/* fs/ext4/super.c 1775 */[];
	const struct mount_opts {
		int token;
		int mount_opt;
		int flags;
	} cocci_id/* fs/ext4/super.c 1680 */[];
	char *cocci_id/* fs/ext4/super.c 1647 */;
	const char cocci_id/* fs/ext4/super.c 1593 */[];
	void **cocci_id/* fs/ext4/super.c 1569 */;
	sector_t cocci_id/* fs/ext4/super.c 151 */;
	const match_table_t cocci_id/* fs/ext4/super.c 1477 */;
	enum{Opt_bsd_df, Opt_minix_df, Opt_grpid, Opt_nogrpid, Opt_resgid, Opt_resuid, Opt_sb, Opt_err_cont, Opt_err_panic, Opt_err_ro, Opt_nouid32, Opt_debug, Opt_removed, Opt_user_xattr, Opt_nouser_xattr, Opt_acl, Opt_noacl, Opt_auto_da_alloc, Opt_noauto_da_alloc, Opt_noload, Opt_commit, Opt_min_batch_time, Opt_max_batch_time, Opt_journal_dev, Opt_journal_path, Opt_journal_checksum, Opt_journal_async_commit, Opt_abort, Opt_data_journal, Opt_data_ordered, Opt_data_writeback, Opt_data_err_abort, Opt_data_err_ignore, Opt_test_dummy_encryption, Opt_usrjquota, Opt_grpjquota, Opt_offusrjquota, Opt_offgrpjquota, Opt_jqfmt_vfsold, Opt_jqfmt_vfsv0, Opt_jqfmt_vfsv1, Opt_quota, Opt_noquota, Opt_barrier, Opt_nobarrier, Opt_err, Opt_usrquota, Opt_grpquota, Opt_prjquota, Opt_i_version, Opt_dax, Opt_stripe, Opt_delalloc, Opt_nodelalloc, Opt_warn_on_error, Opt_nowarn_on_error, Opt_mblk_io_submit, Opt_lazytime, Opt_nolazytime, Opt_debug_want_extra_isize, Opt_nomblk_io_submit, Opt_block_validity, Opt_noblock_validity, Opt_inode_readahead_blks, Opt_journal_ioprio, Opt_dioread_nolock, Opt_dioread_lock, Opt_discard, Opt_nodiscard, Opt_init_itable, Opt_noinit_itable, Opt_max_dir_size_kb, Opt_nojournal_checksum, Opt_nombcache,} cocci_id/* fs/ext4/super.c 1453 */;
	const struct export_operations cocci_id/* fs/ext4/super.c 1446 */;
	const struct super_operations cocci_id/* fs/ext4/super.c 1423 */;
	const struct quotactl_ops cocci_id/* fs/ext4/super.c 1411 */;
	const struct dquot_operations cocci_id/* fs/ext4/super.c 1397 */;
	struct dquot **cocci_id/* fs/ext4/super.c 1392 */;
	int cocci_id/* fs/ext4/super.c 1388 */(struct super_block *sb,
					       int type, int format_id,
					       unsigned int flags);
	ssize_t cocci_id/* fs/ext4/super.c 1386 */(struct super_block *sb,
						   int type, const char *data,
						   size_t len, loff_t off);
	ssize_t cocci_id/* fs/ext4/super.c 1384 */(struct super_block *sb,
						   int type, char *data,
						   size_t len, loff_t off);
	int cocci_id/* fs/ext4/super.c 1381 */(struct super_block *sb,
					       int type, int format_id,
					       const struct path *path);
	int cocci_id/* fs/ext4/super.c 1377 */(struct dquot *dquot);
	const char *const cocci_id/* fs/ext4/super.c 1373 */[];
	const struct fscrypt_operations cocci_id/* fs/ext4/super.c 1360 */;
	ext4_lblk_t cocci_id/* fs/ext4/super.c 1357 */;
	int *cocci_id/* fs/ext4/super.c 1354 */;
	bool cocci_id/* fs/ext4/super.c 1343 */;
	const void *cocci_id/* fs/ext4/super.c 1259 */;
	size_t cocci_id/* fs/ext4/super.c 1253 */;
	journal_t *cocci_id/* fs/ext4/super.c 1241 */;
	gfp_t cocci_id/* fs/ext4/super.c 1239 */;
	struct page *cocci_id/* fs/ext4/super.c 1238 */;
	struct writeback_control cocci_id/* fs/ext4/super.c 1224 */;
	struct fid *cocci_id/* fs/ext4/super.c 1208 */;
	struct dentry *cocci_id/* fs/ext4/super.c 1208 */;
	struct file_system_type cocci_id/* fs/ext4/super.c 118 */;
	struct ext4_inode_info cocci_id/* fs/ext4/super.c 1130 */;
	struct ext4_inode_info *cocci_id/* fs/ext4/super.c 1071 */;
	struct kmem_cache *cocci_id/* fs/ext4/super.c 1064 */;
}
