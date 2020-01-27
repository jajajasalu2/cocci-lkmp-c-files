cocci_test_suite() {
	struct tracer_stat cocci_id/* kernel/trace/ftrace.c 954 */;
	char cocci_id/* kernel/trace/ftrace.c 939 */[64];
	char __user *cocci_id/* kernel/trace/ftrace.c 936 */;
	struct fgraph_ops cocci_id/* kernel/trace/ftrace.c 858 */;
	struct ftrace_graph_ret *cocci_id/* kernel/trace/ftrace.c 815 */;
	struct ftrace_ret_stack *cocci_id/* kernel/trace/ftrace.c 800 */;
	struct ftrace_graph_ent *cocci_id/* kernel/trace/ftrace.c 798 */;
	enum{FTRACE_MODIFY_ENABLE_FL=(1 << 0), FTRACE_MODIFY_MAY_SLEEP_FL=(1 << 1),} cocci_id/* kernel/trace/ftrace.c 78 */;
	size_t *cocci_id/* kernel/trace/ftrace.c 7272 */;
	void __user *cocci_id/* kernel/trace/ftrace.c 7272 */;
	struct ctl_table *cocci_id/* kernel/trace/ftrace.c 7271 */;
	struct ftrace_profile *cocci_id/* kernel/trace/ftrace.c 717 */;
	struct ftrace_profile_stat *cocci_id/* kernel/trace/ftrace.c 716 */;
	struct trace_pid_list *cocci_id/* kernel/trace/ftrace.c 6968 */;
	struct task_struct *cocci_id/* kernel/trace/ftrace.c 6918 */;
	struct pt_regs *cocci_id/* kernel/trace/ftrace.c 6796 */;
	ftrace_func_t cocci_id/* kernel/trace/ftrace.c 6777 */;
	unsigned long cocci_id/* kernel/trace/ftrace.c 6689 */[];
	void __init cocci_id/* kernel/trace/ftrace.c 6679 */;
	struct ftrace_page cocci_id/* kernel/trace/ftrace.c 6661 */;
	struct hlist_head cocci_id/* kernel/trace/ftrace.c 665 */;
	struct list_head cocci_id/* kernel/trace/ftrace.c 6617 */;
	struct dyn_ftrace cocci_id/* kernel/trace/ftrace.c 6614 */;
	struct ftrace_page **cocci_id/* kernel/trace/ftrace.c 6611 */;
	struct ftrace_init_func *cocci_id/* kernel/trace/ftrace.c 6595 */;
	struct list_head *cocci_id/* kernel/trace/ftrace.c 6592 */;
	struct ftrace_init_func {
		struct list_head list;
		unsigned long ip;
	} cocci_id/* kernel/trace/ftrace.c 6554 */;
	unsigned int cocci_id/* kernel/trace/ftrace.c 6507 */;
	char **cocci_id/* kernel/trace/ftrace.c 6487 */;
	struct module *cocci_id/* kernel/trace/ftrace.c 6434 */;
	struct ftrace_mod_map *cocci_id/* kernel/trace/ftrace.c 6433 */;
	struct ftrace_mod_func *cocci_id/* kernel/trace/ftrace.c 6239 */;
	struct ftrace_mod_map cocci_id/* kernel/trace/ftrace.c 6238 */;
	struct ftrace_mod_map {
		struct rcu_head rcu;
		struct list_head list;
		struct module *mod;
		unsigned long start_addr;
		unsigned long end_addr;
		struct list_head funcs;
		unsigned int num_funcs;
	} cocci_id/* kernel/trace/ftrace.c 6167 */;
	struct ftrace_mod_func {
		struct list_head list;
		char *name;
		unsigned long ip;
		unsigned int size;
	} cocci_id/* kernel/trace/ftrace.c 6160 */;
	const unsigned long *cocci_id/* kernel/trace/ftrace.c 6051 */;
	const void *cocci_id/* kernel/trace/ftrace.c 6049 */;
	struct dentry *cocci_id/* kernel/trace/ftrace.c 5996 */;
	struct ftrace_profile_page *cocci_id/* kernel/trace/ftrace.c 592 */;
	struct ftrace_glob cocci_id/* kernel/trace/ftrace.c 5891 */;
	struct trace_parser *cocci_id/* kernel/trace/ftrace.c 5831 */;
	struct seq_file *cocci_id/* kernel/trace/ftrace.c 5744 */;
	const int cocci_id/* kernel/trace/ftrace.c 5725 */;
	struct ftrace_graph_data *cocci_id/* kernel/trace/ftrace.c 5715 */;
	struct inode *cocci_id/* kernel/trace/ftrace.c 5714 */;
	struct file *cocci_id/* kernel/trace/ftrace.c 5714 */;
	int cocci_id/* kernel/trace/ftrace.c 5713 */;
	const struct seq_operations cocci_id/* kernel/trace/ftrace.c 5706 */;
	loff_t *cocci_id/* kernel/trace/ftrace.c 5620 */;
	struct ftrace_graph_data {
		struct ftrace_hash *hash;
		struct ftrace_func_entry *entry;
		int idx;
		enum graph_filter_type type;
		struct ftrace_hash *new_hash;
		const struct seq_operations *seq_ops;
		struct trace_parser parser;
	} cocci_id/* kernel/trace/ftrace.c 5609 */;
	enum graph_filter_type{GRAPH_FILTER_NOTRACE=0, GRAPH_FILTER_FUNCTION,} cocci_id/* kernel/trace/ftrace.c 5602 */;
	const struct file_operations cocci_id/* kernel/trace/ftrace.c 5565 */;
	void __init cocci_id/* kernel/trace/ftrace.c 5486 */;
	int cocci_id/* kernel/trace/ftrace.c 5435 */(struct ftrace_hash *hash,
						     char *buffer);
	char cocci_id/* kernel/trace/ftrace.c 5411 */[FTRACE_FILTER_SIZE]__initdata;
	unsigned long long cocci_id/* kernel/trace/ftrace.c 517 */;
	struct trace_seq cocci_id/* kernel/trace/ftrace.c 516 */;
	struct dyn_ftrace **cocci_id/* kernel/trace/ftrace.c 5105 */;
	unsigned long *cocci_id/* kernel/trace/ftrace.c 5104 */;
	struct ftrace_direct_func *cocci_id/* kernel/trace/ftrace.c 4960 */;
	struct ftrace_direct_func {
		struct list_head next;
		unsigned long addr;
		int count;
	} cocci_id/* kernel/trace/ftrace.c 4939 */;
	size_t cocci_id/* kernel/trace/ftrace.c 4850 */;
	const char __user *cocci_id/* kernel/trace/ftrace.c 4849 */;
	ssize_t cocci_id/* kernel/trace/ftrace.c 4848 */;
	struct ftrace_func_command *cocci_id/* kernel/trace/ftrace.c 4778 */;
	const struct ftrace_profile *cocci_id/* kernel/trace/ftrace.c 470 */;
	struct ftrace_profile_stat cocci_id/* kernel/trace/ftrace.c 458 */;
	struct tracer_stat *cocci_id/* kernel/trace/ftrace.c 455 */;
	struct ftrace_func_probe *cocci_id/* kernel/trace/ftrace.c 4434 */;
	struct ftrace_func_map *cocci_id/* kernel/trace/ftrace.c 4389 */;
	ftrace_mapper_func cocci_id/* kernel/trace/ftrace.c 4386 */;
	void **cocci_id/* kernel/trace/ftrace.c 4303 */;
	struct ftrace_func_mapper *cocci_id/* kernel/trace/ftrace.c 4279 */;
	struct ftrace_func_mapper {
		struct ftrace_hash hash;
	} cocci_id/* kernel/trace/ftrace.c 4270 */;
	struct ftrace_func_map {
		struct ftrace_func_entry entry;
		void *data;
	} cocci_id/* kernel/trace/ftrace.c 4265 */;
	struct ftrace_func_probe cocci_id/* kernel/trace/ftrace.c 4252 */;
	struct ftrace_probe_ops *cocci_id/* kernel/trace/ftrace.c 4249 */;
	int __init cocci_id/* kernel/trace/ftrace.c 4240 */;
	struct ftrace_func_command cocci_id/* kernel/trace/ftrace.c 4235 */;
	struct ftrace_profile cocci_id/* kernel/trace/ftrace.c 419 */;
	struct ftrace_profile_page cocci_id/* kernel/trace/ftrace.c 416 */;
	int cocci_id/* kernel/trace/ftrace.c 4104 */(struct ftrace_ops *ops,
						     unsigned char *buf,
						     int len, int reset,
						     int enable);
	struct ftrace_profile_stat {
		atomic_t disabled;
		struct hlist_head *hash;
		struct ftrace_profile_page *pages;
		struct ftrace_profile_page *start;
		struct tracer_stat stat;
	} cocci_id/* kernel/trace/ftrace.c 407 */;
	struct ftrace_mod_load *cocci_id/* kernel/trace/ftrace.c 4063 */;
	struct trace_array *cocci_id/* kernel/trace/ftrace.c 4060 */;
	char cocci_id/* kernel/trace/ftrace.c 4047 */[MAX_PARAM_PREFIX_LEN + sizeof(this_mod) + 2];
	const char cocci_id/* kernel/trace/ftrace.c 4046 */[];
	struct ftrace_ops_hash cocci_id/* kernel/trace/ftrace.c 4028 */;
	struct ftrace_profile_page {
		struct ftrace_profile_page *next;
		unsigned long index;
		struct ftrace_profile records[];
	} cocci_id/* kernel/trace/ftrace.c 401 */;
	struct ftrace_ops_hash *cocci_id/* kernel/trace/ftrace.c 3993 */;
	struct ftrace_profile {
		struct hlist_node node;
		unsigned long ip;
		unsigned long counter;
#ifdef CONFIG_FUNCTION_GRAPH_TRACER
		unsigned long long time;
		unsigned long long time_squared;
#endif
	} cocci_id/* kernel/trace/ftrace.c 391 */;
	char cocci_id/* kernel/trace/ftrace.c 3897 */[KSYM_SYMBOL_LEN];
	long cocci_id/* kernel/trace/ftrace.c 3872 */;
	struct ftrace_glob *cocci_id/* kernel/trace/ftrace.c 3869 */;
	const char *cocci_id/* kernel/trace/ftrace.c 3805 */;
	char *__weakcocci_id/* kernel/trace/ftrace.c 3805 */;
	char *cocci_id/* kernel/trace/ftrace.c 3805 */;
	struct ftrace_glob {
		char *search;
		unsigned len;
		int type;
	} cocci_id/* kernel/trace/ftrace.c 3794 */;
	struct ftrace_iterator *cocci_id/* kernel/trace/ftrace.c 3623 */;
	void *__weakcocci_id/* kernel/trace/ftrace.c 3535 */;
	struct ftrace_mod_load cocci_id/* kernel/trace/ftrace.c 3389 */;
	loff_t cocci_id/* kernel/trace/ftrace.c 3351 */;
	struct ftrace_func_entry cocci_id/* kernel/trace/ftrace.c 3267 */;
	struct ftrace_iterator {
		loff_t pos;
		loff_t func_pos;
		loff_t mod_pos;
		struct ftrace_page *pg;
		struct dyn_ftrace *func;
		struct ftrace_func_probe *probe;
		struct ftrace_func_entry *probe_entry;
		struct trace_parser parser;
		struct ftrace_hash *hash;
		struct ftrace_ops *ops;
		struct trace_array *tr;
		struct list_head *mod_list;
		int pidx;
		int idx;
		unsigned flags;
	} cocci_id/* kernel/trace/ftrace.c 3176 */;
	u64 cocci_id/* kernel/trace/ftrace.c 3030 */;
	struct ftrace_ops **cocci_id/* kernel/trace/ftrace.c 281 */;
	void __weak cocci_id/* kernel/trace/ftrace.c 2767 */;
	int *cocci_id/* kernel/trace/ftrace.c 2700 */;
	void *cocci_id/* kernel/trace/ftrace.c 2698 */;
	int __weak cocci_id/* kernel/trace/ftrace.c 2645 */;
	struct ftrace_ops __rcu **cocci_id/* kernel/trace/ftrace.c 264 */;
	struct ftrace_rec_iter *cocci_id/* kernel/trace/ftrace.c 2585 */;
	struct ftrace_rec_iter cocci_id/* kernel/trace/ftrace.c 2563 */;
	struct ftrace_rec_iter {
		struct ftrace_page *pg;
		int index;
	} cocci_id/* kernel/trace/ftrace.c 2543 */;
	struct ftrace_ops cocci_id/* kernel/trace/ftrace.c 2390 */;
	unsigned char *cocci_id/* kernel/trace/ftrace.c 2033 */;
	enum ftrace_bug_type cocci_id/* kernel/trace/ftrace.c 1984 */;
	const unsigned char *cocci_id/* kernel/trace/ftrace.c 1974 */;
	struct dyn_ftrace *cocci_id/* kernel/trace/ftrace.c 1648 */;
	struct ftrace_page *cocci_id/* kernel/trace/ftrace.c 1647 */;
	bool cocci_id/* kernel/trace/ftrace.c 1641 */;
	struct ftrace_ops *cocci_id/* kernel/trace/ftrace.c 1641 */;
	struct ftrace_ops *cocci_id/* kernel/trace/ftrace.c 1638 */(struct dyn_ftrace *rec,
								    struct ftrace_ops *ops);
	struct ftrace_ops *cocci_id/* kernel/trace/ftrace.c 1636 */(struct dyn_ftrace *rec);
	struct work_struct *cocci_id/* kernel/trace/ftrace.c 155 */;
	const struct dyn_ftrace *cocci_id/* kernel/trace/ftrace.c 1529 */;
	struct ftrace_hash **cocci_id/* kernel/trace/ftrace.c 1422 */;
	struct hlist_node *cocci_id/* kernel/trace/ftrace.c 1375 */;
	int cocci_id/* kernel/trace/ftrace.c 1367 */(struct ftrace_ops *ops,
						     struct ftrace_hash *new_hash);
	void cocci_id/* kernel/trace/ftrace.c 1362 */(struct ftrace_ops *ops,
						      int filter_hash);
	void cocci_id/* kernel/trace/ftrace.c 129 */(unsigned long ip,
						     unsigned long parent_ip);
	struct ftrace_hash cocci_id/* kernel/trace/ftrace.c 1255 */;
	struct rcu_head *cocci_id/* kernel/trace/ftrace.c 1251 */;
	void cocci_id/* kernel/trace/ftrace.c 125 */(unsigned long ip,
						     unsigned long parent_ip,
						     struct ftrace_ops *op,
						     struct pt_regs *regs);
	struct ftrace_ops __rcu *cocci_id/* kernel/trace/ftrace.c 120 */;
	unsigned long cocci_id/* kernel/trace/ftrace.c 1162 */;
	struct hlist_head *cocci_id/* kernel/trace/ftrace.c 1161 */;
	struct ftrace_func_entry *cocci_id/* kernel/trace/ftrace.c 1159 */;
	struct ftrace_hash *cocci_id/* kernel/trace/ftrace.c 1158 */;
	void cocci_id/* kernel/trace/ftrace.c 1158 */;
	void cocci_id/* kernel/trace/ftrace.c 110 */(struct ftrace_ops *ops);
	struct ftrace_page {
		struct ftrace_page *next;
		struct dyn_ftrace *records;
		int index;
		int size;
	} cocci_id/* kernel/trace/ftrace.c 1096 */;
	const struct ftrace_hash cocci_id/* kernel/trace/ftrace.c 1039 */;
	const struct hlist_head cocci_id/* kernel/trace/ftrace.c 1038 */[1];
	struct ftrace_func_probe {
		struct ftrace_probe_ops *probe_ops;
		struct ftrace_ops ops;
		struct trace_array *tr;
		struct list_head list;
		void *data;
		int ref;
	} cocci_id/* kernel/trace/ftrace.c 1023 */;
	__typeof__(struct ftrace_profile_stat) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
