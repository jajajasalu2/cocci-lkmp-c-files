cocci_test_suite() {
	int __init cocci_id/* fs/tracefs/inode.c 628 */;
	void cocci_id/* fs/tracefs/inode.c 628 */;
	bool cocci_id/* fs/tracefs/inode.c 623 */;
	char *cocci_id/* fs/tracefs/inode.c 55 */;
	tracefs_ops cocci_id/* fs/tracefs/inode.c 53 */;
	int cocci_id/* fs/tracefs/inode.c 502 */;
	int (*cocci_id/* fs/tracefs/inode.c 483 */)(const char *name);
	const struct file_operations cocci_id/* fs/tracefs/inode.c 43 */;
	struct inode *cocci_id/* fs/tracefs/inode.c 421 */;
	const struct inode_operations *cocci_id/* fs/tracefs/inode.c 418 */;
	const char *cocci_id/* fs/tracefs/inode.c 417 */;
	struct dentry *cocci_id/* fs/tracefs/inode.c 417 */;
	const struct file_operations *cocci_id/* fs/tracefs/inode.c 389 */;
	umode_t cocci_id/* fs/tracefs/inode.c 387 */;
	const char __user *cocci_id/* fs/tracefs/inode.c 37 */;
	loff_t *cocci_id/* fs/tracefs/inode.c 32 */;
	size_t cocci_id/* fs/tracefs/inode.c 32 */;
	struct file *cocci_id/* fs/tracefs/inode.c 31 */;
	char __user *cocci_id/* fs/tracefs/inode.c 31 */;
	ssize_t cocci_id/* fs/tracefs/inode.c 31 */;
	struct file_system_type cocci_id/* fs/tracefs/inode.c 304 */;
	struct file_system_type *cocci_id/* fs/tracefs/inode.c 297 */;
	struct tracefs_fs_info cocci_id/* fs/tracefs/inode.c 270 */;
	struct vfsmount *cocci_id/* fs/tracefs/inode.c 27 */;
	struct tracefs_fs_info *cocci_id/* fs/tracefs/inode.c 267 */;
	const struct tree_descr cocci_id/* fs/tracefs/inode.c 266 */[];
	struct super_block *cocci_id/* fs/tracefs/inode.c 264 */;
	void *cocci_id/* fs/tracefs/inode.c 264 */;
	const struct super_operations cocci_id/* fs/tracefs/inode.c 258 */;
	struct seq_file *cocci_id/* fs/tracefs/inode.c 241 */;
	int *cocci_id/* fs/tracefs/inode.c 225 */;
	struct tracefs_mount_opts *cocci_id/* fs/tracefs/inode.c 214 */;
	kgid_t cocci_id/* fs/tracefs/inode.c 168 */;
	kuid_t cocci_id/* fs/tracefs/inode.c 167 */;
	substring_t cocci_id/* fs/tracefs/inode.c 164 */[MAX_OPT_ARGS];
	struct tracefs_fs_info {
		struct tracefs_mount_opts mount_opts;
	} cocci_id/* fs/tracefs/inode.c 158 */;
	const match_table_t cocci_id/* fs/tracefs/inode.c 151 */;
	enum{Opt_uid, Opt_gid, Opt_mode, Opt_err,} cocci_id/* fs/tracefs/inode.c 144 */;
	struct tracefs_mount_opts {
		kuid_t uid;
		kgid_t gid;
		umode_t mode;
	} cocci_id/* fs/tracefs/inode.c 138 */;
	const struct inode_operations cocci_id/* fs/tracefs/inode.c 122 */;
}
