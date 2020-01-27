cocci_test_suite() {
	struct av_decision cocci_id/* security/selinux/selinuxfs.c 815 */;
	ssize_t (*cocci_id/* security/selinux/selinuxfs.c 765 */[])(struct file *,
								    char *,
								    size_t);
	ssize_t cocci_id/* security/selinux/selinuxfs.c 759 */(struct file *file,
							       char *buf,
							       size_t size);
	struct selinux_fs_info {
		struct dentry *bool_dir;
		unsigned int bool_num;
		char **bool_pending_names;
		unsigned int *bool_pending_values;
		struct dentry *class_dir;
		unsigned long last_class_ino;
		bool policy_opened;
		struct dentry *policycap_dir;
		struct mutex mutex;
		unsigned long last_ino;
		struct selinux_state *state;
		struct super_block *sb;
	} cocci_id/* security/selinux/selinuxfs.c 68 */;
	const struct vm_operations_struct cocci_id/* security/selinux/selinuxfs.c 476 */;
	struct policy_load_memory *cocci_id/* security/selinux/selinuxfs.c 457 */;
	vm_fault_t cocci_id/* security/selinux/selinuxfs.c 455 */;
	struct vm_fault *cocci_id/* security/selinux/selinuxfs.c 455 */;
	enum sel_inos{SEL_ROOT_INO=2, SEL_LOAD, SEL_ENFORCE, SEL_CONTEXT, SEL_ACCESS, SEL_CREATE, SEL_RELABEL, SEL_USER, SEL_POLICYVERS, SEL_COMMIT_BOOLS, SEL_MLS, SEL_DISABLE, SEL_MEMBER, SEL_CHECKREQPROT, SEL_COMPAT_NET, SEL_REJECT_UNKNOWN, SEL_DENY_UNKNOWN, SEL_STATUS, SEL_POLICY, SEL_VALIDATE_TRANS, SEL_INO_NEXT,} cocci_id/* security/selinux/selinuxfs.c 44 */;
	struct selinux_state *cocci_id/* security/selinux/selinuxfs.c 376 */;
	struct policy_load_memory {
		size_t len;
		void *data;
	} cocci_id/* security/selinux/selinuxfs.c 368 */;
	struct dentry *cocci_id/* security/selinux/selinuxfs.c 348 */(struct dentry *dir,
								      const char *name,
								      unsigned long *ino);
	int cocci_id/* security/selinux/selinuxfs.c 343 */(struct selinux_fs_info *fsi);
	struct page *cocci_id/* security/selinux/selinuxfs.c 248 */;
	struct vm_area_struct *cocci_id/* security/selinux/selinuxfs.c 246 */;
	struct selinux_kernel_status cocci_id/* security/selinux/selinuxfs.c 242 */;
	void cocci_id/* security/selinux/selinuxfs.c 2076 */;
	ino_t cocci_id/* security/selinux/selinuxfs.c 206 */;
	int cocci_id/* security/selinux/selinuxfs.c 2041 */;
	struct qstr cocci_id/* security/selinux/selinuxfs.c 2039 */;
	int __init cocci_id/* security/selinux/selinuxfs.c 2037 */;
	struct path cocci_id/* security/selinux/selinuxfs.c 2035 */;
	struct vfsmount *cocci_id/* security/selinux/selinuxfs.c 2034 */;
	struct file_system_type cocci_id/* security/selinux/selinuxfs.c 2028 */;
	const struct fs_context_operations cocci_id/* security/selinux/selinuxfs.c 2012 */;
	const struct tree_descr cocci_id/* security/selinux/selinuxfs.c 1899 */[];
	struct inode_security_struct *cocci_id/* security/selinux/selinuxfs.c 1897 */;
	struct inode *cocci_id/* security/selinux/selinuxfs.c 1896 */;
	struct dentry *cocci_id/* security/selinux/selinuxfs.c 1895 */;
	struct super_block *cocci_id/* security/selinux/selinuxfs.c 1891 */;
	struct fs_context *cocci_id/* security/selinux/selinuxfs.c 1891 */;
	unsigned long *cocci_id/* security/selinux/selinuxfs.c 1863 */;
	const char *cocci_id/* security/selinux/selinuxfs.c 1862 */;
	u32 cocci_id/* security/selinux/selinuxfs.c 1665 */;
	u16 cocci_id/* security/selinux/selinuxfs.c 1650 */;
	unsigned long cocci_id/* security/selinux/selinuxfs.c 1650 */;
	const struct file_operations cocci_id/* security/selinux/selinuxfs.c 1558 */;
	const struct seq_operations cocci_id/* security/selinux/selinuxfs.c 1546 */;
	unsigned int cocci_id/* security/selinux/selinuxfs.c 1533 */;
	struct seq_file *cocci_id/* security/selinux/selinuxfs.c 1520 */;
	void *cocci_id/* security/selinux/selinuxfs.c 1520 */;
	loff_t cocci_id/* security/selinux/selinuxfs.c 1512 */;
	loff_t *cocci_id/* security/selinux/selinuxfs.c 1497 */;
	struct avc_cache_stats *cocci_id/* security/selinux/selinuxfs.c 1497 */;
	char cocci_id/* security/selinux/selinuxfs.c 1416 */[TMPBUFLEN];
	char __user *cocci_id/* security/selinux/selinuxfs.c 1411 */;
	int *cocci_id/* security/selinux/selinuxfs.c 1332 */;
	char **cocci_id/* security/selinux/selinuxfs.c 1330 */;
	char *cocci_id/* security/selinux/selinuxfs.c 1267 */;
	struct selinux_fs_info *cocci_id/* security/selinux/selinuxfs.c 1266 */;
	size_t cocci_id/* security/selinux/selinuxfs.c 1264 */;
	const char __user *cocci_id/* security/selinux/selinuxfs.c 1263 */;
	struct file *cocci_id/* security/selinux/selinuxfs.c 1262 */;
	ssize_t cocci_id/* security/selinux/selinuxfs.c 1262 */;
	unsigned cocci_id/* security/selinux/selinuxfs.c 1172 */;
}
