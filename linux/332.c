cocci_test_suite() {
	struct list_head *cocci_id/* kernel/audit_tree.c 979 */;
	struct audit_context *cocci_id/* kernel/audit_tree.c 977 */;
	struct audit_tree cocci_id/* kernel/audit_tree.c 97 */;
	const char *cocci_id/* kernel/audit_tree.c 93 */;
	struct audit_tree *cocci_id/* kernel/audit_tree.c 93 */;
	struct kmem_cache *cocci_id/* kernel/audit_tree.c 91 */;
	struct list_head cocci_id/* kernel/audit_tree.c 874 */;
	struct node *cocci_id/* kernel/audit_tree.c 845 */;
	struct vfsmount *cocci_id/* kernel/audit_tree.c 806 */;
	struct path cocci_id/* kernel/audit_tree.c 805 */;
	struct audit_krule *cocci_id/* kernel/audit_tree.c 802 */;
	u32 cocci_id/* kernel/audit_tree.c 728 */;
	char *cocci_id/* kernel/audit_tree.c 728 */;
	void *cocci_id/* kernel/audit_tree.c 713 */;
	void cocci_id/* kernel/audit_tree.c 646 */(void);
	struct audit_entry cocci_id/* kernel/audit_tree.c 550 */;
	struct audit_entry *cocci_id/* kernel/audit_tree.c 547 */;
	struct audit_buffer *cocci_id/* kernel/audit_tree.c 530 */;
	struct task_struct *cocci_id/* kernel/audit_tree.c 47 */;
	struct audit_tree_mark {
		struct fsnotify_mark mark;
		struct audit_chunk *chunk;
	} cocci_id/* kernel/audit_tree.c 40 */;
	bool cocci_id/* kernel/audit_tree.c 263 */;
	struct audit_chunk {
		struct list_head hash;
		unsigned long key;
		struct fsnotify_mark *mark;
		struct list_head trees;
		int count;
		atomic_long_t refs;
		struct rcu_head head;
		struct node {
			struct list_head list;
			struct audit_tree *owner;
			unsigned index;
		} owners[];
	} cocci_id/* kernel/audit_tree.c 25 */;
	unsigned long cocci_id/* kernel/audit_tree.c 246 */;
	const struct inode *cocci_id/* kernel/audit_tree.c 244 */;
	struct list_head cocci_id/* kernel/audit_tree.c 211 */[HASH_SIZE];
	enum{HASH_SIZE=128,} cocci_id/* kernel/audit_tree.c 210 */;
	struct node cocci_id/* kernel/audit_tree.c 194 */;
	size_t cocci_id/* kernel/audit_tree.c 191 */;
	int cocci_id/* kernel/audit_tree.c 188 */;
	struct audit_tree_mark *cocci_id/* kernel/audit_tree.c 178 */;
	struct fsnotify_mark *cocci_id/* kernel/audit_tree.c 176 */;
	struct audit_tree_mark cocci_id/* kernel/audit_tree.c 163 */;
	struct audit_chunk cocci_id/* kernel/audit_tree.c 147 */;
	struct audit_chunk *cocci_id/* kernel/audit_tree.c 147 */;
	struct rcu_head *cocci_id/* kernel/audit_tree.c 145 */;
	void cocci_id/* kernel/audit_tree.c 145 */;
	struct audit_tree {
		refcount_t count;
		int goner;
		struct audit_chunk *root;
		struct list_head chunks;
		struct list_head rules;
		struct list_head list;
		struct list_head same_root;
		struct rcu_head head;
		char pathname[];
	} cocci_id/* kernel/audit_tree.c 13 */;
	int __init cocci_id/* kernel/audit_tree.c 1078 */;
	const struct fsnotify_ops cocci_id/* kernel/audit_tree.c 1072 */;
	struct fsnotify_group *cocci_id/* kernel/audit_tree.c 1050 */;
	struct fsnotify_iter_info *cocci_id/* kernel/audit_tree.c 1044 */;
	const struct qstr *cocci_id/* kernel/audit_tree.c 1043 */;
	const void *cocci_id/* kernel/audit_tree.c 1042 */;
	struct inode *cocci_id/* kernel/audit_tree.c 1041 */;
}