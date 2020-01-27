cocci_test_suite() {
	struct super_block *cocci_id/* fs/f2fs/sysfs.c 753 */;
	block_t cocci_id/* fs/f2fs/sysfs.c 75 */;
	void cocci_id/* fs/f2fs/sysfs.c 743 */;
	int __init cocci_id/* fs/f2fs/sysfs.c 724 */;
	struct dirty_seglist_info *cocci_id/* fs/f2fs/sysfs.c 707 */;
	unsigned long long cocci_id/* fs/f2fs/sysfs.c 69 */;
	time64_t cocci_id/* fs/f2fs/sysfs.c 664 */;
	void *cocci_id/* fs/f2fs/sysfs.c 660 */;
	struct seq_file *cocci_id/* fs/f2fs/sysfs.c 659 */;
	int __maybe_unused cocci_id/* fs/f2fs/sysfs.c 659 */;
	struct seg_entry *cocci_id/* fs/f2fs/sysfs.c 648 */;
	struct kobject cocci_id/* fs/f2fs/sysfs.c 604 */;
	struct kobj_type cocci_id/* fs/f2fs/sysfs.c 599 */;
	struct kset cocci_id/* fs/f2fs/sysfs.c 595 */;
	const struct sysfs_ops cocci_id/* fs/f2fs/sysfs.c 580 */;
	struct attribute *cocci_id/* fs/f2fs/sysfs.c 508 */[];
	int cocci_id/* fs/f2fs/sysfs.c 45 */;
	struct struct_name cocci_id/* fs/f2fs/sysfs.c 428 */;
	enum feat_id{FEAT_CRYPTO=0, FEAT_BLKZONED, FEAT_ATOMIC_WRITE, FEAT_EXTRA_ATTR, FEAT_PROJECT_QUOTA, FEAT_INODE_CHECKSUM, FEAT_FLEXIBLE_INLINE_XATTR, FEAT_QUOTA_INO, FEAT_INODE_CRTIME, FEAT_LOST_FOUND, FEAT_VERITY, FEAT_SB_CHECKSUM, FEAT_CASEFOLD,} cocci_id/* fs/f2fs/sysfs.c 378 */;
	struct f2fs_attr cocci_id/* fs/f2fs/sysfs.c 356 */;
	struct f2fs_sb_info cocci_id/* fs/f2fs/sysfs.c 354 */;
	struct attribute *cocci_id/* fs/f2fs/sysfs.c 352 */;
	struct kobject *cocci_id/* fs/f2fs/sysfs.c 351 */;
	struct f2fs_attr {
		struct attribute attr;
		ssize_t (*show)(struct f2fs_attr *, struct f2fs_sb_info *,
				char *);
		ssize_t (*store)(struct f2fs_attr *, struct f2fs_sb_info *,
				 const char *, size_t);
		int struct_type;
		int offset;
		int id;
	} cocci_id/* fs/f2fs/sysfs.c 35 */;
	unsigned int cocci_id/* fs/f2fs/sysfs.c 327 */;
	bool cocci_id/* fs/f2fs/sysfs.c 220 */;
	enum{GC_THREAD, SM_INFO, DCC_INFO, NM_INFO, F2FS_SBI,

#ifdef CONFIG_F2FS_FAULT_INJECTION
 FAULT_INFO_RATE, FAULT_INFO_TYPE,

#endif
 RESERVED_BLOCKS,} cocci_id/* fs/f2fs/sysfs.c 22 */;
	char *cocci_id/* fs/f2fs/sysfs.c 219 */;
	unsigned int *cocci_id/* fs/f2fs/sysfs.c 211 */;
	unsigned long cocci_id/* fs/f2fs/sysfs.c 210 */;
	unsigned char *cocci_id/* fs/f2fs/sysfs.c 209 */;
	const char *cocci_id/* fs/f2fs/sysfs.c 207 */;
	size_t cocci_id/* fs/f2fs/sysfs.c 207 */;
	struct f2fs_sb_info *cocci_id/* fs/f2fs/sysfs.c 206 */;
	struct f2fs_attr *cocci_id/* fs/f2fs/sysfs.c 205 */;
	ssize_t cocci_id/* fs/f2fs/sysfs.c 205 */;
	struct proc_dir_entry *cocci_id/* fs/f2fs/sysfs.c 19 */;
}
