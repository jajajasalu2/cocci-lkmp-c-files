cocci_test_suite() {
	void *cocci_id/* lib/debugobjects.c 965 */;
	struct kmem_cache *cocci_id/* lib/debugobjects.c 94 */;
	int cocci_id/* lib/debugobjects.c 938 */;
	struct hlist_node *cocci_id/* lib/debugobjects.c 936 */;
	struct debug_bucket *cocci_id/* lib/debugobjects.c 935 */;
	enum debug_obj_state cocci_id/* lib/debugobjects.c 934 */;
	struct debug_obj_descr *cocci_id/* lib/debugobjects.c 933 */;
	const void *cocci_id/* lib/debugobjects.c 930 */;
	unsigned long cocci_id/* lib/debugobjects.c 930 */;
	void cocci_id/* lib/debugobjects.c 930 */;
	unsigned int cocci_id/* lib/debugobjects.c 886 */;
	int __maybe_unused cocci_id/* lib/debugobjects.c 84 */;
	struct debug_obj cocci_id/* lib/debugobjects.c 623 */;
	struct debug_obj cocci_id/* lib/debugobjects.c 61 */[ODEBUG_POOL_SIZE]__initdata;
	struct debug_bucket cocci_id/* lib/debugobjects.c 59 */[ODEBUG_HASH_SIZE];
	bool cocci_id/* lib/debugobjects.c 531 */;
	struct debug_percpu_free {
		struct hlist_head free_objs;
		int obj_free;
	} cocci_id/* lib/debugobjects.c 52 */;
	bool (*cocci_id/* lib/debugobjects.c 494 */)(void *addr,
						     enum debug_obj_state state);
	char *cocci_id/* lib/debugobjects.c 472 */;
	struct debug_bucket {
		struct hlist_head list;
		raw_spinlock_t lock;
	} cocci_id/* lib/debugobjects.c 43 */;
	struct debug_percpu_free *cocci_id/* lib/debugobjects.c 340 */;
	struct debug_obj *cocci_id/* lib/debugobjects.c 339 */[ODEBUG_BATCH_SIZE];
	struct work_struct *cocci_id/* lib/debugobjects.c 287 */;
	typeof(*obj) cocci_id/* lib/debugobjects.c 210 */;
	struct hlist_head *cocci_id/* lib/debugobjects.c 205 */;
	struct debug_obj *cocci_id/* lib/debugobjects.c 205 */;
	gfp_t cocci_id/* lib/debugobjects.c 131 */;
	void __init cocci_id/* lib/debugobjects.c 1277 */;
	const char *cocci_id/* lib/debugobjects.c 120 */[ODEBUG_STATE_MAX];
	struct self_test cocci_id/* lib/debugobjects.c 1196 */;
	int __init cocci_id/* lib/debugobjects.c 1147 */;
	struct self_test *cocci_id/* lib/debugobjects.c 1096 */;
	bool __init cocci_id/* lib/debugobjects.c 1094 */;
	struct debug_obj_descr cocci_id/* lib/debugobjects.c 1062 */;
	struct self_test {
		unsigned long dummy1[6];
		int static_init;
		unsigned long dummy2[3];
	} cocci_id/* lib/debugobjects.c 1056 */;
	struct dentry *cocci_id/* lib/debugobjects.c 1036 */;
	int __init cocci_id/* lib/debugobjects.c 1034 */;
	const struct file_operations cocci_id/* lib/debugobjects.c 1027 */;
	struct inode *cocci_id/* lib/debugobjects.c 1022 */;
	struct file *cocci_id/* lib/debugobjects.c 1022 */;
	void cocci_id/* lib/debugobjects.c 102 */(struct work_struct *work);
	struct seq_file *cocci_id/* lib/debugobjects.c 1000 */;
	__typeof__(struct debug_percpu_free) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
