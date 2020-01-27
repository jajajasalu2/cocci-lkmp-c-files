cocci_test_suite() {
	struct event_file_link *cocci_id/* kernel/trace/trace_uprobe.c 981 */;
	int cocci_id/* kernel/trace/trace_uprobe.c 97 */(struct trace_uprobe *tu);
	struct probe_arg cocci_id/* kernel/trace/trace_uprobe.c 95 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace_uprobe.c 942 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_uprobe.c 941 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace_uprobe.c 938 */;
	struct page *cocci_id/* kernel/trace/trace_uprobe.c 859 */;
	struct uprobe_cpu_buffer cocci_id/* kernel/trace/trace_uprobe.c 854 */;
	struct uprobe_cpu_buffer __percpu *cocci_id/* kernel/trace/trace_uprobe.c 847 */;
	struct uprobe_cpu_buffer {
		struct mutex mutex;
		void *buf;
	} cocci_id/* kernel/trace/trace_uprobe.c 843 */;
	struct seq_file *cocci_id/* kernel/trace/trace_uprobe.c 803 */;
	const struct file_operations cocci_id/* kernel/trace/trace_uprobe.c 793 */;
	loff_t *cocci_id/* kernel/trace/trace_uprobe.c 787 */;
	const char __user *cocci_id/* kernel/trace/trace_uprobe.c 786 */;
	ssize_t cocci_id/* kernel/trace/trace_uprobe.c 786 */;
	struct inode *cocci_id/* kernel/trace/trace_uprobe.c 769 */;
	struct file *cocci_id/* kernel/trace/trace_uprobe.c 769 */;
	const struct seq_operations cocci_id/* kernel/trace/trace_uprobe.c 762 */;
	char cocci_id/* kernel/trace/trace_uprobe.c 735 */;
	char **cocci_id/* kernel/trace/trace_uprobe.c 713 */;
	struct trace_uprobe {
		struct dyn_event devent;
		struct trace_uprobe_filter filter;
		struct uprobe_consumer consumer;
		struct path path;
		struct inode *inode;
		char *filename;
		unsigned long offset;
		unsigned long ref_ctr_offset;
		unsigned long nhit;
		struct trace_probe tp;
	} cocci_id/* kernel/trace/trace_uprobe.c 61 */;
	char cocci_id/* kernel/trace/trace_uprobe.c 545 */[MAX_EVENT_NAME_LEN];
	struct dyn_event_operations cocci_id/* kernel/trace/trace_uprobe.c 50 */;
	bool cocci_id/* kernel/trace/trace_uprobe.c 47 */(const char *system,
							  const char *event,
							  int argc,
							  const char **argv,
							  struct dyn_event *ev);
	bool cocci_id/* kernel/trace/trace_uprobe.c 46 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_uprobe.c 45 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_uprobe.c 44 */(struct seq_file *m,
							 struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_uprobe.c 43 */(int argc,
							 const char **argv);
	struct trace_probe_event *cocci_id/* kernel/trace/trace_uprobe.c 417 */;
	struct dyn_event *cocci_id/* kernel/trace/trace_uprobe.c 384 */;
	struct trace_uprobe_filter {
		rwlock_t rwlock;
		int nr_systemwide;
		struct list_head perf_events;
	} cocci_id/* kernel/trace/trace_uprobe.c 37 */;
	const char *cocci_id/* kernel/trace/trace_uprobe.c 345 */;
	struct uprobe_trace_entry_head cocci_id/* kernel/trace/trace_uprobe.c 31 */;
	char cocci_id/* kernel/trace/trace_uprobe.c 294 */[MAX_ARGSTR_LEN + 1];
	struct uprobe_trace_entry_head {
		struct trace_entry ent;
		unsigned long vaddr[];
	} cocci_id/* kernel/trace/trace_uprobe.c 25 */;
	struct fetch_insn *cocci_id/* kernel/trace/trace_uprobe.c 227 */;
	struct uprobe_dispatch_data *cocci_id/* kernel/trace/trace_uprobe.c 217 */;
	void __user *cocci_id/* kernel/trace/trace_uprobe.c 162 */;
	void __force __user *cocci_id/* kernel/trace/trace_uprobe.c 162 */;
	u8 *cocci_id/* kernel/trace/trace_uprobe.c 161 */;
	struct dentry *cocci_id/* kernel/trace/trace_uprobe.c 1596 */;
	struct path cocci_id/* kernel/trace/trace_uprobe.c 1539 */;
	char *cocci_id/* kernel/trace/trace_uprobe.c 1535 */;
	struct trace_event_functions cocci_id/* kernel/trace/trace_uprobe.c 1506 */;
	struct uprobe_dispatch_data cocci_id/* kernel/trace/trace_uprobe.c 1437 */;
	struct uprobe_consumer *cocci_id/* kernel/trace/trace_uprobe.c 1434 */;
	enum trace_reg cocci_id/* kernel/trace/trace_uprobe.c 1400 */;
	size_t cocci_id/* kernel/trace/trace_uprobe.c 138 */;
	u64 *cocci_id/* kernel/trace/trace_uprobe.c 1377 */;
	const char **cocci_id/* kernel/trace/trace_uprobe.c 1377 */;
	const struct perf_event *cocci_id/* kernel/trace/trace_uprobe.c 1376 */;
	u32 *cocci_id/* kernel/trace/trace_uprobe.c 1376 */;
	u64 cocci_id/* kernel/trace/trace_uprobe.c 1321 */;
	u32 cocci_id/* kernel/trace/trace_uprobe.c 1321 */;
	void *cocci_id/* kernel/trace/trace_uprobe.c 1311 */;
	struct hlist_head *cocci_id/* kernel/trace/trace_uprobe.c 1310 */;
	struct uprobe_trace_entry_head *cocci_id/* kernel/trace/trace_uprobe.c 1309 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_uprobe.c 1308 */;
	struct uprobe_cpu_buffer *cocci_id/* kernel/trace/trace_uprobe.c 1306 */;
	int cocci_id/* kernel/trace/trace_uprobe.c 1306 */;
	struct pt_regs *cocci_id/* kernel/trace/trace_uprobe.c 1305 */;
	unsigned long cocci_id/* kernel/trace/trace_uprobe.c 1305 */;
	enum uprobe_filter_ctx cocci_id/* kernel/trace/trace_uprobe.c 1291 */;
	int (*cocci_id/* kernel/trace/trace_uprobe.c 1271 */)(struct trace_uprobe *tu,
							      struct perf_event *event);
	struct perf_event *cocci_id/* kernel/trace/trace_uprobe.c 1194 */;
	struct trace_uprobe_filter *cocci_id/* kernel/trace/trace_uprobe.c 1192 */;
	struct mm_struct *cocci_id/* kernel/trace/trace_uprobe.c 1192 */;
	bool cocci_id/* kernel/trace/trace_uprobe.c 1191 */;
	long cocci_id/* kernel/trace/trace_uprobe.c 112 */;
	unsigned int cocci_id/* kernel/trace/trace_uprobe.c 110 */;
	filter_func_t cocci_id/* kernel/trace/trace_uprobe.c 1083 */;
	struct trace_uprobe cocci_id/* kernel/trace/trace_uprobe.c 1071 */;
	struct trace_uprobe *cocci_id/* kernel/trace/trace_uprobe.c 1068 */;
	struct trace_probe *cocci_id/* kernel/trace/trace_uprobe.c 1065 */;
	void cocci_id/* kernel/trace/trace_uprobe.c 1065 */;
	int cocci_id/* kernel/trace/trace_uprobe.c 106 */(struct uprobe_consumer *con,
							  unsigned long func,
							  struct pt_regs *regs);
	int cocci_id/* kernel/trace/trace_uprobe.c 105 */(struct uprobe_consumer *con,
							  struct pt_regs *regs);
	bool (*cocci_id/* kernel/trace/trace_uprobe.c 1042 */)(struct uprobe_consumer *self,
							       enum uprobe_filter_ctx ctx,
							       struct mm_struct *mm);
	struct trace_event_call cocci_id/* kernel/trace/trace_uprobe.c 1017 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_uprobe.c 1011 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace_uprobe.c 1008 */;
	struct trace_event *cocci_id/* kernel/trace/trace_uprobe.c 1008 */;
	enum print_line_t cocci_id/* kernel/trace/trace_uprobe.c 1007 */;
	struct uprobe_dispatch_data {
		struct trace_uprobe *tu;
		unsigned long bp_addr;
	} cocci_id/* kernel/trace/trace_uprobe.c 100 */;
}
