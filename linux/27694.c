cocci_test_suite() {
	struct pts_mount_opts {
		int setuid;
		int setgid;
		kuid_t uid;
		kgid_t gid;
		umode_t mode;
		umode_t ptmxmode;
		int reserve;
		int max;
	} cocci_id/* fs/devpts/inode.c 93 */;
	struct ctl_table cocci_id/* fs/devpts/inode.c 75 */[];
	int __init cocci_id/* fs/devpts/inode.c 629 */;
	struct dentry *cocci_id/* fs/devpts/inode.c 605 */;
	char cocci_id/* fs/devpts/inode.c 569 */[12];
	struct pts_mount_opts *cocci_id/* fs/devpts/inode.c 568 */;
	void cocci_id/* fs/devpts/inode.c 547 */;
	struct file_system_type cocci_id/* fs/devpts/inode.c 518 */;
	const char *cocci_id/* fs/devpts/inode.c 503 */;
	struct file_system_type *cocci_id/* fs/devpts/inode.c 502 */;
	atomic_t cocci_id/* fs/devpts/inode.c 46 */;
	struct inode *cocci_id/* fs/devpts/inode.c 447 */;
	void *cocci_id/* fs/devpts/inode.c 445 */;
	struct pts_fs_info cocci_id/* fs/devpts/inode.c 432 */;
	const struct super_operations cocci_id/* fs/devpts/inode.c 422 */;
	struct seq_file *cocci_id/* fs/devpts/inode.c 403 */;
	int *cocci_id/* fs/devpts/inode.c 384 */;
	char *cocci_id/* fs/devpts/inode.c 384 */;
	kgid_t cocci_id/* fs/devpts/inode.c 332 */;
	kuid_t cocci_id/* fs/devpts/inode.c 331 */;
	substring_t cocci_id/* fs/devpts/inode.c 268 */[MAX_OPT_ARGS];
	int cocci_id/* fs/devpts/inode.c 210 */;
	struct path cocci_id/* fs/devpts/inode.c 202 */;
	struct file *cocci_id/* fs/devpts/inode.c 199 */;
	struct vfsmount *cocci_id/* fs/devpts/inode.c 168 */;
	struct path *cocci_id/* fs/devpts/inode.c 131 */;
	struct super_block *cocci_id/* fs/devpts/inode.c 126 */;
	struct pts_fs_info *cocci_id/* fs/devpts/inode.c 126 */;
	struct pts_fs_info {
		struct ida allocated_ptys;
		struct pts_mount_opts mount_opts;
		struct super_block *sb;
		struct dentry *ptmx_dentry;
	} cocci_id/* fs/devpts/inode.c 119 */;
	const match_table_t cocci_id/* fs/devpts/inode.c 109 */;
	enum{Opt_uid, Opt_gid, Opt_mode, Opt_ptmxmode, Opt_newinstance, Opt_max, Opt_err,} cocci_id/* fs/devpts/inode.c 104 */;
}
