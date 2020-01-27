cocci_test_suite() {
	int (*cocci_id/* kernel/trace/trace.c 9185 */)(int, char **);
	char **cocci_id/* kernel/trace/trace.c 9164 */;
	atomic_t cocci_id/* kernel/trace/trace.c 9057 */;
	struct trace_iterator cocci_id/* kernel/trace/trace.c 9056 */;
	enum ftrace_dump_mode cocci_id/* kernel/trace/trace.c 9053 */;
	struct bputs_entry cocci_id/* kernel/trace/trace.c 904 */;
	struct bputs_entry *cocci_id/* kernel/trace/trace.c 902 */;
	struct notifier_block cocci_id/* kernel/trace/trace.c 8993 */;
	struct notifier_block *cocci_id/* kernel/trace/trace.c 8978 */;
	union trace_eval_map_item **cocci_id/* kernel/trace/trace.c 8863 */;
	struct trace_eval_map *cocci_id/* kernel/trace/trace.c 8832 */[];
	struct file_system_type *cocci_id/* kernel/trace/trace.c 8776 */;
	struct vfsmount *cocci_id/* kernel/trace/trace.c 8773 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace.c 8694 */;
	struct dentry *cocci_id/* kernel/trace/trace.c 8682 */;
	u32 cocci_id/* kernel/trace/trace.c 86 */;
	struct trace_array *cocci_id/* kernel/trace/trace.c 8595 */;
	arch_spinlock_t cocci_id/* kernel/trace/trace.c 8489 */;
	struct trace_array_cpu cocci_id/* kernel/trace/trace.c 8377 */;
	enum ring_buffer_flags cocci_id/* kernel/trace/trace.c 8367 */;
	void cocci_id/* kernel/trace/trace.c 8361 */(struct trace_array *tr,
						     struct dentry *d_tracer);
	const struct file_operations cocci_id/* kernel/trace/trace.c 8351 */;
	const char __user *cocci_id/* kernel/trace/trace.c 8327 */;
	char cocci_id/* kernel/trace/trace.c 8317 */[64];
	loff_t *cocci_id/* kernel/trace/trace.c 8314 */;
	size_t cocci_id/* kernel/trace/trace.c 8314 */;
	char __user *cocci_id/* kernel/trace/trace.c 8313 */;
	ssize_t cocci_id/* kernel/trace/trace.c 8312 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace.c 828 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace.c 828 */;
	void cocci_id/* kernel/trace/trace.c 827 */;
	long cocci_id/* kernel/trace/trace.c 8226 */;
	struct trace_options *cocci_id/* kernel/trace/trace.c 8167 */;
	struct trace_option_dentry *cocci_id/* kernel/trace/trace.c 8144 */;
	struct tracer_opt cocci_id/* kernel/trace/trace.c 81 */[];
	struct trace_array cocci_id/* kernel/trace/trace.c 8043 */;
	unsigned char *cocci_id/* kernel/trace/trace.c 8041 */;
	unsigned int *cocci_id/* kernel/trace/trace.c 8039 */;
	struct trace_array **cocci_id/* kernel/trace/trace.c 8038 */;
	char cocci_id/* kernel/trace/trace.c 7919 */[30];
	const struct file_operations *cocci_id/* kernel/trace/trace.c 7905 */;
	umode_t cocci_id/* kernel/trace/trace.c 7904 */;
	struct ftrace_func_command cocci_id/* kernel/trace/trace.c 7858 */;
	struct ftrace_hash *cocci_id/* kernel/trace/trace.c 7811 */;
	struct ftrace_probe_ops cocci_id/* kernel/trace/trace.c 7803 */;
	void **cocci_id/* kernel/trace/trace.c 7768 */;
	long *cocci_id/* kernel/trace/trace.c 7728 */;
	struct ftrace_func_mapper *cocci_id/* kernel/trace/trace.c 7727 */;
	struct ftrace_probe_ops *cocci_id/* kernel/trace/trace.c 7724 */;
	struct pt_regs *cocci_id/* kernel/trace/trace.c 761 */;
	void cocci_id/* kernel/trace/trace.c 753 */(struct trace_array *tr,
						    struct ring_buffer *buffer,
						    unsigned long flags,
						    int skip, int pc,
						    struct pt_regs *regs);
	struct splice_pipe_desc cocci_id/* kernel/trace/trace.c 7501 */;
	struct page *cocci_id/* kernel/trace/trace.c 7500 */[PIPE_DEF_BUFFERS];
	void cocci_id/* kernel/trace/trace.c 750 */(struct ring_buffer *buffer,
						    unsigned long flags,
						    int skip, int pc,
						    struct pt_regs *regs);
	struct partial_page cocci_id/* kernel/trace/trace.c 7499 */[PIPE_DEF_BUFFERS];
	struct splice_pipe_desc *cocci_id/* kernel/trace/trace.c 7483 */;
	const struct pipe_buf_operations cocci_id/* kernel/trace/trace.c 7472 */;
	struct buffer_ref *cocci_id/* kernel/trace/trace.c 7462 */;
	struct pipe_buffer *cocci_id/* kernel/trace/trace.c 7460 */;
	struct pipe_inode_info *cocci_id/* kernel/trace/trace.c 7459 */;
	struct buffer_ref {
		struct ring_buffer *buffer;
		void *page;
		int cpu;
		refcount_t refcount;
	} cocci_id/* kernel/trace/trace.c 7435 */;
	bool __read_mostly cocci_id/* kernel/trace/trace.c 73 */;
	u8 cocci_id/* kernel/trace/trace.c 7203 */;
	struct tracing_log_err *cocci_id/* kernel/trace/trace.c 7170 */;
	const char **cocci_id/* kernel/trace/trace.c 7142 */;
	struct tracing_log_err cocci_id/* kernel/trace/trace.c 7081 */;
	struct tracing_log_err {
		struct list_head list;
		struct err_info info;
		char loc[TRACING_LOG_LOC_MAX];
		char cmd[MAX_FILTER_STR_VAL];
	} cocci_id/* kernel/trace/trace.c 7059 */;
	struct err_info {
		const char **errs;
		u8 type;
		u8 pos;
		u64 ts;
	} cocci_id/* kernel/trace/trace.c 7052 */;
	struct ftrace_buffer_info *cocci_id/* kernel/trace/trace.c 6922 */;
	ssize_t cocci_id/* kernel/trace/trace.c 6917 */(struct file *file,
							loff_t *ppos,
							struct pipe_inode_info *pipe,
							size_t len,
							unsigned int flags);
	int cocci_id/* kernel/trace/trace.c 6916 */(struct inode *inode,
						    struct file *file);
	ssize_t cocci_id/* kernel/trace/trace.c 6914 */(struct file *filp,
							char __user *ubuf,
							size_t count,
							loff_t *ppos);
	int cocci_id/* kernel/trace/trace.c 6913 */(struct inode *inode,
						    struct file *filp);
	struct ftrace_buffer_info {
		struct trace_iterator iter;
		void *spare;
		unsigned int spare_cpu;
		unsigned int read;
	} cocci_id/* kernel/trace/trace.c 6763 */;
	struct raw_data_entry *cocci_id/* kernel/trace/trace.c 6554 */;
	enum event_trigger_type cocci_id/* kernel/trace/trace.c 6472 */;
	poll_table cocci_id/* kernel/trace/trace.c 6043 */;
	poll_table *cocci_id/* kernel/trace/trace.c 6028 */;
	__poll_t cocci_id/* kernel/trace/trace.c 6027 */;
	char cocci_id/* kernel/trace/trace.c 5835 */[MAX_TRACER_SIZE + 1];
	void cocci_id/* kernel/trace/trace.c 5694 */(struct trace_array *tr,
						     struct tracer *tracer);
	struct trace_option_dentry cocci_id/* kernel/trace/trace.c 5692 */;
	char cocci_id/* kernel/trace/trace.c 5525 */[MAX_TRACER_SIZE + 2];
	struct trace_eval_map **cocci_id/* kernel/trace/trace.c 5506 */;
	struct module *cocci_id/* kernel/trace/trace.c 5505 */;
	loff_t cocci_id/* kernel/trace/trace.c 5380 */;
	union trace_eval_map_item *cocci_id/* kernel/trace/trace.c 5358 */;
	struct seq_file *cocci_id/* kernel/trace/trace.c 5356 */;
	char cocci_id/* kernel/trace/trace.c 5235 */[TASK_COMM_LEN];
	struct trace_parser cocci_id/* kernel/trace/trace.c 516 */;
	struct trace_pid_list **cocci_id/* kernel/trace/trace.c 512 */;
	const char cocci_id/* kernel/trace/trace.c 4852 */[];
	void __init cocci_id/* kernel/trace/trace.c 4782 */;
	struct tracer *cocci_id/* kernel/trace/trace.c 4645 */;
	struct tracer_opt *cocci_id/* kernel/trace/trace.c 4643 */;
	struct tracer_flags *cocci_id/* kernel/trace/trace.c 4642 */;
	cpumask_var_t cocci_id/* kernel/trace/trace.c 4562 */;
	const struct seq_operations cocci_id/* kernel/trace/trace.c 4458 */;
	bool cocci_id/* kernel/trace/trace.c 4158 */;
	struct inode *cocci_id/* kernel/trace/trace.c 4158 */;
	struct file *cocci_id/* kernel/trace/trace.c 4158 */;
	struct trace_pid_list *cocci_id/* kernel/trace/trace.c 413 */;
	struct trace_seq *cocci_id/* kernel/trace/trace.c 3900 */;
	enum print_line_t cocci_id/* kernel/trace/trace.c 3897 */;
	unsigned char cocci_id/* kernel/trace/trace.c 3871 */;
	pid_t cocci_id/* kernel/trace/trace.c 367 */;
	void *cocci_id/* kernel/trace/trace.c 340 */;
	u64 cocci_id/* kernel/trace/trace.c 3389 */;
	unsigned long cocci_id/* kernel/trace/trace.c 3387 */;
	u64 *cocci_id/* kernel/trace/trace.c 3383 */;
	unsigned long *cocci_id/* kernel/trace/trace.c 3383 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace.c 3382 */;
	int *cocci_id/* kernel/trace/trace.c 3382 */;
	struct trace_entry *cocci_id/* kernel/trace/trace.c 3381 */;
	struct ring_buffer_iter *cocci_id/* kernel/trace/trace.c 3365 */;
	char *cocci_id/* kernel/trace/trace.c 3256 */;
	struct print_entry *cocci_id/* kernel/trace/trace.c 3254 */;
	va_list cocci_id/* kernel/trace/trace.c 3249 */;
	const char *cocci_id/* kernel/trace/trace.c 3249 */;
	u32 *cocci_id/* kernel/trace/trace.c 3213 */;
	struct bprint_entry *cocci_id/* kernel/trace/trace.c 3193 */;
	struct trace_buffer_struct cocci_id/* kernel/trace/trace.c 3111 */;
	struct trace_buffer_struct *cocci_id/* kernel/trace/trace.c 3109 */;
	struct trace_buffer_struct {
		int nesting;
		char buffer[4][TRACE_BUF_SIZE];
	} cocci_id/* kernel/trace/trace.c 3075 */;
	struct userstack_entry *cocci_id/* kernel/trace/trace.c 3025 */;
	struct stack_entry *cocci_id/* kernel/trace/trace.c 2894 */;
	struct ftrace_stack *cocci_id/* kernel/trace/trace.c 2893 */;
	unsigned int cocci_id/* kernel/trace/trace.c 2892 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace.c 2890 */;
	struct ftrace_stacks {
		struct ftrace_stack stacks[FTRACE_KSTACK_NESTING];
	} cocci_id/* kernel/trace/trace.c 2879 */;
	struct ftrace_stack {
		unsigned long calls[FTRACE_KSTACK_ENTRIES];
	} cocci_id/* kernel/trace/trace.c 2874 */;
	struct ftrace_entry *cocci_id/* kernel/trace/trace.c 2850 */;
	struct trace_export *cocci_id/* kernel/trace/trace.c 2793 */;
	struct trace_export **cocci_id/* kernel/trace/trace.c 2793 */;
	struct trace_export __rcu *cocci_id/* kernel/trace/trace.c 2733 */;
	size_t *cocci_id/* kernel/trace/trace.c 2639 */;
	void __user *cocci_id/* kernel/trace/trace.c 2639 */;
	struct ctl_table *cocci_id/* kernel/trace/trace.c 2638 */;
	struct trace_event *cocci_id/* kernel/trace/trace.c 2613 */;
	struct trace_event_buffer *cocci_id/* kernel/trace/trace.c 2610 */;
	struct ring_buffer **cocci_id/* kernel/trace/trace.c 2567 */;
	struct page *cocci_id/* kernel/trace/trace.c 2474 */;
	unsigned long long cocci_id/* kernel/trace/trace.c 247 */;
	unsigned short cocci_id/* kernel/trace/trace.c 2422 */;
	unsigned cocci_id/* kernel/trace/trace.c 2271 */;
	char cocci_id/* kernel/trace/trace.c 2269 */[];
	int __init cocci_id/* kernel/trace/trace.c 209 */;
	struct saved_cmdlines_buffer *cocci_id/* kernel/trace/trace.c 2046 */;
	struct saved_cmdlines_buffer {
		unsigned map_pid_to_cmdline[PID_MAX_DEFAULT + 1];
		unsigned *map_cmdline_to_pid;
		unsigned cmdline_num;
		int cmdline_idx;
		char *saved_cmdlines;
	} cocci_id/* kernel/trace/trace.c 2023 */;
	void __init cocci_id/* kernel/trace/trace.c 1868 */(void);
	void cocci_id/* kernel/trace/trace.c 1866 */(struct trace_array *tr,
						     struct tracer *t);
	struct trace_selftests *cocci_id/* kernel/trace/trace.c 1817 */;
	struct trace_selftests {
		struct list_head list;
		struct tracer *type;
	} cocci_id/* kernel/trace/trace.c 1728 */;
	char cocci_id/* kernel/trace/trace.c 170 */[MAX_TRACER_SIZE]__initdata;
	void cocci_id/* kernel/trace/trace.c 166 */(struct ring_buffer *buffer,
						    unsigned long flags,
						    int pc);
	int cocci_id/* kernel/trace/trace.c 165 */(struct trace_array *tr,
						   const char *buf);
	struct trace_array_cpu *cocci_id/* kernel/trace/trace.c 1595 */;
	struct trace_buffer *cocci_id/* kernel/trace/trace.c 1593 */;
	struct task_struct *cocci_id/* kernel/trace/trace.c 1591 */;
	union trace_eval_map_item {
		struct trace_eval_map map;
		struct trace_eval_map_head head;
		struct trace_eval_map_tail tail;
	} cocci_id/* kernel/trace/trace.c 156 */;
	struct irq_work *cocci_id/* kernel/trace/trace.c 1530 */;
	struct work_struct *cocci_id/* kernel/trace/trace.c 1522 */;
	struct workqueue_struct *cocci_id/* kernel/trace/trace.c 1520 */;
	unsigned long __read_mostly cocci_id/* kernel/trace/trace.c 1514 */;
	char cocci_id/* kernel/trace/trace.c 1423 */;
	struct trace_parser *cocci_id/* kernel/trace/trace.c 1420 */;
	struct trace_eval_map_tail {
		union trace_eval_map_item *next;
		const char *end;
	} cocci_id/* kernel/trace/trace.c 138 */;
	struct {
		u64 (*func)(void);
		const char *name;
		int in_ns;
	} cocci_id/* kernel/trace/trace.c 1361 */[];
	union trace_eval_map_item cocci_id/* kernel/trace/trace.c 136 */;
	struct trace_eval_map_head {
		struct module *mod;
		unsigned long length;
	} cocci_id/* kernel/trace/trace.c 131 */;
	int cocci_id/* kernel/trace/trace.c 127 */;
	struct cond_snapshot *cocci_id/* kernel/trace/trace.c 1135 */;
	cond_update_fn_t cocci_id/* kernel/trace/trace.c 1133 */;
	cpumask_var_t __read_mostly cocci_id/* kernel/trace/trace.c 106 */;
	void cocci_id/* kernel/trace/trace.c 1041 */(struct trace_buffer *buf,
						     unsigned long val);
	int cocci_id/* kernel/trace/trace.c 1039 */(struct trace_buffer *trace_buf,
						    struct trace_buffer *size_buf,
						    int cpu_id);
	__typeof__(bool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct mutex) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct ftrace_stacks) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct ring_buffer_event *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
