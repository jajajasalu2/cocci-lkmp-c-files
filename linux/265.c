cocci_test_suite() {
	struct audit_parent cocci_id/* kernel/audit_watch.c 95 */;
	struct fsnotify_mark *cocci_id/* kernel/audit_watch.c 91 */;
	struct inode *cocci_id/* kernel/audit_watch.c 88 */;
	dev_t cocci_id/* kernel/audit_watch.c 545 */;
	unsigned long cocci_id/* kernel/audit_watch.c 544 */;
	struct file *cocci_id/* kernel/audit_watch.c 543 */;
	struct task_struct *cocci_id/* kernel/audit_watch.c 541 */;
	char *cocci_id/* kernel/audit_watch.c 525 */;
	struct audit_fsnotify_mark *cocci_id/* kernel/audit_watch.c 524 */;
	struct fsnotify_group *cocci_id/* kernel/audit_watch.c 52 */;
	int __init cocci_id/* kernel/audit_watch.c 511 */;
	const struct fsnotify_ops cocci_id/* kernel/audit_watch.c 506 */;
	const struct path *cocci_id/* kernel/audit_watch.c 485 */;
	const struct inode *cocci_id/* kernel/audit_watch.c 476 */;
	struct fsnotify_iter_info *cocci_id/* kernel/audit_watch.c 473 */;
	const void *cocci_id/* kernel/audit_watch.c 471 */;
	struct audit_parent {
		struct list_head watches;
		struct fsnotify_mark mark;
	} cocci_id/* kernel/audit_watch.c 46 */;
	u32 cocci_id/* kernel/audit_watch.c 440 */;
	struct path cocci_id/* kernel/audit_watch.c 405 */;
	struct list_head **cocci_id/* kernel/audit_watch.c 401 */;
	int cocci_id/* kernel/audit_watch.c 370 */;
	struct audit_watch *cocci_id/* kernel/audit_watch.c 369 */;
	struct audit_parent *cocci_id/* kernel/audit_watch.c 367 */;
	struct audit_krule *cocci_id/* kernel/audit_watch.c 366 */;
	void cocci_id/* kernel/audit_watch.c 366 */;
	struct audit_watch {
		refcount_t count;
		dev_t dev;
		char *path;
		unsigned long ino;
		struct audit_parent *parent;
		struct list_head wlist;
		struct list_head rules;
	} cocci_id/* kernel/audit_watch.c 36 */;
	struct dentry *cocci_id/* kernel/audit_watch.c 351 */;
	struct path *cocci_id/* kernel/audit_watch.c 349 */;
	struct audit_entry cocci_id/* kernel/audit_watch.c 332 */;
	struct audit_entry *cocci_id/* kernel/audit_watch.c 327 */;
	unsigned cocci_id/* kernel/audit_watch.c 246 */;
	const struct qstr *cocci_id/* kernel/audit_watch.c 245 */;
	struct audit_buffer *cocci_id/* kernel/audit_watch.c 228 */;
}
