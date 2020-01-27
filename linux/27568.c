cocci_test_suite() {
	char **cocci_id/* fs/btrfs/super.c 949 */;
	substring_t cocci_id/* fs/btrfs/super.c 897 */[MAX_OPT_ARGS];
	const char *__attribute_const__ cocci_id/* fs/btrfs/super.c 69 */;
	int cocci_id/* fs/btrfs/super.c 67 */(struct super_block *sb,
					      int *flags, char *data);
	struct file_system_type cocci_id/* fs/btrfs/super.c 64 */;
	const struct super_operations cocci_id/* fs/btrfs/super.c 54 */;
	enum btrfs_compression_type cocci_id/* fs/btrfs/super.c 437 */;
	bool cocci_id/* fs/btrfs/super.c 436 */;
	const match_table_t cocci_id/* fs/btrfs/super.c 352 */;
	enum{Opt_acl, Opt_noacl, Opt_clear_cache, Opt_commit_interval, Opt_compress, Opt_compress_force, Opt_compress_force_type, Opt_compress_type, Opt_degraded, Opt_device, Opt_fatal_errors, Opt_flushoncommit, Opt_noflushoncommit, Opt_inode_cache, Opt_noinode_cache, Opt_max_inline, Opt_barrier, Opt_nobarrier, Opt_datacow, Opt_nodatacow, Opt_datasum, Opt_nodatasum, Opt_defrag, Opt_nodefrag, Opt_discard, Opt_nodiscard, Opt_nologreplay, Opt_norecovery, Opt_ratio, Opt_rescan_uuid_tree, Opt_skip_balance, Opt_space_cache, Opt_no_space_cache, Opt_space_cache_version, Opt_ssd, Opt_nossd, Opt_ssd_spread, Opt_nossd_spread, Opt_subvol, Opt_subvol_empty, Opt_subvolid, Opt_thread_pool, Opt_treelog, Opt_notreelog, Opt_usebackuproot, Opt_user_subvol_rm_allowed, Opt_alloc_start, Opt_recovery, Opt_subvolrootid, Opt_check_integrity, Opt_check_integrity_including_extent_data, Opt_check_integrity_print_mask, Opt_enospc_debug, Opt_noenospc_debug,

#ifdef CONFIG_BTRFS_DEBUG
 Opt_fragment_data, Opt_fragment_metadata, Opt_fragment_all,

#endif


#ifdef CONFIG_BTRFS_FS_REF_VERIFY
 Opt_ref_verify,

#endif
 Opt_err,} cocci_id/* fs/btrfs/super.c 297 */;
	char *cocci_id/* fs/btrfs/super.c 270 */;
	void __exit cocci_id/* fs/btrfs/super.c 2444 */;
	struct btrfs_fs_info *cocci_id/* fs/btrfs/super.c 242 */;
	unsigned int cocci_id/* fs/btrfs/super.c 240 */;
	int cocci_id/* fs/btrfs/super.c 240 */;
	const char *cocci_id/* fs/btrfs/super.c 239 */;
	struct btrfs_trans_handle *cocci_id/* fs/btrfs/super.c 238 */;
	void cocci_id/* fs/btrfs/super.c 238 */;
	const char cocci_id/* fs/btrfs/super.c 2328 */[];
	void __init cocci_id/* fs/btrfs/super.c 2326 */;
	int __init cocci_id/* fs/btrfs/super.c 2316 */;
	struct miscdevice cocci_id/* fs/btrfs/super.c 2307 */;
	const struct file_operations cocci_id/* fs/btrfs/super.c 2299 */;
	struct list_head *cocci_id/* fs/btrfs/super.c 2251 */;
	struct seq_file *cocci_id/* fs/btrfs/super.c 2246 */;
	struct btrfs_root *cocci_id/* fs/btrfs/super.c 2219 */;
	void __user *cocci_id/* fs/btrfs/super.c 2177 */;
	struct btrfs_ioctl_vol_args *cocci_id/* fs/btrfs/super.c 2170 */;
	unsigned long cocci_id/* fs/btrfs/super.c 2168 */;
	struct file *cocci_id/* fs/btrfs/super.c 2167 */;
	long cocci_id/* fs/btrfs/super.c 2167 */;
	struct inode *cocci_id/* fs/btrfs/super.c 2153 */;
	struct btrfs_block_rsv *cocci_id/* fs/btrfs/super.c 2035 */;
	__be32 *cocci_id/* fs/btrfs/super.c 2033 */;
	struct btrfs_space_info *cocci_id/* fs/btrfs/super.c 2028 */;
	struct btrfs_super_block *cocci_id/* fs/btrfs/super.c 2027 */;
	struct kstatfs *cocci_id/* fs/btrfs/super.c 2024 */;
	struct ratelimit_state *cocci_id/* fs/btrfs/super.c 197 */;
	char cocci_id/* fs/btrfs/super.c 192 */[PRINTK_MAX_SINGLE_HEADER_LEN + 1];
	const struct btrfs_raid_attr *cocci_id/* fs/btrfs/super.c 1908 */;
	u64 cocci_id/* fs/btrfs/super.c 1903 */;
	struct btrfs_device *cocci_id/* fs/btrfs/super.c 1902 */;
	struct btrfs_fs_devices *cocci_id/* fs/btrfs/super.c 1901 */;
	struct btrfs_device_info *cocci_id/* fs/btrfs/super.c 1900 */;
	const struct btrfs_fs_info *cocci_id/* fs/btrfs/super.c 190 */;
	void __cold cocci_id/* fs/btrfs/super.c 190 */;
	u64 *cocci_id/* fs/btrfs/super.c 1898 */;
	struct btrfs_device_info cocci_id/* fs/btrfs/super.c 1889 */;
	size_t cocci_id/* fs/btrfs/super.c 1887 */;
	const void *cocci_id/* fs/btrfs/super.c 1868 */;
	struct ratelimit_state cocci_id/* fs/btrfs/super.c 179 */[];
	u32 cocci_id/* fs/btrfs/super.c 1727 */;
	unsigned cocci_id/* fs/btrfs/super.c 1723 */;
	int *cocci_id/* fs/btrfs/super.c 1719 */;
	const char *const cocci_id/* fs/btrfs/super.c 163 */[];
	struct vfsmount *cocci_id/* fs/btrfs/super.c 1607 */;
	struct file_system_type *cocci_id/* fs/btrfs/super.c 1604 */;
	struct dentry *cocci_id/* fs/btrfs/super.c 1604 */;
	struct btrfs_fs_info cocci_id/* fs/btrfs/super.c 1503 */;
	fmode_t cocci_id/* fs/btrfs/super.c 1485 */;
	struct block_device *cocci_id/* fs/btrfs/super.c 1479 */;
	va_list cocci_id/* fs/btrfs/super.c 121 */;
	struct va_format cocci_id/* fs/btrfs/super.c 120 */;
	struct btrfs_key cocci_id/* fs/btrfs/super.c 1191 */;
	void *cocci_id/* fs/btrfs/super.c 1187 */;
	struct btrfs_path *cocci_id/* fs/btrfs/super.c 1148 */;
	struct btrfs_dir_item *cocci_id/* fs/btrfs/super.c 1147 */;
	struct btrfs_inode_ref cocci_id/* fs/btrfs/super.c 1114 */;
	struct btrfs_root_ref cocci_id/* fs/btrfs/super.c 1064 */;
	struct super_block *cocci_id/* fs/btrfs/super.c 105 */;
	struct btrfs_inode_ref *cocci_id/* fs/btrfs/super.c 1014 */;
	struct btrfs_root_ref *cocci_id/* fs/btrfs/super.c 1013 */;
}
