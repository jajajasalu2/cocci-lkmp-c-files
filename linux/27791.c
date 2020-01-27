cocci_test_suite() {
	struct attribute *cocci_id/* fs/ocfs2/filecheck.c 93 */[];
	struct kobj_attribute cocci_id/* fs/ocfs2/filecheck.c 81 */;
	ssize_t cocci_id/* fs/ocfs2/filecheck.c 78 */(struct kobject *kobj,
						      struct kobj_attribute *attr,
						      const char *buf,
						      size_t count);
	ssize_t cocci_id/* fs/ocfs2/filecheck.c 75 */(struct kobject *kobj,
						      struct kobj_attribute *attr,
						      char *buf);
	struct ocfs2_filecheck_args {
		unsigned int fa_type;
		union {
			unsigned long fa_ino;
			unsigned int fa_len;
		};
	} cocci_id/* fs/ocfs2/filecheck.c 56 */;
	struct ocfs2_filecheck_entry {
		struct list_head fe_list;
		unsigned long fe_ino;
		unsigned int fe_type;
		unsigned int fe_done:1;
		unsigned int fe_status:31;
	} cocci_id/* fs/ocfs2/filecheck.c 48 */;
	struct ocfs2_filecheck_entry cocci_id/* fs/ocfs2/filecheck.c 472 */;
	struct ocfs2_filecheck_args cocci_id/* fs/ocfs2/filecheck.c 456 */;
	struct ocfs2_super cocci_id/* fs/ocfs2/filecheck.c 436 */;
	long cocci_id/* fs/ocfs2/filecheck.c 420 */;
	struct inode *cocci_id/* fs/ocfs2/filecheck.c 415 */;
	void cocci_id/* fs/ocfs2/filecheck.c 400 */;
	const char *const cocci_id/* fs/ocfs2/filecheck.c 34 */[];
	struct ocfs2_filecheck_sysfs_entry cocci_id/* fs/ocfs2/filecheck.c 308 */;
	struct ocfs2_filecheck_entry *cocci_id/* fs/ocfs2/filecheck.c 306 */;
	char *cocci_id/* fs/ocfs2/filecheck.c 301 */;
	struct kobj_attribute *cocci_id/* fs/ocfs2/filecheck.c 300 */;
	struct kobject *cocci_id/* fs/ocfs2/filecheck.c 299 */;
	ssize_t cocci_id/* fs/ocfs2/filecheck.c 299 */;
	unsigned long cocci_id/* fs/ocfs2/filecheck.c 275 */;
	struct ocfs2_filecheck_args *cocci_id/* fs/ocfs2/filecheck.c 273 */;
	unsigned int *cocci_id/* fs/ocfs2/filecheck.c 257 */;
	char cocci_id/* fs/ocfs2/filecheck.c 245 */[OCFS2_FILECHECK_ARGS_LEN];
	unsigned long *cocci_id/* fs/ocfs2/filecheck.c 243 */;
	const char *cocci_id/* fs/ocfs2/filecheck.c 242 */;
	size_t cocci_id/* fs/ocfs2/filecheck.c 242 */;
	unsigned int cocci_id/* fs/ocfs2/filecheck.c 213 */;
	struct ocfs2_filecheck_sysfs_entry *cocci_id/* fs/ocfs2/filecheck.c 212 */;
	int cocci_id/* fs/ocfs2/filecheck.c 211 */;
	int cocci_id/* fs/ocfs2/filecheck.c 208 */(struct ocfs2_filecheck_sysfs_entry *ent,
						   unsigned int count);
	struct ocfs2_filecheck cocci_id/* fs/ocfs2/filecheck.c 173 */;
	struct ocfs2_filecheck *cocci_id/* fs/ocfs2/filecheck.c 170 */;
	struct ocfs2_super *cocci_id/* fs/ocfs2/filecheck.c 167 */;
	struct kobj_type cocci_id/* fs/ocfs2/filecheck.c 142 */;
	const struct sysfs_ops cocci_id/* fs/ocfs2/filecheck.c 137 */;
	struct attribute *cocci_id/* fs/ocfs2/filecheck.c 109 */;
}
