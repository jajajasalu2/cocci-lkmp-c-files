cocci_test_suite() {
	struct pmu cocci_id/* kernel/events/core.c 9945 */;
	ktime_t cocci_id/* kernel/events/core.c 9849 */;
	const enum perf_addr_filter_action_t cocci_id/* kernel/events/core.c 9571 */[];
	substring_t cocci_id/* kernel/events/core.c 9561 */[MAX_OPT_ARGS];
	const match_table_t cocci_id/* kernel/events/core.c 9541 */;
	enum{IF_STATE_ACTION=0, IF_STATE_SOURCE, IF_STATE_END,} cocci_id/* kernel/events/core.c 9535 */;
	enum{IF_ACT_NONE=-1, IF_ACT_FILTER, IF_ACT_START, IF_ACT_STOP, IF_SRC_FILE, IF_SRC_KERNEL, IF_SRC_FILEADDR, IF_SRC_KERNELADDR,} cocci_id/* kernel/events/core.c 9524 */;
	struct perf_addr_filter_range *cocci_id/* kernel/events/core.c 9432 */;
	struct mm_struct *cocci_id/* kernel/events/core.c 9431 */;
	struct list_head *cocci_id/* kernel/events/core.c 9387 */;
	struct bpf_perf_event_data_kern cocci_id/* kernel/events/core.c 9193 */;
	struct perf_cgroup cocci_id/* kernel/events/core.c 913 */;
	int cocci_id/* kernel/events/core.c 9071 */(struct perf_event *event);
	const struct attribute_group *cocci_id/* kernel/events/core.c 9066 */[];
	struct attribute_group cocci_id/* kernel/events/core.c 9061 */;
	struct attribute *cocci_id/* kernel/events/core.c 9056 */[];
	enum perf_probe_config{PERF_PROBE_CONFIG_IS_RETPROBE=1U << 0, PERF_UPROBE_REF_CTR_OFFSET_BITS=32, PERF_UPROBE_REF_CTR_OFFSET_SHIFT=64 - PERF_UPROBE_REF_CTR_OFFSET_BITS,} cocci_id/* kernel/events/core.c 9046 */;
	struct trace_entry *cocci_id/* kernel/events/core.c 8968 */;
	struct perf_raw_record cocci_id/* kernel/events/core.c 8945 */;
	struct pt_regs **cocci_id/* kernel/events/core.c 8927 */;
	struct trace_event_call *cocci_id/* kernel/events/core.c 8922 */;
	struct static_key cocci_id/* kernel/events/core.c 8823 */[PERF_COUNT_SW_MAX];
	struct perf_sample_data cocci_id/* kernel/events/core.c 8669 */;
	u64 cocci_id/* kernel/events/core.c 8667 */;
	u32 cocci_id/* kernel/events/core.c 8667 */;
	struct pt_regs *cocci_id/* kernel/events/core.c 8667 */;
	void cocci_id/* kernel/events/core.c 8667 */;
	struct swevent_htable *cocci_id/* kernel/events/core.c 8633 */;
	enum perf_type_id cocci_id/* kernel/events/core.c 8628 */;
	struct swevent_hlist *cocci_id/* kernel/events/core.c 8587 */;
	struct hlist_head *cocci_id/* kernel/events/core.c 8586 */;
	struct swevent_htable {
		struct swevent_hlist *swevent_hlist;
		struct mutex hlist_mutex;
		int hlist_refcount;
		int recursion[PERF_NR_CONTEXTS];
	} cocci_id/* kernel/events/core.c 8448 */;
	s64 cocci_id/* kernel/events/core.c 8378 */;
	struct hw_perf_event *cocci_id/* kernel/events/core.c 8356 */;
	struct perf_aux_event {
		struct perf_event_header header;
		u32 pid;
		u32 tid;
	} cocci_id/* kernel/events/core.c 8321 */;
	struct perf_bpf_event cocci_id/* kernel/events/core.c 8274 */;
	char cocci_id/* kernel/events/core.c 8249 */[KSYM_NAME_LEN];
	enum perf_bpf_event_type cocci_id/* kernel/events/core.c 8246 */;
	struct perf_bpf_event *cocci_id/* kernel/events/core.c 8224 */;
	struct perf_bpf_event {
		struct bpf_prog *prog;
		struct {
			struct perf_event_header header;
			u16 type;
			u16 flags;
			u32 id;
			u8 tag[BPF_TAG_SIZE];
		} event_id;
	} cocci_id/* kernel/events/core.c 8206 */;
	struct perf_ksymbol_event cocci_id/* kernel/events/core.c 8159 */;
	const char *cocci_id/* kernel/events/core.c 8157 */;
	struct perf_ksymbol_event *cocci_id/* kernel/events/core.c 8134 */;
	struct perf_ksymbol_event {
		const char *name;
		int name_len;
		struct {
			struct perf_event_header header;
			u64 addr;
			u32 len;
			u16 ksym_type;
			u16 flags;
		} event_id;
	} cocci_id/* kernel/events/core.c 8115 */;
	struct {
		struct perf_event_header header;
		u64 time;
		u64 id;
		u64 stream_id;
	} cocci_id/* kernel/events/core.c 8080 */;
	struct perf_switch_event cocci_id/* kernel/events/core.c 8043 */;
	struct perf_switch_event *cocci_id/* kernel/events/core.c 8003 */;
	struct perf_switch_event {
		struct task_struct *task;
		struct task_struct *next_prev;
		struct {
			struct perf_event_header header;
			u32 next_prev_pid;
			u32 next_prev_tid;
		} event_id;
	} cocci_id/* kernel/events/core.c 7985 */;
	struct {
		struct perf_event_header header;
		u64 lost;
	} cocci_id/* kernel/events/core.c 7957 */;
	struct perf_aux_event {
		struct perf_event_header header;
		u64 offset;
		u64 size;
		u64 flags;
	} cocci_id/* kernel/events/core.c 7919 */;
	struct perf_mmap_event cocci_id/* kernel/events/core.c 7881 */;
	unsigned long cocci_id/* kernel/events/core.c 7828 */;
	unsigned int cocci_id/* kernel/events/core.c 7827 */;
	struct perf_addr_filter *cocci_id/* kernel/events/core.c 7826 */;
	struct vm_area_struct *cocci_id/* kernel/events/core.c 7825 */;
	struct perf_addr_filters_head *cocci_id/* kernel/events/core.c 7824 */;
	struct perf_event *cocci_id/* kernel/events/core.c 7822 */;
	void *cocci_id/* kernel/events/core.c 7822 */;
	struct file *cocci_id/* kernel/events/core.c 7781 */;
	dev_t cocci_id/* kernel/events/core.c 7692 */;
	struct inode *cocci_id/* kernel/events/core.c 7691 */;
	char cocci_id/* kernel/events/core.c 7665 */[16];
	struct perf_mmap_event *cocci_id/* kernel/events/core.c 7657 */;
	struct perf_mmap_event {
		struct vm_area_struct *vma;
		const char *file_name;
		int file_size;
		int maj,min;
		u64 ino;
		u64 ino_generation;
		u32 prot,flags;
		struct {
			struct perf_event_header header;
			u32 pid;
			u32 tid;
			u64 start;
			u64 len;
			u64 pgoff;
		} event_id;
	} cocci_id/* kernel/events/core.c 7571 */;
	struct perf_ns_link_info *cocci_id/* kernel/events/core.c 7512 */;
	struct perf_namespaces_event cocci_id/* kernel/events/core.c 7511 */;
	struct path cocci_id/* kernel/events/core.c 7496 */;
	const struct proc_ns_operations *cocci_id/* kernel/events/core.c 7494 */;
	struct perf_namespaces_event *cocci_id/* kernel/events/core.c 7462 */;
	struct perf_namespaces_event {
		struct task_struct *task;
		struct {
			struct perf_event_header header;
			u32 pid;
			u32 tid;
			u64 nr_namespaces;
			struct perf_ns_link_info link_info[NR_NAMESPACES];
		} event_id;
	} cocci_id/* kernel/events/core.c 7441 */;
	struct perf_comm_event cocci_id/* kernel/events/core.c 7414 */;
	char cocci_id/* kernel/events/core.c 7395 */[TASK_COMM_LEN];
	struct perf_comm_event *cocci_id/* kernel/events/core.c 7393 */;
	struct perf_comm_event {
		struct task_struct *task;
		char *comm;
		int comm_size;
		struct {
			struct perf_event_header header;
			u32 pid;
			u32 tid;
		} event_id;
	} cocci_id/* kernel/events/core.c 7342 */;
	struct perf_task_event cocci_id/* kernel/events/core.c 7303 */;
	struct perf_task_event *cocci_id/* kernel/events/core.c 7266 */;
	struct perf_task_event {
		struct task_struct *task;
		struct perf_event_context *task_ctx;
		struct {
			struct perf_event_header header;
			u32 pid;
			u32 ppid;
			u32 tid;
			u32 ptid;
			u64 time;
		} event_id;
	} cocci_id/* kernel/events/core.c 7241 */;
	struct remote_output cocci_id/* kernel/events/core.c 7191 */;
	struct stop_event_data cocci_id/* kernel/events/core.c 7162 */;
	struct ring_buffer *cocci_id/* kernel/events/core.c 7161 */;
	struct remote_output *cocci_id/* kernel/events/core.c 7160 */;
	struct remote_output {
		struct ring_buffer *rb;
		int err;
	} cocci_id/* kernel/events/core.c 7152 */;
	struct perf_cgroup_info *cocci_id/* kernel/events/core.c 715 */;
	perf_iterate_f cocci_id/* kernel/events/core.c 7023 */;
	void cocci_id/* kernel/events/core.c 7019 */(struct perf_event *event,
						     void *data);
	struct perf_read_event cocci_id/* kernel/events/core.c 6996 */;
	struct perf_read_event {
		struct perf_event_header header;
		u32 pid;
		u32 tid;
	} cocci_id/* kernel/events/core.c 6983 */;
	struct perf_event_header cocci_id/* kernel/events/core.c 6934 */;
	struct perf_output_handle cocci_id/* kernel/events/core.c 6933 */;
	int (*cocci_id/* kernel/events/core.c 6929 */)(struct perf_output_handle *,
						       struct perf_event *,
						       unsigned int);
	struct remote_function_call *cocci_id/* kernel/events/core.c 68 */;
	const u32 cocci_id/* kernel/events/core.c 6762 */;
	struct perf_callchain_entry *cocci_id/* kernel/events/core.c 6755 */;
	struct perf_callchain_entry cocci_id/* kernel/events/core.c 6753 */;
	uintptr_t cocci_id/* kernel/events/core.c 6731 */;
	struct page *cocci_id/* kernel/events/core.c 6724 */;
	struct perf_branch_entry cocci_id/* kernel/events/core.c 6634 */;
	struct {
		u32 size;
		u32 data;
	} cocci_id/* kernel/events/core.c 6618 */;
	struct perf_raw_frag *cocci_id/* kernel/events/core.c 6600 */;
	struct perf_raw_record *cocci_id/* kernel/events/core.c 6597 */;
	u64 cocci_id/* kernel/events/core.c 6479 */[5];
	u64 cocci_id/* kernel/events/core.c 6455 */[4];
	struct perf_sample_data *cocci_id/* kernel/events/core.c 6419 */;
	struct perf_output_handle *cocci_id/* kernel/events/core.c 6418 */;
	struct perf_event_header *cocci_id/* kernel/events/core.c 6380 */;
	mm_segment_t cocci_id/* kernel/events/core.c 6233 */;
	struct perf_regs *cocci_id/* kernel/events/core.c 6157 */;
	struct perf_guest_info_callbacks *cocci_id/* kernel/events/core.c 6110 */;
	enum perf_event_state cocci_id/* kernel/events/core.c 608 */;
	struct fasync_struct **cocci_id/* kernel/events/core.c 6029 */;
	struct remote_function_call {
		struct task_struct *p;
		remote_function_f func;
		void *info;
		int ret;
	} cocci_id/* kernel/events/core.c 59 */;
	struct user_struct *cocci_id/* kernel/events/core.c 5792 */;
	const struct vm_operations_struct cocci_id/* kernel/events/core.c 5781 */;
	int (*cocci_id/* kernel/events/core.c 57 */)(void *);
	u64 cocci_id/* kernel/events/core.c 567 */(struct perf_event *event);
	void cocci_id/* kernel/events/core.c 566 */(struct perf_event_context *ctx);
	void cocci_id/* kernel/events/core.c 562 */(struct perf_cpu_context *cpuctx,
						    enum event_type_t event_type,
						    struct task_struct *task);
	void cocci_id/* kernel/events/core.c 559 */(struct perf_cpu_context *cpuctx,
						    enum event_type_t event_type);
	atomic64_t cocci_id/* kernel/events/core.c 557 */;
	vm_fault_t cocci_id/* kernel/events/core.c 5515 */;
	struct vm_fault *cocci_id/* kernel/events/core.c 5515 */;
	struct perf_event_mmap_page *cocci_id/* kernel/events/core.c 5455 */;
	void __weak cocci_id/* kernel/events/core.c 5454 */;
	struct perf_event_attr __user *cocci_id/* kernel/events/core.c 5317 */;
	struct perf_event_attr cocci_id/* kernel/events/core.c 5316 */;
	struct fd cocci_id/* kernel/events/core.c 5279 */;
	void __user *cocci_id/* kernel/events/core.c 5269 */;
	u64 __user *cocci_id/* kernel/events/core.c 5260 */;
	void (*cocci_id/* kernel/events/core.c 5239 */)(struct perf_event *);
	long cocci_id/* kernel/events/core.c 5237 */;
	int cocci_id/* kernel/events/core.c 5234 */(struct perf_event_attr __user *uattr,
						    struct perf_event_attr *attr);
	int cocci_id/* kernel/events/core.c 5233 */(struct perf_event *event,
						    u32 prog_fd);
	int cocci_id/* kernel/events/core.c 5232 */(struct perf_event *event,
						    void __user *arg);
	int cocci_id/* kernel/events/core.c 5230 */(struct perf_event *event,
						    struct perf_event *output_event);
	struct fd *cocci_id/* kernel/events/core.c 5216 */;
	const struct file_operations cocci_id/* kernel/events/core.c 5214 */;
	bool cocci_id/* kernel/events/core.c 5143 */;
	u64 *cocci_id/* kernel/events/core.c 5142 */;
	__poll_t cocci_id/* kernel/events/core.c 5054 */;
	poll_table *cocci_id/* kernel/events/core.c 5054 */;
	char __user *cocci_id/* kernel/events/core.c 5011 */;
	size_t cocci_id/* kernel/events/core.c 5011 */;
	ssize_t cocci_id/* kernel/events/core.c 5010 */;
	struct irq_work *cocci_id/* kernel/events/core.c 494 */;
	loff_t *cocci_id/* kernel/events/core.c 463 */;
	size_t *cocci_id/* kernel/events/core.c 462 */;
	struct ctl_table *cocci_id/* kernel/events/core.c 461 */;
	void cocci_id/* kernel/events/core.c 4579 */(struct perf_event *event,
						     struct list_head *head);
	struct work_struct *cocci_id/* kernel/events/core.c 4485 */;
	struct perf_event_attr *cocci_id/* kernel/events/core.c 4389 */;
	void cocci_id/* kernel/events/core.c 4375 */(struct perf_event *event,
						     struct ring_buffer *rb);
	void cocci_id/* kernel/events/core.c 4362 */(struct perf_event *event);
	bool cocci_id/* kernel/events/core.c 434 */(struct perf_cpu_context *cpuctx);
	pid_t cocci_id/* kernel/events/core.c 4242 */;
	struct perf_event_context cocci_id/* kernel/events/core.c 4229 */;
	struct perf_read_data cocci_id/* kernel/events/core.c 4142 */;
	struct pmu *cocci_id/* kernel/events/core.c 4001 */;
	struct perf_read_data *cocci_id/* kernel/events/core.c 3997 */;
	struct perf_read_data {
		struct perf_event *event;
		bool group;
		int ret;
	} cocci_id/* kernel/events/core.c 3969 */;
	cpumask_var_t cocci_id/* kernel/events/core.c 393 */;
	struct srcu_struct cocci_id/* kernel/events/core.c 392 */;
	atomic_t cocci_id/* kernel/events/core.c 388 */;
	typeof(*event) cocci_id/* kernel/events/core.c 3840 */;
	struct perf_event cocci_id/* kernel/events/core.c 3835 */;
	void cocci_id/* kernel/events/core.c 371 */(struct work_struct *work);
	enum event_type_t{EVENT_FLEXIBLE=0x1, EVENT_PINNED=0x2, EVENT_TIME=0x4, EVENT_CPU=0x8, EVENT_ALL=EVENT_FLEXIBLE | EVENT_PINNED,} cocci_id/* kernel/events/core.c 357 */;
	enum event_type_t cocci_id/* kernel/events/core.c 3549 */;
	struct sched_in_data cocci_id/* kernel/events/core.c 3494 */;
	struct sched_in_data *cocci_id/* kernel/events/core.c 3454 */;
	struct sched_in_data {
		struct perf_event_context *ctx;
		struct perf_cpu_context *cpuctx;
		int can_add_hw;
	} cocci_id/* kernel/events/core.c 3421 */;
	struct perf_event **cocci_id/* kernel/events/core.c 3393 */;
	int (*cocci_id/* kernel/events/core.c 3391 */)(struct perf_event *,
						       void *);
	void cocci_id/* kernel/events/core.c 3341 */(struct task_struct *task,
						     struct task_struct *next_prev,
						     bool sched_in);
	struct stop_event_data *cocci_id/* kernel/events/core.c 2870 */;
	struct stop_event_data {
		struct perf_event *event;
		unsigned int restart;
	} cocci_id/* kernel/events/core.c 2863 */;
	bool cocci_id/* kernel/events/core.c 2656 */(struct perf_event *event,
						     struct perf_event_context *ctx);
	struct perf_cgroup *cocci_id/* kernel/events/core.c 2636 */;
	struct event_function_struct cocci_id/* kernel/events/core.c 252 */;
	void cocci_id/* kernel/events/core.c 2499 */(struct perf_event_context *ctx,
						     struct perf_cpu_context *cpuctx,
						     enum event_type_t event_type,
						     struct task_struct *task);
	void cocci_id/* kernel/events/core.c 2496 */(struct perf_event_context *ctx,
						     struct perf_cpu_context *cpuctx,
						     enum event_type_t event_type);
	event_f cocci_id/* kernel/events/core.c 248 */;
	void cocci_id/* kernel/events/core.c 2342 */(struct perf_event *event,
						     int enable);
	struct event_function_struct *cocci_id/* kernel/events/core.c 204 */;
	struct event_function_struct {
		struct perf_event *event;
		event_f func;
		void *data;
	} cocci_id/* kernel/events/core.c 196 */;
	void (*cocci_id/* kernel/events/core.c 193 */)(struct perf_event *,
						       struct perf_cpu_context *,
						       struct perf_event_context *,
						       void *);
	void cocci_id/* kernel/events/core.c 1903 */(struct perf_event *event,
						     struct perf_cpu_context *cpuctx,
						     struct perf_event_context *ctx);
	u16 cocci_id/* kernel/events/core.c 1730 */;
	struct rb_node *cocci_id/* kernel/events/core.c 1618 */;
	struct perf_event_groups *cocci_id/* kernel/events/core.c 1579 */;
	struct rb_node **cocci_id/* kernel/events/core.c 1552 */;
	struct perf_event_context *cocci_id/* kernel/events/core.c 146 */;
	struct perf_cpu_context *cocci_id/* kernel/events/core.c 145 */;
	unsigned long *cocci_id/* kernel/events/core.c 1368 */;
	struct remote_function_call cocci_id/* kernel/events/core.c 133 */;
	enum pid_type cocci_id/* kernel/events/core.c 1321 */;
	remote_function_f cocci_id/* kernel/events/core.c 131 */;
	struct cgroup_subsys cocci_id/* kernel/events/core.c 12602 */;
	struct cgroup_subsys_state *cocci_id/* kernel/events/core.c 12596 */;
	struct cgroup_taskset *cocci_id/* kernel/events/core.c 12593 */;
	struct task_struct *cocci_id/* kernel/events/core.c 12586 */;
	int cocci_id/* kernel/events/core.c 12584 */;
	struct perf_cgroup_info cocci_id/* kernel/events/core.c 12567 */;
	int __init cocci_id/* kernel/events/core.c 12529 */;
	struct perf_pmu_events_attr cocci_id/* kernel/events/core.c 12520 */;
	struct perf_pmu_events_attr *cocci_id/* kernel/events/core.c 12519 */;
	struct perf_event_mmap_page cocci_id/* kernel/events/core.c 12512 */;
	void __init cocci_id/* kernel/events/core.c 12490 */;
	struct notifier_block cocci_id/* kernel/events/core.c 12485 */;
	struct notifier_block *cocci_id/* kernel/events/core.c 12471 */;
	int *cocci_id/* kernel/events/core.c 12211 */;
	const struct perf_event_attr *cocci_id/* kernel/events/core.c 12032 */;
	const struct perf_event *cocci_id/* kernel/events/core.c 12024 */;
	struct rcu_head *cocci_id/* kernel/events/core.c 1178 */;
	struct perf_cpu_context cocci_id/* kernel/events/core.c 11656 */;
	clockid_t cocci_id/* kernel/events/core.c 11075 */;
	struct mutex *cocci_id/* kernel/events/core.c 11066 */;
	struct hrtimer *cocci_id/* kernel/events/core.c 1087 */;
	struct perf_addr_filter_range cocci_id/* kernel/events/core.c 10821 */;
	struct bpf_prog *cocci_id/* kernel/events/core.c 10745 */;
	unsigned cocci_id/* kernel/events/core.c 10676 */;
	perf_overflow_handler_t cocci_id/* kernel/events/core.c 10668 */;
	enum hrtimer_restart cocci_id/* kernel/events/core.c 1065 */;
	struct pmu_event_list *cocci_id/* kernel/events/core.c 10545 */;
	struct lock_class_key cocci_id/* kernel/events/core.c 10270 */;
	struct device cocci_id/* kernel/events/core.c 10228 */;
	struct bus_type cocci_id/* kernel/events/core.c 10214 */;
	struct idr cocci_id/* kernel/events/core.c 10144 */;
	char *cocci_id/* kernel/events/core.c 10136 */;
	struct device_attribute *cocci_id/* kernel/events/core.c 10135 */;
	struct device *cocci_id/* kernel/events/core.c 10134 */;
	struct perf_cpu_context __percpu *cocci_id/* kernel/events/core.c 10103 */;
	
}
