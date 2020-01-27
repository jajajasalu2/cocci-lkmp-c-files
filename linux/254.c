cocci_test_suite() {
	char cocci_id/* kernel/trace/trace_syscalls.c 87 */[KSYM_SYMBOL_LEN];
	struct syscall_metadata **cocci_id/* kernel/trace/trace_syscalls.c 85 */;
	enum trace_reg cocci_id/* kernel/trace/trace_syscalls.c 785 */;
	struct syscall_tp_t {
		unsigned long long regs;
		unsigned long syscall_nr;
		unsigned long ret;
	} cocci_id/* kernel/trace/trace_syscalls.c 689 */;
	struct task_struct *cocci_id/* kernel/trace/trace_syscalls.c 67 */;
	struct hlist_head *cocci_id/* kernel/trace/trace_syscalls.c 605 */;
	struct pt_regs **cocci_id/* kernel/trace/trace_syscalls.c 594 */;
	struct syscall_tp_t {
		unsigned long long regs;
		unsigned long syscall_nr;
		unsigned long args[SYSCALL_DEFINE_MAXARGS];
	} cocci_id/* kernel/trace/trace_syscalls.c 587 */;
	unsigned long __init __weak cocci_id/* kernel/trace/trace_syscalls.c 534 */;
	struct trace_event_class __refdata cocci_id/* kernel/trace/trace_syscalls.c 518 */;
	struct trace_event_functions cocci_id/* kernel/trace/trace_syscalls.c 510 */;
	int __init cocci_id/* kernel/trace/trace_syscalls.c 485 */;
	bool cocci_id/* kernel/trace/trace_syscalls.c 38 */;
	const char *cocci_id/* kernel/trace/trace_syscalls.c 38 */;
	struct syscall_trace_exit *cocci_id/* kernel/trace/trace_syscalls.c 367 */;
	unsigned long cocci_id/* kernel/trace/trace_syscalls.c 322 */[6];
	struct ring_buffer *cocci_id/* kernel/trace/trace_syscalls.c 320 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_syscalls.c 319 */;
	struct syscall_trace_enter *cocci_id/* kernel/trace/trace_syscalls.c 317 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace_syscalls.c 316 */;
	struct trace_array *cocci_id/* kernel/trace/trace_syscalls.c 315 */;
	struct pt_regs *cocci_id/* kernel/trace/trace_syscalls.c 313 */;
	void *cocci_id/* kernel/trace/trace_syscalls.c 313 */;
	long cocci_id/* kernel/trace/trace_syscalls.c 313 */;
	void cocci_id/* kernel/trace/trace_syscalls.c 313 */;
	struct syscall_metadata *cocci_id/* kernel/trace/trace_syscalls.c 31 */[];
	struct syscall_trace_exit cocci_id/* kernel/trace/trace_syscalls.c 299 */;
	struct syscall_trace_enter cocci_id/* kernel/trace/trace_syscalls.c 275 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_syscalls.c 265 */;
	void __init cocci_id/* kernel/trace/trace_syscalls.c 265 */;
	struct list_head *cocci_id/* kernel/trace/trace_syscalls.c 23 */;
	unsigned long cocci_id/* kernel/trace/trace_syscalls.c 224 */;
	struct syscall_metadata *cocci_id/* kernel/trace/trace_syscalls.c 213 */;
	char *cocci_id/* kernel/trace/trace_syscalls.c 213 */;
	int cocci_id/* kernel/trace/trace_syscalls.c 213 */;
	int __init cocci_id/* kernel/trace/trace_syscalls.c 212 */;
	char *cocci_id/* kernel/trace/trace_syscalls.c 204 */(void);
	int cocci_id/* kernel/trace/trace_syscalls.c 18 */(struct trace_event_call *event,
							   enum trace_reg type,
							   void *data);
	typeof(trace) cocci_id/* kernel/trace/trace_syscalls.c 137 */;
	struct trace_entry *cocci_id/* kernel/trace/trace_syscalls.c 132 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_syscalls.c 131 */;
	struct trace_event *cocci_id/* kernel/trace/trace_syscalls.c 128 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace_syscalls.c 127 */;
	enum print_line_t cocci_id/* kernel/trace/trace_syscalls.c 126 */;
}
