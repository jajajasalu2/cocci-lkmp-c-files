cocci_test_suite() {
	void *cocci_id/* kernel/audit_fsnotify.c 87 */;
	struct inode *cocci_id/* kernel/audit_fsnotify.c 79 */;
	struct dentry *cocci_id/* kernel/audit_fsnotify.c 78 */;
	struct path cocci_id/* kernel/audit_fsnotify.c 77 */;
	struct audit_krule *cocci_id/* kernel/audit_fsnotify.c 74 */;
	struct audit_fsnotify_mark *cocci_id/* kernel/audit_fsnotify.c 74 */;
	char *cocci_id/* kernel/audit_fsnotify.c 74 */;
	int cocci_id/* kernel/audit_fsnotify.c 74 */;
	dev_t cocci_id/* kernel/audit_fsnotify.c 60 */;
	unsigned long cocci_id/* kernel/audit_fsnotify.c 60 */;
	struct audit_fsnotify_mark cocci_id/* kernel/audit_fsnotify.c 51 */;
	struct fsnotify_mark *cocci_id/* kernel/audit_fsnotify.c 47 */;
	struct fsnotify_group *cocci_id/* kernel/audit_fsnotify.c 35 */;
	struct audit_fsnotify_mark {
		dev_t dev;
		unsigned long ino;
		char *path;
		struct fsnotify_mark mark;
		struct audit_krule *rule;
	} cocci_id/* kernel/audit_fsnotify.c 26 */;
	int __init cocci_id/* kernel/audit_fsnotify.c 196 */;
	const struct fsnotify_ops cocci_id/* kernel/audit_fsnotify.c 191 */;
	const struct path *cocci_id/* kernel/audit_fsnotify.c 171 */;
	const struct inode *cocci_id/* kernel/audit_fsnotify.c 163 */;
	struct fsnotify_iter_info *cocci_id/* kernel/audit_fsnotify.c 159 */;
	const struct qstr *cocci_id/* kernel/audit_fsnotify.c 158 */;
	u32 cocci_id/* kernel/audit_fsnotify.c 157 */;
	const void *cocci_id/* kernel/audit_fsnotify.c 157 */;
	struct audit_entry cocci_id/* kernel/audit_fsnotify.c 148 */;
	struct audit_entry *cocci_id/* kernel/audit_fsnotify.c 148 */;
	void cocci_id/* kernel/audit_fsnotify.c 145 */;
	struct audit_buffer *cocci_id/* kernel/audit_fsnotify.c 116 */;
}
