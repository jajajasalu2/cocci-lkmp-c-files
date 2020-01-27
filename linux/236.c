cocci_test_suite() {
	struct seq_file *cocci_id/* kernel/trace/trace_kprobe.c 990 */;
	const struct file_operations cocci_id/* kernel/trace/trace_kprobe.c 980 */;
	loff_t *cocci_id/* kernel/trace/trace_kprobe.c 974 */;
	const char __user *cocci_id/* kernel/trace/trace_kprobe.c 973 */;
	ssize_t cocci_id/* kernel/trace/trace_kprobe.c 973 */;
	struct inode *cocci_id/* kernel/trace/trace_kprobe.c 956 */;
	struct file *cocci_id/* kernel/trace/trace_kprobe.c 956 */;
	const struct seq_operations cocci_id/* kernel/trace/trace_kprobe.c 949 */;
	char **cocci_id/* kernel/trace/trace_kprobe.c 894 */;
	struct probe_arg cocci_id/* kernel/trace/trace_kprobe.c 85 */;
	unsigned long *cocci_id/* kernel/trace/trace_kprobe.c 797 */;
	unsigned int cocci_id/* kernel/trace/trace_kprobe.c 745 */;
	char cocci_id/* kernel/trace/trace_kprobe.c 744 */[MAX_EVENT_NAME_LEN];
	const char *cocci_id/* kernel/trace/trace_kprobe.c 713 */[];
	struct notifier_block cocci_id/* kernel/trace/trace_kprobe.c 700 */;
	struct module *cocci_id/* kernel/trace/trace_kprobe.c 674 */;
	struct notifier_block *cocci_id/* kernel/trace/trace_kprobe.c 671 */;
	struct trace_probe_event *cocci_id/* kernel/trace/trace_kprobe.c 560 */;
	struct trace_kprobe {
		struct dyn_event devent;
		struct kretprobe rp;
		unsigned long __percpu *nhit;
		const char *symbol;
		struct trace_probe tp;
	} cocci_id/* kernel/trace/trace_kprobe.c 56 */;
	char cocci_id/* kernel/trace/trace_kprobe.c 458 */[KSYM_NAME_LEN];
	struct dyn_event_operations cocci_id/* kernel/trace/trace_kprobe.c 45 */;
	bool cocci_id/* kernel/trace/trace_kprobe.c 438 */;
	bool cocci_id/* kernel/trace/trace_kprobe.c 42 */(const char *system,
							  const char *event,
							  int argc,
							  const char **argv,
							  struct dyn_event *ev);
	bool cocci_id/* kernel/trace/trace_kprobe.c 41 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_kprobe.c 40 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_kprobe.c 39 */(struct seq_file *m,
							 struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_kprobe.c 38 */(int argc,
							 const char **argv);
	struct trace_kprobe cocci_id/* kernel/trace/trace_kprobe.c 337 */;
	struct trace_kprobe *cocci_id/* kernel/trace/trace_kprobe.c 334 */;
	struct trace_probe *cocci_id/* kernel/trace/trace_kprobe.c 331 */;
	void cocci_id/* kernel/trace/trace_kprobe.c 331 */;
	int cocci_id/* kernel/trace/trace_kprobe.c 317 */;
	int __init cocci_id/* kernel/trace/trace_kprobe.c 31 */;
	char cocci_id/* kernel/trace/trace_kprobe.c 28 */[COMMAND_LINE_SIZE]__initdata;
	void *cocci_id/* kernel/trace/trace_kprobe.c 258 */;
	const char *cocci_id/* kernel/trace/trace_kprobe.c 256 */;
	int cocci_id/* kernel/trace/trace_kprobe.c 240 */(struct kretprobe_instance *ri,
							  struct pt_regs *regs);
	int cocci_id/* kernel/trace/trace_kprobe.c 239 */(struct kprobe *kp,
							  struct pt_regs *regs);
	int cocci_id/* kernel/trace/trace_kprobe.c 236 */(struct trace_kprobe *tk);
	int (*cocci_id/* kernel/trace/trace_kprobe.c 1748 */)(int, int, int,
							      int, int, int);
	struct dentry *cocci_id/* kernel/trace/trace_kprobe.c 1692 */;
	struct dyn_event *cocci_id/* kernel/trace/trace_kprobe.c 1654 */;
	struct trace_array *cocci_id/* kernel/trace/trace_kprobe.c 1651 */;
	char *cocci_id/* kernel/trace/trace_kprobe.c 1589 */;
	struct trace_event_functions cocci_id/* kernel/trace/trace_kprobe.c 1554 */;
	struct kprobe *cocci_id/* kernel/trace/trace_kprobe.c 1516 */;
	enum trace_reg cocci_id/* kernel/trace/trace_kprobe.c 1491 */;
	u64 *cocci_id/* kernel/trace/trace_kprobe.c 1455 */;
	const char **cocci_id/* kernel/trace/trace_kprobe.c 1455 */;
	const struct perf_event *cocci_id/* kernel/trace/trace_kprobe.c 1454 */;
	u32 *cocci_id/* kernel/trace/trace_kprobe.c 1454 */;
	char cocci_id/* kernel/trace/trace_kprobe.c 144 */[MAX_ARGSTR_LEN + 1];
	u64 cocci_id/* kernel/trace/trace_kprobe.c 1403 */;
	u32 cocci_id/* kernel/trace/trace_kprobe.c 1403 */;
	struct hlist_head *cocci_id/* kernel/trace/trace_kprobe.c 1376 */;
	struct kretprobe_trace_entry_head cocci_id/* kernel/trace/trace_kprobe.c 1355 */;
	struct kprobe_trace_entry_head cocci_id/* kernel/trace/trace_kprobe.c 1340 */;
	struct trace_event_call cocci_id/* kernel/trace/trace_kprobe.c 1280 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_kprobe.c 1275 */;
	struct trace_event *cocci_id/* kernel/trace/trace_kprobe.c 1272 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace_kprobe.c 1271 */;
	enum print_line_t cocci_id/* kernel/trace/trace_kprobe.c 1270 */;
	struct kretprobe_trace_entry_head *cocci_id/* kernel/trace/trace_kprobe.c 1225 */;
	struct kretprobe_instance *cocci_id/* kernel/trace/trace_kprobe.c 1221 */;
	struct event_file_link *cocci_id/* kernel/trace/trace_kprobe.c 1212 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_kprobe.c 1182 */;
	unsigned long cocci_id/* kernel/trace/trace_kprobe.c 1181 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace_kprobe.c 1179 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_kprobe.c 1178 */;
	struct kprobe_trace_entry_head *cocci_id/* kernel/trace/trace_kprobe.c 1177 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace_kprobe.c 1175 */;
	struct pt_regs *cocci_id/* kernel/trace/trace_kprobe.c 1174 */;
	struct fetch_insn *cocci_id/* kernel/trace/trace_kprobe.c 1126 */;
	size_t cocci_id/* kernel/trace/trace_kprobe.c 1111 */;
	const void __user *cocci_id/* kernel/trace/trace_kprobe.c 1093 */;
	long cocci_id/* kernel/trace/trace_kprobe.c 1068 */;
	u8 *cocci_id/* kernel/trace/trace_kprobe.c 1043 */;
	u8 cocci_id/* kernel/trace/trace_kprobe.c 1040 */;
	nokprobe_inline
bool
 cocci_id/* kernel/trace/trace_kprobe.c 102 */;
}
