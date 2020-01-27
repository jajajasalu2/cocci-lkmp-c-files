cocci_test_suite() {
	unsigned long cocci_id/* kernel/trace/trace_functions_graph.c 99 */;
	struct ftrace_graph_ent *cocci_id/* kernel/trace/trace_functions_graph.c 98 */;
	struct trace_event *cocci_id/* kernel/trace/trace_functions_graph.c 976 */;
	struct trace_entry *cocci_id/* kernel/trace/trace_functions_graph.c 970 */;
	enum print_line_t cocci_id/* kernel/trace/trace_functions_graph.c 969 */;
	void cocci_id/* kernel/trace/trace_functions_graph.c 93 */(struct trace_array *tr,
								   unsigned long long duration,
								   struct trace_seq *s,
								   u32 flags);
	enum{FLAGS_FILL_FULL=1 << TRACE_GRAPH_PRINT_FILL_SHIFT, FLAGS_FILL_START=2 << TRACE_GRAPH_PRINT_FILL_SHIFT, FLAGS_FILL_END=3 << TRACE_GRAPH_PRINT_FILL_SHIFT,} cocci_id/* kernel/trace/trace_functions_graph.c 87 */;
	struct fgraph_data *cocci_id/* kernel/trace/trace_functions_graph.c 779 */;
	int *cocci_id/* kernel/trace/trace_functions_graph.c 778 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace_functions_graph.c 774 */;
	struct tracer_flags cocci_id/* kernel/trace/trace_functions_graph.c 72 */;
	void *cocci_id/* kernel/trace/trace_functions_graph.c 668 */;
	struct fgraph_cpu_data *cocci_id/* kernel/trace/trace_functions_graph.c 644 */;
	unsigned long long cocci_id/* kernel/trace/trace_functions_graph.c 594 */;
	char cocci_id/* kernel/trace/trace_functions_graph.c 566 */[5];
	char cocci_id/* kernel/trace/trace_functions_graph.c 565 */[21];
	pid_t cocci_id/* kernel/trace/trace_functions_graph.c 514 */;
	enum trace_type cocci_id/* kernel/trace/trace_functions_graph.c 514 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_functions_graph.c 490 */;
	struct tracer_opt cocci_id/* kernel/trace/trace_functions_graph.c 44 */[];
	struct ring_buffer_iter *cocci_id/* kernel/trace/trace_functions_graph.c 424 */;
	unsigned int cocci_id/* kernel/trace/trace_functions_graph.c 42 */;
	char cocci_id/* kernel/trace/trace_functions_graph.c 349 */[11];
	char cocci_id/* kernel/trace/trace_functions_graph.c 347 */[TASK_COMM_LEN];
	struct fgraph_data {
		struct fgraph_cpu_data __percpu *cpu_data;
		struct ftrace_graph_ent_entry ent;
		struct ftrace_graph_ret_entry ret;
		int failed;
		int cpu;
	} cocci_id/* kernel/trace/trace_functions_graph.c 30 */;
	struct fgraph_ops cocci_id/* kernel/trace/trace_functions_graph.c 295 */;
	struct ftrace_graph_ret_entry *cocci_id/* kernel/trace/trace_functions_graph.c 225 */;
	struct fgraph_cpu_data {
		pid_t last_pid;
		int depth;
		int depth_irq;
		int ignore;
		unsigned long enter_funcs[FTRACE_RETFUNC_DEPTH];
	} cocci_id/* kernel/trace/trace_functions_graph.c 22 */;
	struct ftrace_graph_ret *cocci_id/* kernel/trace/trace_functions_graph.c 218 */;
	struct ftrace_graph_ret cocci_id/* kernel/trace/trace_functions_graph.c 198 */;
	struct ftrace_graph_ent cocci_id/* kernel/trace/trace_functions_graph.c 194 */;
	u64 cocci_id/* kernel/trace/trace_functions_graph.c 193 */;
	struct dentry *cocci_id/* kernel/trace/trace_functions_graph.c 1339 */;
	const struct file_operations cocci_id/* kernel/trace/trace_functions_graph.c 1330 */;
	char cocci_id/* kernel/trace/trace_functions_graph.c 1322 */[15];
	loff_t *cocci_id/* kernel/trace/trace_functions_graph.c 1320 */;
	long cocci_id/* kernel/trace/trace_functions_graph.c 132 */;
	struct file *cocci_id/* kernel/trace/trace_functions_graph.c 1319 */;
	char __user *cocci_id/* kernel/trace/trace_functions_graph.c 1319 */;
	size_t cocci_id/* kernel/trace/trace_functions_graph.c 1319 */;
	ssize_t cocci_id/* kernel/trace/trace_functions_graph.c 1318 */;
	const char __user *cocci_id/* kernel/trace/trace_functions_graph.c 1301 */;
	struct trace_array_cpu *cocci_id/* kernel/trace/trace_functions_graph.c 130 */;
	struct tracer cocci_id/* kernel/trace/trace_functions_graph.c 1281 */;
	struct trace_event cocci_id/* kernel/trace/trace_functions_graph.c 1271 */;
	struct trace_event_functions cocci_id/* kernel/trace/trace_functions_graph.c 1267 */;
	pid_t *cocci_id/* kernel/trace/trace_functions_graph.c 1221 */;
	struct fgraph_cpu_data cocci_id/* kernel/trace/trace_functions_graph.c 1216 */;
	gfp_t cocci_id/* kernel/trace/trace_functions_graph.c 1204 */;
	int cocci_id/* kernel/trace/trace_functions_graph.c 1138 */;
	u32 cocci_id/* kernel/trace/trace_functions_graph.c 1136 */;
	struct seq_file *cocci_id/* kernel/trace/trace_functions_graph.c 1136 */;
	struct trace_array *cocci_id/* kernel/trace/trace_functions_graph.c 1135 */;
	void cocci_id/* kernel/trace/trace_functions_graph.c 1135 */;
	const char cocci_id/* kernel/trace/trace_functions_graph.c 1114 */[];
	struct ftrace_graph_ent_entry cocci_id/* kernel/trace/trace_functions_graph.c 1077 */;
	struct ftrace_graph_ent_entry *cocci_id/* kernel/trace/trace_functions_graph.c 105 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace_functions_graph.c 104 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_functions_graph.c 103 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_functions_graph.c 102 */;
}
