cocci_test_suite() {
	void cocci_id/* fs/ext4/sysfs.c 468 */;
	struct ext4_attr {
		struct attribute attr;
		short attr_id;
		short attr_ptr;
		union {
			int offset;
			void *explicit_ptr;
		} u;
	} cocci_id/* fs/ext4/sysfs.c 45 */;
	int __init cocci_id/* fs/ext4/sysfs.c 437 */;
	struct proc_dir_entry *cocci_id/* fs/ext4/sysfs.c 43 */;
	const char cocci_id/* fs/ext4/sysfs.c 42 */[];
	struct super_block *cocci_id/* fs/ext4/sysfs.c 400 */;
	void (*cocci_id/* fs/ext4/sysfs.c 393 */)(struct kobject *);
	struct kobj_type cocci_id/* fs/ext4/sysfs.c 390 */;
	const struct sysfs_ops cocci_id/* fs/ext4/sysfs.c 379 */;
	__le32 *cocci_id/* fs/ext4/sysfs.c 360 */;
	enum{ptr_explicit, ptr_ext4_sb_info_offset, ptr_ext4_super_block_offset,} cocci_id/* fs/ext4/sysfs.c 36 */;
	int cocci_id/* fs/ext4/sysfs.c 348 */;
	unsigned long cocci_id/* fs/ext4/sysfs.c 347 */;
	const char *cocci_id/* fs/ext4/sysfs.c 341 */;
	size_t cocci_id/* fs/ext4/sysfs.c 341 */;
	atomic_t *cocci_id/* fs/ext4/sysfs.c 325 */;
	unsigned int *cocci_id/* fs/ext4/sysfs.c 320 */;
	unsigned long long cocci_id/* fs/ext4/sysfs.c 309 */;
	s64 cocci_id/* fs/ext4/sysfs.c 301 */;
	struct ext4_attr cocci_id/* fs/ext4/sysfs.c 295 */;
	struct ext4_sb_info cocci_id/* fs/ext4/sysfs.c 293 */;
	struct attribute *cocci_id/* fs/ext4/sysfs.c 291 */;
	struct kobject *cocci_id/* fs/ext4/sysfs.c 290 */;
	time64_t cocci_id/* fs/ext4/sysfs.c 284 */;
	__u8 cocci_id/* fs/ext4/sysfs.c 281 */;
	__le32 cocci_id/* fs/ext4/sysfs.c 281 */;
	char *cocci_id/* fs/ext4/sysfs.c 281 */;
	ssize_t cocci_id/* fs/ext4/sysfs.c 281 */;
	struct ext4_sb_info *cocci_id/* fs/ext4/sysfs.c 268 */;
	struct ext4_attr *cocci_id/* fs/ext4/sysfs.c 268 */;
	void *cocci_id/* fs/ext4/sysfs.c 268 */;
	struct attribute *cocci_id/* fs/ext4/sysfs.c 205 */[];
	unsigned int cocci_id/* fs/ext4/sysfs.c 202 */;
	enum{attr_noop, attr_delayed_allocation_blocks, attr_session_write_kbytes, attr_lifetime_write_kbytes, attr_reserved_clusters, attr_inode_readahead, attr_trigger_test_error, attr_first_error_time, attr_last_error_time, attr_feature, attr_pointer_ui, attr_pointer_atomic, attr_journal_task,} cocci_id/* fs/ext4/sysfs.c 20 */;
	ext4_fsblk_t cocci_id/* fs/ext4/sysfs.c 101 */;
}
