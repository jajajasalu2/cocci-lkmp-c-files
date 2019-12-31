cocci_test_suite() {struct worker cocci_id/* kernel/workqueue.c 819 */;
	struct worker_pool *cocci_id/* kernel/workqueue.c 762 */;
	int cocci_id/* kernel/workqueue.c 5901 */[NR_STD_WORKER_POOLS];
	enum{POOL_MANAGER_ACTIVE=1 << 0, POOL_DISASSOCIATED=1 << 2, WORKER_DIE=1 << 1, WORKER_IDLE=1 << 2, WORKER_PREP=1 << 3, WORKER_CPU_INTENSIVE=1 << 6, WORKER_UNBOUND=1 << 7, WORKER_REBOUND=1 << 8, WORKER_NOT_RUNNING=WORKER_PREP | WORKER_CPU_INTENSIVE | WORKER_UNBOUND | WORKER_REBOUND, NR_STD_WORKER_POOLS=2, UNBOUND_POOL_HASH_ORDER=6, BUSY_WORKER_HASH_ORDER=6, MAX_IDLE_WORKERS_RATIO=4, IDLE_WORKER_TIMEOUT=300 * HZ, MAYDAY_INITIAL_TIMEOUT=HZ / 100 >= 2 ? HZ / 100 : 2, MAYDAY_INTERVAL=HZ / 10, CREATE_COOLDOWN=HZ, RESCUER_NICE_LEVEL=MIN_NICE, HIGHPRI_NICE_LEVEL=MIN_NICE, WQ_NAME_LEN=24,} cocci_id/* kernel/workqueue.c 56 */;
	struct device_attribute cocci_id/* kernel/workqueue.c 5590 */;
	struct device_attribute cocci_id/* kernel/workqueue.c 5547 */[];
	struct wq_device cocci_id/* kernel/workqueue.c 5352 */;
	struct wq_device *cocci_id/* kernel/workqueue.c 5352 */;
	struct wq_device {
		struct workqueue_struct *wq;
		struct device dev;
	} cocci_id/* kernel/workqueue.c 5345 */;
	long (*cocci_id/* kernel/workqueue.c 5101 */)(void *);
	struct work_for_cpu cocci_id/* kernel/workqueue.c 5085 */;
	struct work_for_cpu *cocci_id/* kernel/workqueue.c 5085 */;
	struct work_for_cpu {
		struct work_struct work;
		long (*fn)(void *);
		void *arg;
		long ret;
	} cocci_id/* kernel/workqueue.c 5076 */;
	char cocci_id/* kernel/workqueue.c 4608 */[WORKER_DESC_LEN];
	char cocci_id/* kernel/workqueue.c 4607 */[WQ_NAME_LEN];
	work_func_t *cocci_id/* kernel/workqueue.c 4606 */;
	struct pool_workqueue cocci_id/* kernel/workqueue.c 4143 */;
	struct apply_wqattrs_ctx *cocci_id/* kernel/workqueue.c 3995 */;
	struct apply_wqattrs_ctx {
		struct workqueue_struct *wq;
		struct workqueue_attrs *attrs;
		struct list_head list;
		struct pool_workqueue *dfl_pwq;
		struct pool_workqueue *pwq_tbl[];
	} cocci_id/* kernel/workqueue.c 3862 */;
	const struct workqueue_attrs *cocci_id/* kernel/workqueue.c 3770 */;
	void cocci_id/* kernel/workqueue.c 358 */(struct pool_workqueue *pwq);
	void cocci_id/* kernel/workqueue.c 357 */(struct workqueue_struct *wq);
	int cocci_id/* kernel/workqueue.c 356 */(void *__worker);
	struct worker_pool cocci_id/* kernel/workqueue.c 3496 */;
	struct workqueue_struct cocci_id/* kernel/workqueue.c 3481 */;
	struct workqueue_attrs *cocci_id/* kernel/workqueue.c 339 */[NR_STD_WORKER_POOLS];
	struct execute_work *cocci_id/* kernel/workqueue.c 3313 */;
	struct worker_pool cocci_id/* kernel/workqueue.c 328 */[NR_STD_WORKER_POOLS];
	struct work_struct __percpu *cocci_id/* kernel/workqueue.c 3278 */;
	struct rcu_work *cocci_id/* kernel/workqueue.c 3198 */;
	struct cwt_wait cocci_id/* kernel/workqueue.c 3105 */;
	struct cwt_wait *cocci_id/* kernel/workqueue.c 3073 */;
	struct cwt_wait {
		wait_queue_entry_t wait;
		struct work_struct *work;
	} cocci_id/* kernel/workqueue.c 3066 */;
	struct wq_barrier cocci_id/* kernel/workqueue.c 3027 */;
	struct wq_flusher *cocci_id/* kernel/workqueue.c 2850 */;
	struct wq_flusher cocci_id/* kernel/workqueue.c 2765 */;
	struct wq_barrier *cocci_id/* kernel/workqueue.c 2646 */;
	struct wq_barrier {
		struct work_struct work;
		struct completion done;
		struct task_struct *task;
	} cocci_id/* kernel/workqueue.c 2609 */;
	work_func_t cocci_id/* kernel/workqueue.c 2591 */;
	struct workqueue_struct {
		struct list_head pwqs;
		struct list_head list;
		struct mutex mutex;
		int work_color;
		int flush_color;
		atomic_t nr_pwqs_to_flush;
		struct wq_flusher *first_flusher;
		struct list_head flusher_queue;
		struct list_head flusher_overflow;
		struct list_head maydays;
		struct worker *rescuer;
		int nr_drainers;
		int saved_max_active;
		struct workqueue_attrs *unbound_attrs;
		struct pool_workqueue *dfl_pwq;
#ifdef CONFIG_SYSFS
		struct wq_device *wq_dev;
#endif
#ifdef CONFIG_LOCKDEP
		char *lock_name;
		struct lock_class_key key;
		struct lockdep_map lockdep_map;
#endif
		char name[WQ_NAME_LEN];
		struct rcu_head rcu;
		unsigned int flags ____cacheline_aligned;
		struct pool_workqueue __percpu *cpu_pwqs;
		struct pool_workqueue __rcu *numa_pwq_tbl[];
	} cocci_id/* kernel/workqueue.c 238 */;
	struct wq_flusher {
		struct list_head list;
		int flush_color;
		struct completion done;
	} cocci_id/* kernel/workqueue.c 226 */;
	struct pool_workqueue {
		struct worker_pool *pool;
		struct workqueue_struct *wq;
		int work_color;
		int flush_color;
		int refcnt;
		int nr_in_flight[WORK_NR_COLORS];
		int nr_active;
		int max_active;
		struct list_head delayed_works;
		struct list_head pwqs_node;
		struct list_head mayday_node;
		struct work_struct unbound_release_work;
		struct rcu_head rcu;
	}__aligned(1<<WORK_STRUCT_FLAG_BITS) cocci_id/* kernel/workqueue.c 199 */;
	struct rcu_work cocci_id/* kernel/workqueue.c 1718 */;
	struct worker_pool {
		spinlock_t lock;
		int cpu;
		int node;
		int id;
		unsigned int flags;
		unsigned long watchdog_ts;
		struct list_head worklist;
		int nr_workers;
		int nr_idle;
		struct list_head idle_list;
		struct timer_list idle_timer;
		struct timer_list mayday_timer;
		DECLARE_HASHTABLE(busy_hash,BUSY_WORKER_HASH_ORDER);
		struct worker *manager;
		struct list_head workers;
		struct completion *detach_completion;
		struct ida worker_ida;
		struct workqueue_attrs *attrs;
		struct hlist_node hash_node;
		int refcnt;
		atomic_t nr_running ____cacheline_aligned_in_smp;
		struct rcu_head rcu;
	}____cacheline_aligned_in_smp cocci_id/* kernel/workqueue.c 147 */;
	struct pool_workqueue *cocci_id/* kernel/workqueue.c 1392 */;
	struct work_struct **cocci_id/* kernel/workqueue.c 1054 */;
	u64 __read_mostly cocci_id/* kernel/watchdog.c 169 */;
	int __weak __init cocci_id/* kernel/watchdog.c 117 */;
	enum uts_proc cocci_id/* kernel/utsname_sysctl.c 130 */;
	struct uts_namespace *cocci_id/* kernel/utsname.c 45 */;
	struct kmem_cache *
uts_ns_cache
cocci_id/* kernel/utsname.c 18 */;
	struct uts_namespace cocci_id/* kernel/utsname.c 110 */;
	struct uid_gid_map cocci_id/* kernel/user_namespace.c 852 */;
	const struct uid_gid_extent *cocci_id/* kernel/user_namespace.c 790 */;
	struct uid_gid_extent cocci_id/* kernel/user_namespace.c 762 */;
	struct uid_gid_map *cocci_id/* kernel/user_namespace.c 753 */;
	struct uid_gid_extent *cocci_id/* kernel/user_namespace.c 601 */;
	projid_t cocci_id/* kernel/user_namespace.c 540 */;
	kprojid_t cocci_id/* kernel/user_namespace.c 540 */;
	bool cocci_id/* kernel/user_namespace.c 27 */(const struct file *file,
						      struct user_namespace *ns,
						      int cap_setid,
						      struct uid_gid_map *map);
	struct idmap_key cocci_id/* kernel/user_namespace.c 256 */;
	const struct idmap_key *cocci_id/* kernel/user_namespace.c 226 */;
	struct idmap_key {
		bool map_up;
		u32 id;
		u32 count;
	} cocci_id/* kernel/user_namespace.c 213 */;
	struct cred **cocci_id/* kernel/user_namespace.c 154 */;
	struct user_struct cocci_id/* kernel/user.c 99 */;
	struct hlist_head cocci_id/* kernel/user.c 85 */[UIDHASH_SZ];
	struct user_return_notifier *cocci_id/* kernel/user-return-notifier.c 37 */;
	struct umh_info *cocci_id/* kernel/umh.c 694 */;
	unsigned long cocci_id/* kernel/umh.c 636 */[_KERNEL_CAPABILITY_U32S];
	struct file *cocci_id/* kernel/umh.c 438 */[2];
	void (*cocci_id/* kernel/umh.c 382 */)(struct subprocess_info *info);
	int (*cocci_id/* kernel/umh.c 381 */)(struct subprocess_info *info,
					      struct cred *new);
	enum umh_disable_depth cocci_id/* kernel/umh.c 317 */;
	struct subprocess_info cocci_id/* kernel/umh.c 184 */;
	const char __user *const __user*cocci_id/* kernel/umh.c 113 */;
	old_uid_t *cocci_id/* kernel/uid16.c 64 */;
	old_uid_t cocci_id/* kernel/uid16.c 23 */;
	old_gid_t cocci_id/* kernel/uid16.c 23 */;
	getegid16 cocci_id/* kernel/uid16.c 218 */;
	getgid16 cocci_id/* kernel/uid16.c 213 */;
	geteuid16 cocci_id/* kernel/uid16.c 208 */;
	getuid16 cocci_id/* kernel/uid16.c 203 */;
	old_gid_t *cocci_id/* kernel/uid16.c 154 */;
	old_gid_t __user *cocci_id/* kernel/uid16.c 133 */;
	struct ctl_table_root cocci_id/* kernel/ucount.c 50 */;
	struct user_namespace cocci_id/* kernel/ucount.c 38 */;
	struct ctl_table_set *cocci_id/* kernel/ucount.c 29 */;
	struct ctl_table_root *cocci_id/* kernel/ucount.c 24 */;
	struct ctl_table cocci_id/* kernel/ucount.c 226 */[1];
	enum ucount_type cocci_id/* kernel/ucount.c 212 */;
	struct hlist_head cocci_id/* kernel/ucount.c 12 */[(1 << UCOUNTS_HASHTABLE_BITS)];
	struct tp_probes cocci_id/* kernel/tracepoint.c 95 */;
	struct tp_probes *cocci_id/* kernel/tracepoint.c 58 */;
	void (*cocci_id/* kernel/tracepoint.c 550 */)(struct tracepoint *tp,
						      void *priv);
	struct tp_probes {
		struct rcu_head rcu;
		struct tracepoint_func probes[0];
	} cocci_id/* kernel/tracepoint.c 51 */;
	struct tp_module cocci_id/* kernel/tracepoint.c 459 */;
	struct tp_module *cocci_id/* kernel/tracepoint.c 445 */;
	tracepoint_ptr_t *cocci_id/* kernel/tracepoint.c 362 */;
	tracepoint_ptr_t cocci_id/* kernel/tracepoint.c 18 */[];
	struct tracepoint_func cocci_id/* kernel/tracepoint.c 159 */;
	struct tracepoint_func **cocci_id/* kernel/tracepoint.c 129 */;
	int (*cocci_id/* kernel/trace/tracing_map.c 992 */)(const struct tracing_map_sort_entry **,
							    const struct tracing_map_sort_entry **);
	int (*cocci_id/* kernel/trace/tracing_map.c 960 */)(const void *,
							    const void *);
	struct tracing_map_sort_entry *cocci_id/* kernel/trace/tracing_map.c 934 */;
	struct tracing_map_field *cocci_id/* kernel/trace/tracing_map.c 881 */;
	const struct tracing_map_elt *cocci_id/* kernel/trace/tracing_map.c 879 */;
	const struct tracing_map_sort_entry **cocci_id/* kernel/trace/tracing_map.c 837 */;
	struct tracing_map_entry cocci_id/* kernel/trace/tracing_map.c 786 */;
	struct tracing_map_entry *cocci_id/* kernel/trace/tracing_map.c 517 */;
	struct tracing_map_array *cocci_id/* kernel/trace/tracing_map.c 319 */;
	struct tracing_map_sort_entry ***cocci_id/* kernel/trace/tracing_map.c 1062 */;
	int cocci_id/* kernel/trace/trace_uprobe.c 97 */(struct trace_uprobe *tu);
	struct uprobe_cpu_buffer cocci_id/* kernel/trace/trace_uprobe.c 854 */;
	struct uprobe_cpu_buffer __percpu *cocci_id/* kernel/trace/trace_uprobe.c 847 */;
	struct uprobe_cpu_buffer {
		struct mutex mutex;
		void *buf;
	} cocci_id/* kernel/trace/trace_uprobe.c 843 */;
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
	struct trace_uprobe_filter {
		rwlock_t rwlock;
		int nr_systemwide;
		struct list_head perf_events;
	} cocci_id/* kernel/trace/trace_uprobe.c 37 */;
	struct uprobe_trace_entry_head cocci_id/* kernel/trace/trace_uprobe.c 31 */;
	struct uprobe_trace_entry_head {
		struct trace_entry ent;
		unsigned long vaddr[];
	} cocci_id/* kernel/trace/trace_uprobe.c 25 */;
	struct uprobe_dispatch_data *cocci_id/* kernel/trace/trace_uprobe.c 217 */;
	void __force __user *cocci_id/* kernel/trace/trace_uprobe.c 162 */;
	struct uprobe_dispatch_data cocci_id/* kernel/trace/trace_uprobe.c 1437 */;
	struct uprobe_trace_entry_head *cocci_id/* kernel/trace/trace_uprobe.c 1309 */;
	struct uprobe_cpu_buffer *cocci_id/* kernel/trace/trace_uprobe.c 1306 */;
	int (*cocci_id/* kernel/trace/trace_uprobe.c 1271 */)(struct trace_uprobe *tu,
							      struct perf_event *event);
	struct trace_uprobe_filter *cocci_id/* kernel/trace/trace_uprobe.c 1192 */;
	filter_func_t cocci_id/* kernel/trace/trace_uprobe.c 1083 */;
	struct trace_uprobe cocci_id/* kernel/trace/trace_uprobe.c 1071 */;
	struct trace_uprobe *cocci_id/* kernel/trace/trace_uprobe.c 1068 */;
	int cocci_id/* kernel/trace/trace_uprobe.c 106 */(struct uprobe_consumer *con,
							  unsigned long func,
							  struct pt_regs *regs);
	int cocci_id/* kernel/trace/trace_uprobe.c 105 */(struct uprobe_consumer *con,
							  struct pt_regs *regs);
	bool (*cocci_id/* kernel/trace/trace_uprobe.c 1042 */)(struct uprobe_consumer *self,
							       enum uprobe_filter_ctx ctx,
							       struct mm_struct *mm);
	struct uprobe_dispatch_data {
		struct trace_uprobe *tu;
		unsigned long bp_addr;
	} cocci_id/* kernel/trace/trace_uprobe.c 100 */;
	struct syscall_metadata **cocci_id/* kernel/trace/trace_syscalls.c 85 */;
	struct syscall_tp_t {
		unsigned long long regs;
		unsigned long syscall_nr;
		unsigned long ret;
	} cocci_id/* kernel/trace/trace_syscalls.c 689 */;
	struct syscall_tp_t {
		unsigned long long regs;
		unsigned long syscall_nr;
		unsigned long args[SYSCALL_DEFINE_MAXARGS];
	} cocci_id/* kernel/trace/trace_syscalls.c 587 */;
	unsigned long __init __weak cocci_id/* kernel/trace/trace_syscalls.c 534 */;
	struct trace_event_class __refdata cocci_id/* kernel/trace/trace_syscalls.c 518 */;
	struct syscall_trace_exit *cocci_id/* kernel/trace/trace_syscalls.c 367 */;
	struct syscall_trace_enter *cocci_id/* kernel/trace/trace_syscalls.c 317 */;
	struct syscall_metadata *cocci_id/* kernel/trace/trace_syscalls.c 31 */[];
	struct syscall_trace_exit cocci_id/* kernel/trace/trace_syscalls.c 299 */;
	struct syscall_trace_enter cocci_id/* kernel/trace/trace_syscalls.c 275 */;
	struct syscall_metadata *cocci_id/* kernel/trace/trace_syscalls.c 213 */;
	char *cocci_id/* kernel/trace/trace_syscalls.c 204 */(void);
	int cocci_id/* kernel/trace/trace_syscalls.c 18 */(struct trace_event_call *event,
							   type, void *data);
	struct stat_node cocci_id/* kernel/trace/trace_stat.c 93 */;
	cmp_func_t cocci_id/* kernel/trace/trace_stat.c 75 */;
	struct stat_node *cocci_id/* kernel/trace/trace_stat.c 49 */;
	struct stat_session *cocci_id/* kernel/trace/trace_stat.c 47 */;
	struct stat_session {
		struct list_head session_list;
		struct tracer_stat *ts;
		struct rb_root stat_root;
		struct mutex stat_mutex;
		struct dentry *file;
	} cocci_id/* kernel/trace/trace_stat.c 32 */;
	struct stat_node {
		struct rb_node node;
		void *stat;
	} cocci_id/* kernel/trace/trace_stat.c 26 */;
	char cocci_id/* kernel/trace/trace_stack.c 537 */[COMMAND_LINE_SIZE + 1]__initdata;
	unsigned cocci_id/* kernel/trace/trace_stack.c 25 */[STACK_TRACE_ENTRIES];
	unsigned long cocci_id/* kernel/trace/trace_stack.c 24 */[STACK_TRACE_ENTRIES];
	enum{TRACE_SELFTEST_REGS_START, TRACE_SELFTEST_REGS_FOUND, TRACE_SELFTEST_REGS_NOT_FOUND,} cocci_id/* kernel/trace/trace_selftest.c 540 */;
	int (*cocci_id/* kernel/trace/trace_selftest.c 327 */)(void);
	struct wakeup_test_data cocci_id/* kernel/trace/trace_selftest.c 1089 */;
	struct wakeup_test_data *cocci_id/* kernel/trace/trace_selftest.c 1056 */;
	const struct sched_attr cocci_id/* kernel/trace/trace_selftest.c 1050 */;
	struct wakeup_test_data {
		struct completion is_ready;
		int go;
	} cocci_id/* kernel/trace/trace_selftest.c 1042 */;
	void notrace cocci_id/* kernel/trace/trace_sched_wakeup.c 430 */;
	struct trace_probe_event cocci_id/* kernel/trace/trace_probe.c 995 */;
	struct probe_arg *cocci_id/* kernel/trace/trace_probe.c 844 */;
	const struct fetch_type cocci_id/* kernel/trace/trace_probe.c 77 */[];
	const char cocci_id/* kernel/trace/trace_probe.c 74 */(string);
	const char cocci_id/* kernel/trace/trace_probe.c 59 */(symbol);
	ssize_t *cocci_id/* kernel/trace/trace_probe.c 543 */;
	struct fetch_insn **cocci_id/* kernel/trace/trace_probe.c 510 */;
	const struct fetch_type *cocci_id/* kernel/trace/trace_probe.c 509 */;
	struct trace_probe_log cocci_id/* kernel/trace/trace_probe.c 143 */;
	struct trace_bprintk_fmt {
		struct list_head list;
		const char *fmt;
	} cocci_id/* kernel/trace/trace_printk.c 33 */;
	typeof(*mod_fmt) cocci_id/* kernel/trace/trace_printk.c 153 */;
	struct trace_bprintk_fmt *cocci_id/* kernel/trace/trace_printk.c 125 */;
	const struct trace_print_flags *cocci_id/* kernel/trace/trace_output.c 67 */;
	const struct trace_mark {
		unsigned long long val;
		char sym;
	} cocci_id/* kernel/trace/trace_output.c 509 */[];
	const struct vm_area_struct *cocci_id/* kernel/trace/trace_output.c 394 */;
	struct hlist_head cocci_id/* kernel/trace/trace_output.c 21 */[EVENT_HASHSIZE]__read_mostly;
	struct trace_event *cocci_id/* kernel/trace/trace_output.c 1370 */[]__initdata;
	struct raw_data_entry cocci_id/* kernel/trace/trace_output.c 1350 */;
	const struct trace_print_flags_u64 *cocci_id/* kernel/trace/trace_output.c 131 */;
	struct ctx_switch_entry *cocci_id/* kernel/trace/trace_output.c 1020 */;
	enum{TRACE_NOP_OPT_ACCEPT=0x1, TRACE_NOP_OPT_REFUSE=0x2,} cocci_id/* kernel/trace/trace_nop.c 15 */;
	struct header_iter *cocci_id/* kernel/trace/trace_mmiotrace.c 91 */;
	const struct pci_driver *cocci_id/* kernel/trace/trace_mmiotrace.c 67 */;
	const struct pci_dev *cocci_id/* kernel/trace/trace_mmiotrace.c 63 */;
	struct trace_mmiotrace_map *cocci_id/* kernel/trace/trace_mmiotrace.c 332 */;
	struct mmiotrace_map *cocci_id/* kernel/trace/trace_mmiotrace.c 327 */;
	struct trace_mmiotrace_rw *cocci_id/* kernel/trace/trace_mmiotrace.c 302 */;
	struct mmiotrace_rw *cocci_id/* kernel/trace/trace_mmiotrace.c 297 */;
	struct header_iter {
		struct pci_dev *dev;
	} cocci_id/* kernel/trace/trace_mmiotrace.c 21 */;
	struct probe_arg cocci_id/* kernel/trace/trace_kprobe.c 85 */;
	char cocci_id/* kernel/trace/trace_kprobe.c 744 */[MAX_EVENT_NAME_LEN];
	struct trace_probe_event *cocci_id/* kernel/trace/trace_kprobe.c 560 */;
	struct trace_kprobe {
		struct dyn_event devent;
		struct kretprobe rp;
		unsigned long __percpu *nhit;
		const char *symbol;
		struct trace_probe tp;
	} cocci_id/* kernel/trace/trace_kprobe.c 56 */;
	struct trace_kprobe cocci_id/* kernel/trace/trace_kprobe.c 337 */;
	struct trace_kprobe *cocci_id/* kernel/trace/trace_kprobe.c 334 */;
	struct trace_probe *cocci_id/* kernel/trace/trace_kprobe.c 331 */;
	int cocci_id/* kernel/trace/trace_kprobe.c 240 */(struct kretprobe_instance *ri,
							  struct pt_regs *regs);
	int cocci_id/* kernel/trace/trace_kprobe.c 236 */(struct trace_kprobe *tk);
	int (*cocci_id/* kernel/trace/trace_kprobe.c 1748 */)(int, int, int,
							      int, int, int);
	char cocci_id/* kernel/trace/trace_kprobe.c 144 */[MAX_ARGSTR_LEN + 1];
	struct kretprobe_trace_entry_head cocci_id/* kernel/trace/trace_kprobe.c 1355 */;
	struct kprobe_trace_entry_head cocci_id/* kernel/trace/trace_kprobe.c 1340 */;
	struct trace_event_call cocci_id/* kernel/trace/trace_kprobe.c 1280 */;
	struct kretprobe_trace_entry_head *cocci_id/* kernel/trace/trace_kprobe.c 1225 */;
	struct event_file_link *cocci_id/* kernel/trace/trace_kprobe.c 1212 */;
	struct kprobe_trace_entry_head *cocci_id/* kernel/trace/trace_kprobe.c 1177 */;
	struct fetch_insn *cocci_id/* kernel/trace/trace_kprobe.c 1126 */;
	nokprobe_inline
bool
 cocci_id/* kernel/trace/trace_kprobe.c 102 */;
	struct ring_buffer_iter *cocci_id/* kernel/trace/trace_kdb.c 21 */[CONFIG_NR_CPUS];
	int cocci_id/* kernel/trace/trace_irqsoff.c 65 */(struct trace_array *tr,
							  int set);
	int cocci_id/* kernel/trace/trace_irqsoff.c 41 */(struct trace_array *tr,
							  int graph);
	void cocci_id/* kernel/trace/trace_irqsoff.c 40 */(struct trace_array *tr,
							   int graph);
	enum{TRACER_IRQS_OFF=(1 << 1), TRACER_PREEMPT_OFF=(1 << 2),} cocci_id/* kernel/trace/trace_irqsoff.c 31 */;
	struct trace_array_cpu **cocci_id/* kernel/trace/trace_irqsoff.c 100 */;
	struct hwlat_data {
		struct mutex lock;
		u64 count;
		u64 sample_window;
		u64 sample_width;
	} cocci_id/* kernel/trace/trace_hwlat.c 89 */;
	struct hwlat_sample {
		u64 seqnum;
		u64 duration;
		u64 outer_duration;
		u64 nmi_total_ts;
		struct timespec64 timestamp;
		int nmi_count;
	} cocci_id/* kernel/trace/trace_hwlat.c 79 */;
	char cocci_id/* kernel/trace/trace_hwlat.c 413 */[U64STR_SIZE];
	struct hwlat_sample cocci_id/* kernel/trace/trace_hwlat.c 239 */;
	time_type cocci_id/* kernel/trace/trace_hwlat.c 170 */;
	struct hwlat_entry *cocci_id/* kernel/trace/trace_hwlat.c 109 */;
	struct hwlat_sample *cocci_id/* kernel/trace/trace_hwlat.c 103 */;
	void cocci_id/* kernel/trace/trace_functions_graph.c 93 */(struct trace_array *tr,
								   unsigned long long duration,
								   struct trace_seq *s,
								   u32 flags);
	enum{FLAGS_FILL_FULL=1 << TRACE_GRAPH_PRINT_FILL_SHIFT, FLAGS_FILL_START=2 << TRACE_GRAPH_PRINT_FILL_SHIFT, FLAGS_FILL_END=3 << TRACE_GRAPH_PRINT_FILL_SHIFT,} cocci_id/* kernel/trace/trace_functions_graph.c 87 */;
	struct fgraph_data *cocci_id/* kernel/trace/trace_functions_graph.c 779 */;
	struct fgraph_cpu_data *cocci_id/* kernel/trace/trace_functions_graph.c 644 */;
	char cocci_id/* kernel/trace/trace_functions_graph.c 566 */[5];
	char cocci_id/* kernel/trace/trace_functions_graph.c 349 */[11];
	struct fgraph_data {
		struct fgraph_cpu_data __percpu *cpu_data;
		struct ftrace_graph_ent_entry ent;
		struct ftrace_graph_ret_entry ret;
		int failed;
		int cpu;
	} cocci_id/* kernel/trace/trace_functions_graph.c 30 */;
	struct ftrace_graph_ret_entry *cocci_id/* kernel/trace/trace_functions_graph.c 225 */;
	struct fgraph_cpu_data {
		pid_t last_pid;
		int depth;
		int depth_irq;
		int ignore;
		unsigned long enter_funcs[FTRACE_RETFUNC_DEPTH];
	} cocci_id/* kernel/trace/trace_functions_graph.c 22 */;
	struct fgraph_cpu_data cocci_id/* kernel/trace/trace_functions_graph.c 1216 */;
	struct ftrace_graph_ent_entry cocci_id/* kernel/trace/trace_functions_graph.c 1077 */;
	struct ftrace_graph_ent_entry *cocci_id/* kernel/trace/trace_functions_graph.c 105 */;
	enum{TRACE_FUNC_OPT_STACK=0x1,} cocci_id/* kernel/trace/trace_functions.c 33 */;
	void cocci_id/* kernel/trace/trace_functions.c 27 */(unsigned long ip,
							     unsigned long parent_ip,
							     struct ftrace_ops *op,
							     struct pt_regs *pt_regs);
	void cocci_id/* kernel/trace/trace_functions.c 22 */(struct trace_array *tr);
	type cocci_id/* kernel/trace/trace_export.c 54 */[];
	type cocci_id/* kernel/trace/trace_export.c 48 */[size];
	struct struct_name cocci_id/* kernel/trace/trace_export.c 138 */;
	struct event_trigger_data cocci_id/* kernel/trace/trace_events_trigger.c 162 */;
	struct ftrace_event_field **cocci_id/* kernel/trace/trace_events_inject.c 37 */;
	enum field_op_id{FIELD_OP_NONE, FIELD_OP_PLUS, FIELD_OP_MINUS, FIELD_OP_UNARY_MINUS,} cocci_id/* kernel/trace/trace_events_hist.c 92 */;
	struct trace_event_buffer cocci_id/* kernel/trace/trace_events_hist.c 881 */;
	struct trace_print_flags cocci_id/* kernel/trace/trace_events_hist.c 848 */[];
	u64 (*cocci_id/* kernel/trace/trace_events_hist.c 83 */)(struct hist_field *field,
								 struct tracing_map_elt *elt,
								 struct ring_buffer_event *rbe,
								 void *event);
	struct synth_event cocci_id/* kernel/trace/trace_events_hist.c 825 */;
	struct synth_trace_event *cocci_id/* kernel/trace/trace_events_hist.c 818 */;
	s8 cocci_id/* kernel/trace/trace_events_hist.c 745 */;
	typeof(trace) cocci_id/* kernel/trace/trace_events_hist.c 647 */;
	struct synth_trace_event cocci_id/* kernel/trace/trace_events_hist.c 646 */;
	struct synth_trace_event {
		struct trace_entry ent;
		u64 fields[];
	} cocci_id/* kernel/trace/trace_events_hist.c 639 */;
	struct enable_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 6304 */;
	struct event_command *cocci_id/* kernel/trace/trace_events_hist.c 6107 */;
	struct event_trigger_ops *cocci_id/* kernel/trace/trace_events_hist.c 5770 */;
	struct event_trigger_ops cocci_id/* kernel/trace/trace_events_hist.c 5763 */;
	struct tracing_map_sort_entry **cocci_id/* kernel/trace/trace_events_hist.c 5453 */;
	struct snapshot_context {
		struct tracing_map_elt *elt;
		void *key;
	} cocci_id/* kernel/trace/trace_events_hist.c 535 */;
	struct hist_elt_data {
		char *comm;
		u64 *var_ref_vals;
		char *field_var_str[SYNTH_FIELDS_MAX];
	} cocci_id/* kernel/trace/trace_events_hist.c 529 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 5270 */[HIST_KEY_SIZE_MAX];
	u64 cocci_id/* kernel/trace/trace_events_hist.c 5269 */[TRACING_MAP_VARS_MAX];
	unsigned long cocci_id/* kernel/trace/trace_events_hist.c 5268 */[HIST_STACKTRACE_DEPTH];
	struct event_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 5263 */;
	struct track_data {
		u64 track_val;
		bool updated;
		unsigned int key_len;
		void *key;
		struct tracing_map_elt elt;
		struct action_data *action_data;
		struct hist_trigger_data *hist_data;
	} cocci_id/* kernel/trace/trace_events_hist.c 517 */;
	const struct tracing_map_ops *cocci_id/* kernel/trace/trace_events_hist.c 5138 */;
	struct hist_trigger_attrs *cocci_id/* kernel/trace/trace_events_hist.c 5134 */;
	tracing_map_cmp_fn_t cocci_id/* kernel/trace/trace_events_hist.c 5097 */;
	struct tracing_map *cocci_id/* kernel/trace/trace_events_hist.c 5089 */;
	struct tracing_map_sort_key *cocci_id/* kernel/trace/trace_events_hist.c 4740 */;
	struct action_data {
		enum handler_id handler;
		enum action_id action;
		char *action_name;
		action_fn_t fn;
		unsigned int n_params;
		char *params[SYNTH_FIELDS_MAX];
		unsigned int var_ref_idx;
		struct synth_event *synth_event;
		bool use_trace_keyword;
		char *synth_event_name;
		union {
			struct {
				char *event;
				char *event_system;
			} match_data;
			struct {
				char *var_str;
				struct hist_field *var_ref;
				struct hist_field *track_var;
				check_track_val_fn_t check_val;
				action_fn_t save_data;
			} track_data;
		};
	} cocci_id/* kernel/trace/trace_events_hist.c 459 */;
	enum action_id{ACTION_SAVE=1, ACTION_TRACE, ACTION_SNAPSHOT,} cocci_id/* kernel/trace/trace_events_hist.c 453 */;
	enum handler_id{HANDLER_ONMATCH=1, HANDLER_ONMAX, HANDLER_ONCHANGE,} cocci_id/* kernel/trace/trace_events_hist.c 447 */;
	bool (*cocci_id/* kernel/trace/trace_events_hist.c 445 */)(u64 track_val,
								   u64 var_val);
	struct hist_field *cocci_id/* kernel/trace/trace_events_hist.c 4420 */;
	struct hist_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 4414 */;
	void (*cocci_id/* kernel/trace/trace_events_hist.c 440 */)(struct hist_trigger_data *hist_data,
								   struct tracing_map_elt *elt,
								   void *rec,
								   struct ring_buffer_event *rbe,
								   void *key,
								   struct action_data *data,
								   u64 *var_ref_vals);
	struct action_data cocci_id/* kernel/trace/trace_events_hist.c 438 */;
	struct track_data *cocci_id/* kernel/trace/trace_events_hist.c 4285 */;
	struct action_data *cocci_id/* kernel/trace/trace_events_hist.c 4281 */;
	struct synth_event {
		struct dyn_event devent;
		int ref;
		char *name;
		struct synth_field **fields;
		unsigned int n_fields;
		unsigned int n_u64;
		struct trace_event_class class;
		struct trace_event_call call;
		struct tracepoint *tp;
	} cocci_id/* kernel/trace/trace_events_hist.c 400 */;
	struct synth_field {
		char *type;
		char *name;
		size_t size;
		bool is_signed;
		bool is_string;
	} cocci_id/* kernel/trace/trace_events_hist.c 392 */;
	enum handler_id cocci_id/* kernel/trace/trace_events_hist.c 3908 */;
	struct dyn_event_operations cocci_id/* kernel/trace/trace_events_hist.c 384 */;
	bool cocci_id/* kernel/trace/trace_events_hist.c 381 */(const char *system,
								const char *event,
								int argc,
								const char **argv,
								struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 3808 */(struct hist_trigger_data *hist_data,
								struct action_data *data);
	bool cocci_id/* kernel/trace/trace_events_hist.c 380 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 379 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 378 */(struct seq_file *m,
							       struct dyn_event *ev);
	void cocci_id/* kernel/trace/trace_events_hist.c 3658 */(struct seq_file *m,
								 struct hist_trigger_data *hist_data,
								 void *key,
								 struct tracing_map_elt *elt);
	struct snapshot_context cocci_id/* kernel/trace/trace_events_hist.c 3650 */;
	struct snapshot_context *cocci_id/* kernel/trace/trace_events_hist.c 3615 */;
	struct field_var cocci_id/* kernel/trace/trace_events_hist.c 3489 */;
	struct hist_trigger_data {
		struct hist_field *fields[HIST_FIELDS_MAX];
		unsigned int n_vals;
		unsigned int n_keys;
		unsigned int n_fields;
		unsigned int n_vars;
		unsigned int key_size;
		struct tracing_map_sort_key sort_keys[TRACING_MAP_SORT_KEYS_MAX];
		unsigned int n_sort_keys;
		struct trace_event_file *event_file;
		struct hist_trigger_attrs *attrs;
		struct tracing_map *map;
		bool enable_timestamps;
		bool remove;
		struct hist_field *var_refs[TRACING_MAP_VARS_MAX];
		unsigned int n_var_refs;
		struct action_data *actions[HIST_ACTIONS_MAX];
		unsigned int n_actions;
		struct field_var *field_vars[SYNTH_FIELDS_MAX];
		unsigned int n_field_vars;
		unsigned int n_field_var_str;
		struct field_var_hist *field_var_hists[SYNTH_FIELDS_MAX];
		unsigned int n_field_var_hists;
		struct field_var *save_vars[SYNTH_FIELDS_MAX];
		unsigned int n_save_vars;
		unsigned int n_save_var_str;
	} cocci_id/* kernel/trace/trace_events_hist.c 346 */;
	struct field_var_hist {
		struct hist_trigger_data *hist_data;
		char *cmd;
	} cocci_id/* kernel/trace/trace_events_hist.c 341 */;
	struct field_var *cocci_id/* kernel/trace/trace_events_hist.c 3381 */;
	struct hist_elt_data *cocci_id/* kernel/trace/trace_events_hist.c 3376 */;
	struct field_var **cocci_id/* kernel/trace/trace_events_hist.c 3372 */;
	struct tracing_map_elt *cocci_id/* kernel/trace/trace_events_hist.c 3369 */;
	struct field_var {
		struct hist_field *var;
		struct hist_field *val;
	} cocci_id/* kernel/trace/trace_events_hist.c 336 */;
	struct field_var_hist *cocci_id/* kernel/trace/trace_events_hist.c 3230 */;
	struct hist_trigger_attrs {
		char *keys_str;
		char *vals_str;
		char *sort_key_str;
		char *name;
		char *clock;
		bool pause;
		bool cont;
		bool clear;
		bool ts_in_usecs;
		unsigned int map_bits;
		char *assignment_str[TRACING_MAP_VARS_MAX];
		unsigned int n_assignments;
		char *action_str[HIST_ACTIONS_MAX];
		unsigned int n_actions;
		struct var_defs var_defs;
	} cocci_id/* kernel/trace/trace_events_hist.c 315 */;
	int cocci_id/* kernel/trace/trace_events_hist.c 3110 */(struct event_command *cmd_ops,
								struct trace_event_file *file,
								char *glob,
								char *cmd,
								char *param);
	struct event_command cocci_id/* kernel/trace/trace_events_hist.c 3109 */;
	struct var_defs {
		unsigned int n_vars;
		char *name[TRACING_MAP_VARS_MAX];
		char *expr[TRACING_MAP_VARS_MAX];
	} cocci_id/* kernel/trace/trace_events_hist.c 309 */;
	enum hist_field_flags{HIST_FIELD_FL_HITCOUNT=1 << 0, HIST_FIELD_FL_KEY=1 << 1, HIST_FIELD_FL_STRING=1 << 2, HIST_FIELD_FL_HEX=1 << 3, HIST_FIELD_FL_SYM=1 << 4, HIST_FIELD_FL_SYM_OFFSET=1 << 5, HIST_FIELD_FL_EXECNAME=1 << 6, HIST_FIELD_FL_SYSCALL=1 << 7, HIST_FIELD_FL_STACKTRACE=1 << 8, HIST_FIELD_FL_LOG2=1 << 9, HIST_FIELD_FL_TIMESTAMP=1 << 10, HIST_FIELD_FL_TIMESTAMP_USECS=1 << 11, HIST_FIELD_FL_VAR=1 << 12, HIST_FIELD_FL_EXPR=1 << 13, HIST_FIELD_FL_VAR_REF=1 << 14, HIST_FIELD_FL_CPU=1 << 15, HIST_FIELD_FL_ALIAS=1 << 16,} cocci_id/* kernel/trace/trace_events_hist.c 289 */;
	struct hist_field *cocci_id/* kernel/trace/trace_events_hist.c 2880 */(struct hist_trigger_data *hist_data,
									       struct trace_event_file *file,
									       char *str,
									       unsigned long flags,
									       char *var_name,
									       unsigned int level);
	type *cocci_id/* kernel/trace/trace_events_hist.c 259 */;
	struct hist_field cocci_id/* kernel/trace/trace_events_hist.c 2446 */;
	enum field_op_id cocci_id/* kernel/trace/trace_events_hist.c 2383 */;
	const struct tracing_map_ops cocci_id/* kernel/trace/trace_events_hist.c 2284 */;
	hist_field_fn_t cocci_id/* kernel/trace/trace_events_hist.c 1975 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 1956 */[MAX_FILTER_STR_VAL];
	struct hist_var_data *cocci_id/* kernel/trace/trace_events_hist.c 1581 */;
	struct synth_event *cocci_id/* kernel/trace/trace_events_hist.c 1273 */;
	struct synth_field *cocci_id/* kernel/trace/trace_events_hist.c 1272 */;
	struct hist_var_data {
		struct list_head list;
		struct hist_trigger_data *hist_data;
	} cocci_id/* kernel/trace/trace_events_hist.c 1265 */;
	struct synth_field **cocci_id/* kernel/trace/trace_events_hist.c 1220 */;
	struct hist_field {
		struct ftrace_event_field *field;
		unsigned long flags;
		hist_field_fn_t fn;
		unsigned int size;
		unsigned int offset;
		unsigned int is_signed;
		const char *type;
		struct hist_field *operands[HIST_FIELD_OPERANDS_MAX];
		struct hist_trigger_data *hist_data;
		struct hist_var var;
		enum field_op_id operator;
		char *system;
		char *event_name;
		char *name;
		unsigned int var_ref_idx;
		bool read_once;
	} cocci_id/* kernel/trace/trace_events_hist.c 115 */;
	synth_probe_func_t cocci_id/* kernel/trace/trace_events_hist.c 1105 */;
	struct tracepoint_func *cocci_id/* kernel/trace/trace_events_hist.c 1104 */;
	void (*cocci_id/* kernel/trace/trace_events_hist.c 1095 */)(void *__data,
								    u64 *var_ref_vals,
								    unsigned int var_ref_idx);
	struct hist_var {
		char *name;
		struct hist_trigger_data *hist_data;
		unsigned int idx;
	} cocci_id/* kernel/trace/trace_events_hist.c 109 */;
	struct prog_entry {
		int target;
		int when_to_branch;
		struct filter_pred *pred;
	} cocci_id/* kernel/trace/trace_events_filter.c 99 */;
	struct filter_parse_error *cocci_id/* kernel/trace/trace_events_filter.c 930 */;
	struct filter_pred *cocci_id/* kernel/trace/trace_events_filter.c 911 */;
	struct prog_entry *cocci_id/* kernel/trace/trace_events_filter.c 898 */;
	enum regex_type cocci_id/* kernel/trace/trace_events_filter.c 821 */;
	struct regex *cocci_id/* kernel/trace/trace_events_filter.c 787 */;
	enum{ERRORS,} cocci_id/* kernel/trace/trace_events_filter.c 75 */;
	 cocci_id/* kernel/trace/trace_events_filter.c 650 */(u8); // err
	 cocci_id/* kernel/trace/trace_events_filter.c 649 */(s8);
	 cocci_id/* kernel/trace/trace_events_filter.c 648 */(u16);
	 cocci_id/* kernel/trace/trace_events_filter.c 647 */(s16);
	 cocci_id/* kernel/trace/trace_events_filter.c 646 */(u32);
	 cocci_id/* kernel/trace/trace_events_filter.c 645 */(s32);
	 cocci_id/* kernel/trace/trace_events_filter.c 644 */(u64);
	 cocci_id/* kernel/trace/trace_events_filter.c 643 */(s64);
	parse_pred_fn cocci_id/* kernel/trace/trace_events_filter.c 411 */;
	enum filter_op_ids{OPS,} cocci_id/* kernel/trace/trace_events_filter.c 38 */;
	struct test_filter_data_t *cocci_id/* kernel/trace/trace_events_filter.c 2221 */;
	struct test_filter_data_t {
		char *filter;
		struct trace_event_raw_ftrace_test_filter rec;
		int match;
		char *not_visited;
	} cocci_id/* kernel/trace/trace_events_filter.c 2115 */[];
	struct function_filter_data cocci_id/* kernel/trace/trace_events_filter.c 2030 */;
	struct function_filter_data *cocci_id/* kernel/trace/trace_events_filter.c 1942 */;
	struct function_filter_data {
		struct ftrace_ops *ops;
		int first_filter;
		int first_notrace;
	} cocci_id/* kernel/trace/trace_events_filter.c 1901 */;
	struct event_filter **cocci_id/* kernel/trace/trace_events_filter.c 1759 */;
	struct filter_parse_error **cocci_id/* kernel/trace/trace_events_filter.c 1678 */;
	struct filter_list *cocci_id/* kernel/trace/trace_events_filter.c 1596 */;
	struct filter_list {
		struct list_head list;
		struct event_filter *filter;
	} cocci_id/* kernel/trace/trace_events_filter.c 1585 */;
	enum{INVERT=1, PROCESS_AND=2, PROCESS_OR=4,} cocci_id/* kernel/trace/trace_events_filter.c 143 */;
	enum{TOO_MANY_CLOSE=-1, TOO_MANY_OPEN=-2, MISSING_QUOTE=-3,} cocci_id/* kernel/trace/trace_events_filter.c 1392 */;
	int (*cocci_id/* kernel/trace/trace_events_filter.c 139 */)(const char *str,
								    void *data,
								    int pos,
								    struct filter_parse_error *pe,
								    struct filter_pred **pred);
	struct filter_parse_error {
		int lasterr;
		int lasterr_pos;
	} cocci_id/* kernel/trace/trace_events_filter.c 128 */;
	struct filter_pred **cocci_id/* kernel/trace/trace_events_filter.c 1154 */;
	filter_pred_fn_t cocci_id/* kernel/trace/trace_events_filter.c 1095 */;
	enum filter_op_ids cocci_id/* kernel/trace/trace_events_filter.c 1095 */;
	struct ftrace_event_field *cocci_id/* kernel/trace/trace_events.c 74 */;
	struct trace_subsystem_dir *cocci_id/* kernel/trace/trace_events.c 669 */;
	struct event_subsystem *cocci_id/* kernel/trace/trace_events.c 663 */;
	struct event_filter *cocci_id/* kernel/trace/trace_events.c 647 */;
	struct trace_event_file cocci_id/* kernel/trace/trace_events.c 3388 */;
	struct trace_event_call **cocci_id/* kernel/trace/trace_events.c 3114 */;
	char cocci_id/* kernel/trace/trace_events.c 2928 */[COMMAND_LINE_SIZE]__initdata;
	struct trace_event_call *cocci_id/* kernel/trace/trace_events.c 2925 */[];
	struct event_probe_data *cocci_id/* kernel/trace/trace_events.c 2582 */;
	struct event_probe_data {
		struct trace_event_file *file;
		unsigned long count;
		int ref;
		bool enable;
	} cocci_id/* kernel/trace/trace_events.c 2544 */;
	void cocci_id/* kernel/trace/trace_events.c 2328 */(struct trace_event_call *call);
	struct ftrace_module_file_ops cocci_id/* kernel/trace/trace_events.c 2327 */;
	struct trace_eval_map *cocci_id/* kernel/trace/trace_events.c 2137 */;
	struct event_filter cocci_id/* kernel/trace/trace_events.c 1886 */;
	const struct seq_operations *cocci_id/* kernel/trace/trace_events.c 1819 */;
	struct trace_entry cocci_id/* kernel/trace/trace_events.c 178 */;
	int (*cocci_id/* kernel/trace/trace_events.c 1563 */)(struct trace_seq *s);
	struct ftrace_event_field cocci_id/* kernel/trace/trace_events.c 1265 */;
	enum{FORMAT_HEADER=1, FORMAT_FIELD_SEPERATOR=2, FORMAT_PRINTFMT=3,} cocci_id/* kernel/trace/trace_events.c 1204 */;
	char cocci_id/* kernel/trace/trace_events.c 1128 */[2];
	enum trace_reg cocci_id/* kernel/trace/trace_event_perf.c 496 */;
	struct hlist_head __percpu *cocci_id/* kernel/trace/trace_event_perf.c 368 */;
	typeof(unsigned long[PERF_MAX_TRACE_SIZE / sizeof(unsigned long)]) cocci_id/* kernel/trace/trace_event_perf.c 21 */;
	char __percpu *cocci_id/* kernel/trace/trace_event_perf.c 15 */[PERF_NR_CONTEXTS];
	perf_trace_t cocci_id/* kernel/trace/trace_event_perf.c 121 */;
	char __percpu *cocci_id/* kernel/trace/trace_event_perf.c 117 */;
	struct dyn_event_operations *cocci_id/* kernel/trace/trace_dynevent.c 80 */;
	struct dyn_event *cocci_id/* kernel/trace/trace_dynevent.c 36 */;
	struct {
		u64 prev_time;
		arch_spinlock_t lock;
	} cocci_id/* kernel/trace/trace_clock.c 86 */;
	struct ftrace_branch_data *cocci_id/* kernel/trace/trace_branch.c 415 */;
	struct trace_branch *cocci_id/* kernel/trace/trace_branch.c 37 */;
	const struct ftrace_branch_data *cocci_id/* kernel/trace/trace_branch.c 337 */;
	struct ftrace_likely_data *cocci_id/* kernel/trace/trace_branch.c 299 */;
	char cocci_id/* kernel/trace/trace_benchmark.c 12 */[BENCHMARK_EVENT_STRLEN];
	int (*cocci_id/* kernel/trace/trace.c 9177 */)(int, char **);
	struct trace_iterator cocci_id/* kernel/trace/trace.c 9048 */;
	enum ftrace_dump_mode cocci_id/* kernel/trace/trace.c 9045 */;
	struct bputs_entry cocci_id/* kernel/trace/trace.c 904 */;
	struct bputs_entry *cocci_id/* kernel/trace/trace.c 902 */;
	union trace_eval_map_item **cocci_id/* kernel/trace/trace.c 8855 */;
	struct trace_eval_map *cocci_id/* kernel/trace/trace.c 8824 */[];
	struct trace_event_file *cocci_id/* kernel/trace/trace.c 8686 */;
	struct trace_array_cpu cocci_id/* kernel/trace/trace.c 8369 */;
	enum ring_buffer_flags cocci_id/* kernel/trace/trace.c 8359 */;
	void cocci_id/* kernel/trace/trace.c 8353 */(struct trace_array *tr,
						     struct dentry *d_tracer);
	struct trace_options *cocci_id/* kernel/trace/trace.c 8159 */;
	struct trace_option_dentry *cocci_id/* kernel/trace/trace.c 8136 */;
	struct trace_array cocci_id/* kernel/trace/trace.c 8037 */;
	struct trace_array **cocci_id/* kernel/trace/trace.c 8032 */;
	char cocci_id/* kernel/trace/trace.c 7913 */[30];
	struct ftrace_probe_ops cocci_id/* kernel/trace/trace.c 7797 */;
	void cocci_id/* kernel/trace/trace.c 753 */(struct trace_array *tr,
						    struct ring_buffer *buffer,
						    unsigned long flags,
						    int skip, int pc,
						    struct pt_regs *regs);
	void cocci_id/* kernel/trace/trace.c 750 */(struct ring_buffer *buffer,
						    unsigned long flags,
						    int skip, int pc,
						    struct pt_regs *regs);
	struct buffer_ref *cocci_id/* kernel/trace/trace.c 7456 */;
	struct buffer_ref {
		struct ring_buffer *buffer;
		void *page;
		int cpu;
		refcount_t refcount;
	} cocci_id/* kernel/trace/trace.c 7429 */;
	struct tracing_log_err *cocci_id/* kernel/trace/trace.c 7164 */;
	struct tracing_log_err cocci_id/* kernel/trace/trace.c 7075 */;
	struct tracing_log_err {
		struct list_head list;
		struct err_info info;
		char loc[TRACING_LOG_LOC_MAX];
		char cmd[MAX_FILTER_STR_VAL];
	} cocci_id/* kernel/trace/trace.c 7053 */;
	struct err_info {
		const char **errs;
		u8 type;
		u8 pos;
		u64 ts;
	} cocci_id/* kernel/trace/trace.c 7046 */;
	struct ftrace_buffer_info *cocci_id/* kernel/trace/trace.c 6916 */;
	ssize_t cocci_id/* kernel/trace/trace.c 6911 */(struct file *file,
							loff_t *ppos,
							struct pipe_inode_info *pipe,
							size_t len,
							unsigned int flags);
	int cocci_id/* kernel/trace/trace.c 6910 */(struct inode *inode,
						    struct file *file);
	ssize_t cocci_id/* kernel/trace/trace.c 6908 */(struct file *filp,
							char __user *ubuf,
							size_t count,
							loff_t *ppos);
	struct ftrace_buffer_info {
		struct trace_iterator iter;
		void *spare;
		unsigned int spare_cpu;
		unsigned int read;
	} cocci_id/* kernel/trace/trace.c 6757 */;
	struct raw_data_entry *cocci_id/* kernel/trace/trace.c 6548 */;
	enum event_trigger_type cocci_id/* kernel/trace/trace.c 6466 */;
	char cocci_id/* kernel/trace/trace.c 5829 */[MAX_TRACER_SIZE + 1];
	void cocci_id/* kernel/trace/trace.c 5688 */(struct trace_array *tr,
						     struct tracer *tracer);
	struct trace_option_dentry cocci_id/* kernel/trace/trace.c 5686 */;
	char cocci_id/* kernel/trace/trace.c 5519 */[MAX_TRACER_SIZE + 2];
	struct trace_eval_map **cocci_id/* kernel/trace/trace.c 5500 */;
	union trace_eval_map_item *cocci_id/* kernel/trace/trace.c 5352 */;
	struct trace_parser cocci_id/* kernel/trace/trace.c 516 */;
	struct trace_pid_list **cocci_id/* kernel/trace/trace.c 512 */;
	struct tracer *cocci_id/* kernel/trace/trace.c 4645 */;
	struct tracer_opt *cocci_id/* kernel/trace/trace.c 4643 */;
	struct tracer_flags *cocci_id/* kernel/trace/trace.c 4642 */;
	struct print_entry *cocci_id/* kernel/trace/trace.c 3254 */;
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
	struct trace_event_buffer *cocci_id/* kernel/trace/trace.c 2610 */;
	struct ring_buffer **cocci_id/* kernel/trace/trace.c 2567 */;
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
	union trace_eval_map_item {
		struct trace_eval_map map;
		struct trace_eval_map_head head;
		struct trace_eval_map_tail tail;
	} cocci_id/* kernel/trace/trace.c 156 */;
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
	struct cond_snapshot *cocci_id/* kernel/trace/trace.c 1135 */;
	cond_update_fn_t cocci_id/* kernel/trace/trace.c 1133 */;
	cpumask_var_t __read_mostly cocci_id/* kernel/trace/trace.c 106 */;
	void cocci_id/* kernel/trace/trace.c 1041 */(struct trace_buffer *buf,
						     unsigned long val);
	int cocci_id/* kernel/trace/trace.c 1039 */(struct trace_buffer *trace_buf,
						    struct trace_buffer *size_buf,
						    int cpu_id);
	enum event_status cocci_id/* kernel/trace/ring_buffer_benchmark.c 85 */;
	enum event_status{EVENT_FOUND, EVENT_DROPPED,} cocci_id/* kernel/trace/ring_buffer_benchmark.c 75 */;
	struct rb_page {
		u64 ts;
		local_t commit;
		char data[4080];
	} cocci_id/* kernel/trace/ring_buffer_benchmark.c 15 */;
	struct rb_page cocci_id/* kernel/trace/ring_buffer_benchmark.c 127 */;
	struct rb_page *cocci_id/* kernel/trace/ring_buffer_benchmark.c 108 */;
	struct buffer_page **cocci_id/* kernel/trace/ring_buffer.c 999 */;
	struct ring_buffer_per_cpu cocci_id/* kernel/trace/ring_buffer.c 731 */;
	poll_table cocci_id/* kernel/trace/ring_buffer.c 703 */;
	struct rb_irq_work cocci_id/* kernel/trace/ring_buffer.c 557 */;
	struct rb_irq_work *cocci_id/* kernel/trace/ring_buffer.c 557 */;
	struct ring_buffer_iter {
		struct ring_buffer_per_cpu *cpu_buffer;
		unsigned long head;
		struct buffer_page *head_page;
		struct buffer_page *cache_reader_page;
		unsigned long cache_read;
		u64 read_stamp;
	} cocci_id/* kernel/trace/ring_buffer.c 505 */;
	struct rb_test_data *cocci_id/* kernel/trace/ring_buffer.c 5045 */;
	struct rb_item cocci_id/* kernel/trace/ring_buffer.c 4976 */;
	struct rb_item *cocci_id/* kernel/trace/ring_buffer.c 4963 */;
	struct rb_item {
		int size;
		char str[];
	} cocci_id/* kernel/trace/ring_buffer.c 4955 */;
	struct rb_test_data cocci_id/* kernel/trace/ring_buffer.c 4943 */[NR_CPUS]__initdata;
	struct rb_test_data {
		struct ring_buffer *buffer;
		unsigned long events;
		unsigned long bytes_written;
		unsigned long bytes_alloc;
		unsigned long bytes_dropped;
		unsigned long events_nested;
		unsigned long bytes_written_nested;
		unsigned long bytes_alloc_nested;
		unsigned long bytes_dropped_nested;
		int min_size_nested;
		int max_size_nested;
		int max_size;
		int min_size;
		int cpu;
		int cnt;
	} cocci_id/* kernel/trace/ring_buffer.c 4925 */;
	struct task_struct *cocci_id/* kernel/trace/ring_buffer.c 4923 */[NR_CPUS]__initdata;
	struct ring_buffer {
		unsigned flags;
		int cpus;
		atomic_t record_disabled;
		atomic_t resize_disabled;
		cpumask_var_t cpumask;
		struct lock_class_key *reader_lock_key;
		struct mutex mutex;
		struct ring_buffer_per_cpu **buffers;
		struct hlist_node node;
		u64 (*clock)(void);
		struct rb_irq_work irq_work;
		bool time_stamp_abs;
	} cocci_id/* kernel/trace/ring_buffer.c 485 */;
	struct ring_buffer_per_cpu {
		int cpu;
		atomic_t record_disabled;
		struct ring_buffer *buffer;
		raw_spinlock_t reader_lock;
		arch_spinlock_t lock;
		struct lock_class_key lock_key;
		struct buffer_data_page *free_page;
		unsigned long nr_pages;
		unsigned int current_context;
		struct list_head *pages;
		struct buffer_page *head_page;
		struct buffer_page *tail_page;
		struct buffer_page *commit_page;
		struct buffer_page *reader_page;
		unsigned long lost_events;
		unsigned long last_overrun;
		unsigned long nest;
		local_t entries_bytes;
		local_t entries;
		local_t overrun;
		local_t commit_overrun;
		local_t dropped_events;
		local_t committing;
		local_t commits;
		local_t pages_touched;
		local_t pages_read;
		long last_pages_touch;
		size_t shortest_full;
		unsigned long read;
		unsigned long read_bytes;
		u64 write_stamp;
		u64 read_stamp;
		long nr_pages_to_update;
		struct list_head new_pages;
		struct work_struct update_pages_work;
		struct completion update_done;
		struct rb_irq_work irq_work;
	} cocci_id/* kernel/trace/ring_buffer.c 443 */;
	enum{RB_CTX_NMI, RB_CTX_IRQ, RB_CTX_SOFTIRQ, RB_CTX_NORMAL, RB_CTX_MAX,} cocci_id/* kernel/trace/ring_buffer.c 432 */;
	struct rb_event_info {
		u64 ts;
		u64 delta;
		unsigned long length;
		struct buffer_page *tail_page;
		int add_timestamp;
	} cocci_id/* kernel/trace/ring_buffer.c 415 */;
	struct rb_irq_work {
		struct irq_work work;
		wait_queue_head_t waiters;
		wait_queue_head_t full_waiters;
		bool waiters_pending;
		bool full_waiters_pending;
		bool wakeup_full;
	} cocci_id/* kernel/trace/ring_buffer.c 403 */;
	typeof(field) cocci_id/* kernel/trace/ring_buffer.c 384 */;
	struct ring_buffer_iter *cocci_id/* kernel/trace/ring_buffer.c 3829 */;
	struct buffer_data_page cocci_id/* kernel/trace/ring_buffer.c 375 */;
	struct buffer_data_page *cocci_id/* kernel/trace/ring_buffer.c 343 */;
	struct buffer_page {
		struct list_head list;
		local_t write;
		unsigned read;
		local_t entries;
		unsigned long real_end;
		struct buffer_data_page *page;
	} cocci_id/* kernel/trace/ring_buffer.c 319 */;
	struct rb_event_info cocci_id/* kernel/trace/ring_buffer.c 2876 */;
	struct rb_event_info *cocci_id/* kernel/trace/ring_buffer.c 2817 */;
	struct ring_buffer_per_cpu *cocci_id/* kernel/trace/ring_buffer.c 2816 */;
	struct ring_buffer_event cocci_id/* kernel/trace/ring_buffer.c 2377 */;
	bool cocci_id/* kernel/trace/ring_buffer.c 2328 */(struct ring_buffer_per_cpu *cpu_buffer,
							   struct ring_buffer_event *event);
	void cocci_id/* kernel/trace/ring_buffer.c 2198 */(struct ring_buffer_per_cpu *cpu_buffer);
	enum{RB_LEN_TIME_EXTEND=8, RB_LEN_TIME_STAMP=8,} cocci_id/* kernel/trace/ring_buffer.c 137 */;
	struct buffer_page cocci_id/* kernel/trace/ring_buffer.c 1331 */;
	struct buffer_page *cocci_id/* kernel/trace/ring_buffer.c 1191 */;
	void (*cocci_id/* kernel/trace/preemptirq_delay_test.c 94 */[])(int);
	char cocci_id/* kernel/trace/preemptirq_delay_test.c 121 */[50];
	struct tracer_stat cocci_id/* kernel/trace/ftrace.c 954 */;
	struct fgraph_ops cocci_id/* kernel/trace/ftrace.c 858 */;
	enum{FTRACE_MODIFY_ENABLE_FL=(1 << 0), FTRACE_MODIFY_MAY_SLEEP_FL=(1 << 1),} cocci_id/* kernel/trace/ftrace.c 78 */;
	struct ftrace_profile *cocci_id/* kernel/trace/ftrace.c 717 */;
	struct ftrace_profile_stat *cocci_id/* kernel/trace/ftrace.c 716 */;
	struct trace_pid_list *cocci_id/* kernel/trace/ftrace.c 6968 */;
	ftrace_func_t cocci_id/* kernel/trace/ftrace.c 6777 */;
	struct ftrace_page cocci_id/* kernel/trace/ftrace.c 6661 */;
	struct dyn_ftrace cocci_id/* kernel/trace/ftrace.c 6614 */;
	struct ftrace_page **cocci_id/* kernel/trace/ftrace.c 6611 */;
	struct ftrace_init_func *cocci_id/* kernel/trace/ftrace.c 6595 */;
	struct ftrace_init_func {
		struct list_head list;
		unsigned long ip;
	} cocci_id/* kernel/trace/ftrace.c 6554 */;
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
	struct ftrace_profile_page *cocci_id/* kernel/trace/ftrace.c 592 */;
	struct ftrace_glob cocci_id/* kernel/trace/ftrace.c 5891 */;
	struct trace_parser *cocci_id/* kernel/trace/ftrace.c 5831 */;
	struct ftrace_graph_data *cocci_id/* kernel/trace/ftrace.c 5715 */;
	struct ftrace_graph_data {
		struct ftrace_hash *hash;
		struct ftrace_func_entry *entry;
		int idx;
		type;
		struct ftrace_hash *new_hash;
		const struct seq_operations *seq_ops;
		struct trace_parser parser;
	} cocci_id/* kernel/trace/ftrace.c 5609 */;
	enum graph_filter_type{GRAPH_FILTER_NOTRACE=0, GRAPH_FILTER_FUNCTION,} cocci_id/* kernel/trace/ftrace.c 5602 */;
	int cocci_id/* kernel/trace/ftrace.c 5435 */(struct ftrace_hash *hash,
						     char *buffer);
	char cocci_id/* kernel/trace/ftrace.c 5411 */[FTRACE_FILTER_SIZE]__initdata;
	struct trace_seq cocci_id/* kernel/trace/ftrace.c 516 */;
	struct dyn_ftrace **cocci_id/* kernel/trace/ftrace.c 5105 */;
	struct ftrace_direct_func *cocci_id/* kernel/trace/ftrace.c 4960 */;
	struct ftrace_direct_func {
		struct list_head next;
		unsigned long addr;
		int count;
	} cocci_id/* kernel/trace/ftrace.c 4939 */;
	struct ftrace_func_command *cocci_id/* kernel/trace/ftrace.c 4778 */;
	const struct ftrace_profile *cocci_id/* kernel/trace/ftrace.c 470 */;
	struct ftrace_profile_stat cocci_id/* kernel/trace/ftrace.c 458 */;
	struct tracer_stat *cocci_id/* kernel/trace/ftrace.c 455 */;
	struct ftrace_func_probe *cocci_id/* kernel/trace/ftrace.c 4434 */;
	struct ftrace_func_map *cocci_id/* kernel/trace/ftrace.c 4389 */;
	ftrace_mapper_func cocci_id/* kernel/trace/ftrace.c 4386 */;
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
	char cocci_id/* kernel/trace/ftrace.c 4047 */[MAX_PARAM_PREFIX_LEN + sizeof(this_mod) + 2];
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
	struct ftrace_glob *cocci_id/* kernel/trace/ftrace.c 3869 */;
	char *__weakcocci_id/* kernel/trace/ftrace.c 3805 */;
	struct ftrace_glob {
		char *search;
		unsigned len;
		int type;
	} cocci_id/* kernel/trace/ftrace.c 3794 */;
	struct ftrace_iterator *cocci_id/* kernel/trace/ftrace.c 3623 */;
	void *__weakcocci_id/* kernel/trace/ftrace.c 3535 */;
	struct ftrace_mod_load cocci_id/* kernel/trace/ftrace.c 3389 */;
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
	struct ftrace_ops **cocci_id/* kernel/trace/ftrace.c 281 */;
	struct ftrace_ops __rcu **cocci_id/* kernel/trace/ftrace.c 264 */;
	struct ftrace_rec_iter *cocci_id/* kernel/trace/ftrace.c 2585 */;
	struct ftrace_rec_iter cocci_id/* kernel/trace/ftrace.c 2563 */;
	struct ftrace_rec_iter {
		struct ftrace_page *pg;
		int index;
	} cocci_id/* kernel/trace/ftrace.c 2543 */;
	enum ftrace_bug_type cocci_id/* kernel/trace/ftrace.c 1984 */;
	struct dyn_ftrace *cocci_id/* kernel/trace/ftrace.c 1648 */;
	struct ftrace_page *cocci_id/* kernel/trace/ftrace.c 1647 */;
	struct ftrace_ops *cocci_id/* kernel/trace/ftrace.c 1638 */(struct dyn_ftrace *rec,
								    struct ftrace_ops *ops);
	struct ftrace_ops *cocci_id/* kernel/trace/ftrace.c 1636 */(struct dyn_ftrace *rec);
	const struct dyn_ftrace *cocci_id/* kernel/trace/ftrace.c 1529 */;
	struct ftrace_hash **cocci_id/* kernel/trace/ftrace.c 1422 */;
	int cocci_id/* kernel/trace/ftrace.c 1367 */(struct ftrace_ops *ops,
						     struct ftrace_hash *new_hash);
	void cocci_id/* kernel/trace/ftrace.c 1362 */(struct ftrace_ops *ops,
						      int filter_hash);
	void cocci_id/* kernel/trace/ftrace.c 129 */(unsigned long ip,
						     unsigned long parent_ip);
	struct ftrace_hash cocci_id/* kernel/trace/ftrace.c 1255 */;
	void cocci_id/* kernel/trace/ftrace.c 125 */(unsigned long ip,
						     unsigned long parent_ip,
						     struct ftrace_ops *op,
						     struct pt_regs *regs);
	struct ftrace_ops __rcu *cocci_id/* kernel/trace/ftrace.c 120 */;
	struct ftrace_func_entry *cocci_id/* kernel/trace/ftrace.c 1159 */;
	struct ftrace_hash *cocci_id/* kernel/trace/ftrace.c 1158 */;
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
	struct fgraph_ops *cocci_id/* kernel/trace/fgraph.c 584 */;
	struct ftrace_ret_stack *cocci_id/* kernel/trace/fgraph.c 541 */;
	struct ftrace_ret_stack cocci_id/* kernel/trace/fgraph.c 366 */;
	struct ftrace_ret_stack **cocci_id/* kernel/trace/fgraph.c 356 */;
	trace_func_graph_ent_t cocci_id/* kernel/trace/fgraph.c 353 */;
	trace_func_graph_ret_t cocci_id/* kernel/trace/fgraph.c 351 */;
	void cocci_id/* kernel/trace/fgraph.c 348 */(struct ftrace_graph_ret *);
	struct ftrace_graph_ent *cocci_id/* kernel/trace/fgraph.c 339 */;
	struct ftrace_graph_ret cocci_id/* kernel/trace/fgraph.c 220 */;
	struct ftrace_graph_ret *cocci_id/* kernel/trace/fgraph.c 133 */;
	struct ftrace_graph_ent cocci_id/* kernel/trace/fgraph.c 102 */;
	struct send_signal_irq_work cocci_id/* kernel/trace/bpf_trace.c 714 */;
	struct send_signal_irq_work *cocci_id/* kernel/trace/bpf_trace.c 712 */;
	struct send_signal_irq_work {
		struct irq_work irq_work;
		struct task_struct *task;
		u32 sig;
	} cocci_id/* kernel/trace/bpf_trace.c 702 */;
	bpf_get_current_task cocci_id/* kernel/trace/bpf_trace.c 668 */;
	struct perf_raw_frag cocci_id/* kernel/trace/bpf_trace.c 633 */;
	u64 cocci_id/* kernel/trace/bpf_trace.c 63 */(u64 r1, u64 r2, u64 r3,
						      u64 r4, u64 r5);
	struct bpf_nested_pt_regs {
		struct pt_regs regs[3];
	} cocci_id/* kernel/trace/bpf_trace.c 623 */;
	struct bpf_trace_sample_data {
		struct perf_sample_data sds[3];
	} cocci_id/* kernel/trace/bpf_trace.c 569 */;
	struct bpf_trace_module {
		struct module *module;
		struct list_head list;
	} cocci_id/* kernel/trace/bpf_trace.c 26 */;
	struct bpf_trace_module *cocci_id/* kernel/trace/bpf_trace.c 1601 */;
	struct tracepoint *cocci_id/* kernel/trace/bpf_trace.c 1511 */;
	struct bpf_raw_event_map cocci_id/* kernel/trace/bpf_trace.c 1431 */[];
	struct perf_event_query_bpf cocci_id/* kernel/trace/bpf_trace.c 1393 */;
	struct perf_event_query_bpf __user *cocci_id/* kernel/trace/bpf_trace.c 1392 */;
	struct bpf_perf_event_data cocci_id/* kernel/trace/bpf_trace.c 1278 */;
	struct bpf_raw_tp_regs *cocci_id/* kernel/trace/bpf_trace.c 1042 */;
	struct bpf_raw_tp_regs {
		struct pt_regs regs[3];
	} cocci_id/* kernel/trace/bpf_trace.c 1035 */;
	struct blk_io_trace_remap cocci_id/* kernel/trace/blktrace.c 992 */;
	char cocci_id/* kernel/trace/blktrace.c 698 */[BDEVNAME_SIZE];
	struct compat_blk_user_trace_setup cocci_id/* kernel/trace/blktrace.c 601 */;
	struct blk_user_trace_setup cocci_id/* kernel/trace/blktrace.c 563 */;
	struct tracer_flags cocci_id/* kernel/trace/blktrace.c 51 */;
	struct blk_user_trace_setup *cocci_id/* kernel/trace/blktrace.c 475 */;
	struct hd_struct *cocci_id/* kernel/trace/blktrace.c 456 */;
	struct tracer_opt cocci_id/* kernel/trace/blktrace.c 41 */[];
	struct request_queue *cocci_id/* kernel/trace/blktrace.c 342 */;
	struct trace_array *cocci_id/* kernel/trace/blktrace.c 30 */;
	struct blk_io_trace *cocci_id/* kernel/trace/blktrace.c 219 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/blktrace.c 217 */;
	struct blk_trace *cocci_id/* kernel/trace/blktrace.c 212 */;
	const u32 cocci_id/* kernel/trace/blktrace.c 198 */[2];
	const struct {
		int mask;
		const char *str;
	} cocci_id/* kernel/trace/blktrace.c 1673 */[];
	ssize_t cocci_id/* kernel/trace/blktrace.c 1645 */(struct device *dev,
							   struct device_attribute *attr,
							   const char *buf,
							   size_t count);
	ssize_t cocci_id/* kernel/trace/blktrace.c 1642 */(struct device *dev,
							   struct device_attribute *attr,
							   char *buf);
	struct trace_event cocci_id/* kernel/trace/blktrace.c 1568 */;
	struct trace_event_functions cocci_id/* kernel/trace/blktrace.c 1563 */;
	struct tracer cocci_id/* kernel/trace/blktrace.c 1551 */;
	struct blk_io_trace cocci_id/* kernel/trace/blktrace.c 1510 */;
	struct trace_event *cocci_id/* kernel/trace/blktrace.c 1501 */;
	enum print_line_t cocci_id/* kernel/trace/blktrace.c 1500 */;
	blk_log_action_t *cocci_id/* kernel/trace/blktrace.c 1475 */;
	struct blkcg *cocci_id/* kernel/trace/blktrace.c 145 */;
	const struct {
		const char *act[2];
		void (*print)(struct trace_seq *s,
			      const struct trace_entry *ent, bool has_cg);
	} cocci_id/* kernel/trace/blktrace.c 1445 */[];
	const struct trace_entry *cocci_id/* kernel/trace/blktrace.c 1289 */;
	struct trace_seq *cocci_id/* kernel/trace/blktrace.c 1288 */;
	char cocci_id/* kernel/trace/blktrace.c 1257 */[NAME_MAX + 1];
	const struct blk_io_trace *cocci_id/* kernel/trace/blktrace.c 1250 */;
	char cocci_id/* kernel/trace/blktrace.c 1249 */[RWBS_LEN];
	struct trace_iterator *cocci_id/* kernel/trace/blktrace.c 1246 */;
	void cocci_id/* kernel/trace/blktrace.c 1226 */(struct trace_iterator *iter,
							const char *act,
							bool has_cg);
	const struct blk_io_trace_remap *cocci_id/* kernel/trace/blktrace.c 1218 */;
	struct blk_io_trace_remap *cocci_id/* kernel/trace/blktrace.c 1216 */;
	const __u64 *cocci_id/* kernel/trace/blktrace.c 1211 */;
	struct request *cocci_id/* kernel/trace/blktrace.c 1051 */;
	int (*cocci_id/* kernel/torture.c 775 */)(void *arg);
	torture_ofl_func *cocci_id/* kernel/torture.c 65 */;
	struct shuffle_task *cocci_id/* kernel/torture.c 341 */;
	struct shuffle_task {
		struct list_head st_l;
		struct task_struct *st_t;
	} cocci_id/* kernel/torture.c 323 */;
	struct vdso_timestamp *cocci_id/* kernel/time/vsyscall.c 19 */;
	struct vdso_data *cocci_id/* kernel/time/vsyscall.c 16 */;
	struct timer_list_iter cocci_id/* kernel/time/timer_list.c 374 */;
	struct timer_list_iter *cocci_id/* kernel/time/timer_list.c 321 */;
	struct timer_list_iter {
		int cpu;
		bool second_pass;
		u64 now;
	} cocci_id/* kernel/time/timer_list.c 20 */;
	void cocci_id/* kernel/time/timer.c 732 */(struct timer_list *timer,
						   void (*func)(struct timer_list *),
						   unsigned int flags,
						   const char *name,
						   struct lock_class_key *key);
	struct timer_base {
		raw_spinlock_t lock;
		struct timer_list *running_timer;
#ifdef CONFIG_PREEMPT_RT
		spinlock_t expiry_lock;
		atomic_t timer_waiters;
#endif
		unsigned long clk;
		unsigned long next_expiry;
		unsigned int cpu;
		bool is_idle;
		bool must_forward_clk;
	DECLARE_BITMAP(pending_map,WHEEL_SIZE)
		;
		struct hlist_head vectors[WHEEL_SIZE];
	}____cacheline_aligned cocci_id/* kernel/time/timer.c 196 */;
	struct process_timer cocci_id/* kernel/time/timer.c 1858 */;
	signed long __sched cocci_id/* kernel/time/timer.c 1856 */;
	struct process_timer *cocci_id/* kernel/time/timer.c 1822 */;
	struct process_timer {
		struct timer_list timer;
		struct task_struct *task;
	} cocci_id/* kernel/time/timer.c 1815 */;
	struct hlist_head cocci_id/* kernel/time/timer.c 1742 */[LVL_DEPTH];
	struct timer_base *cocci_id/* kernel/time/timer.c 1457 */;
	void (*cocci_id/* kernel/time/timer.c 1379 */)(struct timer_list *);
	unsigned int cocci_id/* kernel/time/timekeeping_debug.c 20 */[NUM_BINS];
	struct timekeeper *cocci_id/* kernel/time/timekeeping.c 958 */;
	struct tk_fast cocci_id/* kernel/time/timekeeping.c 82 */;
	enum tk_offsets cocci_id/* kernel/time/timekeeping.c 811 */;
	ktime_t *cocci_id/* kernel/time/timekeeping.c 784 */[TK_OFFS_MAX];
	struct tk_fast {
		seqcount_t seq;
		struct tk_read_base base[2];
	} cocci_id/* kernel/time/timekeeping.c 65 */;
	const struct tk_read_base *cocci_id/* kernel/time/timekeeping.c 560 */;
	struct tk_read_base cocci_id/* kernel/time/timekeeping.c 559 */;
	const struct timekeeper *cocci_id/* kernel/time/timekeeping.c 557 */;
	struct timekeeper cocci_id/* kernel/time/timekeeping.c 54 */;
	struct {
		seqcount_t seq;
		struct timekeeper timekeeper;
	} cocci_id/* kernel/time/timekeeping.c 46 */;
	struct tk_read_base *cocci_id/* kernel/time/timekeeping.c 453 */;
	struct tk_fast *cocci_id/* kernel/time/timekeeping.c 451 */;
	u32 (*cocci_id/* kernel/time/timekeeping.c 354 */)(void);
	enum timekeeping_adv_mode{TK_ADV_TICK, TK_ADV_FREQ,} cocci_id/* kernel/time/timekeeping.c 34 */;
	struct audit_ntp_data cocci_id/* kernel/time/timekeeping.c 2316 */;
	enum timekeeping_adv_mode cocci_id/* kernel/time/timekeeping.c 2048 */;
	void __weak __init cocci_id/* kernel/time/timekeeping.c 1503 */;
	struct system_counterval_t cocci_id/* kernel/time/timekeeping.c 1125 */;
	int (*cocci_id/* kernel/time/timekeeping.c 1117 */)(ktime_t *device_time,
							    struct system_counterval_t *sys_counterval,
							    void *ctx);
	struct system_device_crosststamp *cocci_id/* kernel/time/timekeeping.c 1036 */;
	struct system_time_snapshot *cocci_id/* kernel/time/timekeeping.c 1032 */;
	struct timecounter *cocci_id/* kernel/time/timecounter.c 79 */;
	const struct cyclecounter *cocci_id/* kernel/time/timecounter.c 69 */;
	const unsigned short *cocci_id/* kernel/time/timeconv.c 82 */;
	struct tm *cocci_id/* kernel/time/timeconv.c 78 */;
	const unsigned short cocci_id/* kernel/time/timeconv.c 60 */[2][13];
	struct old_itimerspec32 __user *cocci_id/* kernel/time/time.c 993 */;
	const struct old_itimerspec32 __user *cocci_id/* kernel/time/time.c 982 */;
	struct __kernel_itimerspec __user *cocci_id/* kernel/time/time.c 967 */;
	const struct __kernel_itimerspec __user *cocci_id/* kernel/time/time.c 952 */;
	struct old_timespec32 cocci_id/* kernel/time/time.c 910 */;
	struct __kernel_timespec __user *cocci_id/* kernel/time/time.c 896 */;
	struct __kernel_timespec cocci_id/* kernel/time/time.c 875 */;
	const struct __kernel_timespec __user *cocci_id/* kernel/time/time.c 873 */;
	timeu64_t cocci_id/* kernel/time/time.c 861 */;
	const struct timespec64 cocci_id/* kernel/time/time.c 856 */;
	__kernel_old_time_t *cocci_id/* kernel/time/time.c 81 */;
	__kernel_old_time_t cocci_id/* kernel/time/time.c 64 */;
	suseconds_t cocci_id/* kernel/time/time.c 501 */;
	struct __kernel_old_timeval cocci_id/* kernel/time/time.c 495 */;
	struct timeval cocci_id/* kernel/time/time.c 483 */;
	struct timespec cocci_id/* kernel/time/time.c 458 */;
	struct old_timex32 __user *cocci_id/* kernel/time/time.c 318 */;
	struct old_timex32 cocci_id/* kernel/time/time.c 288 */;
	const struct old_timex32 __user *cocci_id/* kernel/time/time.c 286 */;
	struct timezone cocci_id/* kernel/time/time.c 203 */;
	const struct timezone *cocci_id/* kernel/time/time.c 169 */;
	struct timezone *cocci_id/* kernel/time/time.c 141 */;
	struct __kernel_old_timeval *cocci_id/* kernel/time/time.c 140 */;
	old_time32_t *cocci_id/* kernel/time/time.c 119 */;
	old_time32_t cocci_id/* kernel/time/time.c 107 */;
	enum tick_dep_bits cocci_id/* kernel/time/tick-sched.c 303 */;
	struct tick_sched cocci_id/* kernel/time/tick-sched.c 1299 */;
	struct tick_sched *cocci_id/* kernel/time/tick-sched.c 1149 */;
	void (*cocci_id/* kernel/time/tick-common.c 205 */)(struct clock_event_device *);
	enum tick_broadcast_state cocci_id/* kernel/time/tick-broadcast.c 710 */;
	cpumask_var_t
tick_broadcast_force_mask
 cocci_id/* kernel/time/tick-broadcast.c 527 */; // err
	cpumask_var_t
tick_broadcast_pending_mask
 cocci_id/* kernel/time/tick-broadcast.c 526 */;
	cpumask_var_t
tick_broadcast_oneshot_mask
 cocci_id/* kernel/time/tick-broadcast.c 525 */;
	void cocci_id/* kernel/time/tick-broadcast.c 40 */(unsigned int cpu);
	void cocci_id/* kernel/time/tick-broadcast.c 36 */(struct clock_event_device *bc);
	enum tick_broadcast_mode cocci_id/* kernel/time/tick-broadcast.c 356 */;
	cpumask_var_t
tmpmask
 cocci_id/* kernel/time/tick-broadcast.c 30 */;
	cpumask_var_t
tick_broadcast_on
 cocci_id/* kernel/time/tick-broadcast.c 29 */;
	cpumask_var_t
tick_broadcast_mask
 cocci_id/* kernel/time/tick-broadcast.c 28 */;
	struct tick_device cocci_id/* kernel/time/tick-broadcast.c 27 */;
	unsigned long long notrace cocci_id/* kernel/time/sched_clock.c 96 */;
	struct clock_data cocci_id/* kernel/time/sched_clock.c 85 */;
	struct clock_data {
		seqcount_t seq;
		struct clock_read_data read_data[2];
		ktime_t wrap_kt;
		unsigned long rate;
		u64 (*actual_read_sched_clock)(void);
	} cocci_id/* kernel/time/sched_clock.c 62 */;
	struct clock_read_data {
		u64 epoch_ns;
		u64 epoch_cyc;
		u64 sched_clock_mask;
		u64 (*read_sched_clock)(void);
		u32 mult;
		u32 shift;
	} cocci_id/* kernel/time/sched_clock.c 38 */;
	struct clock_read_data cocci_id/* kernel/time/sched_clock.c 174 */;
	u64 (*cocci_id/* kernel/time/sched_clock.c 168 */)(void);
	struct clock_read_data *cocci_id/* kernel/time/sched_clock.c 100 */;
	const struct __kernel_itimerspec *cocci_id/* kernel/time/posix-timers.c 917 */;
	struct old_itimerspec32 *cocci_id/* kernel/time/posix-timers.c 734 */;
	struct __kernel_itimerspec *cocci_id/* kernel/time/posix-timers.c 719 */;
	timer_t cocci_id/* kernel/time/posix-timers.c 588 */;
	sigevent_t cocci_id/* kernel/time/posix-timers.c 556 */;
	timer_t *cocci_id/* kernel/time/posix-timers.c 553 */;
	const struct k_clock *cocci_id/* kernel/time/posix-timers.c 55 */(const clockid_t id);
	const struct k_clock *constcocci_id/* kernel/time/posix-timers.c 54 */[];
	timer_t __user *cocci_id/* kernel/time/posix-timers.c 473 */;
	sigevent_t *cocci_id/* kernel/time/posix-timers.c 405 */;
	struct old_timex32 *cocci_id/* kernel/time/posix-timers.c 1161 */;
	const struct k_clock *cocci_id/* kernel/time/posix-timers.c 1110 */;
	struct __kernel_timex cocci_id/* kernel/time/posix-timers.c 1093 */;
	struct k_itimer *cocci_id/* kernel/time/posix-timers.c 104 */(timer_t timer_id,
								      unsigned long *flags);
	const pid_t cocci_id/* kernel/time/posix-cpu-timers.c 92 */;
	u64 cocci_id/* kernel/time/posix-cpu-timers.c 908 */[CPUCLOCK_MAX];
	struct signal_struct *constcocci_id/* kernel/time/posix-cpu-timers.c 906 */;
	struct posix_cputimer_base *cocci_id/* kernel/time/posix-cpu-timers.c 493 */;
	struct cpu_timer *cocci_id/* kernel/time/posix-cpu-timers.c 490 */;
	struct cpu_timer cocci_id/* kernel/time/posix-cpu-timers.c 450 */;
	struct timerqueue_head *cocci_id/* kernel/time/posix-cpu-timers.c 443 */;
	struct thread_group_cputimer *cocci_id/* kernel/time/posix-cpu-timers.c 346 */;
	atomic64_t *cocci_id/* kernel/time/posix-cpu-timers.c 247 */;
	struct task_cputime_atomic *cocci_id/* kernel/time/posix-cpu-timers.c 232 */;
	void cocci_id/* kernel/time/posix-cpu-timers.c 21 */(struct k_itimer *timer);
	const struct posix_cputimers *cocci_id/* kernel/time/posix-cpu-timers.c 155 */;
	long cocci_id/* kernel/time/posix-cpu-timers.c 1315 */(struct restart_block *restart_block);
	const u64 *cocci_id/* kernel/time/posix-cpu-timers.c 1041 */;
	struct posix_clock_desc cocci_id/* kernel/time/posix-clock.c 233 */;
	struct posix_clock_desc *cocci_id/* kernel/time/posix-clock.c 204 */;
	struct posix_clock_desc {
		struct file *fp;
		struct posix_clock *clk;
	} cocci_id/* kernel/time/posix-clock.c 199 */;
	struct posix_clock cocci_id/* kernel/time/posix-clock.c 181 */;
	struct posix_clock *cocci_id/* kernel/time/posix-clock.c 181 */;
	void cocci_id/* kernel/time/posix-clock.c 17 */(struct kref *kref);
	struct pps_normtime cocci_id/* kernel/time/ntp.c 984 */;
	struct pps_normtime {
		s64 sec;
		long nsec;
	} cocci_id/* kernel/time/ntp.c 806 */;
	struct audit_ntp_data *cocci_id/* kernel/time/ntp.c 715 */;
	struct __kernel_timex *cocci_id/* kernel/time/ntp.c 714 */;
	const struct __kernel_timex *cocci_id/* kernel/time/ntp.c 638 */;
	long cocci_id/* kernel/time/ntp.c 105 */[3];
	struct clocksource *__init __weakcocci_id/* kernel/time/jiffies.c 87 */;
	struct clocksource cocci_id/* kernel/time/jiffies.c 51 */;
	struct itimerspec64 *cocci_id/* kernel/time/itimer.c 76 */;
	struct cpu_itimer *cocci_id/* kernel/time/itimer.c 51 */;
	struct itimerspec64 *constcocci_id/* kernel/time/itimer.c 48 */;
	struct old_itimerval32 cocci_id/* kernel/time/itimer.c 365 */;
	const struct old_itimerval32 __user *cocci_id/* kernel/time/itimer.c 363 */;
	struct itimerval cocci_id/* kernel/time/itimer.c 319 */;
	const struct itimerval __user *cocci_id/* kernel/time/itimer.c 317 */;
	struct itimerspec64 cocci_id/* kernel/time/itimer.c 283 */;
	const struct itimerspec64 *constcocci_id/* kernel/time/itimer.c 169 */;
	struct old_itimerval32 __user *cocci_id/* kernel/time/itimer.c 129 */;
	struct old_itimerval32 {
		struct old_timeval32 it_interval;
		struct old_timeval32 it_value;
	} cocci_id/* kernel/time/itimer.c 124 */;
	struct itimerval *cocci_id/* kernel/time/itimer.c 113 */;
	const struct itimerspec64 *cocci_id/* kernel/time/itimer.c 101 */;
	struct itimerval __user *cocci_id/* kernel/time/itimer.c 100 */;
	struct hrtimer_cpu_base *cocci_id/* kernel/time/hrtimer.c 567 */;
	struct hrtimer_clock_base *cocci_id/* kernel/time/hrtimer.c 508 */;
	void cocci_id/* kernel/time/hrtimer.c 440 */(struct hrtimer_sleeper *sl,
						     clockid_t clock_id,
						     enum hrtimer_mode mode);
	void cocci_id/* kernel/time/hrtimer.c 429 */(struct hrtimer *timer,
						     clockid_t clock_id,
						     enum hrtimer_mode mode);
	enum debug_obj_state cocci_id/* kernel/time/hrtimer.c 371 */;
	const ktime_t cocci_id/* kernel/time/hrtimer.c 299 */;
	enum hrtimer_restart (*cocci_id/* kernel/time/hrtimer.c 1482 */)(struct hrtimer *);
	struct hrtimer cocci_id/* kernel/time/hrtimer.c 1392 */;
	enum hrtimer_mode cocci_id/* kernel/time/hrtimer.c 1377 */;
	struct hrtimer_cpu_base cocci_id/* kernel/time/hrtimer.c 137 */;
	const struct hrtimer *cocci_id/* kernel/time/hrtimer.c 1292 */;
	const int cocci_id/* kernel/time/hrtimer.c 116 */[MAX_CLOCKS];
	const enum hrtimer_mode cocci_id/* kernel/time/hrtimer.c 1085 */;
	struct clocksource *cocci_id/* kernel/time/clocksource.c 943 */;
	void cocci_id/* kernel/time/clocksource.c 119 */(struct clocksource *cs,
							 int rating);
	enum clock_event_state cocci_id/* kernel/time/clockevents.c 92 */;
	struct clock_event_device *cocci_id/* kernel/time/clockevents.c 91 */;
	char cocci_id/* kernel/time/clockevents.c 692 */[CS_NAME_LEN];
	struct tick_device *cocci_id/* kernel/time/clockevents.c 675 */;
	struct tick_device *cocci_id/* kernel/time/clockevents.c 669 */(struct device *dev);
	struct ce_unbind cocci_id/* kernel/time/clockevents.c 420 */;
	struct ce_unbind *cocci_id/* kernel/time/clockevents.c 403 */;
	struct clock_event_device cocci_id/* kernel/time/clockevents.c 349 */;
	struct ce_unbind {
		struct clock_event_device *ce;
		int res;
	} cocci_id/* kernel/time/clockevents.c 27 */;
	struct platform_device *cocci_id/* kernel/time/alarmtimer.c 877 */;
	struct platform_driver cocci_id/* kernel/time/alarmtimer.c 862 */;
	struct class_interface *cocci_id/* kernel/time/alarmtimer.c 86 */;
	const struct dev_pm_ops cocci_id/* kernel/time/alarmtimer.c 857 */;
	const struct k_clock cocci_id/* kernel/time/alarmtimer.c 838 */;
	struct alarm cocci_id/* kernel/time/alarmtimer.c 801 */;
	struct alarm_base *cocci_id/* kernel/time/alarmtimer.c 668 */;
	const clockid_t cocci_id/* kernel/time/alarmtimer.c 649 */;
	struct rtc_timer cocci_id/* kernel/time/alarmtimer.c 61 */;
	struct k_itimer cocci_id/* kernel/time/alarmtimer.c 536 */;
	struct k_itimer *cocci_id/* kernel/time/alarmtimer.c 536 */;
	enum alarmtimer_restart cocci_id/* kernel/time/alarmtimer.c 533 */;
	struct alarm_base {
		spinlock_t lock;
		struct timerqueue_head timerqueue;
		ktime_t (*gettime)(void);
		clockid_t base_clockid;
	} cocci_id/* kernel/time/alarmtimer.c 42 */[ALARM_NUMTYPE];
	enum alarmtimer_restart (*cocci_id/* kernel/time/alarmtimer.c 327 */)(struct alarm *,
									      ktime_t);
	enum alarmtimer_type cocci_id/* kernel/time/alarmtimer.c 326 */;
	struct alarm *cocci_id/* kernel/time/alarmtimer.c 326 */;
	struct timerqueue_node *cocci_id/* kernel/time/alarmtimer.c 265 */;
	struct rtc_time cocci_id/* kernel/time/alarmtimer.c 248 */;
	const struct alarm *cocci_id/* kernel/time/alarmtimer.c 225 */;
	struct class_interface cocci_id/* kernel/time/alarmtimer.c 127 */;
	struct kretprobe *cocci_id/* kernel/test_kprobes.c 242 */[2];
	u32 (*cocci_id/* kernel/test_kprobes.c 18 */)(u32 value);
	struct kprobe *cocci_id/* kernel/test_kprobes.c 112 */[2];
	struct sk_buff **cocci_id/* kernel/taskstats.c 69 */;
	const struct nla_policy *cocci_id/* kernel/taskstats.c 659 */;
	const struct genl_ops *cocci_id/* kernel/taskstats.c 656 */;
	const struct genl_ops cocci_id/* kernel/taskstats.c 639 */[];
	enum actions{REGISTER, DEREGISTER, CPU_DONT_CARE,} cocci_id/* kernel/taskstats.c 63 */;
	struct listener_list {
		struct rw_semaphore sem;
		struct list_head list;
	} cocci_id/* kernel/taskstats.c 57 */;
	struct listener {
		struct list_head list;
		pid_t pid;
		char valid;
	} cocci_id/* kernel/taskstats.c 51 */;
	struct taskstats cocci_id/* kernel/taskstats.c 476 */;
	const struct nla_policy cocci_id/* kernel/taskstats.c 47 */[TASKSTATS_CMD_ATTR_MAX + 1];
	struct cgroupstats cocci_id/* kernel/taskstats.c 408 */;
	struct nlattr *cocci_id/* kernel/taskstats.c 394 */;
	struct genl_info *cocci_id/* kernel/taskstats.c 389 */;
	struct genl_family cocci_id/* kernel/taskstats.c 35 */;
	struct listener cocci_id/* kernel/taskstats.c 296 */;
	struct listener *cocci_id/* kernel/taskstats.c 281 */;
	struct listener_list *cocci_id/* kernel/taskstats.c 280 */;
	struct genlmsghdr *cocci_id/* kernel/taskstats.c 116 */;
	struct callback_head **cocci_id/* kernel/task_work.c 58 */;
	task_work_func_t cocci_id/* kernel/task_work.c 56 */;
	struct __sysctl_args cocci_id/* kernel/sysctl_binary.c 99 */;
	struct __sysctl_args *cocci_id/* kernel/sysctl_binary.c 97 */;
	int cocci_id/* kernel/sysctl_binary.c 81 */[CTL_MAXNAME];
	unsigned long **cocci_id/* kernel/sysctl.c 3173 */;
	struct do_proc_douintvec_minmax_conv_param cocci_id/* kernel/sysctl.c 2778 */;
	struct do_proc_douintvec_minmax_conv_param *cocci_id/* kernel/sysctl.c 2737 */;
	struct do_proc_douintvec_minmax_conv_param {
		unsigned int *min;
		unsigned int *max;
	} cocci_id/* kernel/sysctl.c 2726 */;
	struct do_proc_dointvec_minmax_conv_param cocci_id/* kernel/sysctl.c 2709 */;
	struct do_proc_dointvec_minmax_conv_param *cocci_id/* kernel/sysctl.c 2669 */;
	struct do_proc_dointvec_minmax_conv_param {
		int *min;
		int *max;
	} cocci_id/* kernel/sysctl.c 2659 */;
	int (*cocci_id/* kernel/sysctl.c 2521 */)(unsigned long *lvalp,
						  unsigned int *valp,
						  int write, void *data);
	int (*cocci_id/* kernel/sysctl.c 2336 */)(bool *negp,
						  unsigned long *lvalp,
						  int *valp, int write,
						  void *data);
	char __user **cocci_id/* kernel/sysctl.c 2280 */;
	void __user **cocci_id/* kernel/sysctl.c 2277 */;
	char cocci_id/* kernel/sysctl.c 2263 */[TMPBUFLEN];
	const char cocci_id/* kernel/sysctl.c 2137 */;
	int cocci_id/* kernel/sysctl.c 211 */(struct ctl_table *table,
					      int write, void __user *buffer,
					      size_t *lenp, loff_t *ppos);
	enum sysctl_writes_mode cocci_id/* kernel/sysctl.c 209 */;
	enum sysctl_writes_mode{SYSCTL_WRITES_LEGACY=-1, SYSCTL_WRITES_WARN=0, SYSCTL_WRITES_STRICT=1,} cocci_id/* kernel/sysctl.c 203 */;
	struct kunit_suite cocci_id/* kernel/sysctl-test.c 387 */;
	struct kunit_case cocci_id/* kernel/sysctl-test.c 373 */[];
	struct kunit *cocci_id/* kernel/sysctl-test.c 19 */;
	 cocci_id/* kernel/sys_ni.c 461 */(getuid16);
	 cocci_id/* kernel/sys_ni.c 457 */(getgid16);
	 cocci_id/* kernel/sys_ni.c 456 */(geteuid16);
	 cocci_id/* kernel/sys_ni.c 455 */(getegid16);
	 cocci_id/* kernel/sys_ni.c 442 */(sgetmask);
	long cocci_id/* kernel/sys_ni.c 15 */(void);
	compat_clock_t cocci_id/* kernel/sys.c 970 */;
	clock_t cocci_id/* kernel/sys.c 970 */;
	struct tms cocci_id/* kernel/sys.c 959 */;
	struct tms *cocci_id/* kernel/sys.c 943 */;
	getegid cocci_id/* kernel/sys.c 937 */;
	getgid cocci_id/* kernel/sys.c 931 */;
	geteuid cocci_id/* kernel/sys.c 925 */;
	getuid cocci_id/* kernel/sys.c 919 */;
	getppid cocci_id/* kernel/sys.c 908 */;
	gettid cocci_id/* kernel/sys.c 897 */;
	getpid cocci_id/* kernel/sys.c 891 */;
	uid_t *cocci_id/* kernel/sys.c 691 */;
	struct compat_sysinfo {
		s32 uptime;
		u32 loads[3];
		u32 totalram;
		u32 freeram;
		u32 sharedram;
		u32 bufferram;
		u32 totalswap;
		u32 freeswap;
		u16 procs;
		u16 pad;
		u32 totalhigh;
		u32 freehigh;
		u32 mem_unit;
		char _f[20 - 2 * sizeof(u32) - sizeof(int)];
	} cocci_id/* kernel/sys.c 2590 */;
	struct getcpu_cache *cocci_id/* kernel/sys.c 2499 */;
	int __user **cocci_id/* kernel/sys.c 2411 */;
	unsigned char cocci_id/* kernel/sys.c 2268 */[sizeof(me->comm)];
	struct prctl_mm_map cocci_id/* kernel/sys.c 2090 */;
	unsigned long cocci_id/* kernel/sys.c 2065 */[AT_VECTOR_SIZE];
	unsigned int __user *cocci_id/* kernel/sys.c 1963 */;
	const unsigned char cocci_id/* kernel/sys.c 1887 */[];
	struct prctl_mm_map *cocci_id/* kernel/sys.c 1882 */;
	struct rlimit64 cocci_id/* kernel/sys.c 1612 */;
	struct rlimit64 *cocci_id/* kernel/sys.c 1610 */;
	const struct rlimit64 *cocci_id/* kernel/sys.c 1609 */;
	struct rlimit *cocci_id/* kernel/sys.c 1530 */;
	const struct rlimit *cocci_id/* kernel/sys.c 1504 */;
	struct rlimit cocci_id/* kernel/sys.c 1387 */;
	char cocci_id/* kernel/sys.c 1363 */[__NEW_UTS_LEN];
	char cocci_id/* kernel/sys.c 1338 */[__NEW_UTS_LEN + 1];
	struct new_utsname *cocci_id/* kernel/sys.c 1337 */;
	struct oldold_utsname cocci_id/* kernel/sys.c 1282 */;
	struct oldold_utsname *cocci_id/* kernel/sys.c 1280 */;
	struct old_utsname cocci_id/* kernel/sys.c 1262 */;
	struct old_utsname *cocci_id/* kernel/sys.c 1260 */;
	char cocci_id/* kernel/sys.c 1219 */[65];
	setsid cocci_id/* kernel/sys.c 1191 */;
	getpgrp cocci_id/* kernel/sys.c 1112 */;
	struct cpu_stop_work *cocci_id/* kernel/stop_machine.c 69 */;
	struct cpu_stopper *cocci_id/* kernel/stop_machine.c 68 */;
	struct multi_stop_data cocci_id/* kernel/stop_machine.c 599 */;
	void cocci_id/* kernel/stop_machine.c 546 */(int cpu,
						     struct task_struct *stop);
	struct cpu_stop_done *cocci_id/* kernel/stop_machine.c 54 */;
	struct cpu_stop_work cocci_id/* kernel/stop_machine.c 508 */;
	struct cpu_stop_done cocci_id/* kernel/stop_machine.c 408 */;
	cpu_stop_fn_t cocci_id/* kernel/stop_machine.c 406 */;
	struct cpu_stopper {
		struct task_struct *thread;
		raw_spinlock_t lock;
		bool enabled;
		struct list_head works;
		struct cpu_stop_work stop_work;
	} cocci_id/* kernel/stop_machine.c 37 */;
	struct cpu_stop_done {
		atomic_t nr_todo;
		int ret;
		struct completion completion;
	} cocci_id/* kernel/stop_machine.c 30 */;
	enum multi_stop_state cocci_id/* kernel/stop_machine.c 190 */;
	struct multi_stop_data *cocci_id/* kernel/stop_machine.c 175 */;
	struct multi_stop_data {
		cpu_stop_fn_t fn;
		void *data;
		unsigned int num_threads;
		const struct cpumask *active_cpus;
		enum multi_stop_state state;
		atomic_t thread_ack;
	} cocci_id/* kernel/stop_machine.c 154 */;
	enum multi_stop_state{MULTI_STOP_NONE, MULTI_STOP_PREPARE, MULTI_STOP_DISABLE_IRQ, MULTI_STOP_RUN, MULTI_STOP_EXIT,} cocci_id/* kernel/stop_machine.c 141 */;
	struct stacktrace_cookie *cocci_id/* kernel/stacktrace.c 84 */;
	struct stacktrace_cookie {
		unsigned long *store;
		unsigned int size;
		unsigned int skip;
		unsigned int len;
	} cocci_id/* kernel/stacktrace.c 74 */;
	struct stack_trace cocci_id/* kernel/stacktrace.c 275 */;
	struct stack_trace *cocci_id/* kernel/stacktrace.c 259 */;
	const unsigned long *cocci_id/* kernel/stacktrace.c 23 */;
	struct stacktrace_cookie cocci_id/* kernel/stacktrace.c 117 */;
	stack_trace_consume_fn cocci_id/* kernel/stacktrace.c 116 */;
	void __used notrace cocci_id/* kernel/stackleak.c 107 */;
	struct tasklet_struct **cocci_id/* kernel/softirq.c 623 */;
	const char *constcocci_id/* kernel/softirq.c 59 */[NR_SOFTIRQS];
	void (*cocci_id/* kernel/softirq.c 550 */)(unsigned long);
	struct softirq_action cocci_id/* kernel/softirq.c 55 */[NR_SOFTIRQS]__cacheline_aligned_in_smp;
	struct tasklet_struct *cocci_id/* kernel/softirq.c 494 */;
	struct tasklet_head *cocci_id/* kernel/softirq.c 475 */;
	struct tasklet_head __percpu *cocci_id/* kernel/softirq.c 472 */;
	struct tasklet_head {
		struct tasklet_struct *head;
		struct tasklet_struct **tail;
	} cocci_id/* kernel/softirq.c 463 */;
	void (*cocci_id/* kernel/softirq.c 455 */)(struct softirq_action *);
	void
__softirq_entry
 cocci_id/* kernel/softirq.c 249 */;
	enum{HP_THREAD_NONE=0, HP_THREAD_ACTIVE, HP_THREAD_PARKED,} cocci_id/* kernel/smpboot.c 91 */;
	struct smpboot_thread_data {
		unsigned int cpu;
		unsigned int status;
		struct smp_hotplug_thread *ht;
	} cocci_id/* kernel/smpboot.c 85 */;
	struct smpboot_thread_data *cocci_id/* kernel/smpboot.c 174 */;
	struct smp_hotplug_thread *cocci_id/* kernel/smpboot.c 171 */;
	struct smp_call_on_cpu_struct cocci_id/* kernel/smp.c 802 */;
	struct smp_call_on_cpu_struct *cocci_id/* kernel/smp.c 788 */;
	struct smp_call_on_cpu_struct {
		struct work_struct work;
		struct completion done;
		int (*func)(void *);
		void *data;
		int ret;
		int cpu;
	} cocci_id/* kernel/smp.c 777 */;
	bool (*cocci_id/* kernel/smp.c 717 */)(int cpu, void *info);
	void (*cocci_id/* kernel/smp.c 611 */)(void *info);
	struct call_function_data *cocci_id/* kernel/smp.c 415 */;
	void cocci_id/* kernel/smp.c 41 */(bool warn_cpu_offline);
	struct call_function_data cocci_id/* kernel/smp.c 37 */;
	struct call_function_data {
		call_single_data_t __percpu *csd;
		cpumask_var_t cpumask;
		cpumask_var_t cpumask_ipi;
	} cocci_id/* kernel/smp.c 31 */;
	call_single_data_t cocci_id/* kernel/smp.c 273 */;
	enum{CSD_FLAG_LOCK=0x01, CSD_FLAG_SYNCHRONOUS=0x02,} cocci_id/* kernel/smp.c 26 */;
	smp_call_func_t cocci_id/* kernel/smp.c 239 */;
	struct sigqueue cocci_id/* kernel/signal.c 461 */;
	struct siginfo cocci_id/* kernel/signal.c 4503 */;
	pause cocci_id/* kernel/signal.c 4421 */;
	sgetmask cocci_id/* kernel/signal.c 4382 */;
	old_sigset_t cocci_id/* kernel/signal.c 4308 */;
	struct old_sigaction *cocci_id/* kernel/signal.c 4302 */;
	const struct old_sigaction *cocci_id/* kernel/signal.c 4301 */;
	struct k_sigaction cocci_id/* kernel/signal.c 4233 */;
	struct sigaction *cocci_id/* kernel/signal.c 4230 */;
	const struct sigaction *cocci_id/* kernel/signal.c 4229 */;
	old_sigset_t *cocci_id/* kernel/signal.c 4141 */;
	compat_stack_t __user *cocci_id/* kernel/signal.c 4119 */;
	const compat_stack_t __user *cocci_id/* kernel/signal.c 4112 */;
	compat_stack_t cocci_id/* kernel/signal.c 4083 */;
	stack_t cocci_id/* kernel/signal.c 4079 */;
	stack_t __user *cocci_id/* kernel/signal.c 4062 */;
	const stack_t __user *cocci_id/* kernel/signal.c 4051 */;
	const stack_t *cocci_id/* kernel/signal.c 3995 */;
	stack_t *cocci_id/* kernel/signal.c 3995 */;
	struct k_sigaction *cocci_id/* kernel/signal.c 3949 */;
	__sighandler_t cocci_id/* kernel/signal.c 3926 */;
	siginfo_t *cocci_id/* kernel/signal.c 3664 */;
	const struct old_timespec32 *cocci_id/* kernel/signal.c 3525 */;
	const struct __kernel_timespec *cocci_id/* kernel/signal.c 3492 */;
	struct compat_siginfo cocci_id/* kernel/signal.c 3405 */;
	const struct compat_siginfo __user *cocci_id/* kernel/signal.c 3403 */;
	struct kernel_siginfo *cocci_id/* kernel/signal.c 3402 */;
	const struct compat_siginfo *cocci_id/* kernel/signal.c 3325 */;
	const struct kernel_siginfo *cocci_id/* kernel/signal.c 3240 */;
	const siginfo_t __user *cocci_id/* kernel/signal.c 3217 */;
	char cocci_id/* kernel/signal.c 3198 */[SI_EXPANSION_SIZE];
	enum siginfo_layout cocci_id/* kernel/signal.c 3147 */;
	const struct {
		unsigned char limit,layout;
	} cocci_id/* kernel/signal.c 3112 */[];
	const sigset_t __user *cocci_id/* kernel/signal.c 2964 */;
	const sigset_t *cocci_id/* kernel/signal.c 2903 */;
	restart_syscall cocci_id/* kernel/signal.c 2867 */;
	sigval_t *cocci_id/* kernel/signal.c 1512 */;
	sigval_t cocci_id/* kernel/signal.c 1500 */;
	unsigned long int cocci_id/* kernel/signal.c 1306 */;
	struct multiprocess_signals *cocci_id/* kernel/signal.c 1163 */;
	struct notification {
		struct semaphore request;
		u64 next_id;
		struct list_head notifications;
		wait_queue_head_t wqh;
	} cocci_id/* kernel/seccomp.c 99 */;
	struct seccomp_data cocci_id/* kernel/seccomp.c 802 */;
	const struct seccomp_data *cocci_id/* kernel/seccomp.c 796 */;
	struct seccomp_knotif cocci_id/* kernel/seccomp.c 743 */;
	const int *cocci_id/* kernel/seccomp.c 690 */;
	const int cocci_id/* kernel/seccomp.c 683 */[];
	struct kernel_siginfo cocci_id/* kernel/seccomp.c 611 */;
	struct seccomp_filter *cocci_id/* kernel/seccomp.c 553 */;
	struct seccomp_knotif {
		struct task_struct *task;
		u64 id;
		const struct seccomp_data *data;
		enum notify_state state;
		int error;
		long val;
		u32 flags;
		struct completion ready;
		struct list_head list;
	} cocci_id/* kernel/seccomp.c 51 */;
	struct compat_sock_fprog cocci_id/* kernel/seccomp.c 485 */;
	struct sock_fprog cocci_id/* kernel/seccomp.c 480 */;
	enum notify_state{SECCOMP_NOTIFY_INIT, SECCOMP_NOTIFY_SENT, SECCOMP_NOTIFY_REPLIED,} cocci_id/* kernel/seccomp.c 45 */;
	struct sock_filter cocci_id/* kernel/seccomp.c 440 */;
	struct sock_fprog *cocci_id/* kernel/seccomp.c 431 */;
	struct seccomp_filter **cocci_id/* kernel/seccomp.c 256 */;
	struct sock_filter *cocci_id/* kernel/seccomp.c 175 */;
	char cocci_id/* kernel/seccomp.c 1737 */[sizeof(seccomp_actions_avail)];
	const struct seccomp_log_name *cocci_id/* kernel/seccomp.c 1658 */;
	const struct seccomp_log_name cocci_id/* kernel/seccomp.c 1609 */[];
	struct seccomp_log_name {
		u32 log;
		const char *name;
	} cocci_id/* kernel/seccomp.c 1604 */;
	struct seccomp_metadata cocci_id/* kernel/seccomp.c 1551 */;
	struct sock_fprog_kern *cocci_id/* kernel/seccomp.c 1512 */;
	unsigned long cocci_id/* kernel/seccomp.c 149 */[6];
	struct seccomp_data *cocci_id/* kernel/seccomp.c 145 */;
	struct seccomp_notif_resp cocci_id/* kernel/seccomp.c 1385 */;
	struct seccomp_notif cocci_id/* kernel/seccomp.c 1384 */;
	struct seccomp_notif_sizes cocci_id/* kernel/seccomp.c 1383 */;
	struct seccomp_filter {
		refcount_t usage;
		bool log;
		struct seccomp_filter *prev;
		struct bpf_prog *prog;
		struct notification *notif;
		struct mutex notify_lock;
	} cocci_id/* kernel/seccomp.c 129 */;
	struct seccomp_knotif *cocci_id/* kernel/seccomp.c 1144 */;
	wait_bit_action_f *cocci_id/* kernel/sched/wait_bit.c 42 */;
	struct wait_bit_queue_entry *cocci_id/* kernel/sched/wait_bit.c 41 */;
	struct wait_bit_key *cocci_id/* kernel/sched/wait_bit.c 196 */;
	struct wait_bit_queue_entry cocci_id/* kernel/sched/wait_bit.c 176 */;
	struct wait_bit_key cocci_id/* kernel/sched/wait_bit.c 123 */;
	wait_queue_head_t cocci_id/* kernel/sched/wait_bit.c 10 */[WAIT_TABLE_SIZE]__cacheline_aligned;
	struct wait_queue_head *cocci_id/* kernel/sched/wait.c 9 */;
	wait_queue_entry_t cocci_id/* kernel/sched/wait.c 81 */;
	struct wait_queue_entry *cocci_id/* kernel/sched/wait.c 18 */;
	enum s_alloc{sa_rootdomain, sa_sd, sa_sd_storage, sa_none,} cocci_id/* kernel/sched/topology.c 712 */;
	struct s_data {
		struct sched_domain *__percpu*sd;
		struct root_domain *rd;
	} cocci_id/* kernel/sched/topology.c 707 */;
	struct perf_domain cocci_id/* kernel/sched/topology.c 299 */;
	struct s_data cocci_id/* kernel/sched/topology.c 1950 */;
	struct sched_group_capacity cocci_id/* kernel/sched/topology.c 1800 */;
	struct sched_group cocci_id/* kernel/sched/topology.c 1791 */;
	struct sched_domain_shared cocci_id/* kernel/sched/topology.c 1784 */;
	struct sched_domain cocci_id/* kernel/sched/topology.c 1777 */;
	struct sd_data *cocci_id/* kernel/sched/topology.c 1753 */;
	struct sched_domain_topology_level *cocci_id/* kernel/sched/topology.c 1749 */;
	struct sched_domain_topology_level cocci_id/* kernel/sched/topology.c 1432 */[];
	struct cpumask ***cocci_id/* kernel/sched/topology.c 1283 */;
	enum numa_topology_type cocci_id/* kernel/sched/topology.c 1276 */;
	enum s_alloc cocci_id/* kernel/sched/topology.c 1217 */;
	struct s_data *cocci_id/* kernel/sched/topology.c 1217 */;
	int cocci_id/* kernel/sched/topology.c 1215 */(const struct cpumask *cpu_map);
	void cocci_id/* kernel/sched/topology.c 1214 */(const struct cpumask *cpu_map);
	typeof(*curr) cocci_id/* kernel/sched/swait.c 57 */;
	struct swait_queue *cocci_id/* kernel/sched/swait.c 113 */;
	struct rt_bandwidth *cocci_id/* kernel/sched/rt.c 701 */;
	rt_rq_iter_t cocci_id/* kernel/sched/rt.c 694 */;
	void cocci_id/* kernel/sched/rt.c 484 */(struct sched_rt_entity *rt_se,
						 unsigned int flags);
	typeof(struct task_group) cocci_id/* kernel/sched/rt.c 461 */;
	void cocci_id/* kernel/sched/rt.c 433 */(struct rt_rq *rt_rq);
	void cocci_id/* kernel/sched/rt.c 261 */(struct rq *this_rq);
	struct rt_schedulable_data cocci_id/* kernel/sched/rt.c 2484 */;
	struct rt_schedulable_data *cocci_id/* kernel/sched/rt.c 2426 */;
	struct rt_schedulable_data {
		struct task_group *tg;
		u64 rt_period;
		u64 rt_runtime;
	} cocci_id/* kernel/sched/rt.c 2418 */;
	struct sched_rt_entity cocci_id/* kernel/sched/rt.c 205 */;
	struct root_domain cocci_id/* kernel/sched/rt.c 2013 */;
	struct rt_rq cocci_id/* kernel/sched/rt.c 200 */;
	struct plist_head *cocci_id/* kernel/sched/rt.c 1616 */;
	struct rt_bandwidth cocci_id/* kernel/sched/rt.c 15 */;
	int cocci_id/* kernel/sched/rt.c 13 */(struct rt_bandwidth *rt_b,
					       int overrun);
	struct sched_rt_entity *cocci_id/* kernel/sched/rt.c 1221 */;
	struct rt_prio_array *cocci_id/* kernel/sched/rt.c 1221 */;
	struct psi_group_cpu cocci_id/* kernel/sched/psi.c 871 */;
	struct psi_window *cocci_id/* kernel/sched/psi.c 445 */;
	struct psi_group cocci_id/* kernel/sched/psi.c 418 */;
	u32 cocci_id/* kernel/sched/psi.c 320 */[NR_PSI_STATES];
	u64 cocci_id/* kernel/sched/psi.c 305 */[NR_PSI_STATES - 1];
	enum psi_aggregators cocci_id/* kernel/sched/psi.c 302 */;
	enum psi_states cocci_id/* kernel/sched/psi.c 242 */;
	struct psi_group_cpu *cocci_id/* kernel/sched/psi.c 240 */;
	struct psi_trigger cocci_id/* kernel/sched/psi.c 1083 */;
	unsigned long cocci_id/* kernel/sched/loadavg.c 61 */[3];
	atomic_long_t cocci_id/* kernel/sched/loadavg.c 206 */[2];
	enum hk_flags cocci_id/* kernel/sched/isolation.c 49 */;
	struct cpuidle_driver *cocci_id/* kernel/sched/idle.c 99 */;
	struct cpuidle_device *cocci_id/* kernel/sched/idle.c 99 */;
	void
__cpuidle
 cocci_id/* kernel/sched/idle.c 88 */;
	int
__cpuidle
 cocci_id/* kernel/sched/idle.c 55 */;
	char *__unusedcocci_id/* kernel/sched/idle.c 46 */;
	struct idle_timer cocci_id/* kernel/sched/idle.c 312 */;
	struct idle_timer *cocci_id/* kernel/sched/idle.c 312 */;
	struct idle_timer {
		struct hrtimer timer;
		int done;
	} cocci_id/* kernel/sched/idle.c 305 */;
	enum cpu_idle_type cocci_id/* kernel/sched/fair.c 9903 */;
	struct sched_domain_shared *cocci_id/* kernel/sched/fair.c 9681 */;
	struct lb_env cocci_id/* kernel/sched/fair.c 9459 */;
	int cocci_id/* kernel/sched/fair.c 9063 */(void *data);
	struct lb_env *cocci_id/* kernel/sched/fair.c 9015 */;
	struct sd_lb_stats cocci_id/* kernel/sched/fair.c 8764 */;
	struct sched_group *cocci_id/* kernel/sched/fair.c 8761 */;
	struct sg_lb_stats *cocci_id/* kernel/sched/fair.c 8603 */;
	struct sd_lb_stats *cocci_id/* kernel/sched/fair.c 8601 */;
	struct sg_lb_stats cocci_id/* kernel/sched/fair.c 8377 */;
	enum fbq_type cocci_id/* kernel/sched/fair.c 8190 */;
	enum group_type cocci_id/* kernel/sched/fair.c 7946 */;
	struct sched_group_capacity *cocci_id/* kernel/sched/fair.c 7776 */;
	struct sd_lb_stats {
		struct sched_group *busiest;
		struct sched_group *local;
		unsigned long total_load;
		unsigned long total_capacity;
		unsigned long avg_load;
		unsigned int prefer_sibling;
		struct sg_lb_stats busiest_stat;
		struct sg_lb_stats local_stat;
	} cocci_id/* kernel/sched/fair.c 7677 */;
	struct sg_lb_stats {
		unsigned long avg_load;
		unsigned long group_load;
		unsigned long group_capacity;
		unsigned long group_util;
		unsigned int sum_nr_running;
		unsigned int sum_h_nr_running;
		unsigned int idle_cpus;
		unsigned int group_weight;
		enum group_type group_type;
		unsigned int group_asym_packing;
		unsigned long group_misfit_task_load;
#ifdef CONFIG_NUMA_BALANCING
		unsigned int nr_numa_running;
		unsigned int nr_preferred_running;
#endif
	} cocci_id/* kernel/sched/fair.c 7655 */;
	void cocci_id/* kernel/sched/fair.c 751 */(struct sched_entity *se);
	struct sched_avg *cocci_id/* kernel/sched/fair.c 733 */;
	unsigned long cocci_id/* kernel/sched/fair.c 728 */(int cpu);
	unsigned long cocci_id/* kernel/sched/fair.c 727 */(struct task_struct *p);
	int cocci_id/* kernel/sched/fair.c 726 */(struct task_struct *p,
						  int prev_cpu, int cpu);
	struct lb_env {
		struct sched_domain *sd;
		struct rq *src_rq;
		int src_cpu;
		int dst_cpu;
		struct rq *dst_rq;
		struct cpumask *dst_grpmask;
		int new_dst_cpu;
		enum cpu_idle_type idle;
		long imbalance;
		struct cpumask *cpus;
		unsigned int flags;
		unsigned int loop;
		unsigned int loop_break;
		unsigned int loop_max;
		enum fbq_type fbq_type;
		enum migration_type migration_type;
		struct list_head tasks;
	} cocci_id/* kernel/sched/fair.c 7035 */;
	enum migration_type{migrate_load=0, migrate_util, migrate_task, migrate_misfit,} cocci_id/* kernel/sched/fair.c 7021 */;
	enum group_type{group_has_spare=0, group_fully_busy, group_misfit_task, group_asym_packing, group_imbalanced, group_overloaded,} cocci_id/* kernel/sched/fair.c 6990 */;
	enum fbq_type{regular, remote, all,} cocci_id/* kernel/sched/fair.c 6981 */;
	struct load_weight cocci_id/* kernel/sched/fair.c 697 */;
	struct perf_domain *cocci_id/* kernel/sched/fair.c 6147 */;
	struct sched_entity cocci_id/* kernel/sched/fair.c 576 */;
	struct cpuidle_state *cocci_id/* kernel/sched/fair.c 5602 */;
	struct sched_group *cocci_id/* kernel/sched/fair.c 5577 */(struct sched_domain *sd,
								   struct task_struct *p,
								   int this_cpu,
								   int sd_flag);
	enum sched_tunable_scaling cocci_id/* kernel/sched/fair.c 54 */;
	struct {
		cpumask_var_t idle_cpus_mask;
		atomic_t nr_cpus;
		int has_blocked;
		unsigned long next_balance;
		unsigned long next_blocked;
	} cocci_id/* kernel/sched/fair.c 5371 */;
	void cocci_id/* kernel/sched/fair.c 499 */(struct cfs_rq *cfs_rq,
						   u64 delta_exec);
	struct cfs_bandwidth cocci_id/* kernel/sched/fair.c 4931 */;
	struct static_key cocci_id/* kernel/sched/fair.c 4332 */;
	bool cocci_id/* kernel/sched/fair.c 4263 */(struct cfs_rq *cfs_rq);
	int cocci_id/* kernel/sched/fair.c 4202 */(struct sched_entity *curr,
						   struct sched_entity *se);
	void cocci_id/* kernel/sched/fair.c 3924 */(struct cfs_rq *cfs_rq);
	struct util_est cocci_id/* kernel/sched/fair.c 3704 */;
	int cocci_id/* kernel/sched/fair.c 3077 */(struct cfs_rq *cfs_rq);
	typeof(*ptr) cocci_id/* kernel/sched/fair.c 2798 */;
	typeof(_val) cocci_id/* kernel/sched/fair.c 2797 */;
	typeof(_ptr) cocci_id/* kernel/sched/fair.c 2796 */;
	struct numa_group cocci_id/* kernel/sched/fair.c 2258 */;
	unsigned long cocci_id/* kernel/sched/fair.c 2131 */[2];
	struct task_numa_env cocci_id/* kernel/sched/fair.c 1743 */;
	struct task_numa_env *cocci_id/* kernel/sched/fair.c 1553 */;
	struct task_numa_env {
		struct task_struct *p;
		int src_cpu,src_nid;
		int dst_cpu,dst_nid;
		struct numa_stats src_stats,dst_stats;
		int imbalance_pct;
		int dist;
		struct task_struct *best_task;
		long best_imp;
		int best_cpu;
	} cocci_id/* kernel/sched/fair.c 1508 */;
	struct numa_stats *cocci_id/* kernel/sched/fair.c 1494 */;
	struct numa_stats {
		unsigned long load;
		unsigned long compute_capacity;
	} cocci_id/* kernel/sched/fair.c 1484 */;
	unsigned long cocci_id/* kernel/sched/fair.c 1476 */(struct cfs_rq *cfs_rq);
	enum numa_faults_stats cocci_id/* kernel/sched/fair.c 1230 */;
	unsigned long cocci_id/* kernel/sched/fair.c 1102 */(struct numa_group *ng);
	struct numa_group *cocci_id/* kernel/sched/fair.c 1097 */;
	const struct sched_avg *cocci_id/* kernel/sched/fair.c 10847 */;
	struct numa_group {
		refcount_t refcount;
		spinlock_t lock;
		int nr_tasks;
		pid_t gid;
		int active_nodes;
		struct rcu_head rcu;
		unsigned long total_faults;
		unsigned long max_faults_cpu;
		unsigned long *faults_cpu;
		unsigned long faults[0];
	} cocci_id/* kernel/sched/fair.c 1067 */;
	struct cfs_rq cocci_id/* kernel/sched/fair.c 10579 */;
	struct mempolicy *cocci_id/* kernel/sched/debug.c 834 */;
	char cocci_id/* kernel/sched/debug.c 420 */[PATH_MAX];
	struct ctl_table **cocci_id/* kernel/sched/debug.c 300 */;
	void cocci_id/* kernel/sched/deadline.c 640 */(struct rq *rq,
						       struct task_struct *p,
						       int flags);
	struct root_domain *cocci_id/* kernel/sched/deadline.c 56 */;
	struct rq *cocci_id/* kernel/sched/deadline.c 527 */(struct task_struct *task,
							     struct rq *rq);
	void cocci_id/* kernel/sched/deadline.c 512 */(struct rq *);
	int cocci_id/* kernel/sched/deadline.c 501 */(struct rq *rq);
	struct dl_bandwidth *cocci_id/* kernel/sched/deadline.c 337 */;
	const struct sched_class cocci_id/* kernel/sched/deadline.c 2431 */;
	struct dl_bw *cocci_id/* kernel/sched/deadline.c 2295 */;
	struct dl_bandwidth cocci_id/* kernel/sched/deadline.c 21 */;
	int cocci_id/* kernel/sched/deadline.c 1599 */(struct task_struct *task);
	struct sched_dl_entity *cocci_id/* kernel/sched/deadline.c 1429 */;
	struct sched_dl_entity cocci_id/* kernel/sched/deadline.c 1414 */;
	struct rt_rq *cocci_id/* kernel/sched/deadline.c 1268 */;
	bool cocci_id/* kernel/sched/deadline.c 1132 */(struct rt_rq *rt_rq);
	struct dl_rq *cocci_id/* kernel/sched/deadline.c 106 */;
	struct vtime *cocci_id/* kernel/sched/cputime.c 733 */;
	struct task_cputime cocci_id/* kernel/sched/cputime.c 663 */;
	struct task_cputime *cocci_id/* kernel/sched/cputime.c 442 */;
	struct prev_cputime *cocci_id/* kernel/sched/cputime.c 442 */;
	struct irqtime *cocci_id/* kernel/sched/cputime.c 34 */;
	const struct kernel_cpustat *cocci_id/* kernel/sched/cputime.c 1091 */;
	struct kernel_cpustat *cocci_id/* kernel/sched/cputime.c 1089 */;
	struct cpupri_vec *cocci_id/* kernel/sched/cpupri.c 68 */;
	struct cpupri *cocci_id/* kernel/sched/cpupri.c 230 */;
	struct mutex cocci_id/* kernel/sched/cpufreq_schedutil.c 922 */;
	struct cpufreq_governor *cocci_id/* kernel/sched/cpufreq_schedutil.c 908 */;
	struct cpufreq_governor cocci_id/* kernel/sched/cpufreq_schedutil.c 636 */;
	struct governor_attr cocci_id/* kernel/sched/cpufreq_schedutil.c 621 */;
	struct gov_attr_set *cocci_id/* kernel/sched/cpufreq_schedutil.c 596 */;
	struct sugov_tunables cocci_id/* kernel/sched/cpufreq_schedutil.c 593 */;
	struct sugov_tunables *cocci_id/* kernel/sched/cpufreq_schedutil.c 588 */;
	struct sugov_policy cocci_id/* kernel/sched/cpufreq_schedutil.c 581 */;
	struct sugov_cpu cocci_id/* kernel/sched/cpufreq_schedutil.c 528 */;
	struct sugov_cpu {
		struct update_util_data update_util;
		struct sugov_policy *sg_policy;
		unsigned int cpu;
		bool iowait_boost_pending;
		unsigned int iowait_boost;
		u64 last_update;
		unsigned long bw_dl;
		unsigned long max;
#ifdef CONFIG_NO_HZ_COMMON
		unsigned long saved_idle_calls;
#endif
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 47 */;
	struct sugov_cpu *cocci_id/* kernel/sched/cpufreq_schedutil.c 446 */;
	struct sugov_policy {
		struct cpufreq_policy *policy;
		struct sugov_tunables *tunables;
		struct list_head tunables_hook;
		raw_spinlock_t update_lock;
		u64 last_freq_update_time;
		s64 freq_update_delay_ns;
		unsigned int next_freq;
		unsigned int cached_raw_freq;
		struct irq_work irq_work;
		struct kthread_work work;
		struct mutex work_lock;
		struct kthread_worker worker;
		struct task_struct *thread;
		bool work_in_progress;
		bool limits_changed;
		bool need_freq_update;
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 23 */;
	struct sugov_tunables {
		struct gov_attr_set attr_set;
		unsigned int rate_limit_us;
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 18 */;
	struct cpufreq_policy *cocci_id/* kernel/sched/cpufreq_schedutil.c 174 */;
	struct sugov_policy *cocci_id/* kernel/sched/cpufreq_schedutil.c 171 */;
	void (*cocci_id/* kernel/sched/cpufreq.c 31 */)(struct update_util_data *data,
							u64 time,
							unsigned int flags);
	struct update_util_data *cocci_id/* kernel/sched/cpufreq.c 30 */;
	struct cpudl *cocci_id/* kernel/sched/cpudeadline.c 268 */;
	struct cpudl_item cocci_id/* kernel/sched/cpudeadline.c 248 */;
	const struct sched_dl_entity *cocci_id/* kernel/sched/cpudeadline.c 120 */;
	struct kernel_cpustat cocci_id/* kernel/sched/cpuacct.c 74 */;
	struct cpuacct_usage cocci_id/* kernel/sched/cpuacct.c 70 */;
	struct cpuacct cocci_id/* kernel/sched/cpuacct.c 37 */;
	struct cpuacct {
		struct cgroup_subsys_state css;
		struct cpuacct_usage __percpu *cpuusage;
		struct kernel_cpustat __percpu *cpustat;
	} cocci_id/* kernel/sched/cpuacct.c 28 */;
	s64 cocci_id/* kernel/sched/cpuacct.c 272 */[CPUACCT_STAT_NSTATS];
	struct cpuacct_usage *cocci_id/* kernel/sched/cpuacct.c 245 */;
	struct cpuacct_usage {
		u64 usages[CPUACCT_STAT_NSTATS];
	} cocci_id/* kernel/sched/cpuacct.c 23 */;
	struct cpuacct *cocci_id/* kernel/sched/cpuacct.c 206 */;
	enum cpuacct_stat_index cocci_id/* kernel/sched/cpuacct.c 204 */;
	enum cpuacct_stat_index{CPUACCT_STAT_USER, CPUACCT_STAT_SYSTEM, CPUACCT_STAT_NSTATS,} cocci_id/* kernel/sched/cpuacct.c 11 */;
	struct uclamp_bucket *cocci_id/* kernel/sched/core.c 988 */;
	struct uclamp_rq *cocci_id/* kernel/sched/core.c 986 */;
	struct uclamp_se cocci_id/* kernel/sched/core.c 796 */[UCLAMP_CNT];
	const u32 cocci_id/* kernel/sched/core.c 7948 */[40];
	const int cocci_id/* kernel/sched/core.c 7930 */[40];
	char cocci_id/* kernel/sched/core.c 7814 */[21];
	struct cfs_bandwidth *cocci_id/* kernel/sched/core.c 7614 */;
	struct cfs_schedulable_data cocci_id/* kernel/sched/core.c 7593 */;
	struct cfs_schedulable_data *cocci_id/* kernel/sched/core.c 7538 */;
	struct cfs_schedulable_data {
		struct task_group *tg;
		u64 period,quota;
	} cocci_id/* kernel/sched/core.c 7528 */;
	struct load_weight *cocci_id/* kernel/sched/core.c 751 */;
	struct cfs_rq *cocci_id/* kernel/sched/core.c 7432 */;
	int cocci_id/* kernel/sched/core.c 7375 */(struct task_group *tg,
						   u64 period, u64 runtime);
	const u64 cocci_id/* kernel/sched/core.c 7372 */;
	struct uclamp_request cocci_id/* kernel/sched/core.c 7242 */;
	struct uclamp_request {
#define UCLAMP_PERCENT_SHIFT 2
#define UCLAMP_PERCENT_SCALE (100 * POW10(UCLAMP_PERCENT_SHIFT))
			s64 percent;
		u64 util;
		int ret;
	} cocci_id/* kernel/sched/core.c 7234 */;
	unsigned int cocci_id/* kernel/sched/core.c 7186 */[UCLAMP_CNT];
	tg_visitor cocci_id/* kernel/sched/core.c 712 */;
	struct task_group cocci_id/* kernel/sched/core.c 7074 */;
	struct rt_rq **cocci_id/* kernel/sched/core.c 6595 */;
	struct sched_rt_entity **cocci_id/* kernel/sched/core.c 6592 */;
	struct cfs_rq **cocci_id/* kernel/sched/core.c 6587 */;
	struct sched_entity **cocci_id/* kernel/sched/core.c 6584 */;
	const struct sched_class *cocci_id/* kernel/sched/core.c 6218 */;
	long __sched cocci_id/* kernel/sched/core.c 5781 */;
	sched_yield cocci_id/* kernel/sched/core.c 5612 */;
	struct sched_domain *cocci_id/* kernel/sched/core.c 556 */;
	struct sched_attr *cocci_id/* kernel/sched/core.c 5314 */;
	struct sched_attr __user *cocci_id/* kernel/sched/core.c 5313 */;
	struct sched_param *cocci_id/* kernel/sched/core.c 5269 */;
	struct sched_param __user *cocci_id/* kernel/sched/core.c 5094 */;
	struct sched_attr cocci_id/* kernel/sched/core.c 5030 */;
	const struct sched_param *cocci_id/* kernel/sched/core.c 5028 */;
	const struct sched_attr *cocci_id/* kernel/sched/core.c 4761 */;
	struct wake_q_node *cocci_id/* kernel/sched/core.c 416 */;
	void __sched notrace cocci_id/* kernel/sched/core.c 4001 */;
	typeof(ti->flags) cocci_id/* kernel/sched/core.c 384 */;
	struct tick_work cocci_id/* kernel/sched/core.c 3746 */;
	struct thread_info *cocci_id/* kernel/sched/core.c 371 */;
	struct tick_work *cocci_id/* kernel/sched/core.c 3656 */;
	struct tick_work __percpu *cocci_id/* kernel/sched/core.c 3651 */;
	struct tick_work {
		int cpu;
		atomic_t state;
		struct delayed_work work;
	} cocci_id/* kernel/sched/core.c 3618 */;
	struct sched_entity *cocci_id/* kernel/sched/core.c 3534 */;
	typeof(*_ptr) cocci_id/* kernel/sched/core.c 352 */;
	typeof(mask) cocci_id/* kernel/sched/core.c 351 */;
	typeof(ptr) cocci_id/* kernel/sched/core.c 350 */;
	void (*cocci_id/* kernel/sched/core.c 3278 */)(struct rq *);
	void (*cocci_id/* kernel/sched/core.c 3271 */)(struct rq *rq);
	struct preempt_notifier *cocci_id/* kernel/sched/core.c 3027 */;
	bool __initdata cocci_id/* kernel/sched/core.c 2763 */;
	struct rq cocci_id/* kernel/sched/core.c 240 */;
	enum{cpuset, possible, fail,} cocci_id/* kernel/sched/core.c 2035 */;
	struct migration_swap_arg cocci_id/* kernel/sched/core.c 1842 */;
	struct migration_swap_arg *cocci_id/* kernel/sched/core.c 1797 */;
	struct migration_swap_arg {
		struct task_struct *src_task,*dst_task;
		int src_cpu,dst_cpu;
	} cocci_id/* kernel/sched/core.c 1790 */;
	struct migration_arg cocci_id/* kernel/sched/core.c 1683 */;
	struct migration_arg *cocci_id/* kernel/sched/core.c 1544 */;
	struct rq_flags *cocci_id/* kernel/sched/core.c 1524 */;
	s64 __maybe_unused cocci_id/* kernel/sched/core.c 152 */;
	struct migration_arg {
		struct task_struct *task;
		int dest_cpu;
	} cocci_id/* kernel/sched/core.c 1510 */;
	struct uclamp_rq cocci_id/* kernel/sched/core.c 1256 */;
	struct uclamp_se cocci_id/* kernel/sched/core.c 1249 */;
	struct uclamp_se *cocci_id/* kernel/sched/core.c 1198 */;
	enum uclamp_id cocci_id/* kernel/sched/core.c 1191 */;
	long (*cocci_id/* kernel/sched/completion.c 97 */)(long);
	long __sched cocci_id/* kernel/sched/completion.c 95 */;
	unsigned long __sched cocci_id/* kernel/sched/completion.c 186 */;
	struct sched_clock_data cocci_id/* kernel/sched/clock.c 96 */;
	struct sched_clock_data {
		u64 tick_raw;
		u64 tick_gtod;
		u64 clock;
	} cocci_id/* kernel/sched/clock.c 90 */;
	unsigned long long __weak cocci_id/* kernel/sched/clock.c 64 */;
	struct sched_clock_data *cocci_id/* kernel/sched/clock.c 113 */;
	struct autogroup cocci_id/* kernel/sched/autogroup.c 9 */;
	struct task_group *cocci_id/* kernel/sched/autogroup.c 66 */;
	struct autogroup *cocci_id/* kernel/sched/autogroup.c 63 */;
	struct rseq *cocci_id/* kernel/rseq.c 307 */;
	struct ksignal *cocci_id/* kernel/rseq.c 262 */;
	struct rseq_cs cocci_id/* kernel/rseq.c 225 */;
	struct rseq_cs *cocci_id/* kernel/rseq.c 216 */;
	struct rseq_cs __user *cocci_id/* kernel/rseq.c 117 */;
	enum{MAX_IORES_LEVEL=5,} cocci_id/* kernel/resource.c 86 */;
	struct resource_constraint cocci_id/* kernel/resource.c 729 */;
	resource_size_t (*cocci_id/* kernel/resource.c 722 */)(void *, const struct resource *, resource_size_t, resource_size_t);
	struct resource_constraint *cocci_id/* kernel/resource.c 595 */;
	const struct resource *cocci_id/* kernel/resource.c 572 */;
	int (*cocci_id/* kernel/resource.c 476 */)(unsigned long, unsigned long, void *);
	struct resource_constraint {
		resource_size_t min,max,align;
		resource_size_t (*alignf)(void *, const struct resource *, resource_size_t, resource_size_t);
		void *alignf_data;
	} cocci_id/* kernel/resource.c 47 */;
	struct resource_entry *cocci_id/* kernel/resource.c 1622 */;
	struct resource cocci_id/* kernel/resource.c 1489 */[MAXRESERVE];
	struct region_devres cocci_id/* kernel/resource.c 1474 */;
	struct region_devres *cocci_id/* kernel/resource.c 1449 */;
	struct region_devres {
		struct resource *parent;
		resource_size_t start;
		resource_size_t n;
	} cocci_id/* kernel/resource.c 1424 */;
	struct resource **cocci_id/* kernel/resource.c 1194 */;
	struct rchan *cocci_id/* kernel/relay.c 834 */;
	struct rchan_percpu_buf_dispatcher cocci_id/* kernel/relay.c 658 */;
	struct rchan_percpu_buf_dispatcher *cocci_id/* kernel/relay.c 629 */;
	struct rchan_percpu_buf_dispatcher {
		struct rchan_buf *buf;
		struct dentry *dentry;
	} cocci_id/* kernel/relay.c 621 */;
	struct rchan_callbacks *cocci_id/* kernel/relay.c 567 */;
	struct rchan_buf *cocci_id/* kernel/relay.c 351 */;
	struct rchan_callbacks cocci_id/* kernel/relay.c 322 */;
	struct rchan cocci_id/* kernel/relay.c 199 */;
	struct rchan_buf cocci_id/* kernel/relay.c 169 */;
	struct pipe_inode_info *cocci_id/* kernel/relay.c 1287 */;
	struct splice_pipe_desc cocci_id/* kernel/relay.c 1211 */;
	struct partial_page cocci_id/* kernel/relay.c 1210 */[PIPE_DEF_BUFFERS];
	struct page *cocci_id/* kernel/relay.c 1209 */[PIPE_DEF_BUFFERS];
	struct splice_pipe_desc *cocci_id/* kernel/relay.c 1186 */;
	const struct pipe_buf_operations cocci_id/* kernel/relay.c 1179 */;
	struct pipe_buffer *cocci_id/* kernel/relay.c 1171 */;
	enum reboot_mode *cocci_id/* kernel/reboot.c 524 */;
	enum reboot_type cocci_id/* kernel/reboot.c 46 */;
	char cocci_id/* kernel/reboot.c 419 */[POWEROFF_CMD_PATH_LEN];
	enum reboot_mode cocci_id/* kernel/reboot.c 35 */;
	enum system_states cocci_id/* kernel/reboot.c 258 */;
	struct rcu_head **cocci_id/* kernel/rcu/update.c 490 */;
	struct debug_obj_descr cocci_id/* kernel/rcu/update.c 431 */;
	struct rcu_synchronize *cocci_id/* kernel/rcu/update.c 344 */;
	call_rcu_func_t *cocci_id/* kernel/rcu/update.c 343 */;
	bool notrace cocci_id/* kernel/rcu/tree.c 917 */;
	struct rcu_state cocci_id/* kernel/rcu/tree.c 87 */;
	struct rcu_data cocci_id/* kernel/rcu/tree.c 82 */;
	int cocci_id/* kernel/rcu/tree.c 500 */(int user);
	void cocci_id/* kernel/rcu/tree.c 499 */(int (*f)(struct rcu_data *rdp));
	struct kernel_param_ops cocci_id/* kernel/rcu/tree.c 485 */;
	ulong *cocci_id/* kernel/rcu/tree.c 467 */;
	struct lock_class_key cocci_id/* kernel/rcu/tree.c 3380 */[RCU_NUM_LVLS];
	struct rcu_data *cocci_id/* kernel/rcu/tree.c 2589 */;
	int (*cocci_id/* kernel/rcu/tree.c 2284 */)(struct rcu_data *rdp);
	void __maybe_unused cocci_id/* kernel/rcu/tree.c 1928 */;
	int __noreturn cocci_id/* kernel/rcu/tree.c 1794 */;
	struct swait_queue_head *cocci_id/* kernel/rcu/tree.c 1713 */;
	void cocci_id/* kernel/rcu/tree.c 152 */(int cpu);
	void cocci_id/* kernel/rcu/tree.c 151 */(struct rcu_data *rdp);
	void cocci_id/* kernel/rcu/tree.c 149 */(struct rcu_node *rnp, int outgoingcpu);
	void cocci_id/* kernel/rcu/tree.c 148 */(struct rcu_node *rnp_leaf);
	void cocci_id/* kernel/rcu/tree.c 145 */(unsigned long mask, struct rcu_node *rnp, unsigned long gps, unsigned long flags);
	struct rcu_node *cocci_id/* kernel/rcu/tree.c 1389 */;
	void __maybe_unused cocci_id/* kernel/rcu/tree.c 1372 */;
	struct softirq_action *cocci_id/* kernel/rcu/tiny.c 77 */;
	struct rcu_ctrlblk cocci_id/* kernel/rcu/tiny.c 36 */;
	struct rcu_ctrlblk {
		struct rcu_head *rcucblist;
		struct rcu_head **donetail;
		struct rcu_head **curtail;
	} cocci_id/* kernel/rcu/tiny.c 29 */;
	struct rcu_sync cocci_id/* kernel/rcu/sync.c 75 */;
	struct rcu_sync *cocci_id/* kernel/rcu/sync.c 45 */;
	void cocci_id/* kernel/rcu/sync.c 43 */(struct rcu_head *rhp);
	enum{GP_IDLE=0, GP_ENTER, GP_PASSED, GP_EXIT, GP_REPLAY,} cocci_id/* kernel/rcu/sync.c 13 */;
	struct srcu_node *cocci_id/* kernel/rcu/srcutree.c 90 */;
	int cocci_id/* kernel/rcu/srcutree.c 88 */[RCU_NUM_LVLS];
	struct srcu_data *cocci_id/* kernel/rcu/srcutree.c 842 */;
	void cocci_id/* kernel/rcu/srcutree.c 48 */(struct timer_list *t);
	void cocci_id/* kernel/rcu/srcutree.c 46 */(struct srcu_struct *ssp, unsigned long delay);
	struct srcu_data cocci_id/* kernel/rcu/srcutree.c 179 */;
	struct srcu_struct **cocci_id/* kernel/rcu/srcutree.c 1321 */;
	enum rcutorture_type cocci_id/* kernel/rcu/srcutree.c 1241 */;
	struct rcu_synchronize cocci_id/* kernel/rcu/srcutiny.c 183 */;
	struct rcu_boost_inflight cocci_id/* kernel/rcu/rcutorture.c 803 */;
	struct rcu_boost_inflight *cocci_id/* kernel/rcu/rcutorture.c 753 */;
	struct rcu_boost_inflight {
		struct rcu_head rcu;
		int inflight;
	} cocci_id/* kernel/rcu/rcutorture.c 746 */;
	bool __maybe_unused cocci_id/* kernel/rcu/rcutorture.c 734 */;
	struct rcu_torture_ops cocci_id/* kernel/rcu/rcutorture.c 630 */;
	const long cocci_id/* kernel/rcu/rcutorture.c 524 */;
	struct rcu_torture *cocci_id/* kernel/rcu/rcutorture.c 471 */;
	struct rt_read_seg *cocci_id/* kernel/rcu/rcutorture.c 330 */;
	struct rcu_torture_ops *cocci_id/* kernel/rcu/rcutorture.c 317 */;
	struct rcu_torture_ops {
		int ttype;
		void (*init)(void);
		void (*cleanup)(void);
		int (*readlock)(void);
		void (*read_delay)(struct torture_random_state *rrsp, struct rt_read_seg *rtrsp);
		void (*readunlock)(int idx);
		unsigned long (*get_gp_seq)(void);
		unsigned long (*gp_diff)(unsigned long new, unsigned long old);
		void (*deferred_free)(struct rcu_torture *p);
		void (*sync)(void);
		void (*exp_sync)(void);
		unsigned long (*get_state)(void);
		void (*cond_sync)(unsigned long oldstate);
		call_rcu_func_t call;
		void (*cb_barrier)(void);
		void (*fqs)(void);
		void (*stats)(void);
		int (*stall_dur)(void);
		int irq_capable;
		int can_boost;
		int extendables;
		int slow_gps;
		const char *name;
	} cocci_id/* kernel/rcu/rcutorture.c 290 */;
	struct rcu_torture cocci_id/* kernel/rcu/rcutorture.c 271 */;
	wait_queue_head_t *cocci_id/* kernel/rcu/rcutorture.c 248 */;
	struct rcu_torture_ops *cocci_id/* kernel/rcu/rcutorture.c 2347 */[];
	struct rcu_head cocci_id/* kernel/rcu/rcutorture.c 2305 */;
	struct rt_read_seg cocci_id/* kernel/rcu/rcutorture.c 200 */[RCUTORTURE_RDR_MAX_SEGS];
	struct rt_read_seg {
		int rt_readstate;
		unsigned long rt_delay_jiffies;
		unsigned long rt_delay_ms;
		unsigned long rt_delay_us;
		bool rt_preempted;
	} cocci_id/* kernel/rcu/rcutorture.c 192 */;
	struct rcu_fwd_cb cocci_id/* kernel/rcu/rcutorture.c 1712 */;
	struct rcu_launder_hist cocci_id/* kernel/rcu/rcutorture.c 1681 */[N_LAUNDERS_HIST];
	struct rcu_launder_hist {
		long n_launders;
		unsigned long launder_gp_seq;
	} cocci_id/* kernel/rcu/rcutorture.c 1676 */;
	struct rcu_fwd_cb **cocci_id/* kernel/rcu/rcutorture.c 1668 */;
	struct rcu_fwd_cb *cocci_id/* kernel/rcu/rcutorture.c 1667 */;
	struct rcu_fwd_cb {
		struct rcu_head rh;
		struct rcu_fwd_cb *rfc_next;
		int rfc_gps;
	} cocci_id/* kernel/rcu/rcutorture.c 1661 */;
	struct fwd_cb_state cocci_id/* kernel/rcu/rcutorture.c 1651 */;
	struct fwd_cb_state *cocci_id/* kernel/rcu/rcutorture.c 1651 */;
	struct fwd_cb_state {
		struct rcu_head rh;
		int stop;
	} cocci_id/* kernel/rcu/rcutorture.c 1639 */;
	atomic_t cocci_id/* kernel/rcu/rcutorture.c 150 */[RCU_TORTURE_PIPE_LEN + 1];
	struct rcu_torture cocci_id/* kernel/rcu/rcutorture.c 146 */[10 * RCU_TORTURE_PIPE_LEN];
	struct rcu_torture __rcu *cocci_id/* kernel/rcu/rcutorture.c 144 */;
	long cocci_id/* kernel/rcu/rcutorture.c 1405 */[RCU_TORTURE_PIPE_LEN + 1];
	struct timer_list cocci_id/* kernel/rcu/rcutorture.c 1361 */;
	struct rcu_torture {
		struct rcu_head rtort_rcu;
		int rtort_pipe_count;
		struct list_head rtort_free;
		int rtort_mbtest;
	} cocci_id/* kernel/rcu/rcutorture.c 136 */;
	struct task_struct *cocci_id/* kernel/rcu/rcutorture.c 128 */[NR_CPUS];
	struct rcu_perf_ops *cocci_id/* kernel/rcu/rcuperf.c 592 */[];
	rcu_callback_t cocci_id/* kernel/rcu/rcuperf.c 198 */;
	struct srcu_struct *cocci_id/* kernel/rcu/rcuperf.c 181 */;
	struct rcu_perf_ops cocci_id/* kernel/rcu/rcuperf.c 161 */;
	unsigned long __maybe_unused cocci_id/* kernel/rcu/rcuperf.c 152 */;
	struct rcu_perf_ops *cocci_id/* kernel/rcu/rcuperf.c 135 */;
	struct rcu_perf_ops {
		int ptype;
		void (*init)(void);
		void (*cleanup)(void);
		int (*readlock)(void);
		void (*readunlock)(int idx);
		unsigned long (*get_gp_seq)(void);
		unsigned long (*gp_diff)(unsigned long new, unsigned long old);
		unsigned long (*exp_completed)(void);
		void (*async)(struct rcu_head *head, rcu_callback_t func);
		void (*gp_barrier)(void);
		void (*sync)(void);
		void (*exp_sync)(void);
		const char *name;
	} cocci_id/* kernel/rcu/rcuperf.c 119 */;
	wait_queue_head_t cocci_id/* kernel/rcu/rcuperf.c 105 */;
	u64 **cocci_id/* kernel/rcu/rcuperf.c 100 */;
	struct rcu_cblist *cocci_id/* kernel/rcu/rcu_segcblist.c 76 */;
	struct rcu_cblist cocci_id/* kernel/rcu/rcu_segcblist.c 527 */;
	struct rcu_segcblist *cocci_id/* kernel/rcu/rcu_segcblist.c 466 */;
	struct range cocci_id/* kernel/range.c 155 */;
	const struct range *cocci_id/* kernel/range.c 115 */;
	struct range *cocci_id/* kernel/range.c 11 */;
	struct ptrace_syscall_info cocci_id/* kernel/ptrace.c 958 */;
	unsigned long cocci_id/* kernel/ptrace.c 907 */[ARRAY_SIZE(info->entry.args)];
	struct ptrace_syscall_info *cocci_id/* kernel/ptrace.c 905 */;
	const struct user_regset *cocci_id/* kernel/ptrace.c 878 */;
	const struct user_regset_view *cocci_id/* kernel/ptrace.c 877 */;
	struct iovec *cocci_id/* kernel/ptrace.c 875 */;
	siginfo_t cocci_id/* kernel/ptrace.c 768 */;
	siginfo_t __user *cocci_id/* kernel/ptrace.c 760 */;
	compat_siginfo_t __user *cocci_id/* kernel/ptrace.c 750 */;
	struct sigqueue *cocci_id/* kernel/ptrace.c 707 */;
	struct sigpending *cocci_id/* kernel/ptrace.c 706 */;
	struct ptrace_peeksiginfo_args cocci_id/* kernel/ptrace.c 705 */;
	const kernel_siginfo_t *cocci_id/* kernel/ptrace.c 685 */;
	kernel_siginfo_t *cocci_id/* kernel/ptrace.c 669 */;
	compat_size_t cocci_id/* kernel/ptrace.c 1358 */;
	struct compat_iovec __user *cocci_id/* kernel/ptrace.c 1355 */;
	struct iovec cocci_id/* kernel/ptrace.c 1354 */;
	struct compat_siginfo __user *cocci_id/* kernel/ptrace.c 1340 */;
	kernel_siginfo_t cocci_id/* kernel/ptrace.c 1311 */;
	struct iovec __user *cocci_id/* kernel/ptrace.c 1198 */;
	sigset_t cocci_id/* kernel/ptrace.c 1063 */;
	int cocci_id/* kernel/profile.c 503 */(unsigned int multiplier);
	struct profile_hit {
		u32 pc,hits;
	} cocci_id/* kernel/profile.c 35 */;
	struct profile_hit *cocci_id/* kernel/profile.c 289 */;
	struct profile_hit cocci_id/* kernel/profile.c 280 */;
	struct printk_safe_seq_buf {
		atomic_t len;
		atomic_t message_lost;
		struct irq_work work;
		unsigned char buffer[SAFE_LOG_BUF_LEN];
	} cocci_id/* kernel/printk/printk_safe.c 37 */;
	struct irq_work cocci_id/* kernel/printk/printk_safe.c 35 */;
	struct printk_safe_seq_buf cocci_id/* kernel/printk/printk_safe.c 185 */;
	struct printk_safe_seq_buf *cocci_id/* kernel/printk/printk_safe.c 184 */;
	struct devkmsg_user *cocci_id/* kernel/printk/printk.c 936 */;
	struct kiocb *cocci_id/* kernel/printk/printk.c 805 */;
	struct iov_iter *cocci_id/* kernel/printk/printk.c 805 */;
	struct devkmsg_user {
		u64 seq;
		u32 idx;
		struct ratelimit_state rs;
		struct mutex lock;
		char buf[CONSOLE_EXT_LOG_MAX];
	} cocci_id/* kernel/printk/printk.c 784 */;
	char cocci_id/* kernel/printk/printk.c 718 */[20];
	struct printk_log cocci_id/* kernel/printk/printk.c 484 */;
	const struct printk_log *cocci_id/* kernel/printk/printk.c 482 */;
	char cocci_id/* kernel/printk/printk.c 459 */[__LOG_BUF_LEN]__aligned(LOG_ALIGN);
	struct printk_log {
		u64 ts_nsec;
		u16 len;
		u16 text_len;
		u16 dict_len;
		u8 facility;
		u8 flags:5;
		u8 level:3;

#ifdef CONFIG_PRINTK_CALLER

		u32 caller_id;

#endif

	}

#ifdef CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS

__packed __aligned(4)

#endif
 cocci_id/* kernel/printk/printk.c 368 */;
	enum log_flags{LOG_NEWLINE=2, LOG_CONT=8,} cocci_id/* kernel/printk/printk.c 363 */;
	struct kmsg_dumper *cocci_id/* kernel/printk/printk.c 3114 */;
	enum kmsg_dump_reason cocci_id/* kernel/printk/printk.c 3112 */;
	enum con_msg_format_flags{MSG_FORMAT_DEFAULT=0, MSG_FORMAT_SYSLOG=(1 << 0),} cocci_id/* kernel/printk/printk.c 289 */;
	initcall_entry_t *cocci_id/* kernel/printk/printk.c 2870 */;
	initcall_t cocci_id/* kernel/printk/printk.c 2869 */;
	struct console_cmdline cocci_id/* kernel/printk/printk.c 280 */[MAX_CMDLINECONSOLES];
	struct tty_driver *cocci_id/* kernel/printk/printk.c 2579 */;
	enum con_flush_mode cocci_id/* kernel/printk/printk.c 2553 */;
	struct printk_log *cocci_id/* kernel/printk/printk.c 2409 */;
	char cocci_id/* kernel/printk/printk.c 2370 */[LOG_LINE_MAX + PREFIX_MAX];
	char cocci_id/* kernel/printk/printk.c 2369 */[CONSOLE_EXT_LOG_MAX];
	char cocci_id/* kernel/printk/printk.c 2164 */[sizeof(console_cmdline[0].name) + 4];
	char cocci_id/* kernel/printk/printk.c 2103 */[512];
	char cocci_id/* kernel/printk/printk.c 1908 */[LOG_LINE_MAX];
	enum log_flags cocci_id/* kernel/printk/printk.c 1842 */;
	struct cont {
		char buf[LOG_LINE_MAX];
		size_t len;
		u32 caller_id;
		u64 ts_nsec;
		u8 level;
		u8 facility;
		enum log_flags flags;
	} cocci_id/* kernel/printk/printk.c 1821 */;
	char cocci_id/* kernel/printk/printk.c 173 */[DEVKMSG_STR_MAX_SIZE];
	const size_t cocci_id/* kernel/printk/printk.c 1316 */;
	char cocci_id/* kernel/printk/printk.c 1315 */[PREFIX_MAX];
	char cocci_id/* kernel/printk/printk.c 1278 */[12];
	bool __read_mostly cocci_id/* kernel/printk/printk.c 1184 */;
	unsigned long __initdata cocci_id/* kernel/printk/printk.c 1084 */;
	enum devkmsg_log_masks{DEVKMSG_LOG_MASK_ON=BIT(__DEVKMSG_LOG_BIT_ON), DEVKMSG_LOG_MASK_OFF=BIT(__DEVKMSG_LOG_BIT_OFF), DEVKMSG_LOG_MASK_LOCK=BIT(__DEVKMSG_LOG_BIT_LOCK),} cocci_id/* kernel/printk/printk.c 108 */;
	enum devkmsg_log_bits{__DEVKMSG_LOG_BIT_ON=0, __DEVKMSG_LOG_BIT_OFF, __DEVKMSG_LOG_BIT_LOCK,} cocci_id/* kernel/printk/printk.c 102 */;
	struct devkmsg_user cocci_id/* kernel/printk/printk.c 1011 */;
	struct console_cmdline *cocci_id/* kernel/printk/braille.c 38 */;
	struct wakelock cocci_id/* kernel/power/wakelock.c 48 */;
	struct wakelock {
		char *name;
		struct rb_node node;
		struct wakeup_source *ws;
#ifdef CONFIG_PM_WAKELOCKS_GC
		struct list_head lru;
#endif
	} cocci_id/* kernel/power/wakelock.c 27 */;
	struct wakelock *cocci_id/* kernel/power/wakelock.c 105 */;
	struct miscdevice cocci_id/* kernel/power/user.c 469 */;
	struct resume_swap_area cocci_id/* kernel/power/user.c 434 */;
	struct compat_resume_swap_area __user *cocci_id/* kernel/power/user.c 432 */;
	compat_loff_t __user *cocci_id/* kernel/power/user.c 413 */;
	compat_loff_t cocci_id/* kernel/power/user.c 407 */;
	struct compat_resume_swap_area {
		compat_loff_t offset;
		u32 dev;
	}__packed cocci_id/* kernel/power/user.c 399 */;
	struct snapshot_data {
		struct snapshot_handle handle;
		int swap;
		int mode;
		bool frozen;
		bool ready;
		bool platform_support;
		bool free_bitmaps;
	} cocci_id/* kernel/power/user.c 32 */;
	loff_t __user *cocci_id/* kernel/power/user.c 302 */;
	struct snapshot_data *cocci_id/* kernel/power/user.c 205 */;
	struct swap_map_page *cocci_id/* kernel/power/swap.c 988 */;
	struct swap_map_page_list *cocci_id/* kernel/power/swap.c 965 */;
	struct swap_map_handle {
		struct swap_map_page *cur;
		struct swap_map_page_list *maps;
		sector_t cur_swap;
		sector_t first_sector;
		unsigned int k;
		unsigned long reqd_free_pages;
		u32 crc32;
	} cocci_id/* kernel/power/swap.c 95 */;
	struct swap_map_page_list {
		struct swap_map_page *map;
		struct swap_map_page_list *next;
	} cocci_id/* kernel/power/swap.c 85 */;
	struct swap_map_page {
		sector_t entries[MAP_PAGE_ENTRIES];
		sector_t next_swap;
	} cocci_id/* kernel/power/swap.c 80 */;
	struct cmp_data cocci_id/* kernel/power/swap.c 706 */;
	struct cmp_data *cocci_id/* kernel/power/swap.c 637 */;
	struct cmp_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		int ret;
		wait_queue_head_t go;
		wait_queue_head_t done;
		size_t unc_len;
		size_t cmp_len;
		unsigned char unc[LZO_UNC_SIZE];
		unsigned char cmp[LZO_CMP_SIZE];
		unsigned char wrk[LZO1X_1_MEM_COMPRESS];
	} cocci_id/* kernel/power/swap.c 618 */;
	struct crc_data *cocci_id/* kernel/power/swap.c 593 */;
	struct crc_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		unsigned run_threads;
		wait_queue_head_t go;
		wait_queue_head_t done;
		u32 *crc32;
		size_t *unc_len[LZO_THREADS];
		unsigned char *unc[LZO_THREADS];
	} cocci_id/* kernel/power/swap.c 576 */;
	struct swap_map_handle *cocci_id/* kernel/power/swap.c 480 */;
	blk_status_t cocci_id/* kernel/power/swap.c 295 */;
	struct hib_bio_batch *cocci_id/* kernel/power/swap.c 240 */;
	struct bio *cocci_id/* kernel/power/swap.c 238 */;
	struct hib_bio_batch {
		atomic_t count;
		wait_queue_head_t wait;
		blk_status_t error;
	} cocci_id/* kernel/power/swap.c 225 */;
	struct block_device *cocci_id/* kernel/power/swap.c 223 */;
	struct swsusp_extent cocci_id/* kernel/power/swap.c 204 */;
	struct swsusp_extent *cocci_id/* kernel/power/swap.c 201 */;
	struct snapshot_handle cocci_id/* kernel/power/swap.c 1478 */;
	struct swap_map_handle cocci_id/* kernel/power/swap.c 1477 */;
	struct swsusp_extent {
		struct rb_node node;
		unsigned long start;
		unsigned long end;
	} cocci_id/* kernel/power/swap.c 122 */;
	struct crc_data cocci_id/* kernel/power/swap.c 1205 */;
	struct dec_data cocci_id/* kernel/power/swap.c 1197 */;
	struct dec_data *cocci_id/* kernel/power/swap.c 1171 */;
	unsigned char **cocci_id/* kernel/power/swap.c 1170 */;
	struct swsusp_header *cocci_id/* kernel/power/swap.c 115 */;
	struct dec_data {
		struct task_struct *thr;
		atomic_t ready;
		atomic_t stop;
		int ret;
		wait_queue_head_t go;
		wait_queue_head_t done;
		size_t unc_len;
		size_t cmp_len;
		unsigned char unc[LZO_UNC_SIZE];
		unsigned char cmp[LZO_CMP_SIZE];
	} cocci_id/* kernel/power/swap.c 1103 */;
	struct hib_bio_batch cocci_id/* kernel/power/swap.c 1057 */;
	struct swsusp_header {
		char reserved[PAGE_SIZE - 20 - sizeof(sector_t) - sizeof(int) - sizeof(u32)];
		u32 crc32;
		sector_t image;
		unsigned int flags;
		char orig_sig[10];
		char sig[10];
	}__packed cocci_id/* kernel/power/swap.c 105 */;
	struct rtc_wkalrm cocci_id/* kernel/power/suspend_test.c 74 */;
	char cocci_id/* kernel/power/suspend_test.c 181 */[]__initdata;
	struct rtc_device *cocci_id/* kernel/power/suspend_test.c 130 */;
	enum s2idle_states __read_mostly cocci_id/* kernel/power/suspend.c 61 */;
	const struct platform_s2idle_ops *cocci_id/* kernel/power/suspend.c 58 */;
	const struct platform_suspend_ops *cocci_id/* kernel/power/suspend.c 57 */;
	const char *cocci_id/* kernel/power/suspend.c 47 */[PM_SUSPEND_MAX];
	struct nosave_region cocci_id/* kernel/power/snapshot.c 959 */;
	struct nosave_region *cocci_id/* kernel/power/snapshot.c 951 */;
	struct nosave_region {
		struct list_head list;
		unsigned long start_pfn;
		unsigned long end_pfn;
	} cocci_id/* kernel/power/snapshot.c 906 */;
	void cocci_id/* kernel/power/snapshot.c 81 */(struct page *);
	int cocci_id/* kernel/power/snapshot.c 80 */(struct page *);
	struct chain_allocator cocci_id/* kernel/power/snapshot.c 646 */;
	struct mem_extent cocci_id/* kernel/power/snapshot.c 608 */;
	struct mem_extent *cocci_id/* kernel/power/snapshot.c 595 */;
	struct mem_extent {
		struct list_head hook;
		unsigned long start;
		unsigned long end;
	} cocci_id/* kernel/power/snapshot.c 560 */;
	void cocci_id/* kernel/power/snapshot.c 558 */(struct memory_bitmap *bm,
						       int clear_nosave_free);
	struct mem_zone_bm_rtree cocci_id/* kernel/power/snapshot.c 509 */;
	void cocci_id/* kernel/power/snapshot.c 488 */(struct mem_zone_bm_rtree *zone,
						       int clear_nosave_free);
	struct rtree_node **cocci_id/* kernel/power/snapshot.c 478 */;
	struct rtree_node *cocci_id/* kernel/power/snapshot.c 431 */;
	struct chain_allocator *cocci_id/* kernel/power/snapshot.c 429 */;
	struct mem_zone_bm_rtree *cocci_id/* kernel/power/snapshot.c 428 */;
	struct rtree_node cocci_id/* kernel/power/snapshot.c 408 */;
	struct memory_bitmap {
		struct list_head zones;
		struct linked_page *p_list;
		struct bm_position cur;
	} cocci_id/* kernel/power/snapshot.c 377 */;
	struct bm_position {
		struct mem_zone_bm_rtree *zone;
		struct rtree_node *node;
		unsigned long node_pfn;
		int node_bit;
	} cocci_id/* kernel/power/snapshot.c 370 */;
	struct mem_zone_bm_rtree {
		struct list_head list;
		struct list_head nodes;
		struct list_head leaves;
		unsigned long start_pfn;
		unsigned long end_pfn;
		struct rtree_node *rtree;
		int levels;
		unsigned int blocks;
	} cocci_id/* kernel/power/snapshot.c 357 */;
	struct rtree_node {
		struct list_head list;
		unsigned long *data;
	} cocci_id/* kernel/power/snapshot.c 348 */;
	struct linked_page *cocci_id/* kernel/power/snapshot.c 280 */;
	struct snapshot_handle *cocci_id/* kernel/power/snapshot.c 2683 */;
	struct chain_allocator {
		struct linked_page *chain;
		unsigned int used_space;
		gfp_t gfp_mask;
		int safe_needed;
	} cocci_id/* kernel/power/snapshot.c 258 */;
	struct pbe cocci_id/* kernel/power/snapshot.c 2562 */;
	struct pbe *cocci_id/* kernel/power/snapshot.c 2540 */;
	struct highmem_pbe cocci_id/* kernel/power/snapshot.c 2370 */;
	struct highmem_pbe *cocci_id/* kernel/power/snapshot.c 2355 */;
	struct highmem_pbe {
		struct page *copy_page;
		struct page *orig_page;
		struct highmem_pbe *next;
	} cocci_id/* kernel/power/snapshot.c 2243 */;
	struct swsusp_info *cocci_id/* kernel/power/snapshot.c 2179 */;
	struct swsusp_info cocci_id/* kernel/power/snapshot.c 2049 */;
	struct new_utsname cocci_id/* kernel/power/snapshot.c 2021 */;
	struct memory_bitmap *cocci_id/* kernel/power/snapshot.c 1910 */;
	struct memory_bitmap cocci_id/* kernel/power/snapshot.c 1457 */;
	struct zone *cocci_id/* kernel/power/snapshot.c 1413 */;
	struct linked_page {
		struct linked_page *next;
		char data[LINKED_PAGE_DATA_SIZE];
	}__packed cocci_id/* kernel/power/snapshot.c 121 */;
	int cocci_id/* kernel/power/qos.c 90 */(struct inode *inode,
						struct file *filp);
	ssize_t cocci_id/* kernel/power/qos.c 88 */(struct file *filp,
						    char __user *buf,
						    size_t count,
						    loff_t *f_pos);
	ssize_t cocci_id/* kernel/power/qos.c 86 */(struct file *filp,
						    const char __user *buf,
						    size_t count,
						    loff_t *f_pos);
	enum freq_qos_req_type cocci_id/* kernel/power/qos.c 843 */;
	struct pm_qos_object *cocci_id/* kernel/power/qos.c 81 */[];
	struct pm_qos_object cocci_id/* kernel/power/qos.c 76 */;
	struct freq_qos_request *cocci_id/* kernel/power/qos.c 756 */;
	enum pm_qos_req_action cocci_id/* kernel/power/qos.c 721 */;
	struct pm_qos_constraints cocci_id/* kernel/power/qos.c 68 */;
	struct pm_qos_constraints *cocci_id/* kernel/power/qos.c 662 */;
	struct freq_constraints *cocci_id/* kernel/power/qos.c 660 */;
	struct pm_qos_object {
		struct pm_qos_constraints *constraints;
		struct miscdevice pm_qos_power_miscdev;
		char *name;
	} cocci_id/* kernel/power/qos.c 57 */;
	struct pm_qos_request cocci_id/* kernel/power/qos.c 370 */;
	struct pm_qos_request *cocci_id/* kernel/power/qos.c 350 */;
	struct pm_qos_flags_request *cocci_id/* kernel/power/qos.c 273 */;
	struct pm_qos_flags *cocci_id/* kernel/power/qos.c 272 */;
	struct pm_qos_object *cocci_id/* kernel/power/qos.c 142 */;
	struct plist_node *cocci_id/* kernel/power/qos.c 104 */;
	struct va_format cocci_id/* kernel/power/main.c 516 */;
	enum suspend_stat_step cocci_id/* kernel/power/main.c 329 */;
	const char *const*cocci_id/* kernel/power/main.c 231 */;
	const char *constcocci_id/* kernel/power/main.c 198 */[__TEST_AFTER_LAST];
	const struct platform_hibernation_ops *cocci_id/* kernel/power/hibernate.c 68 */;
	enum{HIBERNATION_INVALID, HIBERNATION_PLATFORM, HIBERNATION_SHUTDOWN, HIBERNATION_REBOOT,

#ifdef CONFIG_SUSPEND
 HIBERNATION_SUSPEND,

#endif
 HIBERNATION_TEST_RESUME, __HIBERNATION_AFTER_LAST,} cocci_id/* kernel/power/hibernate.c 49 */;
	sector_t cocci_id/* kernel/power/hibernate.c 46 */;
	pm_message_t cocci_id/* kernel/power/hibernate.c 353 */;
	struct em_cap_state *cocci_id/* kernel/power/energy_model.c 87 */;
	struct em_data_callback *cocci_id/* kernel/power/energy_model.c 82 */;
	cpumask_t *cocci_id/* kernel/power/energy_model.c 81 */;
	char cocci_id/* kernel/power/energy_model.c 33 */[24];
	struct em_perf_domain *cocci_id/* kernel/power/energy_model.c 179 */;
	struct pm_vt_switch {
		struct list_head head;
		struct device *dev;
		bool required;
	} cocci_id/* kernel/power/console.c 22 */;
	struct pm_vt_switch *cocci_id/* kernel/power/console.c 109 */;
	struct wakeup_source *cocci_id/* kernel/power/autosleep.c 25 */;
	suspend_state_t cocci_id/* kernel/power/autosleep.c 16 */;
	struct upid cocci_id/* kernel/pid_namespace.c 50 */;
	char cocci_id/* kernel/pid_namespace.c 42 */[4 + 10 + 1];
	struct kmem_cache **cocci_id/* kernel/pid_namespace.c 40 */;
	struct ctl_path cocci_id/* kernel/pid_namespace.c 303 */[];
	struct kmem_cache *cocci_id/* kernel/pid_namespace.c 30 */[MAX_PID_NS_LEVEL];
	struct ctl_table cocci_id/* kernel/pid_namespace.c 292 */[];
	struct kref *cocci_id/* kernel/pid_namespace.c 158 */;
	struct pid_namespace cocci_id/* kernel/pid.c 73 */;
	struct pid **cocci_id/* kernel/pid.c 334 */;
	struct upid *cocci_id/* kernel/pid.c 132 */;
	struct pid cocci_id/* kernel/pid.c 120 */;
	struct kset *cocci_id/* kernel/params.c 925 */;
	const struct kset_uevent_ops cocci_id/* kernel/params.c 921 */;
	struct kobj_type *cocci_id/* kernel/params.c 914 */;
	const struct module_version_attribute *cocci_id/* kernel/params.c 855 */;
	const struct module_version_attribute **cocci_id/* kernel/params.c 850 */;
	const struct module_version_attribute *cocci_id/* kernel/params.c 845 */[];
	struct module_version_attribute cocci_id/* kernel/params.c 840 */;
	struct module_version_attribute *cocci_id/* kernel/params.c 839 */;
	struct module_kobject cocci_id/* kernel/params.c 752 */;
	struct module_kobject *__initcocci_id/* kernel/params.c 742 */;
	struct module_param_attrs *cocci_id/* kernel/params.c 610 */;
	struct param_attribute *cocci_id/* kernel/params.c 542 */;
	struct param_attribute cocci_id/* kernel/params.c 536 */;
	struct module_param_attrs {
		unsigned int num;
		struct attribute_group grp;
		struct param_attribute attrs[0];
	} cocci_id/* kernel/params.c 528 */;
	struct param_attribute {
		struct module_attribute mattr;
		const struct kernel_param *param;
	} cocci_id/* kernel/params.c 522 */;
	const struct kparam_string *cocci_id/* kernel/params.c 507 */;
	struct kmalloced_param *cocci_id/* kernel/params.c 48 */;
	const struct kparam_array *cocci_id/* kernel/params.c 477 */;
	struct kernel_param cocci_id/* kernel/params.c 404 */;
	int (*cocci_id/* kernel/params.c 399 */)(const char *,
						 const struct kernel_param *kp);
	struct kmalloced_param {
		struct list_head list;
		char val[];
	} cocci_id/* kernel/params.c 39 */;
	uint cocci_id/* kernel/params.c 240 */;
	unsigned short cocci_id/* kernel/params.c 238 */;
	int (*cocci_id/* kernel/params.c 168 */)(char *param, char *val,
						 const char *doing, void *arg);
	long (*cocci_id/* kernel/panic.c 69 */)(int state);
	struct warn_args cocci_id/* kernel/panic.c 604 */;
	struct warn_args *cocci_id/* kernel/panic.c 559 */;
	struct warn_args {
		const char *fmt;
		va_list args;
	} cocci_id/* kernel/panic.c 553 */;
	const struct taint_flag *cocci_id/* kernel/panic.c 401 */;
	char cocci_id/* kernel/panic.c 391 */[TAINT_FLAGS_COUNT + sizeof("Tainted: ")];
	const struct taint_flag cocci_id/* kernel/panic.c 360 */[TAINT_FLAGS_COUNT];
	char cocci_id/* kernel/panic.c 169 */[1024];
	struct padata_instance cocci_id/* kernel/padata.c 970 */;
	const struct sysfs_ops cocci_id/* kernel/padata.c 944 */;
	struct padata_sysfs_entry *cocci_id/* kernel/padata.c 918 */;
	struct attribute *cocci_id/* kernel/padata.c 915 */;
	struct padata_sysfs_entry {
		struct attribute attr;
		ssize_t (*show)(struct padata_instance *, struct attribute *,
				char *);
		ssize_t (*store)(struct padata_instance *, struct attribute *,
				 const char *, size_t);
	} cocci_id/* kernel/padata.c 840 */;
	struct padata_sysfs_entry cocci_id/* kernel/padata.c 832 */;
	struct parallel_data *cocci_id/* kernel/padata.c 698 */;
	struct padata_instance *cocci_id/* kernel/padata.c 696 */;
	struct padata_serial_queue *cocci_id/* kernel/padata.c 474 */;
	struct padata_serial_queue cocci_id/* kernel/padata.c 431 */;
	struct padata_parallel_queue cocci_id/* kernel/padata.c 427 */;
	struct padata_list *cocci_id/* kernel/padata.c 380 */;
	struct workqueue_attrs *cocci_id/* kernel/padata.c 348 */;
	struct parallel_data cocci_id/* kernel/padata.c 276 */;
	struct padata_priv cocci_id/* kernel/padata.c 189 */;
	struct padata_parallel_queue *cocci_id/* kernel/padata.c 105 */;
	struct padata_priv *cocci_id/* kernel/padata.c 102 */;
	struct nsproxy cocci_id/* kernel/nsproxy.c 29 */;
	struct nsproxy **cocci_id/* kernel/nsproxy.c 189 */;
	struct notifier_block **cocci_id/* kernel/notifier.c 64 */;
	struct die_args cocci_id/* kernel/notifier.c 506 */;
	enum die_val cocci_id/* kernel/notifier.c 503 */;
	struct srcu_notifier_head *cocci_id/* kernel/notifier.c 457 */;
	struct raw_notifier_head *cocci_id/* kernel/notifier.c 357 */;
	struct blocking_notifier_head *cocci_id/* kernel/notifier.c 271 */;
	struct atomic_notifier_head *cocci_id/* kernel/notifier.c 166 */;
	struct module_signature cocci_id/* kernel/module_signing.c 22 */;
	const struct module_signature *cocci_id/* kernel/module_signature.c 21 */;
	void cocci_id/* kernel/module.c 965 */(struct module *mod);
	struct llist_head cocci_id/* kernel/module.c 92 */;
	struct work_struct cocci_id/* kernel/module.c 91 */;
	char cocci_id/* kernel/module.c 800 */[MODULE_NAME_LEN + 1];
	struct find_symbol_arg cocci_id/* kernel/module.c 589 */;
	const s32 **cocci_id/* kernel/module.c 585 */;
	struct kernel_symbol cocci_id/* kernel/module.c 572 */;
	struct kernel_symbol *cocci_id/* kernel/module.c 569 */;
	struct find_symbol_arg *cocci_id/* kernel/module.c 500 */;
	const struct symsearch *cocci_id/* kernel/module.c 496 */;
	struct find_symbol_arg {
		const char *name;
		bool gplok;
		bool warn;
		struct module *owner;
		const s32 *crc;
		const struct kernel_symbol *sym;
	} cocci_id/* kernel/module.c 484 */;
	struct tracepoint *const*cocci_id/* kernel/module.c 4548 */;
	struct symsearch cocci_id/* kernel/module.c 452 */[];
	char cocci_id/* kernel/module.c 4337 */[MODULE_FLAGS_BUF_SIZE];
	const struct symsearch cocci_id/* kernel/module.c 427 */[];
	bool (*cocci_id/* kernel/module.c 421 */)(const struct symsearch *arr,
						  struct module *owner,
						  void *data);
	struct mod_kallsyms *cocci_id/* kernel/module.c 4056 */;
	bool (*cocci_id/* kernel/module.c 405 */)(const struct symsearch *syms,
						  struct module *owner,
						  void *data);
	struct load_info cocci_id/* kernel/module.c 3997 */;
	const s32 cocci_id/* kernel/module.c 384 */[];
	const struct kernel_symbol cocci_id/* kernel/module.c 378 */[];
	struct mod_initfree cocci_id/* kernel/module.c 3537 */;
	struct mod_initfree *cocci_id/* kernel/module.c 3530 */;
	struct mod_initfree {
		struct llist_node node;
		void *module_init;
	} cocci_id/* kernel/module.c 3522 */;
	Elf_Ehdr *cocci_id/* kernel/module.c 3375 */;
	const struct module *cocci_id/* kernel/module.c 3352 */;
	enum lockdep_ok cocci_id/* kernel/module.c 325 */;
	struct load_info *cocci_id/* kernel/module.c 3104 */;
	struct module cocci_id/* kernel/module.c 2821 */;
	struct _ddebug *cocci_id/* kernel/module.c 2798 */;
	const struct load_info *cocci_id/* kernel/module.c 2741 */;
	struct mod_kallsyms cocci_id/* kernel/module.c 2728 */;
	struct module_attribute *cocci_id/* kernel/module.c 2580 */;
	const unsigned long cocci_id/* kernel/module.c 2417 */[][2];
	unsigned int __weak cocci_id/* kernel/module.c 2392 */;
	struct {
		const struct kernel_symbol *sym;
		unsigned int num;
	} cocci_id/* kernel/module.c 2262 */[];
	symbol cocci_id/* kernel/module.c 2242 */;
	const struct kernel_symbol *cocci_id/* kernel/module.c 2239 */;
	struct mod_tree_node cocci_id/* kernel/module.c 202 */;
	int (*cocci_id/* kernel/module.c 1976 */)(unsigned long start,
						  int num_pages);
	const struct module_layout *cocci_id/* kernel/module.c 1975 */;
	struct kernel_param *cocci_id/* kernel/module.c 1848 */;
	void cocci_id/* kernel/module.c 1751 */(struct module *mod, int end);
	struct module_notes_attrs *cocci_id/* kernel/module.c 1637 */;
	struct module_notes_attrs {
		struct kobject *dir;
		unsigned int notes;
		struct bin_attribute attrs[0];
	} cocci_id/* kernel/module.c 1605 */;
	struct mod_tree_node *cocci_id/* kernel/module.c 158 */;
	struct attribute **cocci_id/* kernel/module.c 1541 */;
	struct module_sect_attr *cocci_id/* kernel/module.c 1540 */;
	struct module_sect_attrs *cocci_id/* kernel/module.c 1539 */;
	struct module_sect_attr cocci_id/* kernel/module.c 1522 */;
	struct module_kobject *cocci_id/* kernel/module.c 1519 */;
	struct module_sect_attrs {
		struct attribute_group grp;
		unsigned int nsections;
		struct module_sect_attr attrs[0];
	} cocci_id/* kernel/module.c 1512 */;
	struct module_sect_attr {
		struct module_attribute mattr;
		char *name;
		unsigned long address;
	} cocci_id/* kernel/module.c 1506 */;
	struct mod_tree_root {
		struct latch_tree_root root;
		unsigned long addr_min;
		unsigned long addr_max;
	} cocci_id/* kernel/module.c 147 */;
	char *cocci_id/* kernel/module.c 1394 */(const struct load_info *info,
						 const char *tag, char *prev);
	char *cocci_id/* kernel/module.c 1393 */(const struct load_info *info,
						 const char *tag);
	const s32 *cocci_id/* kernel/module.c 1346 */;
	struct modversion_info cocci_id/* kernel/module.c 1314 */;
	struct modversion_info *cocci_id/* kernel/module.c 1302 */;
	struct module_attribute *cocci_id/* kernel/module.c 1259 */[];
	struct module_attribute cocci_id/* kernel/module.c 1234 */;
	struct module_layout cocci_id/* kernel/module.c 114 */;
	struct module_layout *cocci_id/* kernel/module.c 114 */;
	void (*cocci_id/* kernel/locking/test-ww_mutex.c 538 */)(struct work_struct *work);
	struct test_mutex cocci_id/* kernel/locking/test-ww_mutex.c 51 */;
	struct reorder_lock *cocci_id/* kernel/locking/test-ww_mutex.c 442 */;
	struct reorder_lock {
		struct list_head link;
		struct ww_mutex *lock;
	} cocci_id/* kernel/locking/test-ww_mutex.c 432 */;
	typeof(*stress) cocci_id/* kernel/locking/test-ww_mutex.c 380 */;
	struct stress *cocci_id/* kernel/locking/test-ww_mutex.c 373 */;
	struct stress {
		struct work_struct work;
		struct ww_mutex *locks;
		unsigned long timeout;
		int nlocks;
	} cocci_id/* kernel/locking/test-ww_mutex.c 342 */;
	typeof(*mtx) cocci_id/* kernel/locking/test-ww_mutex.c 33 */;
	struct test_mutex *cocci_id/* kernel/locking/test-ww_mutex.c 33 */;
	struct test_cycle *cocci_id/* kernel/locking/test-ww_mutex.c 277 */;
	typeof(*cycle) cocci_id/* kernel/locking/test-ww_mutex.c 248 */;
	struct test_cycle {
		struct work_struct work;
		struct ww_mutex a_mutex;
		struct ww_mutex *b_mutex;
		struct completion *a_signal;
		struct completion b_signal;
		int result;
	} cocci_id/* kernel/locking/test-ww_mutex.c 237 */;
	struct test_mutex {
		struct work_struct work;
		struct ww_mutex mutex;
		struct completion ready,go,done;
		unsigned int flags;
	} cocci_id/* kernel/locking/test-ww_mutex.c 19 */;
	struct test_abba cocci_id/* kernel/locking/test-ww_mutex.c 186 */;
	typeof(*abba) cocci_id/* kernel/locking/test-ww_mutex.c 159 */;
	struct test_abba *cocci_id/* kernel/locking/test-ww_mutex.c 159 */;
	struct test_abba {
		struct work_struct work;
		struct ww_mutex a_mutex;
		struct ww_mutex b_mutex;
		struct completion a_ready;
		struct completion b_ready;
		bool resolve;
		int result;
	} cocci_id/* kernel/locking/test-ww_mutex.c 147 */;
	arch_rwlock_t cocci_id/* kernel/locking/spinlock_debug.c 44 */;
	unsigned long __lockfunc cocci_id/* kernel/locking/spinlock.c 229 */;
	rwlock_t *cocci_id/* kernel/locking/spinlock.c 221 */;
	void __lockfunc cocci_id/* kernel/locking/spinlock.c 221 */;
	int __lockfunc cocci_id/* kernel/locking/spinlock.c 213 */;
	int cocci_id/* kernel/locking/semaphore.c 39 */(struct semaphore *sem,
							long timeout);
	int cocci_id/* kernel/locking/semaphore.c 37 */(struct semaphore *sem);
	void cocci_id/* kernel/locking/semaphore.c 36 */(struct semaphore *sem);
	struct semaphore_waiter *cocci_id/* kernel/locking/semaphore.c 257 */;
	struct semaphore *cocci_id/* kernel/locking/semaphore.c 235 */;
	struct semaphore_waiter cocci_id/* kernel/locking/semaphore.c 207 */;
	struct semaphore_waiter {
		struct list_head list;
		struct task_struct *task;
		bool up;
	} cocci_id/* kernel/locking/semaphore.c 193 */;
	struct rwsem_waiter cocci_id/* kernel/locking/rwsem.c 998 */;
	struct rw_semaphore __sched *cocci_id/* kernel/locking/rwsem.c 994 */;
	enum owner_state cocci_id/* kernel/locking/rwsem.c 810 */;
	enum owner_state{OWNER_NULL=1 << 0, OWNER_WRITER=1 << 1, OWNER_READER=1 << 2, OWNER_NONSPINNABLE=1 << 3,} cocci_id/* kernel/locking/rwsem.c 697 */;
	struct rwsem_waiter *cocci_id/* kernel/locking/rwsem.c 405 */;
	enum rwsem_wake_type cocci_id/* kernel/locking/rwsem.c 402 */;
	enum writer_wait_state{WRITER_NOT_FIRST, WRITER_FIRST, WRITER_HANDOFF,} cocci_id/* kernel/locking/rwsem.c 368 */;
	enum rwsem_wake_type{RWSEM_WAKE_ANY, RWSEM_WAKE_READERS, RWSEM_WAKE_READ_OWNED,} cocci_id/* kernel/locking/rwsem.c 362 */;
	struct rwsem_waiter {
		struct list_head list;
		struct task_struct *task;
		enum rwsem_waiter_type type;
		unsigned long timeout;
		unsigned long last_rowner;
	} cocci_id/* kernel/locking/rwsem.c 352 */;
	enum rwsem_waiter_type{RWSEM_WAITING_FOR_WRITE, RWSEM_WAITING_FOR_READ,} cocci_id/* kernel/locking/rwsem.c 347 */;
	struct rw_semaphore *cocci_id/* kernel/locking/rwsem.c 1341 */;
	enum writer_wait_state cocci_id/* kernel/locking/rwsem.c 1143 */;
	bool __sched cocci_id/* kernel/locking/rtmutex.c 1612 */;
	bool (*cocci_id/* kernel/locking/rtmutex.c 1455 */)(struct rt_mutex *lock,
							    struct wake_q_head *wqh);
	int (*cocci_id/* kernel/locking/rtmutex.c 1434 */)(struct rt_mutex *lock);
	int (*cocci_id/* kernel/locking/rtmutex.c 1407 */)(struct rt_mutex *lock,
							   int state,
							   struct hrtimer_sleeper *timeout,
							   enum rtmutex_chainwalk chwalk);
	struct rt_mutex_waiter *cocci_id/* kernel/locking/rtmutex-debug.c 72 */;
	enum rtmutex_chainwalk cocci_id/* kernel/locking/rtmutex-debug.c 71 */;
	struct qnode {
		struct mcs_spinlock mcs;
#ifdef CONFIG_PARAVIRT_SPINLOCKS
		long reserved[2];
#endif
	} cocci_id/* kernel/locking/qspinlock.c 80 */;
	struct qspinlock *cocci_id/* kernel/locking/qspinlock.c 274 */;
	struct mcs_spinlock *cocci_id/* kernel/locking/qspinlock.c 271 */;
	struct qnode *cocci_id/* kernel/locking/qspinlock.c 135 */;
	struct qnode cocci_id/* kernel/locking/qspinlock.c 107 */;
	struct qrwlock *cocci_id/* kernel/locking/qrwlock.c 21 */;
	struct percpu_rw_semaphore *cocci_id/* kernel/locking/percpu-rwsem.c 44 */;
	typeof(var) cocci_id/* kernel/locking/percpu-rwsem.c 114 */;
	struct optimistic_spin_queue *cocci_id/* kernel/locking/osq_lock.c 90 */;
	struct optimistic_spin_node *cocci_id/* kernel/locking/osq_lock.c 30 */;
	struct optimistic_spin_node cocci_id/* kernel/locking/osq_lock.c 14 */;
	struct ww_mutex cocci_id/* kernel/locking/mutex.c 941 */;
	struct ww_mutex *cocci_id/* kernel/locking/mutex.c 932 */;
	struct mutex_waiter cocci_id/* kernel/locking/mutex.c 930 */;
	struct ww_acquire_ctx *cocci_id/* kernel/locking/mutex.c 928 */;
	enum mutex_trylock_recursive_enum cocci_id/* kernel/locking/mutex.c 89 */;
	void __sched cocci_id/* kernel/locking/mutex.c 721 */(struct mutex *lock,
							      unsigned long ip);
	signed long cocci_id/* kernel/locking/mutex.c 355 */;
	bool __sched cocci_id/* kernel/locking/mutex.c 351 */;
	void __sched cocci_id/* kernel/locking/mutex.c 256 */(struct mutex *lock);
	int __sched cocci_id/* kernel/locking/mutex.c 1306 */;
	int __sched cocci_id/* kernel/locking/mutex.c 1291 */(struct mutex *lock);
	void __sched cocci_id/* kernel/locking/mutex.c 1222 */;
	int __sched cocci_id/* kernel/locking/mutex.c 1099 */;
	struct mutex_waiter *cocci_id/* kernel/locking/mutex-debug.c 51 */;
	struct lock_torture_cxt cocci_id/* kernel/locking/locktorture.c 98 */;
	struct lock_torture_cxt {
		int nrealwriters_stress;
		int nrealreaders_stress;
		bool debug_lock;
		atomic_t n_lock_torture_errors;
		struct lock_torture_ops *cur_ops;
		struct lock_stress_stats *lwsa;
		struct lock_stress_stats *lrsa;
	} cocci_id/* kernel/locking/locktorture.c 89 */;
	struct lock_torture_ops *cocci_id/* kernel/locking/locktorture.c 843 */[];
	struct lock_torture_ops *cocci_id/* kernel/locking/locktorture.c 774 */;
	struct lock_torture_ops {
		void (*init)(void);
		int (*writelock)(void);
		void (*write_delay)(struct torture_random_state *trsp);
		void (*task_boost)(struct torture_random_state *trsp);
		void (*writeunlock)(void);
		int (*readlock)(void);
		void (*read_delay)(struct torture_random_state *trsp);
		void (*readunlock)(void);
		unsigned long flags;
		const char *name;
	} cocci_id/* kernel/locking/locktorture.c 75 */;
	struct lock_stress_stats *cocci_id/* kernel/locking/locktorture.c 687 */;
	struct lock_stress_stats {
		long n_lock_fail;
		long n_lock_acquired;
	} cocci_id/* kernel/locking/locktorture.c 64 */;
	struct percpu_rw_semaphore cocci_id/* kernel/locking/locktorture.c 573 */;
	struct ww_acquire_ctx cocci_id/* kernel/locking/locktorture.c 372 */;
	struct reorder_lock {
		struct list_head link;
		struct ww_mutex *lock;
	} cocci_id/* kernel/locking/locktorture.c 368 */[3];
	struct lock_torture_ops cocci_id/* kernel/locking/locktorture.c 132 */;
	struct torture_random_state *cocci_id/* kernel/locking/locktorture.c 127 */;
	struct lock_stat_data cocci_id/* kernel/locking/lockdep_proc.c 609 */;
	struct lock_stat_data *cocci_id/* kernel/locking/lockdep_proc.c 598 */;
	struct lock_stat_seq cocci_id/* kernel/locking/lockdep_proc.c 591 */;
	struct lock_stat_seq *cocci_id/* kernel/locking/lockdep_proc.c 591 */;
	char cocci_id/* kernel/locking/lockdep_proc.c 413 */[39];
	char cocci_id/* kernel/locking/lockdep_proc.c 391 */[15];
	const struct lock_stat_data *cocci_id/* kernel/locking/lockdep_proc.c 359 */;
	struct lock_stat_seq {
		struct lock_stat_data *iter_end;
		struct lock_stat_data stats[MAX_LOCKDEP_KEYS];
	} cocci_id/* kernel/locking/lockdep_proc.c 349 */;
	struct lock_stat_data {
		struct lock_class *class;
		struct lock_class_stats stats;
	} cocci_id/* kernel/locking/lockdep_proc.c 344 */;
	struct lock_chain *cocci_id/* kernel/locking/lockdep.c 983 */;
	u16 cocci_id/* kernel/locking/lockdep.c 941 */[MAX_LOCKDEP_CHAIN_HLOCKS];
	arch_spinlock_t cocci_id/* kernel/locking/lockdep.c 87 */;
	raw_spinlock_t cocci_id/* kernel/locking/lockdep.c 866 */;
	struct lockdep_subclass_key *cocci_id/* kernel/locking/lockdep.c 794 */;
	char cocci_id/* kernel/locking/lockdep.c 618 */[LOCK_USAGE_CHARS];
	const struct lockdep_subclass_key *cocci_id/* kernel/locking/lockdep.c 582 */;
	struct pending_free *cocci_id/* kernel/locking/lockdep.c 4935 */;
	void cocci_id/* kernel/locking/lockdep.c 4910 */(struct rcu_head *cb);
	void *constcocci_id/* kernel/locking/lockdep.c 4882 */;
	struct held_lock cocci_id/* kernel/locking/lockdep.c 4756 */;
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 471 */[STACK_TRACE_HASH_SIZE];
	unsigned long cocci_id/* kernel/locking/lockdep.c 470 */[MAX_STACK_TRACE_ENTRIES];
	struct lock_trace cocci_id/* kernel/locking/lockdep.c 466 */;
	struct lock_class_stats *cocci_id/* kernel/locking/lockdep.c 4659 */;
	struct lock_trace {
		struct hlist_node hash_entry;
		u32 hash;
		u32 nr_entries;
		unsigned long entries[0]__aligned(sizeof(unsigned long));
	} cocci_id/* kernel/locking/lockdep.c 459 */;
	struct pin_cookie cocci_id/* kernel/locking/lockdep.c 4317 */;
	const struct lockdep_map *cocci_id/* kernel/locking/lockdep.c 4298 */;
	const struct lock_class *cocci_id/* kernel/locking/lockdep.c 4018 */;
	const struct held_lock *cocci_id/* kernel/locking/lockdep.c 4011 */;
	struct held_lock *cocci_id/* kernel/locking/lockdep.c 3819 */;
	struct lockdep_map *cocci_id/* kernel/locking/lockdep.c 3812 */;
	int cocci_id/* kernel/locking/lockdep.c 3802 */(const struct lockdep_map *lock,
							int read);
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 356 */[CHAINHASH_SIZE];
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 345 */[CLASSHASH_SIZE];
	check_usage_f cocci_id/* kernel/locking/lockdep.c 3302 */;
	struct delayed_free {
		struct rcu_head rcu_head;
		int index;
		int scheduled;
		struct pending_free pf[2];
	} cocci_id/* kernel/locking/lockdep.c 330 */;
	int (*cocci_id/* kernel/locking/lockdep.c 3284 */)(struct task_struct *,
							   struct held_lock *,
							   enum lock_usage_bit bit,
							   const char *name);
	int (*cocci_id/* kernel/locking/lockdep.c 3271 */[])(struct lock_class *class);
	struct lock_class *cocci_id/* kernel/locking/lockdep.c 3253 */;
	struct pending_free {
		struct list_head zapped;
	DECLARE_BITMAP(lock_chains_being_freed,MAX_LOCKDEP_CHAINS)
		;
	} cocci_id/* kernel/locking/lockdep.c 314 */;
	int cocci_id/* kernel/locking/lockdep.c 3047 */(struct task_struct *curr,
							struct held_lock *this,
							enum lock_usage_bit new_bit);
	struct lock_class_stats cocci_id/* kernel/locking/lockdep.c 266 */;
	struct lock_chain cocci_id/* kernel/locking/lockdep.c 2624 */[MAX_LOCKDEP_CHAINS];
	struct lock_trace *cocci_id/* kernel/locking/lockdep.c 2553 */;
	struct lock_list cocci_id/* kernel/locking/lockdep.c 2231 */;
	enum lock_usage_bit cocci_id/* kernel/locking/lockdep.c 2228 */;
	enum lock_usage_bit *cocci_id/* kernel/locking/lockdep.c 2202 */;
	struct lock_time *cocci_id/* kernel/locking/lockdep.c 214 */;
	void __used cocci_id/* kernel/locking/lockdep.c 1942 */;
	struct lock_trace **constcocci_id/* kernel/locking/lockdep.c 1786 */;
	struct lock_class cocci_id/* kernel/locking/lockdep.c 1537 */;
	struct lock_class cocci_id/* kernel/locking/lockdep.c 153 */[MAX_LOCKDEP_KEYS];
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 148 */[KEYHASH_SIZE];
	struct circular_queue *cocci_id/* kernel/locking/lockdep.c 1470 */;
	struct lock_list **cocci_id/* kernel/locking/lockdep.c 1464 */;
	int (*cocci_id/* kernel/locking/lockdep.c 1463 */)(struct lock_list *entry,
							   void *data);
	struct lock_list *cocci_id/* kernel/locking/lockdep.c 1461 */;
	struct lock_list cocci_id/* kernel/locking/lockdep.c 137 */[MAX_LOCKDEP_ENTRIES];
	struct circular_queue cocci_id/* kernel/locking/lockdep.c 1352 */;
	struct circular_queue {
		struct lock_list *element[MAX_CIRCULAR_QUEUE_SIZE];
		unsigned int front,rear;
	} cocci_id/* kernel/locking/lockdep.c 1347 */;
	const struct lock_trace *cocci_id/* kernel/locking/lockdep.c 1306 */;
	typeof(*class) cocci_id/* kernel/locking/lockdep.c 1214 */;
	const struct lock_class_key *cocci_id/* kernel/locking/lockdep.c 1140 */;
	ssize_t __weak cocci_id/* kernel/locking/lock_events.c 61 */;
	bool __init cocci_id/* kernel/locking/lock_events.c 121 */;
	struct rq_flags cocci_id/* kernel/livepatch/transition.c 285 */;
	struct rq *cocci_id/* kernel/livepatch/transition.c 284 */;
	char cocci_id/* kernel/livepatch/transition.c 283 */[STACK_ERR_BUF_SIZE];
	unsigned long cocci_id/* kernel/livepatch/transition.c 244 */[MAX_STACK_ENTRIES];
	struct klp_state *cocci_id/* kernel/livepatch/state.c 64 */;
	struct klp_shadow {
		struct hlist_node node;
		struct rcu_head rcu_head;
		void *obj;
		unsigned long id;
		char data[];
	} cocci_id/* kernel/livepatch/shadow.c 54 */;
	klp_shadow_dtor_t cocci_id/* kernel/livepatch/shadow.c 253 */;
	struct klp_shadow *cocci_id/* kernel/livepatch/shadow.c 109 */;
	klp_shadow_ctor_t cocci_id/* kernel/livepatch/shadow.c 106 */;
	struct klp_ops cocci_id/* kernel/livepatch/patch.c 49 */;
	struct klp_ops *cocci_id/* kernel/livepatch/patch.c 25 */;
	struct klp_object *cocci_id/* kernel/livepatch/core.c 892 */;
	struct klp_patch *cocci_id/* kernel/livepatch/core.c 890 */;
	struct klp_func *cocci_id/* kernel/livepatch/core.c 578 */;
	struct klp_func cocci_id/* kernel/livepatch/core.c 565 */;
	struct klp_object cocci_id/* kernel/livepatch/core.c 550 */;
	void cocci_id/* kernel/livepatch/core.c 422 */(struct klp_patch *patch,
						       struct klp_object *obj);
	void cocci_id/* kernel/livepatch/core.c 420 */(struct klp_object *obj,
						       struct klp_func *func);
	struct klp_patch cocci_id/* kernel/livepatch/core.c 360 */;
	int cocci_id/* kernel/livepatch/core.c 310 */(struct klp_patch *patch);
	Elf_Rela cocci_id/* kernel/livepatch/core.c 218 */;
	Elf_Sym *cocci_id/* kernel/livepatch/core.c 201 */;
	Elf_Rela *cocci_id/* kernel/livepatch/core.c 200 */;
	struct klp_find_arg cocci_id/* kernel/livepatch/core.c 158 */;
	struct klp_find_arg *cocci_id/* kernel/livepatch/core.c 130 */;
	struct klp_find_arg {
		const char *objname;
		const char *name;
		unsigned long addr;
		unsigned long count;
		unsigned long pos;
	} cocci_id/* kernel/livepatch/core.c 119 */;
	struct latency_record cocci_id/* kernel/latencytop.c 62 */[MAXLR];
	struct latency_record *cocci_id/* kernel/latencytop.c 178 */;
	struct latency_record cocci_id/* kernel/latencytop.c 155 */;
	void __sched cocci_id/* kernel/latencytop.c 150 */;
	struct kthread_delayed_work cocci_id/* kernel/kthread.c 999 */;
	struct kthread_delayed_work *cocci_id/* kernel/kthread.c 998 */;
	struct kthread_work *cocci_id/* kernel/kthread.c 993 */;
	struct kthread_flush_work cocci_id/* kernel/kthread.c 953 */;
	struct kthread_flush_work *cocci_id/* kernel/kthread.c 940 */;
	struct kthread_flush_work {
		struct kthread_work work;
		struct completion done;
	} cocci_id/* kernel/kthread.c 933 */;
	struct kthread_work cocci_id/* kernel/kthread.c 663 */;
	struct kthread_worker cocci_id/* kernel/kthread.c 610 */;
	struct kthread_create_info cocci_id/* kernel/kthread.c 592 */;
	enum KTHREAD_BITS{KTHREAD_IS_PER_CPU=0, KTHREAD_SHOULD_STOP, KTHREAD_SHOULD_PARK,} cocci_id/* kernel/kthread.c 57 */;
	struct kthread {
		unsigned long flags;
		unsigned int cpu;
		void *data;
		struct completion parked;
		struct completion exited;
#ifdef CONFIG_BLK_CGROUP
		struct cgroup_subsys_state *blkcg_css;
#endif
	} cocci_id/* kernel/kthread.c 46 */;
	const struct sched_param cocci_id/* kernel/kthread.c 336 */;
	struct kthread_create_info {
		int (*threadfn)(void *data);
		void *data;
		int node;
		struct task_struct *result;
		struct completion *done;
		struct list_head list;
	} cocci_id/* kernel/kthread.c 32 */;
	struct kthread_create_info *cocci_id/* kernel/kthread.c 300 */;
	int (*cocci_id/* kernel/kthread.c 293 */)(void *data);
	struct kthread *cocci_id/* kernel/kthread.c 186 */;
	struct kthread_worker *cocci_id/* kernel/kthread.c 1000 */;
	const void cocci_id/* kernel/ksysfs.c 188 */;
	struct ftrace_ops *cocci_id/* kernel/kprobes.c 986 */;
	struct ftrace_ops cocci_id/* kernel/kprobes.c 963 */;
	struct kprobe_insn_page cocci_id/* kernel/kprobes.c 93 */;
	struct kprobe_insn_page {
		struct list_head list;
		kprobe_opcode_t *insns;
		struct kprobe_insn_cache *cache;
		int nused;
		int ngarbage;
		char slot_used[];
	} cocci_id/* kernel/kprobes.c 83 */;
	void cocci_id/* kernel/kprobes.c 774 */(struct kprobe *ap,
						struct kprobe *p);
	struct optimized_kprobe cocci_id/* kernel/kprobes.c 763 */;
	struct optimized_kprobe *cocci_id/* kernel/kprobes.c 743 */;
	unsigned int __unused cocci_id/* kernel/kprobes.c 63 */;
	kprobe_opcode_t *__weakcocci_id/* kernel/kprobes.c 62 */;
	struct {
		raw_spinlock_t lock ____cacheline_aligned_in_smp;
	} cocci_id/* kernel/kprobes.c 58 */[KPROBE_TABLE_SIZE];
	struct hlist_head cocci_id/* kernel/kprobes.c 49 */[KPROBE_TABLE_SIZE];
	struct arch_specific_insn cocci_id/* kernel/kprobes.c 359 */;
	int cocci_id/* kernel/kprobes.c 338 */(struct kprobe *p,
					       struct pt_regs *regs);
	char cocci_id/* kernel/kprobes.c 2547 */[3];
	kprobe_opcode_t cocci_id/* kernel/kprobes.c 245 */;
	struct kprobe_blacklist_entry cocci_id/* kernel/kprobes.c 2413 */;
	struct kprobe_insn_page *cocci_id/* kernel/kprobes.c 238 */;
	kprobe_opcode_t *cocci_id/* kernel/kprobes.c 236 */;
	struct kprobe_insn_cache *cocci_id/* kernel/kprobes.c 235 */;
	unsigned long cocci_id/* kernel/kprobes.c 2247 */[];
	int __init __weak cocci_id/* kernel/kprobes.c 2161 */;
	struct kretprobe **cocci_id/* kernel/kprobes.c 1962 */;
	struct kretprobe_instance cocci_id/* kernel/kprobes.c 1859 */;
	struct kretprobe cocci_id/* kernel/kprobes.c 1839 */;
	struct kprobe **cocci_id/* kernel/kprobes.c 1772 */;
	struct kprobe cocci_id/* kernel/kprobes.c 1765 */;
	struct module **cocci_id/* kernel/kprobes.c 1528 */;
	struct kprobe_blacklist_entry *cocci_id/* kernel/kprobes.c 1410 */;
	struct kretprobe_instance *cocci_id/* kernel/kprobes.c 1265 */;
	struct kretprobe *cocci_id/* kernel/kprobes.c 1262 */;
	int cocci_id/* kernel/kprobes.c 125 */(struct kprobe_insn_cache *c);
	struct hlist_head **cocci_id/* kernel/kprobes.c 1176 */;
	struct kprobe_insn_cache cocci_id/* kernel/kprobes.c 117 */;
	void __weak *cocci_id/* kernel/kprobes.c 107 */;
	enum kprobe_slot_state{SLOT_CLEAN=0, SLOT_DIRTY=1, SLOT_USED=2,} cocci_id/* kernel/kprobes.c 101 */;
	char *cocci_id/* kernel/kmod.c 80 */[5];
	struct subprocess_info *cocci_id/* kernel/kmod.c 72 */;
	char cocci_id/* kernel/kmod.c 62 */[KMOD_PATH_LEN];
	char cocci_id/* kernel/kmod.c 128 */[MODULE_NAME_LEN];
	Elf_Shdr cocci_id/* kernel/kexec_file.c 904 */;
	struct kexec_sha_region cocci_id/* kernel/kexec_file.c 736 */;
	struct kexec_sha_region *cocci_id/* kernel/kexec_file.c 714 */;
	struct shash_desc *cocci_id/* kernel/kexec_file.c 709 */;
	struct crypto_shash *cocci_id/* kernel/kexec_file.c 708 */;
	int (*cocci_id/* kernel/kexec_file.c 556 */)(struct resource *,
						     void *);
	const struct kexec_file_ops *const*cocci_id/* kernel/kexec_file.c 41 */;
	int cocci_id/* kernel/kexec_file.c 31 */(struct kimage *image);
	const Elf_Shdr *cocci_id/* kernel/kexec_file.c 138 */;
	Elf_Shdr *cocci_id/* kernel/kexec_file.c 137 */;
	struct purgatory_info *cocci_id/* kernel/kexec_file.c 137 */;
	struct crash_mem_range cocci_id/* kernel/kexec_file.c 1174 */;
	struct crash_mem *cocci_id/* kernel/kexec_file.c 1169 */;
	Elf_Sym cocci_id/* kernel/kexec_file.c 1087 */;
	const Elf_Sym *cocci_id/* kernel/kexec_file.c 1061 */;
	const Elf_Ehdr *cocci_id/* kernel/kexec_file.c 1030 */;
	struct elf_shdr cocci_id/* kernel/kexec_elf.c 69 */;
	struct elf_phdr cocci_id/* kernel/kexec_elf.c 65 */;
	uint16_t cocci_id/* kernel/kexec_elf.c 49 */;
	const struct elfhdr *cocci_id/* kernel/kexec_elf.c 49 */;
	struct kexec_buf *cocci_id/* kernel/kexec_elf.c 390 */;
	uint32_t cocci_id/* kernel/kexec_elf.c 39 */;
	struct kexec_elf_info cocci_id/* kernel/kexec_elf.c 368 */;
	struct elfhdr cocci_id/* kernel/kexec_elf.c 367 */;
	struct kexec_elf_info *cocci_id/* kernel/kexec_elf.c 298 */;
	uint64_t cocci_id/* kernel/kexec_elf.c 29 */;
	struct elf_phdr *cocci_id/* kernel/kexec_elf.c 207 */;
	const struct elf_phdr *cocci_id/* kernel/kexec_elf.c 185 */;
	struct elfhdr *cocci_id/* kernel/kexec_elf.c 119 */;
	struct pt_regs cocci_id/* kernel/kexec_core.c 950 */;
	void
__noclone
 cocci_id/* kernel/kexec_core.c 938 */; // err
	struct resource cocci_id/* kernel/kexec_core.c 65 */;
	kimage_entry_t *cocci_id/* kernel/kexec_core.c 540 */;
	kimage_entry_t cocci_id/* kernel/kexec_core.c 534 */;
	note_buf_t __percpu *cocci_id/* kernel/kexec_core.c 51 */;
	struct page *cocci_id/* kernel/kexec_core.c 144 */(struct kimage *image,
							   gfp_t gfp_mask,
							   unsigned long dest);
	note_buf_t cocci_id/* kernel/kexec_core.c 1096 */;
	struct elf_prstatus cocci_id/* kernel/kexec_core.c 1057 */;
	struct resource *cocci_id/* kernel/kexec_core.c 1011 */;
	struct kexec_segment __user *cocci_id/* kernel/kexec.c 24 */;
	struct kexec_segment *cocci_id/* kernel/kexec.c 233 */;
	struct kimage *cocci_id/* kernel/kexec.c 22 */;
	struct kimage **cocci_id/* kernel/kexec.c 109 */;
	struct kcov_remote {
		u64 handle;
		struct kcov *kcov;
		struct hlist_node hnode;
	} cocci_id/* kernel/kcov.c 79 */;
	struct kcov_remote_area {
		struct list_head list;
		unsigned int size;
	} cocci_id/* kernel/kcov.c 74 */;
	struct kcov_remote_arg cocci_id/* kernel/kcov.c 683 */;
	unsigned __user *cocci_id/* kernel/kcov.c 682 */;
	struct kcov_remote_arg *cocci_id/* kernel/kcov.c 677 */;
	struct kcov_remote *cocci_id/* kernel/kcov.c 552 */;
	struct kcov {
		refcount_t refcount;
		spinlock_t lock;
		enum kcov_mode mode;
		unsigned int size;
		void *area;
		struct task_struct *t;
		bool remote;
		unsigned int remote_size;
		int sequence;
	} cocci_id/* kernel/kcov.c 46 */;
	struct kcov *cocci_id/* kernel/kcov.c 378 */;
	enum kcov_mode cocci_id/* kernel/kcov.c 145 */;
	struct kcov_remote_area cocci_id/* kernel/kcov.c 124 */;
	struct kcov_remote_area *cocci_id/* kernel/kcov.c 117 */;
	enum kcmp_type cocci_id/* kernel/kcmp.c 50 */;
	unsigned long cocci_id/* kernel/kcmp.c 37 */[KCMP_TYPES][2]__read_mostly; // err
	struct kcmp_epoll_slot cocci_id/* kernel/kcmp.c 109 */;
	struct kcmp_epoll_slot __user *cocci_id/* kernel/kcmp.c 106 */;
	struct kallsym_iter cocci_id/* kernel/kallsyms.c 684 */;
	const unsigned int cocci_id/* kernel/kallsyms.c 50 */[]__weak;
	const u16 cocci_id/* kernel/kallsyms.c 48 */[]__weak;
	struct kallsym_iter *cocci_id/* kernel/kallsyms.c 456 */;
	const unsigned long cocci_id/* kernel/kallsyms.c 44 */;
	struct kallsym_iter {
		loff_t pos;
		loff_t pos_arch_end;
		loff_t pos_mod_end;
		loff_t pos_ftrace_mod_end;
		unsigned long value;
		unsigned int nameoff;
		char type;
		char name[KSYM_NAME_LEN];
		char module_name[MODULE_NAME_LEN];
		int exported;
		int show_value;
	} cocci_id/* kernel/kallsyms.c 436 */;
	const unsigned int cocci_id/* kernel/kallsyms.c 41 */;
	const u8 cocci_id/* kernel/kallsyms.c 35 */[]__weak;
	const int cocci_id/* kernel/kallsyms.c 34 */[]__weak;
	const unsigned long cocci_id/* kernel/kallsyms.c 33 */[]__weak;
	int (*cocci_id/* kernel/kallsyms.c 179 */)(void *, const char *,
						   struct module *,
						   unsigned long);
	void cocci_id/* kernel/jump_label.c 93 */(struct static_key *key);
	struct jump_entry cocci_id/* kernel/jump_label.c 89 */;
	struct static_key_mod cocci_id/* kernel/jump_label.c 636 */;
	struct jump_entry *cocci_id/* kernel/jump_label.c 562 */;
	struct static_key_mod *cocci_id/* kernel/jump_label.c 559 */;
	struct static_key *cocci_id/* kernel/jump_label.c 557 */;
	struct static_key_mod {
		struct static_key_mod *next;
		struct jump_entry *entries;
		struct module *mod;
	} cocci_id/* kernel/jump_label.c 510 */;
	const struct jump_entry *cocci_id/* kernel/jump_label.c 37 */;
	enum jump_label_type cocci_id/* kernel/jump_label.c 340 */;
	void __weak __init_or_module cocci_id/* kernel/jump_label.c 339 */;
	struct static_key_deferred *cocci_id/* kernel/jump_label.c 300 */;
	struct static_key_deferred cocci_id/* kernel/jump_label.c 262 */;
	struct llist_node *cocci_id/* kernel/irq_work.c 137 */;
	struct llist_head *cocci_id/* kernel/irq_work.c 119 */;
	int cocci_id/* kernel/irq/timings.c 899 */[];
	struct irq_timings *cocci_id/* kernel/irq/timings.c 890 */;
	struct timings_intervals *cocci_id/* kernel/irq/timings.c 769 */;
	int cocci_id/* kernel/irq/timings.c 709 */[IRQ_TIMINGS_SIZE];
	struct timings_intervals cocci_id/* kernel/irq/timings.c 699 */[]__initdata;
	u64 cocci_id/* kernel/irq/timings.c 640 */[]__initdata;
	struct timings_intervals {
		u64 *intervals;
		size_t count;
	} cocci_id/* kernel/irq/timings.c 632 */;
	struct irqt_stat __percpu *cocci_id/* kernel/irq/timings.c 602 */;
	struct irqt_stat *cocci_id/* kernel/irq/timings.c 382 */;
	struct irqt_stat {
		u64 last_ts;
		u64 ema_time[PREDICTION_BUFFER_SIZE];
		int timings[IRQ_TIMINGS_SIZE];
		int circ_timings[IRQ_TIMINGS_SIZE];
		int count;
	} cocci_id/* kernel/irq/timings.c 289 */;
	void cocci_id/* kernel/irq/spurious.c 20 */(struct timer_list *unused);
	enum{AFFINITY, AFFINITY_LIST, EFFECTIVE, EFFECTIVE_LIST,} cocci_id/* kernel/irq/proc.c 39 */;
	void __maybe_unused *cocci_id/* kernel/irq/proc.c 319 */;
	char cocci_id/* kernel/irq/proc.c 299 */[MAX_NAMELEN];
	struct msi_domain_info *cocci_id/* kernel/irq/msi.c 81 */;
	msi_alloc_info_t cocci_id/* kernel/irq/msi.c 406 */;
	struct msi_domain_ops cocci_id/* kernel/irq/msi.c 237 */;
	msi_alloc_info_t *cocci_id/* kernel/irq/msi.c 192 */;
	struct msi_domain_ops *cocci_id/* kernel/irq/msi.c 142 */;
	struct msi_msg cocci_id/* kernel/irq/msi.c 121 */[2];
	struct irq_matrix *cocci_id/* kernel/irq/matrix.c 49 */;
	struct cpumap *cocci_id/* kernel/irq/matrix.c 381 */;
	struct irq_matrix {
		unsigned int matrix_bits;
		unsigned int alloc_start;
		unsigned int alloc_end;
		unsigned int alloc_size;
		unsigned int global_available;
		unsigned int global_reserved;
		unsigned int systembits_inalloc;
		unsigned int total_allocated;
		unsigned int online_maps;
		struct cpumap __percpu *maps;
		unsigned long scratch_map[IRQ_MATRIX_SIZE];
		unsigned long system_map[IRQ_MATRIX_SIZE];
	} cocci_id/* kernel/irq/matrix.c 24 */;
	struct cpumap {
		unsigned int available;
		unsigned int allocated;
		unsigned int managed;
		unsigned int managed_allocated;
		bool initialized;
		bool online;
		unsigned long alloc_map[IRQ_MATRIX_SIZE];
		unsigned long managed_map[IRQ_MATRIX_SIZE];
	} cocci_id/* kernel/irq/matrix.c 13 */;
	struct irq_affinity_notify cocci_id/* kernel/irq/manage.c 328 */;
	struct irq_affinity_notify *cocci_id/* kernel/irq/manage.c 327 */;
	struct sched_param cocci_id/* kernel/irq/manage.c 1235 */;
	irqreturn_t (*cocci_id/* kernel/irq/manage.c 1079 */)(struct irq_desc *desc,
							      struct irqaction *action);
	struct callback_head cocci_id/* kernel/irq/manage.c 1076 */;
	const struct irq_domain_ops cocci_id/* kernel/irq/irqdomain.c 984 */;
	struct irq_fwspec cocci_id/* kernel/irq/irqdomain.c 854 */;
	struct of_phandle_args *cocci_id/* kernel/irq/irqdomain.c 852 */;
	struct irq_fwspec *cocci_id/* kernel/irq/irqdomain.c 761 */;
	irq_hw_number_t *cocci_id/* kernel/irq/irqdomain.c 732 */;
	const struct fwnode_operations cocci_id/* kernel/irq/irqdomain.c 45 */;
	void cocci_id/* kernel/irq/irqdomain.c 38 */(struct irq_domain *d);
	struct irqchip_fwid {
		struct fwnode_handle fwnode;
		unsigned int type;
		char *name;
		phys_addr_t *pa;
	} cocci_id/* kernel/irq/irqdomain.c 30 */;
	void cocci_id/* kernel/irq/irqdomain.c 28 */(struct irq_domain *domain);
	enum irq_domain_bus_token cocci_id/* kernel/irq/irqdomain.c 270 */;
	acpi_handle cocci_id/* kernel/irq/irqdomain.c 170 */;
	struct acpi_buffer cocci_id/* kernel/irq/irqdomain.c 167 */;
	struct irqchip_fwid cocci_id/* kernel/irq/irqdomain.c 147 */;
	void __rcu **cocci_id/* kernel/irq/irqdomain.c 1378 */;
	struct irqchip_fwid *cocci_id/* kernel/irq/irqdomain.c 136 */;
	struct device_node *cocci_id/* kernel/irq/irqdomain.c 135 */;
	const struct irq_domain_ops *cocci_id/* kernel/irq/irqdomain.c 132 */;
	struct fwnode_handle *cocci_id/* kernel/irq/irqdomain.c 130 */;
	int __ref cocci_id/* kernel/irq/irqdesc.c 765 */;
	struct irq_desc cocci_id/* kernel/irq/irqdesc.c 550 */[NR_IRQS]__cacheline_aligned_in_smp;
	struct kobj_type cocci_id/* kernel/irq/irqdesc.c 280 */;
	struct irq_desc cocci_id/* kernel/irq/irqdesc.c 248 */;
	 cocci_id/* kernel/irq/irqdesc.c 212 */(type);
	void cocci_id/* kernel/irq/irqdesc.c 138 */(struct kobject *kobj);
	struct irq_sim cocci_id/* kernel/irq/irq_sim.c 54 */;
	struct irq_sim_work_ctx cocci_id/* kernel/irq/irq_sim.c 53 */;
	struct irq_sim_work_ctx *cocci_id/* kernel/irq/irq_sim.c 48 */;
	struct irq_sim_irq_ctx *cocci_id/* kernel/irq/irq_sim.c 16 */;
	struct irq_sim_devres *cocci_id/* kernel/irq/irq_sim.c 148 */;
	struct irq_sim *cocci_id/* kernel/irq/irq_sim.c 145 */;
	struct irq_sim_devres {
		struct irq_sim *sim;
	} cocci_id/* kernel/irq/irq_sim.c 10 */;
	void (*cocci_id/* kernel/irq/handle.c 214 */)(struct pt_regs *);
	struct irq_domain_ops cocci_id/* kernel/irq/generic-chip.c 447 */;
	irq_hw_number_t cocci_id/* kernel/irq/generic-chip.c 378 */;
	struct irq_chip_type cocci_id/* kernel/irq/generic-chip.c 303 */;
	struct irq_domain_chip_generic *cocci_id/* kernel/irq/generic-chip.c 288 */;
	struct irq_domain *cocci_id/* kernel/irq/generic-chip.c 282 */;
	struct irq_chip_type *cocci_id/* kernel/irq/generic-chip.c 130 */;
	struct irq_chip cocci_id/* kernel/irq/dummychip.c 53 */;
	struct irq_devres *cocci_id/* kernel/irq/devres.c 27 */;
	enum irq_gc_flags cocci_id/* kernel/irq/devres.c 263 */;
	struct irq_generic_chip_devres *cocci_id/* kernel/irq/devres.c 242 */;
	struct irq_generic_chip_devres {
		struct irq_chip_generic *gc;
		u32 msk;
		unsigned int clr;
		unsigned int set;
	} cocci_id/* kernel/irq/devres.c 233 */;
	struct irq_chip_generic *cocci_id/* kernel/irq/devres.c 217 */;
	struct irq_desc_devres *cocci_id/* kernel/irq/devres.c 182 */;
	const struct irq_affinity_desc *cocci_id/* kernel/irq/devres.c 180 */;
	struct irq_desc_devres {
		unsigned int from;
		unsigned int cnt;
	} cocci_id/* kernel/irq/devres.c 149 */;
	struct irq_devres cocci_id/* kernel/irq/devres.c 141 */;
	struct irq_devres {
		unsigned int irq;
		void *dev_id;
	} cocci_id/* kernel/irq/devres.c 13 */;
	irq_handler_t cocci_id/* kernel/irq/devres.c 100 */;
	const struct irq_bit_descr cocci_id/* kernel/irq/debugfs.c 50 */[];
	char cocci_id/* kernel/irq/debugfs.c 245 */[10];
	const struct irq_bit_descr *cocci_id/* kernel/irq/debugfs.c 19 */;
	char cocci_id/* kernel/irq/debugfs.c 184 */[8];
	struct irq_bit_descr {
		unsigned int mask;
		char *name;
	} cocci_id/* kernel/irq/debugfs.c 12 */;
	struct irq_data *cocci_id/* kernel/irq/chip.c 990 */;
	irq_flow_handler_t cocci_id/* kernel/irq/chip.c 984 */;
	struct irqaction *cocci_id/* kernel/irq/chip.c 753 */;
	struct irq_chip *cocci_id/* kernel/irq/chip.c 669 */;
	struct irqaction cocci_id/* kernel/irq/chip.c 32 */;
	void cocci_id/* kernel/irq/chip.c 302 */(struct irq_desc *desc,
						 bool mask);
	irqreturn_t cocci_id/* kernel/irq/chip.c 22 */;
	enum{IRQ_STARTUP_NORMAL, IRQ_STARTUP_MANAGED, IRQ_STARTUP_ABORT,} cocci_id/* kernel/irq/chip.c 186 */;
	struct msi_msg *cocci_id/* kernel/irq/chip.c 1554 */;
	enum irqchip_irq_state cocci_id/* kernel/irq/chip.c 1332 */;
	struct msi_desc *cocci_id/* kernel/irq/chip.c 133 */;
	struct irq_desc *cocci_id/* kernel/irq/autoprobe.c 120 */;
	struct node_vectors {
		unsigned id;
		union {
			unsigned nvectors;
			unsigned ncpus;
		};
	} cocci_id/* kernel/irq/affinity.c 98 */;
	const struct irq_affinity *cocci_id/* kernel/irq/affinity.c 497 */;
	struct irq_affinity *cocci_id/* kernel/irq/affinity.c 402 */;
	struct node_vectors cocci_id/* kernel/irq/affinity.c 281 */;
	struct node_vectors *cocci_id/* kernel/irq/affinity.c 259 */;
	struct irq_affinity_desc *cocci_id/* kernel/irq/affinity.c 253 */;
	const nodemask_t cocci_id/* kernel/irq/affinity.c 131 */;
	const struct node_vectors *cocci_id/* kernel/irq/affinity.c 109 */;
	void __iomem *cocci_id/* kernel/iomem.c 9 */;
	resource_size_t cocci_id/* kernel/iomem.c 23 */;
	unsigned int __read_mostly cocci_id/* kernel/hung_task.c 63 */;
	unsigned long __read_mostly cocci_id/* kernel/hung_task.c 49 */;
	const struct group_info *cocci_id/* kernel/groups.c 97 */;
	kgid_t *cocci_id/* kernel/groups.c 83 */;
	gid_t __user *cocci_id/* kernel/groups.c 60 */;
	gid_t *cocci_id/* kernel/groups.c 153 */;
	gcov_type *cocci_id/* kernel/gcov/gcc_base.c 46 */;
	struct gcov_info {
		unsigned int version;
		struct gcov_info *next;
		unsigned int stamp;
		const char *filename;
		void (*merge[GCOV_COUNTERS])(gcov_type *, unsigned int);
		unsigned int n_functions;
		struct gcov_fn_info **functions;
	} cocci_id/* kernel/gcov/gcc_4_7.c 87 */;
	struct gcov_fn_info {
		const struct gcov_info *key;
		unsigned int ident;
		unsigned int lineno_checksum;
		unsigned int cfg_checksum;
		struct gcov_ctr_info ctrs[0];
	} cocci_id/* kernel/gcov/gcc_4_7.c 66 */;
	struct gcov_ctr_info {
		unsigned int num;
		gcov_type *values;
	} cocci_id/* kernel/gcov/gcc_4_7.c 44 */;
	struct gcov_ctr_info cocci_id/* kernel/gcov/gcc_4_7.c 297 */;
	struct gcov_info {
		unsigned int version;
		struct gcov_info *next;
		unsigned int stamp;
		const char *filename;
		unsigned int n_functions;
		const struct gcov_fn_info *functions;
		unsigned int ctr_mask;
		struct gcov_ctr_info counts[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 73 */;
	struct gcov_ctr_info {
		unsigned int num;
		gcov_type *values;
		void (*merge)(gcov_type *, unsigned int);
	} cocci_id/* kernel/gcov/gcc_3_4.c 53 */;
	struct gcov_fn_info {
		unsigned int ident;
		unsigned int checksum;
		unsigned int n_ctrs[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 38 */;
	struct type_info *cocci_id/* kernel/gcov/gcc_3_4.c 363 */;
	struct gcov_iterator {
		struct gcov_info *info;
		int record;
		unsigned int function;
		unsigned int type;
		unsigned int count;
		int num_types;
		struct type_info type_info[0];
	} cocci_id/* kernel/gcov/gcc_3_4.c 346 */;
	struct type_info {
		int ctr_type;
		unsigned int offset;
	} cocci_id/* kernel/gcov/gcc_3_4.c 331 */;
	gcov_type cocci_id/* kernel/gcov/gcc_3_4.c 279 */;
	struct gcov_ctr_info *cocci_id/* kernel/gcov/gcc_3_4.c 278 */;
	enum gcov_action cocci_id/* kernel/gcov/fs.c 728 */;
	struct gcov_info **cocci_id/* kernel/gcov/fs.c 616 */;
	struct gcov_node *cocci_id/* kernel/gcov/fs.c 614 */;
	struct gcov_node {
		struct list_head list;
		struct list_head children;
		struct list_head all;
		struct gcov_node *parent;
		struct gcov_info **loaded_info;
		struct gcov_info *unloaded_info;
		struct dentry *dentry;
		struct dentry **links;
		int num_loaded;
		char name[0];
	} cocci_id/* kernel/gcov/fs.c 51 */;
	struct gcov_node cocci_id/* kernel/gcov/fs.c 434 */;
	const struct gcov_link *cocci_id/* kernel/gcov/fs.c 330 */;
	void cocci_id/* kernel/gcov/fs.c 265 */(struct gcov_node *node);
	llvm_gcov_callback cocci_id/* kernel/gcov/clang.c 85 */;
	struct gcov_fn_info {
		struct list_head head;
		u32 ident;
		u32 checksum;
		u8 use_extra_checksum;
		u32 cfg_checksum;
		u32 num_counters;
		u64 *counters;
		const char *function_name;
	} cocci_id/* kernel/gcov/clang.c 68 */;
	struct gcov_info {
		struct list_head head;
		const char *filename;
		unsigned int version;
		u32 checksum;
		struct list_head functions;
	} cocci_id/* kernel/gcov/clang.c 58 */;
	void (*cocci_id/* kernel/gcov/clang.c 56 */)(void);
	struct gcov_iterator *cocci_id/* kernel/gcov/clang.c 519 */;
	struct gcov_iterator cocci_id/* kernel/gcov/clang.c 494 */;
	struct gcov_fn_info *cocci_id/* kernel/gcov/clang.c 453 */;
	struct gcov_iterator {
		struct gcov_info *info;
		void *buffer;
		size_t size;
		loff_t pos;
	} cocci_id/* kernel/gcov/clang.c 388 */;
	struct gcov_fn_info cocci_id/* kernel/gcov/clang.c 288 */;
	const struct gcov_link cocci_id/* kernel/gcov/clang.c 225 */[];
	struct gcov_info cocci_id/* kernel/gcov/clang.c 186 */;
	const char cocci_id/* kernel/gcov/clang.c 108 */[4];
	struct gcov_info *cocci_id/* kernel/gcov/base.c 38 */;
	struct futex_pi_state cocci_id/* kernel/futex.c 916 */;
	union futex_key cocci_id/* kernel/futex.c 904 */;
	struct futex_pi_state *cocci_id/* kernel/futex.c 833 */;
	enum futex_access cocci_id/* kernel/futex.c 527 */;
	struct hrtimer_sleeper *cocci_id/* kernel/futex.c 489 */;
	enum futex_access{FUTEX_READ, FUTEX_WRITE,} cocci_id/* kernel/futex.c 474 */;
	struct old_timespec32 *cocci_id/* kernel/futex.c 4105 */;
	compat_uptr_t __user *cocci_id/* kernel/futex.c 4016 */;
	compat_long_t cocci_id/* kernel/futex.c 3984 */;
	struct robust_list __user *cocci_id/* kernel/futex.c 3980 */;
	struct compat_robust_list_head __user *cocci_id/* kernel/futex.c 3979 */;
	compat_uptr_t *cocci_id/* kernel/futex.c 3950 */;
	struct robust_list __user **cocci_id/* kernel/futex.c 3950 */;
	struct __kernel_timespec *cocci_id/* kernel/futex.c 3911 */;
	ktime_t *cocci_id/* kernel/futex.c 3850 */;
	struct robust_list_head __user *cocci_id/* kernel/futex.c 3679 */;
	unsigned long __user *cocci_id/* kernel/futex.c 3662 */;
	struct robust_list __user *__user*cocci_id/* kernel/futex.c 3657 */;
	struct robust_list_head **cocci_id/* kernel/futex.c 3503 */;
	struct robust_list_head *cocci_id/* kernel/futex.c 3480 */;
	struct rt_mutex *cocci_id/* kernel/futex.c 3389 */;
	void cocci_id/* kernel/futex.c 329 */(struct task_struct *curr);
	struct futex_q cocci_id/* kernel/futex.c 2884 */;
	struct rt_mutex_waiter cocci_id/* kernel/futex.c 2882 */;
	struct hrtimer_sleeper cocci_id/* kernel/futex.c 2879 */;
	struct restart_block *cocci_id/* kernel/futex.c 2789 */;
	struct {
		struct fault_attr attr;
		bool ignore_private;
	} cocci_id/* kernel/futex.c 277 */;
	struct futex_hash_bucket **cocci_id/* kernel/futex.c 2727 */;
	struct {
		struct futex_hash_bucket *queues;
		unsigned long hashsize;
	} cocci_id/* kernel/futex.c 264 */;
	long cocci_id/* kernel/futex.c 2608 */(struct restart_block *restart);
	struct futex_hash_bucket {
		atomic_t waiters;
		spinlock_t lock;
		struct plist_head chain;
	}____cacheline_aligned_in_smp cocci_id/* kernel/futex.c 253 */;
	const struct futex_q cocci_id/* kernel/futex.c 242 */;
	struct futex_q *cocci_id/* kernel/futex.c 2329 */;
	struct futex_hash_bucket *cocci_id/* kernel/futex.c 2329 */;
	struct futex_q {
		struct plist_node list;
		struct task_struct *task;
		spinlock_t *lock_ptr;
		union futex_key key;
		struct futex_pi_state *pi_state;
		struct rt_mutex_waiter *rt_waiter;
		union futex_key *requeue_pi_key;
		u32 bitset;
	} cocci_id/* kernel/futex.c 230 */;
	struct futex_pi_state {
		struct list_head list;
		struct rt_mutex pi_mutex;
		struct task_struct *owner;
		refcount_t refcount;
		union futex_key key;
	} cocci_id/* kernel/futex.c 190 */;
	int __read_mostly cocci_id/* kernel/futex.c 168 */;
	struct wake_q_head *cocci_id/* kernel/futex.c 1523 */;
	struct futex_hash_bucket cocci_id/* kernel/futex.c 1512 */;
	struct task_struct **cocci_id/* kernel/futex.c 1271 */;
	struct futex_pi_state **cocci_id/* kernel/futex.c 1270 */;
	union futex_key *cocci_id/* kernel/futex.c 1269 */;
	struct mm_struct cocci_id/* kernel/fork.c 706 */;
	struct files_struct **cocci_id/* kernel/fork.c 2862 */;
	struct fs_struct **cocci_id/* kernel/fork.c 2841 */;
	struct fs_struct cocci_id/* kernel/fork.c 2784 */;
	struct files_struct cocci_id/* kernel/fork.c 2780 */;
	struct signal_struct cocci_id/* kernel/fork.c 2776 */;
	struct sighand_struct cocci_id/* kernel/fork.c 2772 */;
	proc_visitor cocci_id/* kernel/fork.c 2723 */;
	pid_t cocci_id/* kernel/fork.c 2708 */[MAX_PID_NS_LEVEL];
	struct clone_args *cocci_id/* kernel/fork.c 2703 */;
	struct clone_args cocci_id/* kernel/fork.c 2586 */;
	struct clone_args __user *cocci_id/* kernel/fork.c 2582 */;
	vfork cocci_id/* kernel/fork.c 2528 */;
	struct kernel_clone_args cocci_id/* kernel/fork.c 2515 */;
	fork cocci_id/* kernel/fork.c 2512 */;
	const struct kernel_clone_args *cocci_id/* kernel/fork.c 2460 */;
	struct completion cocci_id/* kernel/fork.c 2397 */;
	struct kernel_clone_args *cocci_id/* kernel/fork.c 2394 */;
	struct vm_struct **cocci_id/* kernel/fork.c 196 */;
	struct multiprocess_signals cocci_id/* kernel/fork.c 1832 */;
	struct poll_table_struct *cocci_id/* kernel/fork.c 1771 */;
	struct posix_cputimers *cocci_id/* kernel/fork.c 1544 */;
	struct io_context *cocci_id/* kernel/fork.c 1479 */;
	struct fs_struct *cocci_id/* kernel/fork.c 1431 */;
	struct fei_attr *cocci_id/* kernel/fail_function.c 75 */;
	struct fei_attr {
		struct list_head list;
		struct kprobe kp;
		unsigned long retval;
	} cocci_id/* kernel/fail_function.c 26 */;
	struct fei_attr cocci_id/* kernel/fail_function.c 174 */;
	struct kprobe *cocci_id/* kernel/fail_function.c 172 */;
	int cocci_id/* kernel/fail_function.c 15 */(struct kprobe *kp,
						    struct pt_regs *regs);
	int notrace cocci_id/* kernel/extable.c 72 */;
	u32 __initdata __visible cocci_id/* kernel/extable.c 32 */;
	struct exception_table_entry cocci_id/* kernel/extable.c 28 */[];
	struct sighand_struct *cocci_id/* kernel/exit.c 96 */;
	struct signal_struct *cocci_id/* kernel/exit.c 94 */;
	struct wait_opts {
		enum pid_type wo_type;
		int wo_flags;
		struct pid *wo_pid;
		struct waitid_info *wo_info;
		int wo_stat;
		struct rusage *wo_rusage;
		wait_queue_entry_t child_wait;
		int notask_error;
	} cocci_id/* kernel/exit.c 918 */;
	struct waitid_info {
		pid_t pid;
		uid_t uid;
		int status;
		int cause;
	} cocci_id/* kernel/exit.c 911 */;
	struct sighand_struct *constcocci_id/* kernel/exit.c 881 */;
	void __noreturn cocci_id/* kernel/exit.c 715 */;
	struct core_thread cocci_id/* kernel/exit.c 454 */;
	struct core_state *cocci_id/* kernel/exit.c 438 */;
	struct rcuwait *cocci_id/* kernel/exit.c 237 */;
	struct rusage cocci_id/* kernel/exit.c 1624 */;
	struct rusage *cocci_id/* kernel/exit.c 1579 */;
	struct waitid_info cocci_id/* kernel/exit.c 1549 */;
	struct siginfo *cocci_id/* kernel/exit.c 1545 */;
	struct waitid_info *cocci_id/* kernel/exit.c 1486 */;
	struct wait_opts cocci_id/* kernel/exit.c 1396 */;
	struct wait_opts *cocci_id/* kernel/exit.c 1396 */;
	wait_queue_entry_t *cocci_id/* kernel/exit.c 1393 */;
	struct map_info cocci_id/* kernel/events/uprobes.c 996 */;
	struct xol_area {
		wait_queue_head_t wq;
		atomic_t slot_count;
		unsigned long *bitmap;
		struct vm_special_mapping xol_mapping;
		struct page *pages[2];
		unsigned long vaddr;
	} cocci_id/* kernel/events/uprobes.c 98 */;
	struct map_info *cocci_id/* kernel/events/uprobes.c 975 */;
	struct map_info {
		struct map_info *next;
		struct mm_struct *mm;
		unsigned long vaddr;
	} cocci_id/* kernel/events/uprobes.c 962 */;
	enum uprobe_filter_ctx cocci_id/* kernel/events/uprobes.c 884 */;
	struct delayed_uprobe {
		struct list_head list;
		struct uprobe *uprobe;
		struct mm_struct *mm;
	} cocci_id/* kernel/events/uprobes.c 80 */;
	struct address_space *cocci_id/* kernel/events/uprobes.c 797 */;
	struct uprobe_consumer **cocci_id/* kernel/events/uprobes.c 781 */;
	struct uprobe cocci_id/* kernel/events/uprobes.c 641 */;
	struct uprobe *cocci_id/* kernel/events/uprobes.c 639 */;
	struct uprobe {
		struct rb_node rb_node;
		refcount_t ref;
		struct rw_semaphore register_rwsem;
		struct rw_semaphore consumer_rwsem;
		struct list_head pending_list;
		struct uprobe_consumer *consumers;
		struct inode *inode;
		loff_t offset;
		loff_t ref_ctr_offset;
		unsigned long flags;
		struct arch_uprobe arch;
	} cocci_id/* kernel/events/uprobes.c 55 */;
	struct mutex cocci_id/* kernel/events/uprobes.c 47 */[UPROBES_HASH_SZ];
	short *cocci_id/* kernel/events/uprobes.c 380 */;
	struct rb_root cocci_id/* kernel/events/uprobes.c 36 */;
	uprobe_opcode_t *cocci_id/* kernel/events/uprobes.c 231 */;
	enum rp_check cocci_id/* kernel/events/uprobes.c 2176 */;
	struct return_instance *cocci_id/* kernel/events/uprobes.c 2176 */;
	struct arch_uprobe *cocci_id/* kernel/events/uprobes.c 2171 */;
	uprobe_opcode_t __user *cocci_id/* kernel/events/uprobes.c 2018 */;
	struct uprobe_task *cocci_id/* kernel/events/uprobes.c 1849 */;
	struct callback_head *cocci_id/* kernel/events/uprobes.c 1787 */;
	struct return_instance cocci_id/* kernel/events/uprobes.c 1765 */;
	struct uprobe_task cocci_id/* kernel/events/uprobes.c 1758 */;
	struct return_instance **cocci_id/* kernel/events/uprobes.c 1756 */;
	struct mem_cgroup *cocci_id/* kernel/events/uprobes.c 165 */;
	struct mmu_notifier_range cocci_id/* kernel/events/uprobes.c 164 */;
	struct page_vma_mapped_walk cocci_id/* kernel/events/uprobes.c 158 */;
	uprobe_opcode_t cocci_id/* kernel/events/uprobes.c 1486 */;
	struct xol_area *cocci_id/* kernel/events/uprobes.c 1483 */;
	struct delayed_uprobe cocci_id/* kernel/events/uprobes.c 1338 */;
	struct delayed_uprobe *cocci_id/* kernel/events/uprobes.c 1332 */;
	vm_flags_t cocci_id/* kernel/events/uprobes.c 123 */;
	struct uprobe_consumer *cocci_id/* kernel/events/uprobes.c 1153 */;
	struct ring_buffer cocci_id/* kernel/events/ring_buffer.c 807 */;
	volatile unsigned int *cocci_id/* kernel/events/ring_buffer.c 46 */;
	struct {
		struct perf_event_header header;
		u64 id;
		u64 lost;
	} cocci_id/* kernel/events/ring_buffer.c 156 */;
	struct bp_busy_slots {
		unsigned int pinned;
		unsigned int flexible;
	} cocci_id/* kernel/events/hw_breakpoint.c 63 */;
	void __percpu __force *cocci_id/* kernel/events/hw_breakpoint.c 551 */;
	typeof(*cpu_events) cocci_id/* kernel/events/hw_breakpoint.c 549 */;
	struct perf_event *__percpu*cocci_id/* kernel/events/hw_breakpoint.c 540 */;
	int cocci_id/* kernel/events/hw_breakpoint.c 50 */[TYPE_MAX];
	struct arch_hw_breakpoint cocci_id/* kernel/events/hw_breakpoint.c 464 */;
	struct bp_cpuinfo {
		unsigned int cpu_pinned;
		unsigned int *tsk_pinned;
		unsigned int flexible;
	} cocci_id/* kernel/events/hw_breakpoint.c 40 */;
	struct arch_hw_breakpoint *cocci_id/* kernel/events/hw_breakpoint.c 392 */;
	enum bp_type_idx cocci_id/* kernel/events/hw_breakpoint.c 317 */;
	struct bp_busy_slots cocci_id/* kernel/events/hw_breakpoint.c 270 */;
	struct bp_cpuinfo *cocci_id/* kernel/events/hw_breakpoint.c 140 */;
	struct bp_busy_slots *cocci_id/* kernel/events/hw_breakpoint.c 133 */;
	struct pmu cocci_id/* kernel/events/core.c 9945 */;
	const enum perf_addr_filter_action_t cocci_id/* kernel/events/core.c 9571 */[];
	substring_t cocci_id/* kernel/events/core.c 9561 */[MAX_OPT_ARGS];
	const match_table_t cocci_id/* kernel/events/core.c 9541 */;
	enum{IF_STATE_ACTION=0, IF_STATE_SOURCE, IF_STATE_END,} cocci_id/* kernel/events/core.c 9535 */;
	enum{IF_ACT_NONE=-1, IF_ACT_FILTER, IF_ACT_START, IF_ACT_STOP, IF_SRC_FILE, IF_SRC_KERNEL, IF_SRC_FILEADDR, IF_SRC_KERNELADDR,} cocci_id/* kernel/events/core.c 9524 */;
	struct perf_addr_filter_range *cocci_id/* kernel/events/core.c 9432 */;
	struct bpf_perf_event_data_kern cocci_id/* kernel/events/core.c 9193 */;
	struct perf_cgroup cocci_id/* kernel/events/core.c 913 */;
	int cocci_id/* kernel/events/core.c 9071 */(struct perf_event *event);
	const struct attribute_group *cocci_id/* kernel/events/core.c 9066 */[];
	struct attribute_group cocci_id/* kernel/events/core.c 9061 */;
	enum perf_probe_config{PERF_PROBE_CONFIG_IS_RETPROBE=1U << 0, PERF_UPROBE_REF_CTR_OFFSET_BITS=32, PERF_UPROBE_REF_CTR_OFFSET_SHIFT=64 - PERF_UPROBE_REF_CTR_OFFSET_BITS,} cocci_id/* kernel/events/core.c 9046 */;
	struct trace_entry *cocci_id/* kernel/events/core.c 8968 */;
	struct perf_raw_record cocci_id/* kernel/events/core.c 8945 */;
	struct pt_regs **cocci_id/* kernel/events/core.c 8927 */;
	struct trace_event_call *cocci_id/* kernel/events/core.c 8922 */;
	struct static_key cocci_id/* kernel/events/core.c 8823 */[PERF_COUNT_SW_MAX];
	struct perf_sample_data cocci_id/* kernel/events/core.c 8669 */;
	struct swevent_htable *cocci_id/* kernel/events/core.c 8633 */;
	enum perf_type_id cocci_id/* kernel/events/core.c 8628 */;
	struct swevent_hlist *cocci_id/* kernel/events/core.c 8587 */;
	struct swevent_htable {
		struct swevent_hlist *swevent_hlist;
		struct mutex hlist_mutex;
		int hlist_refcount;
		int recursion[PERF_NR_CONTEXTS];
	} cocci_id/* kernel/events/core.c 8448 */;
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
	struct perf_addr_filter *cocci_id/* kernel/events/core.c 7826 */;
	struct perf_addr_filters_head *cocci_id/* kernel/events/core.c 7824 */;
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
	struct perf_event_attr __user *cocci_id/* kernel/events/core.c 5317 */;
	struct perf_event_attr cocci_id/* kernel/events/core.c 5316 */;
	void (*cocci_id/* kernel/events/core.c 5239 */)(struct perf_event *);
	int cocci_id/* kernel/events/core.c 5234 */(struct perf_event_attr __user *uattr,
						    struct perf_event_attr *attr);
	int cocci_id/* kernel/events/core.c 5233 */(struct perf_event *event,
						    u32 prog_fd);
	int cocci_id/* kernel/events/core.c 5232 */(struct perf_event *event,
						    void __user *arg);
	int cocci_id/* kernel/events/core.c 5230 */(struct perf_event *event,
						    struct perf_event *output_event);
	struct fd *cocci_id/* kernel/events/core.c 5216 */;
	void cocci_id/* kernel/events/core.c 4579 */(struct perf_event *event,
						     struct list_head *head);
	struct perf_event_attr *cocci_id/* kernel/events/core.c 4389 */;
	void cocci_id/* kernel/events/core.c 4375 */(struct perf_event *event,
						     struct ring_buffer *rb);
	void cocci_id/* kernel/events/core.c 4362 */(struct perf_event *event);
	bool cocci_id/* kernel/events/core.c 434 */(struct perf_cpu_context *cpuctx);
	struct perf_event_context cocci_id/* kernel/events/core.c 4229 */;
	struct perf_read_data cocci_id/* kernel/events/core.c 4142 */;
	struct pmu *cocci_id/* kernel/events/core.c 4001 */;
	struct perf_read_data *cocci_id/* kernel/events/core.c 3997 */;
	struct perf_read_data {
		struct perf_event *event;
		bool group;
		int ret;
	} cocci_id/* kernel/events/core.c 3969 */;
	struct srcu_struct cocci_id/* kernel/events/core.c 392 */;
	typeof(*event) cocci_id/* kernel/events/core.c 3840 */;
	struct perf_event cocci_id/* kernel/events/core.c 3835 */;
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
	struct perf_event_groups *cocci_id/* kernel/events/core.c 1579 */;
	struct perf_event_context *cocci_id/* kernel/events/core.c 146 */;
	struct perf_cpu_context *cocci_id/* kernel/events/core.c 145 */;
	struct remote_function_call cocci_id/* kernel/events/core.c 133 */;
	enum pid_type cocci_id/* kernel/events/core.c 1321 */;
	remote_function_f cocci_id/* kernel/events/core.c 131 */;
	struct perf_cgroup_info cocci_id/* kernel/events/core.c 12567 */;
	struct perf_pmu_events_attr cocci_id/* kernel/events/core.c 12520 */;
	struct perf_pmu_events_attr *cocci_id/* kernel/events/core.c 12519 */;
	struct perf_event_mmap_page cocci_id/* kernel/events/core.c 12512 */;
	const struct perf_event_attr *cocci_id/* kernel/events/core.c 12032 */;
	struct perf_cpu_context cocci_id/* kernel/events/core.c 11656 */;
	clockid_t cocci_id/* kernel/events/core.c 11075 */;
	struct mutex *cocci_id/* kernel/events/core.c 11066 */;
	struct hrtimer *cocci_id/* kernel/events/core.c 1087 */;
	struct perf_addr_filter_range cocci_id/* kernel/events/core.c 10821 */;
	perf_overflow_handler_t cocci_id/* kernel/events/core.c 10668 */;
	enum hrtimer_restart cocci_id/* kernel/events/core.c 1065 */;
	struct pmu_event_list *cocci_id/* kernel/events/core.c 10545 */;
	struct lock_class_key cocci_id/* kernel/events/core.c 10270 */;
	struct device cocci_id/* kernel/events/core.c 10228 */;
	struct bus_type cocci_id/* kernel/events/core.c 10214 */;
	struct idr cocci_id/* kernel/events/core.c 10144 */;
	struct perf_cpu_context __percpu *cocci_id/* kernel/events/core.c 10103 */;
	struct callchain_cpus_entries cocci_id/* kernel/events/callchain.c 81 */;
	struct callchain_cpus_entries *cocci_id/* kernel/events/callchain.c 74 */;
	struct perf_callchain_entry_ctx *cocci_id/* kernel/events/callchain.c 38 */;
	struct perf_callchain_entry cocci_id/* kernel/events/callchain.c 27 */;
	struct ctl_table cocci_id/* kernel/events/callchain.c 243 */;
	struct perf_callchain_entry_ctx cocci_id/* kernel/events/callchain.c 182 */;
	struct callchain_cpus_entries {
		struct rcu_head rcu_head;
		struct perf_callchain_entry *cpu_entries[0];
	} cocci_id/* kernel/events/callchain.c 17 */;
	struct perf_callchain_entry *cocci_id/* kernel/events/callchain.c 152 */;
	Elf_Half __weak cocci_id/* kernel/elfcore.c 8 */;
	size_t __weak cocci_id/* kernel/elfcore.c 23 */;
	struct coredump_params *cocci_id/* kernel/elfcore.c 18 */;
	uintptr_t cocci_id/* kernel/dma/virt.c 18 */;
	enum swiotlb_force cocci_id/* kernel/dma/swiotlb.c 64 */;
	enum dma_sync_target cocci_id/* kernel/dma/swiotlb.c 629 */;
	void __init cocci_id/* kernel/dma/swiotlb.c 245 */;
	int __init cocci_id/* kernel/dma/swiotlb.c 111 */;
	phys_addr_t *cocci_id/* kernel/dma/swiotlb.c 102 */;
	struct page **cocci_id/* kernel/dma/remap.c 23 */;
	struct gen_pool *
atomic_pool
cocci_id/* kernel/dma/remap.c 102 */;
	struct dma_devres *cocci_id/* kernel/dma/mapping.c 84 */;
	struct dma_devres cocci_id/* kernel/dma/mapping.c 60 */;
	void cocci_id/* kernel/dma/mapping.c 330 */(struct device *dev,
						    u64 mask);
	const struct dma_map_ops *cocci_id/* kernel/dma/mapping.c 267 */;
	struct dma_devres {
		size_t size;
		void *vaddr;
		dma_addr_t dma_handle;
		unsigned long attrs;
	} cocci_id/* kernel/dma/mapping.c 21 */;
	pgprot_t cocci_id/* kernel/dma/mapping.c 155 */;
	const struct dma_map_ops cocci_id/* kernel/dma/dummy.c 33 */;
	struct sg_table *cocci_id/* kernel/dma/direct.c 422 */;
	enum dma_data_direction cocci_id/* kernel/dma/direct.c 368 */;
	unsigned int
zone_dma_bits
 cocci_id/* kernel/dma/direct.c 24 */;
	struct hash_bucket cocci_id/* kernel/dma/debug.c 93 */[HASH_SIZE];
	struct bus_type *cocci_id/* kernel/dma/debug.c 909 */;
	struct hash_bucket {
		struct list_head list;
		spinlock_t lock;
	} cocci_id/* kernel/dma/debug.c 87 */;
	struct dma_debug_entry **cocci_id/* kernel/dma/debug.c 859 */;
	bool (*cocci_id/* kernel/dma/debug.c 85 */)(struct dma_debug_entry *,
						    struct dma_debug_entry *);
	char cocci_id/* kernel/dma/debug.c 750 */[NAME_MAX_LEN];
	char cocci_id/* kernel/dma/debug.c 728 */[NAME_MAX_LEN + 1];
	struct dma_debug_entry {
		struct list_head list;
		struct device *dev;
		u64 dev_addr;
		u64 size;
		int type;
		int direction;
		int sg_call_ents;
		int sg_mapped_ents;
		unsigned long pfn;
		size_t offset;
		enum map_err_types map_err_type;
#ifdef CONFIG_STACKTRACE
		unsigned int stack_len;
		unsigned long stack_entries[DMA_DEBUG_STACKTRACE_ENTRIES];
#endif
	}____cacheline_aligned_in_smp cocci_id/* kernel/dma/debug.c 67 */;
	struct dma_debug_entry cocci_id/* kernel/dma/debug.c 645 */;
	struct dma_debug_entry *cocci_id/* kernel/dma/debug.c 641 */;
	struct dma_debug_entry *cocci_id/* kernel/dma/debug.c 561 */[CACHELINES_PER_PAGE];
	enum map_err_types{MAP_ERR_CHECK_NOT_APPLICABLE, MAP_ERR_NOT_CHECKED, MAP_ERR_CHECKED,} cocci_id/* kernel/dma/debug.c 45 */;
	enum{dma_debug_single, dma_debug_sg, dma_debug_coherent, dma_debug_resource,} cocci_id/* kernel/dma/debug.c 38 */;
	struct hash_bucket **cocci_id/* kernel/dma/debug.c 342 */;
	match_fn cocci_id/* kernel/dma/debug.c 288 */;
	struct hash_bucket *cocci_id/* kernel/dma/debug.c 286 */;
	const char *cocci_id/* kernel/dma/debug.c 144 */[4];
	const char *cocci_id/* kernel/dma/debug.c 140 */[5];
	struct device_driver *cocci_id/* kernel/dma/debug.c 130 */;
	char cocci_id/* kernel/dma/debug.c 129 */[NAME_MAX_LEN]__read_mostly;
	struct scatterlist *cocci_id/* kernel/dma/debug.c 1208 */;
	struct vm_struct *cocci_id/* kernel/dma/debug.c 1092 */;
	struct memblock_region *cocci_id/* kernel/dma/contiguous.c 76 */;
	phys_addr_t __init __maybe_unused cocci_id/* kernel/dma/contiguous.c 74 */;
	const phys_addr_t cocci_id/* kernel/dma/contiguous.c 45 */;
	struct cma *cocci_id/* kernel/dma/contiguous.c 236 */;
	struct cma **cocci_id/* kernel/dma/contiguous.c 164 */;
	struct dma_coherent_mem cocci_id/* kernel/dma/coherent.c 60 */;
	struct dma_coherent_mem **cocci_id/* kernel/dma/coherent.c 42 */;
	const struct reserved_mem_ops *cocci_id/* kernel/dma/coherent.c 362 */;
	const struct reserved_mem_ops cocci_id/* kernel/dma/coherent.c 329 */;
	struct reserved_mem *cocci_id/* kernel/dma/coherent.c 300 */;
	struct dma_coherent_mem *
dma_coherent_default_memory
cocci_id/* kernel/dma/coherent.c 22 */;
	dma_addr_t *cocci_id/* kernel/dma/coherent.c 128 */;
	struct dma_coherent_mem *cocci_id/* kernel/dma/coherent.c 127 */;
	struct dma_coherent_mem {
		void *virt_base;
		dma_addr_t device_base;
		unsigned long pfn_base;
		int size;
		unsigned long *bitmap;
		spinlock_t spinlock;
		bool use_dev_dma_pfn_offset;
	} cocci_id/* kernel/dma/coherent.c 12 */;
	dma_addr_t cocci_id/* kernel/dma/coherent.c 111 */;
	phys_addr_t cocci_id/* kernel/dma/coherent.c 110 */;
	struct dma_chan cocci_id/* kernel/dma.c 60 */[MAX_DMA_CHANNELS];
	struct dma_chan {
		int lock;
		const char *device_id;
	} cocci_id/* kernel/dma.c 55 */;
	struct taskstats *cocci_id/* kernel/delayacct.c 85 */;
	struct task_delay_info *cocci_id/* kernel/delayacct.c 70 */;
	int cocci_id/* kernel/debug/kdb/kdb_support.c 915 */[4];
	struct debug_alloc_header *cocci_id/* kernel/debug/kdb/kdb_support.c 805 */;
	u64 cocci_id/* kernel/debug/kdb/kdb_support.c 708 */[256 * 1024 / dah_align];
	struct debug_alloc_header cocci_id/* kernel/debug/kdb/kdb_support.c 706 */;
	struct debug_alloc_header {
		u32 next;
		u32 size;
		void *caller;
	} cocci_id/* kernel/debug/kdb/kdb_support.c 692 */;
	char *cocci_id/* kernel/debug/kdb/kdb_support.c 60 */[100];
	__u16 cocci_id/* kernel/debug/kdb/kdb_support.c 407 */;
	__u8 cocci_id/* kernel/debug/kdb/kdb_support.c 406 */;
	kdb_symtab_t *cocci_id/* kernel/debug/kdb/kdb_support.c 263 */;
	const kdb_symtab_t *cocci_id/* kernel/debug/kdb/kdb_support.c 258 */;
	char cocci_id/* kernel/debug/kdb/kdb_support.c 172 */[KSYM_NAME_LEN + 1];
	struct _kdbmsg {
		int km_diag;
		char *km_msg;
	} cocci_id/* kernel/debug/kdb/kdb_main.c 98 */;
	kdbtab_t cocci_id/* kernel/debug/kdb/kdb_main.c 92 */[KDB_BASE_CMD_MAX];
	char cocci_id/* kernel/debug/kdb/kdb_main.c 915 */[CMD_BUFLEN + 2];
	char *cocci_id/* kernel/debug/kdb/kdb_main.c 913 */[MAXARGC];
	kdbtab_t *cocci_id/* kernel/debug/kdb/kdb_main.c 89 */;
	char cocci_id/* kernel/debug/kdb/kdb_main.c 816 */[KDB_CMD_HISTORY_COUNT][CMD_BUFLEN];
	int cocci_id/* kernel/debug/kdb/kdb_main.c 672 */(int argc,
							  const char **argv);
	struct defcmd_set *cocci_id/* kernel/debug/kdb/kdb_main.c 667 */;
	struct defcmd_set {
		int count;
		bool usable;
		char *name;
		char *usage;
		char *help;
		char **command;
	} cocci_id/* kernel/debug/kdb/kdb_main.c 659 */;
	char cocci_id/* kernel/debug/kdb/kdb_main.c 56 */[KDB_GREP_STRLEN];
	long *cocci_id/* kernel/debug/kdb/kdb_main.c 495 */;
	kdb_func_t cocci_id/* kernel/debug/kdb/kdb_main.c 2735 */;
	char cocci_id/* kernel/debug/kdb/kdb_main.c 270 */[KDB_ENVBUFSIZE];
	struct sysinfo cocci_id/* kernel/debug/kdb/kdb_main.c 2514 */;
	struct tm cocci_id/* kernel/debug/kdb/kdb_main.c 2513 */;
	struct sysinfo *cocci_id/* kernel/debug/kdb/kdb_main.c 2492 */;
	const struct kernel_param_ops cocci_id/* kernel/debug/kdb/kdb_main.c 2196 */;
	const struct kernel_param *cocci_id/* kernel/debug/kdb/kdb_main.c 2188 */;
	char cocci_id/* kernel/debug/kdb/kdb_main.c 2102 */[201];
	struct kmsg_dumper cocci_id/* kernel/debug/kdb/kdb_main.c 2100 */;
	struct module_use *cocci_id/* kernel/debug/kdb/kdb_main.c 2051 */;
	kdb_cmdflags_t cocci_id/* kernel/debug/kdb/kdb_main.c 204 */;
	struct module *cocci_id/* kernel/debug/kdb/kdb_main.c 2026 */;
	union {
		u64 word;
		unsigned char c[8];
	} cocci_id/* kernel/debug/kdb/kdb_main.c 1529 */;
	char cocci_id/* kernel/debug/kdb/kdb_main.c 1493 */[32];
	kdb_symtab_t cocci_id/* kernel/debug/kdb/kdb_main.c 1492 */;
	kdbmsg_t cocci_id/* kernel/debug/kdb/kdb_main.c 106 */[];
	u_short cocci_id/* kernel/debug/kdb/kdb_keyboard.c 41 */;
	enum kdb_msgsrc cocci_id/* kernel/debug/kdb/kdb_io.c 545 */;
	char cocci_id/* kernel/debug/kdb/kdb_io.c 504 */[256];
	char cocci_id/* kernel/debug/kdb/kdb_io.c 30 */[CMD_BUFLEN];
	get_char_func *cocci_id/* kernel/debug/kdb/kdb_io.c 133 */;
	char cocci_id/* kernel/debug/kdb/kdb_io.c 130 */[4];
	kdb_dbtrap_t cocci_id/* kernel/debug/kdb/kdb_debugger.c 59 */;
	kdb_reason_t cocci_id/* kernel/debug/kdb/kdb_debugger.c 58 */;
	get_char_func cocci_id/* kernel/debug/kdb/kdb_debugger.c 22 */[];
	const char **cocci_id/* kernel/debug/kdb/kdb_bp.c 377 */;
	kdb_bp_t cocci_id/* kernel/debug/kdb/kdb_bp.c 285 */;
	kdb_bp_t cocci_id/* kernel/debug/kdb/kdb_bp.c 25 */[KDB_MAXBPT];
	kdb_bp_t *cocci_id/* kernel/debug/kdb/kdb_bp.c 125 */;
	char cocci_id/* kernel/debug/gdbstub.c 766 */[23 + BUF_THREAD_ID_SIZE];
	unsigned char cocci_id/* kernel/debug/gdbstub.c 702 */[BUF_THREAD_ID_SIZE];
	unsigned long cocci_id/* kernel/debug/gdbstub.c 51 */[(NUMREGBYTES + sizeof(unsigned long) - 1) / sizeof(unsigned long)];
	char cocci_id/* kernel/debug/gdbstub.c 45 */[BUFMAX];
	char cocci_id/* kernel/debug/gdbstub.c 196 */[BUFMAX + 1];
	struct sysrq_key_op cocci_id/* kernel/debug/debug_core.c 923 */;
	struct console cocci_id/* kernel/debug/debug_core.c 897 */;
	struct console *cocci_id/* kernel/debug/debug_core.c 882 */;
	struct kgdb_io *cocci_id/* kernel/debug/debug_core.c 82 */;
	struct kgdb_state cocci_id/* kernel/debug/debug_core.c 789 */;
	struct debuggerinfo_struct cocci_id/* kernel/debug/debug_core.c 68 */[NR_CPUS];
	struct kgdb_state *cocci_id/* kernel/debug/debug_core.c 556 */;
	call_single_data_t *cocci_id/* kernel/debug/debug_core.c 247 */;
	struct pt_regs *cocci_id/* kernel/debug/debug_core.c 209 */;
	unsigned long __weak cocci_id/* kernel/debug/debug_core.c 209 */;
	struct kgdb_bkpt cocci_id/* kernel/debug/debug_core.c 191 */;
	struct kgdb_bkpt *cocci_id/* kernel/debug/debug_core.c 183 */;
	struct kgdb_bkpt cocci_id/* kernel/debug/debug_core.c 114 */[KGDB_MAX_BREAKPOINTS];
	struct cred cocci_id/* kernel/cred.c 659 */;
	struct group_info *cocci_id/* kernel/cred.c 615 */;
	const struct user_namespace *cocci_id/* kernel/cred.c 397 */;
	struct group_info cocci_id/* kernel/cred.c 36 */;
	phys_addr_t __weak cocci_id/* kernel/crash_core.c 373 */;
	char cocci_id/* kernel/crash_core.c 352 */[0x50];
	struct elf_note cocci_id/* kernel/crash_core.c 314 */;
	Elf_Word *cocci_id/* kernel/crash_core.c 312 */;
	char *cocci_id/* kernel/crash_core.c 147 */[];
	struct syscore_ops cocci_id/* kernel/cpu_pm.c 189 */;
	enum cpu_pm_event cocci_id/* kernel/cpu_pm.c 18 */;
	int __ref cocci_id/* kernel/cpu.c 977 */;
	struct lockdep_map cocci_id/* kernel/cpu.c 85 */;
	struct smp_hotplug_thread cocci_id/* kernel/cpu.c 787 */;
	struct cpuhp_cpu_state {
		enum cpuhp_state state;
		enum cpuhp_state target;
		enum cpuhp_state fail;
#ifdef CONFIG_SMP
		struct task_struct *thread;
		bool should_run;
		bool rollback;
		bool single;
		bool bringup;
		struct hlist_node *node;
		struct hlist_node *last;
		enum cpuhp_state cb_state;
		int result;
		struct completion done_up;
		struct completion done_down;
#endif
	} cocci_id/* kernel/cpu.c 55 */;
	struct cpuhp_cpu_state *cocci_id/* kernel/cpu.c 488 */;
	enum cpuhp_smt_control cocci_id/* kernel/cpu.c 391 */;
	struct completion *cocci_id/* kernel/cpu.c 249 */;
	enum cpu_mitigations cocci_id/* kernel/cpu.c 2386 */;
	enum cpu_mitigations{CPU_MITIGATIONS_OFF, CPU_MITIGATIONS_AUTO, CPU_MITIGATIONS_AUTO_NOSMT,} cocci_id/* kernel/cpu.c 2380 */;
	const struct cpumask *cocci_id/* kernel/cpu.c 2321 */;
	struct cpumask cocci_id/* kernel/cpu.c 2305 */;
	const unsigned long cocci_id/* kernel/cpu.c 2277 */[BITS_PER_LONG + 1][BITS_TO_LONGS(NR_CPUS)];
	struct device_attribute *cocci_id/* kernel/cpu.c 2138 */;
	struct device *cocci_id/* kernel/cpu.c 2138 */;
	enum cpuhp_state cocci_id/* kernel/cpu.c 1904 */;
	struct cpuhp_step *cocci_id/* kernel/cpu.c 1868 */;
	int (*cocci_id/* kernel/cpu.c 1804 */)(unsigned int cpu);
	int (*cocci_id/* kernel/cpu.c 153 */)(unsigned int cpu,
					      struct hlist_node *node);
	struct hlist_node **cocci_id/* kernel/cpu.c 149 */;
	struct cpuhp_step cocci_id/* kernel/cpu.c 130 */[];
	struct cpuhp_step {
		const char *name;
		union {
			int (*single)(unsigned int cpu);
			int (*multi)(unsigned int cpu,
				     struct hlist_node *node);
		} startup;
		union {
			int (*single)(unsigned int cpu);
			int (*multi)(unsigned int cpu,
				     struct hlist_node *node);
		} teardown;
		struct hlist_head list;
		bool cant_stop;
		bool multi_instance;
	} cocci_id/* kernel/cpu.c 112 */;
	enum ctx_state cocci_id/* kernel/context_tracking.c 62 */;
	void __exit cocci_id/* kernel/configs.c 71 */;
	struct proc_dir_entry *cocci_id/* kernel/configs.c 58 */;
	compat_sigset_word cocci_id/* kernel/compat.c 99 */;
	sigset_t *cocci_id/* kernel/compat.c 99 */;
	const void __user *cocci_id/* kernel/compat.c 75 */;
	const struct timespec *cocci_id/* kernel/compat.c 50 */;
	struct old_timespec32 __user *cocci_id/* kernel/compat.c 50 */;
	const struct old_timespec32 __user *cocci_id/* kernel/compat.c 43 */;
	struct timespec *cocci_id/* kernel/compat.c 43 */;
	const struct timeval *cocci_id/* kernel/compat.c 36 */;
	struct old_timeval32 __user *cocci_id/* kernel/compat.c 36 */;
	compat_uptr_t cocci_id/* kernel/compat.c 346 */;
	compat_sigset_t cocci_id/* kernel/compat.c 317 */;
	const compat_sigset_t __user *cocci_id/* kernel/compat.c 314 */;
	const struct old_timeval32 __user *cocci_id/* kernel/compat.c 29 */;
	struct timeval *cocci_id/* kernel/compat.c 29 */;
	compat_ulong_t cocci_id/* kernel/compat.c 270 */;
	const compat_ulong_t __user *cocci_id/* kernel/compat.c 257 */;
	const struct compat_sigevent __user *cocci_id/* kernel/compat.c 244 */;
	struct sigevent *cocci_id/* kernel/compat.c 243 */;
	compat_ulong_t __user *cocci_id/* kernel/compat.c 174 */;
	struct compat_rusage cocci_id/* kernel/compat.c 149 */;
	const struct rusage *cocci_id/* kernel/compat.c 147 */;
	struct compat_rusage __user *cocci_id/* kernel/compat.c 147 */;
	void cocci_id/* kernel/cgroup/rstat.c 9 */(struct cgroup *cgrp,
						   int cpu);
	enum cpu_usage_stat cocci_id/* kernel/cgroup/rstat.c 379 */;
	struct cgroup_rstat_cpu *cocci_id/* kernel/cgroup/rstat.c 371 */;
	struct cgroup_base_stat cocci_id/* kernel/cgroup/rstat.c 327 */;
	struct cgroup_base_stat *cocci_id/* kernel/cgroup/rstat.c 307 */;
	struct cgroup_rstat_cpu cocci_id/* kernel/cgroup/rstat.c 258 */;
	raw_spinlock_t *cocci_id/* kernel/cgroup/rstat.c 160 */;
	struct cgroup **cocci_id/* kernel/cgroup/rstat.c 122 */;
	struct rdma_cgroup cocci_id/* kernel/cgroup/rdma.c 69 */;
	struct rdma_cgroup *cocci_id/* kernel/cgroup/rdma.c 67 */;
	struct rdmacg_resource_pool {
		struct rdmacg_device *device;
		struct rdmacg_resource resources[RDMACG_RESOURCE_MAX];
		struct list_head cg_node;
		struct list_head dev_node;
		u64 usage_sum;
		int num_max_cnt;
	} cocci_id/* kernel/cgroup/rdma.c 54 */;
	enum rdmacg_file_type cocci_id/* kernel/cgroup/rdma.c 495 */;
	struct rdmacg_resource {
		int max;
		int usage;
	} cocci_id/* kernel/cgroup/rdma.c 43 */;
	const char *cocci_id/* kernel/cgroup/rdma.c 37 */[];
	substring_t cocci_id/* kernel/cgroup/rdma.c 358 */;
	enum rdmacg_file_type{RDMACG_RESOURCE_TYPE_MAX, RDMACG_RESOURCE_TYPE_STAT,} cocci_id/* kernel/cgroup/rdma.c 27 */;
	enum rdmacg_resource_type cocci_id/* kernel/cgroup/rdma.c 261 */;
	struct rdma_cgroup **cocci_id/* kernel/cgroup/rdma.c 259 */;
	struct rdmacg_device *cocci_id/* kernel/cgroup/rdma.c 114 */;
	struct rdmacg_resource_pool *cocci_id/* kernel/cgroup/rdma.c 112 */;
	struct pids_cgroup cocci_id/* kernel/cgroup/pids.c 59 */;
	struct pids_cgroup *cocci_id/* kernel/cgroup/pids.c 57 */;
	struct pids_cgroup {
		struct cgroup_subsys_state css;
		atomic64_t counter;
		atomic64_t limit;
		struct cgroup_file events_file;
		atomic64_t events_limit;
	} cocci_id/* kernel/cgroup/pids.c 40 */;
	int64_t cocci_id/* kernel/cgroup/pids.c 289 */;
	struct ucounts *cocci_id/* kernel/cgroup/namespace.c 55 */;
	const struct proc_ns_operations cocci_id/* kernel/cgroup/namespace.c 143 */;
	struct nsproxy *cocci_id/* kernel/cgroup/namespace.c 120 */;
	struct freezer cocci_id/* kernel/cgroup/legacy_freezer.c 52 */;
	struct freezer *cocci_id/* kernel/cgroup/legacy_freezer.c 50 */;
	struct freezer {
		struct cgroup_subsys_state css;
		unsigned int state;
	} cocci_id/* kernel/cgroup/legacy_freezer.c 43 */;
	enum freezer_state_flags{CGROUP_FREEZER_ONLINE=(1 << 0), CGROUP_FREEZING_SELF=(1 << 1), CGROUP_FREEZING_PARENT=(1 << 2), CGROUP_FROZEN=(1 << 3), CGROUP_FREEZING=CGROUP_FREEZING_SELF | CGROUP_FREEZING_PARENT,} cocci_id/* kernel/cgroup/legacy_freezer.c 33 */;
	char cocci_id/* kernel/cgroup/debug.c 209 */[16];
	cpumask_var_t cocci_id/* kernel/cgroup/cpuset.c 960 */[];
	struct cpuset {
		struct cgroup_subsys_state css;
		unsigned long flags;
		cpumask_var_t cpus_allowed;
		nodemask_t mems_allowed;
		cpumask_var_t effective_cpus;
		nodemask_t effective_mems;
		cpumask_var_t subparts_cpus;
		nodemask_t old_mems_allowed;
		struct fmeter fmeter;
		int attach_in_progress;
		int pn;
		int relax_domain_level;
		int nr_subparts_cpus;
		int partition_root_state;
		int use_parent_ecpus;
		int child_ecpus_count;
	} cocci_id/* kernel/cgroup/cpuset.c 81 */;
	struct sched_domain_attr cocci_id/* kernel/cgroup/cpuset.c 758 */;
	struct sched_domain_attr *cocci_id/* kernel/cgroup/cpuset.c 741 */;
	struct fmeter {
		int cnt;
		int val;
		time64_t time;
		spinlock_t lock;
	} cocci_id/* kernel/cgroup/cpuset.c 74 */;
	struct cpuset **cocci_id/* kernel/cgroup/cpuset.c 737 */;
	struct sched_domain_attr **cocci_id/* kernel/cgroup/cpuset.c 734 */;
	cpumask_var_t **cocci_id/* kernel/cgroup/cpuset.c 733 */;
	cpumask_var_t *cocci_id/* kernel/cgroup/cpuset.c 462 */;
	struct tmpmasks *cocci_id/* kernel/cgroup/cpuset.c 460 */;
	void cocci_id/* kernel/cgroup/cpuset.c 355 */(struct work_struct *work);
	const struct task_struct *cocci_id/* kernel/cgroup/cpuset.c 3512 */;
	struct cpuset *cocci_id/* kernel/cgroup/cpuset.c 3417 */;
	struct tmpmasks cocci_id/* kernel/cgroup/cpuset.c 3125 */;
	cpumask_t cocci_id/* kernel/cgroup/cpuset.c 3017 */;
	struct cgroup_subsys cocci_id/* kernel/cgroup/cpuset.c 2867 */;
	const struct cpuset *cocci_id/* kernel/cgroup/cpuset.c 226 */;
	enum{FILE_MEMORY_MIGRATE, FILE_CPULIST, FILE_MEMLIST, FILE_EFFECTIVE_CPULIST, FILE_EFFECTIVE_MEMLIST, FILE_SUBPARTS_CPULIST, FILE_CPU_EXCLUSIVE, FILE_MEM_EXCLUSIVE, FILE_MEM_HARDWALL, FILE_SCHED_LOAD_BALANCE, FILE_PARTITION_ROOT, FILE_SCHED_RELAX_DOMAIN_LEVEL, FILE_MEMORY_PRESSURE_ENABLED, FILE_MEMORY_PRESSURE, FILE_SPREAD_PAGE, FILE_SPREAD_SLAB,} cocci_id/* kernel/cgroup/cpuset.c 2232 */;
	nodemask_t cocci_id/* kernel/cgroup/cpuset.c 2163 */;
	cpumask_var_t cocci_id/* kernel/cgroup/cpuset.c 2158 */;
	enum{CS_ONLINE, CS_CPU_EXCLUSIVE, CS_MEM_EXCLUSIVE, CS_MEM_HARDWALL, CS_MEMORY_MIGRATE, CS_SCHED_LOAD_BALANCE, CS_SPREAD_PAGE, CS_SPREAD_SLAB,} cocci_id/* kernel/cgroup/cpuset.c 209 */;
	struct fmeter *cocci_id/* kernel/cgroup/cpuset.c 2089 */;
	time64_t cocci_id/* kernel/cgroup/cpuset.c 2061 */;
	struct cpuset cocci_id/* kernel/cgroup/cpuset.c 194 */;
	cpuset_flagbits_t cocci_id/* kernel/cgroup/cpuset.c 1870 */;
	struct tmpmasks {
		cpumask_var_t addmask,delmask;
		cpumask_var_t new_cpus;
	} cocci_id/* kernel/cgroup/cpuset.c 187 */;
	nodemask_t *cocci_id/* kernel/cgroup/cpuset.c 1616 */;
	struct cpuset_migrate_mm_work *cocci_id/* kernel/cgroup/cpuset.c 1586 */;
	const nodemask_t *cocci_id/* kernel/cgroup/cpuset.c 1583 */;
	struct cpuset_migrate_mm_work cocci_id/* kernel/cgroup/cpuset.c 1575 */;
	struct cpuset_migrate_mm_work {
		struct work_struct work;
		struct mm_struct *mm;
		nodemask_t from;
		nodemask_t to;
	} cocci_id/* kernel/cgroup/cpuset.c 1565 */;
	enum subparts_cmd{partcmd_enable, partcmd_disable, partcmd_update,} cocci_id/* kernel/cgroup/cpuset.c 1069 */;
	struct cpumask *cocci_id/* kernel/cgroup/cpuset.c 1053 */;
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/cgroup.c 983 */[];
	char cocci_id/* kernel/cgroup/cgroup.c 89 */[TRACE_CGROUP_PATH_LEN];
	const struct attribute_group cocci_id/* kernel/cgroup/cgroup.c 6377 */;
	struct attribute *cocci_id/* kernel/cgroup/cgroup.c 6371 */[];
	struct kobj_attribute cocci_id/* kernel/cgroup/cgroup.c 6362 */;
	struct kobj_attribute *cocci_id/* kernel/cgroup/cgroup.c 6345 */;
	struct sock_cgroup_data *cocci_id/* kernel/cgroup/cgroup.c 6245 */;
	struct file_system_type *cocci_id/* kernel/cgroup/cgroup.c 6069 */;
	void __init __weak cocci_id/* kernel/cgroup/cgroup.c 6046 */;
	const struct cgroup *cocci_id/* kernel/cgroup/cgroup.c 602 */;
	struct css_set *cocci_id/* kernel/cgroup/cgroup.c 5981 */;
	struct cgroup_fs_context __initdata cocci_id/* kernel/cgroup/cgroup.c 5604 */;
	void __init cocci_id/* kernel/cgroup/cgroup.c 5543 */;
	struct cgroup_subsys_state cocci_id/* kernel/cgroup/cgroup.c 4899 */;
	struct css_task_iter *cocci_id/* kernel/cgroup/cgroup.c 4610 */;
	struct kernfs_ops *cocci_id/* kernel/cgroup/cgroup.c 3945 */;
	struct cgroup_file *cocci_id/* kernel/cgroup/cgroup.c 3838 */;
	struct lock_class_key *cocci_id/* kernel/cgroup/cgroup.c 3817 */;
	char cocci_id/* kernel/cgroup/cgroup.c 3815 */[CGROUP_FILE_NAME_MAX];
	struct cgroup_file cocci_id/* kernel/cgroup/cgroup.c 3808 */;
	struct timer_list *cocci_id/* kernel/cgroup/cgroup.c 3806 */;
	struct iattr cocci_id/* kernel/cgroup/cgroup.c 3795 */;
	struct kernfs_ops cocci_id/* kernel/cgroup/cgroup.c 3780 */;
	__poll_t cocci_id/* kernel/cgroup/cgroup.c 3728 */;
	poll_table *cocci_id/* kernel/cgroup/cgroup.c 3728 */;
	struct cgroup_namespace *cocci_id/* kernel/cgroup/cgroup.c 3681 */;
	struct psi_trigger *cocci_id/* kernel/cgroup/cgroup.c 3571 */;
	enum psi_res cocci_id/* kernel/cgroup/cgroup.c 3569 */;
	struct psi_group *cocci_id/* kernel/cgroup/cgroup.c 3563 */;
	struct cgroup __maybe_unused *cocci_id/* kernel/cgroup/cgroup.c 3535 */;
	int __maybe_unused cocci_id/* kernel/cgroup/cgroup.c 3514 */;
	struct cgroup_mgctx *cocci_id/* kernel/cgroup/cgroup.c 2686 */;
	struct cgroup_taskset *cocci_id/* kernel/cgroup/cgroup.c 2392 */;
	struct task_struct cocci_id/* kernel/cgroup/cgroup.c 2352 */;
	struct css_set cocci_id/* kernel/cgroup/cgroup.c 2329 */;
	struct cgroup_subsys_state **cocci_id/* kernel/cgroup/cgroup.c 2327 */;
	int cocci_id/* kernel/cgroup/cgroup.c 225 */(struct cgroup_subsys_state *css,
						     struct cgroup *cgrp,
						     struct cftype cfts[],
						     bool is_add);
	void cocci_id/* kernel/cgroup/cgroup.c 224 */(struct cgroup_subsys_state *css);
	void cocci_id/* kernel/cgroup/cgroup.c 223 */(struct percpu_ref *ref);
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/cgroup.c 221 */(struct cgroup *cgrp,
									     struct cgroup_subsys *ss);
	void cocci_id/* kernel/cgroup/cgroup.c 218 */(struct css_task_iter *it,
						      struct task_struct *task);
	void cocci_id/* kernel/cgroup/cgroup.c 217 */(struct cgroup *cgrp,
						      int ret);
	int cocci_id/* kernel/cgroup/cgroup.c 216 */(struct cgroup *cgrp);
	struct cgroup_fs_context cocci_id/* kernel/cgroup/cgroup.c 2120 */;
	struct cgroup_namespace cocci_id/* kernel/cgroup/cgroup.c 205 */;
	struct kernfs_syscall_ops *cocci_id/* kernel/cgroup/cgroup.c 1931 */;
	enum cgroup2_param{Opt_nsdelegate, Opt_memory_localevents, nr__cgroup2_params,} cocci_id/* kernel/cgroup/cgroup.c 1813 */;
	struct cgroup_root cocci_id/* kernel/cgroup/cgroup.c 161 */;
	const struct cftype *cocci_id/* kernel/cgroup/cgroup.c 1489 */;
	struct cgroup_subsys_state *cocci_id/* kernel/cgroup/cgroup.c 1181 */[CGROUP_SUBSYS_COUNT];
	struct cgrp_cset_link cocci_id/* kernel/cgroup/cgroup.c 1028 */;
	struct cgroup_subsys *cocci_id/* kernel/cgroup/cgroup-v1.c 910 */;
	struct cgroup_fs_context *cocci_id/* kernel/cgroup/cgroup-v1.c 909 */;
	enum cgroup1_param{Opt_all, Opt_clone_children, Opt_cpuset_v2_mode, Opt_name, Opt_none, Opt_noprefix, Opt_release_agent, Opt_xattr,} cocci_id/* kernel/cgroup/cgroup-v1.c 879 */;
	struct kernfs_node *cocci_id/* kernel/cgroup/cgroup-v1.c 818 */;
	char *cocci_id/* kernel/cgroup/cgroup-v1.c 780 */[3];
	void __rcu __force **cocci_id/* kernel/cgroup/cgroup-v1.c 710 */;
	struct cgroupstats *cocci_id/* kernel/cgroup/cgroup-v1.c 690 */;
	struct cftype cocci_id/* kernel/cgroup/cgroup-v1.c 613 */[];
	struct cftype *cocci_id/* kernel/cgroup/cgroup-v1.c 597 */;
	struct kernfs_open_file *cocci_id/* kernel/cgroup/cgroup-v1.c 490 */;
	pid_t *cocci_id/* kernel/cgroup/cgroup-v1.c 468 */;
	struct workqueue_struct *cocci_id/* kernel/cgroup/cgroup-v1.c 41 */;
	struct cgroup_pidlist cocci_id/* kernel/cgroup/cgroup-v1.c 216 */;
	struct delayed_work *cocci_id/* kernel/cgroup/cgroup-v1.c 215 */;
	struct cgroup_pidlist *cocci_id/* kernel/cgroup/cgroup-v1.c 202 */;
	struct cgroup_pidlist {
		struct {
			type;
			struct pid_namespace *ns;
		} key;
		pid_t *list;
		int length;
		struct list_head links;
		struct cgroup *owner;
		struct delayed_work destroy_dwork;
	} cocci_id/* kernel/cgroup/cgroup-v1.c 178 */;
	enum cgroup_filetype{CGROUP_FILE_PROCS, CGROUP_FILE_TASKS,} cocci_id/* kernel/cgroup/cgroup-v1.c 167 */;
	struct kernfs_syscall_ops cocci_id/* kernel/cgroup/cgroup-v1.c 1097 */;
	struct cgroup_root *cocci_id/* kernel/cgroup/cgroup-v1.c 1045 */;
	struct kernfs_root *cocci_id/* kernel/cgroup/cgroup-v1.c 1044 */;
	struct css_task_iter cocci_id/* kernel/cgroup/cgroup-v1.c 102 */;
	struct cgrp_cset_link *cocci_id/* kernel/cgroup/cgroup-v1.c 101 */;
	cap_user_header_t cocci_id/* kernel/capability.c 82 */;
	struct user_namespace *cocci_id/* kernel/capability.c 504 */;
	const kernel_cap_t cocci_id/* kernel/capability.c 27 */;
	struct cred *cocci_id/* kernel/capability.c 227 */;
	const cap_user_data_t cocci_id/* kernel/capability.c 222 */;
	struct __user_cap_data_struct cocci_id/* kernel/capability.c 196 */;
	struct __user_cap_data_struct cocci_id/* kernel/capability.c 167 */[_KERNEL_CAPABILITY_U32S];
	kernel_cap_t cocci_id/* kernel/capability.c 153 */;
	cap_user_data_t cocci_id/* kernel/capability.c 148 */;
	struct xsk_map *cocci_id/* kernel/bpf/xskmap.c 76 */;
	struct xdp_sock *cocci_id/* kernel/bpf/xskmap.c 240 */;
	struct xdp_sock **cocci_id/* kernel/bpf/xskmap.c 24 */;
	struct xsk_map cocci_id/* kernel/bpf/xskmap.c 239 */;
	struct xsk_map_node *cocci_id/* kernel/bpf/xskmap.c 23 */;
	struct xsk_sock *cocci_id/* kernel/bpf/xskmap.c 152 */;
	struct bpf_verifier_state_list *cocci_id/* kernel/bpf/verifier.c 9757 */;
	struct bpf_verifier_env cocci_id/* kernel/bpf/verifier.c 9681 */;
	const char cocci_id/* kernel/bpf/verifier.c 9512 */[];
	int (*cocci_id/* kernel/bpf/verifier.c 9385 */)(struct bpf_map *map,
							void *value);
	int (*cocci_id/* kernel/bpf/verifier.c 9382 */)(struct bpf_map *map,
							void *value,
							u64 flags);
	int (*cocci_id/* kernel/bpf/verifier.c 9379 */)(struct bpf_map *map,
							void *key,
							void *value,
							u64 flags);
	int (*cocci_id/* kernel/bpf/verifier.c 9377 */)(struct bpf_map *map,
							void *key);
	struct bpf_jit_poke_descriptor cocci_id/* kernel/bpf/verifier.c 9289 */;
	const u8 cocci_id/* kernel/bpf/verifier.c 9205 */;
	struct bpf_reg_state cocci_id/* kernel/bpf/verifier.c 919 */;
	void cocci_id/* kernel/bpf/verifier.c 910 */(struct bpf_reg_state *reg);
	const int cocci_id/* kernel/bpf/verifier.c 906 */[CALLER_SAVED_REGS];
	struct bpf_insn cocci_id/* kernel/bpf/verifier.c 8792 */[];
	bpf_convert_ctx_access_t cocci_id/* kernel/bpf/verifier.c 8775 */;
	const struct bpf_verifier_ops *cocci_id/* kernel/bpf/verifier.c 8740 */;
	struct bpf_verifier_stack_elem cocci_id/* kernel/bpf/verifier.c 866 */;
	const struct bpf_insn cocci_id/* kernel/bpf/verifier.c 8636 */;
	struct bpf_verifier_stack_elem *cocci_id/* kernel/bpf/verifier.c 835 */;
	struct bpf_insn_aux_data cocci_id/* kernel/bpf/verifier.c 8349 */;
	struct bpf_insn_aux_data *cocci_id/* kernel/bpf/verifier.c 8334 */;
	struct bpf_idx_pair cocci_id/* kernel/bpf/verifier.c 775 */;
	struct bpf_verifier_state cocci_id/* kernel/bpf/verifier.c 7729 */;
	const struct bpf_verifier_state *cocci_id/* kernel/bpf/verifier.c 772 */;
	struct bpf_func_state cocci_id/* kernel/bpf/verifier.c 764 */;
	struct bpf_verifier_state_list cocci_id/* kernel/bpf/verifier.c 7622 */;
	const struct bpf_func_state *cocci_id/* kernel/bpf/verifier.c 756 */;
	struct idpair cocci_id/* kernel/bpf/verifier.c 7285 */;
	enum bpf_reg_liveness cocci_id/* kernel/bpf/verifier.c 6969 */;
	struct idpair *cocci_id/* kernel/bpf/verifier.c 6947 */;
	struct idpair {
		u32 old;
		u32 cur;
	} cocci_id/* kernel/bpf/verifier.c 6932 */;
	struct bpf_subprog_info *cocci_id/* kernel/bpf/verifier.c 6777 */;
	struct bpf_func_info_aux *cocci_id/* kernel/bpf/verifier.c 6653 */;
	struct bpf_func_info *cocci_id/* kernel/bpf/verifier.c 6652 */;
	struct bpf_verifier_state_list **cocci_id/* kernel/bpf/verifier.c 6448 */;
	enum{DISCOVERED=0x10, EXPLORED=0x20, FALLTHROUGH=1, BRANCH=2,} cocci_id/* kernel/bpf/verifier.c 6436 */;
	struct bpf_stack_state cocci_id/* kernel/bpf/verifier.c 632 */;
	struct bpf_stack_state *cocci_id/* kernel/bpf/verifier.c 619 */;
	char cocci_id/* kernel/bpf/verifier.c 557 */[BPF_REG_SIZE + 1];
	enum bpf_reg_type cocci_id/* kernel/bpf/verifier.c 5314 */;
	char cocci_id/* kernel/bpf/verifier.c 452 */[];
	const struct bpf_verifier_env *cocci_id/* kernel/bpf/verifier.c 4465 */;
	struct bpf_call_arg_meta cocci_id/* kernel/bpf/verifier.c 4178 */;
	struct bpf_call_arg_meta *cocci_id/* kernel/bpf/verifier.c 3406 */;
	enum bpf_arg_type cocci_id/* kernel/bpf/verifier.c 3388 */;
	char cocci_id/* kernel/bpf/verifier.c 3124 */[48];
	int cocci_id/* kernel/bpf/verifier.c 2672 */[MAX_CALL_FRAMES];
	const struct bpf_verifier_ops *constcocci_id/* kernel/bpf/verifier.c 25 */[];
	const struct bpf_reg_state *cocci_id/* kernel/bpf/verifier.c 2491 */;
	struct bpf_flow_keys cocci_id/* kernel/bpf/verifier.c 2437 */;
	struct bpf_insn_access_aux cocci_id/* kernel/bpf/verifier.c 2403 */;
	enum bpf_reg_type *cocci_id/* kernel/bpf/verifier.c 2400 */;
	const struct bpf_call_arg_meta *cocci_id/* kernel/bpf/verifier.c 2305 */;
	struct bpf_call_arg_meta {
		struct bpf_map *map_ptr;
		bool raw_mode;
		bool pkt_access;
		int regno;
		int access_size;
		s64 msize_smax_value;
		u64 msize_umax_value;
		int ref_obj_id;
		int func_id;
		u32 btf_id;
	} cocci_id/* kernel/bpf/verifier.c 224 */;
	const struct bpf_insn_aux_data *cocci_id/* kernel/bpf/verifier.c 211 */;
	struct bpf_verifier_stack_elem {
		struct bpf_verifier_state st;
		int insn_idx;
		int prev_insn_idx;
		struct bpf_verifier_stack_elem *next;
	} cocci_id/* kernel/bpf/verifier.c 160 */;
	const struct bpf_insn_cbs cocci_id/* kernel/bpf/verifier.c 1511 */;
	struct bpf_idx_pair *cocci_id/* kernel/bpf/verifier.c 1474 */;
	enum reg_arg_type cocci_id/* kernel/bpf/verifier.c 1425 */;
	enum reg_arg_type{SRC_OP, DST_OP, DST_OP_NO_MARK,} cocci_id/* kernel/bpf/verifier.c 1141 */;
	struct bpf_prog **cocci_id/* kernel/bpf/trampoline.c 238 */;
	int __weak cocci_id/* kernel/bpf/trampoline.c 236 */;
	void notrace cocci_id/* kernel/bpf/trampoline.c 215 */;
	u64 notrace cocci_id/* kernel/bpf/trampoline.c 204 */;
	struct bpf_trampoline *cocci_id/* kernel/bpf/trampoline.c 134 */;
	enum bpf_tramp_prog_type cocci_id/* kernel/bpf/trampoline.c 121 */;
	struct hlist_head cocci_id/* kernel/bpf/trampoline.c 11 */[TRAMPOLINE_TABLE_SIZE];
	const struct tnum cocci_id/* kernel/bpf/tnum.c 14 */;
	struct tnum cocci_id/* kernel/bpf/tnum.c 112 */;
	struct kobject *cocci_id/* kernel/bpf/sysfs_btf.c 29 */;
	struct bin_attribute cocci_id/* kernel/bpf/sysfs_btf.c 24 */;
	struct bin_attribute *cocci_id/* kernel/bpf/sysfs_btf.c 17 */;
	unsigned char __user *cocci_id/* kernel/bpf/syscall.c 68 */;
	const struct vm_operations_struct cocci_id/* kernel/bpf/syscall.c 471 */;
	const struct bpf_map_ops *constcocci_id/* kernel/bpf/syscall.c 46 */[];
	const struct bpf_array *cocci_id/* kernel/bpf/syscall.c 392 */;
	fmode_t cocci_id/* kernel/bpf/syscall.c 376 */;
	struct bpf_map cocci_id/* kernel/bpf/syscall.c 321 */;
	union bpf_attr cocci_id/* kernel/bpf/syscall.c 2991 */;
	struct files_struct *cocci_id/* kernel/bpf/syscall.c 2918 */;
	const struct perf_event *cocci_id/* kernel/bpf/syscall.c 2917 */;
	struct bpf_map_info cocci_id/* kernel/bpf/syscall.c 2755 */;
	struct bpf_map_info __user *cocci_id/* kernel/bpf/syscall.c 2754 */;
	__u8 __user *cocci_id/* kernel/bpf/syscall.c 2723 */[BPF_TAG_SIZE];
	__u64 __user *cocci_id/* kernel/bpf/syscall.c 2705 */;
	__u8 __user *cocci_id/* kernel/bpf/syscall.c 2689 */;
	u64 __user *cocci_id/* kernel/bpf/syscall.c 2618 */;
	u32 __user *cocci_id/* kernel/bpf/syscall.c 2509 */;
	struct bpf_prog_info cocci_id/* kernel/bpf/syscall.c 2480 */;
	struct bpf_prog_info __user *cocci_id/* kernel/bpf/syscall.c 2479 */;
	struct bpf_line_info cocci_id/* kernel/bpf/syscall.c 2461 */;
	struct bpf_func_info cocci_id/* kernel/bpf/syscall.c 2457 */;
	struct bpf_map_memory *cocci_id/* kernel/bpf/syscall.c 242 */;
	spinlock_t *cocci_id/* kernel/bpf/syscall.c 2283 */;
	struct idr *cocci_id/* kernel/bpf/syscall.c 2282 */;
	struct bpf_raw_event_map *cocci_id/* kernel/bpf/syscall.c 1947 */;
	struct bpf_raw_tracepoint *cocci_id/* kernel/bpf/syscall.c 1946 */;
	struct bpf_raw_tracepoint {
		struct bpf_raw_event_map *btp;
		struct bpf_prog *prog;
	} cocci_id/* kernel/bpf/syscall.c 1918 */;
	char cocci_id/* kernel/bpf/syscall.c 1707 */[128];
	enum bpf_prog_type *cocci_id/* kernel/bpf/syscall.c 1580 */;
	char cocci_id/* kernel/bpf/syscall.c 1472 */[sizeof(prog->tag) * 2 + 1];
	const struct bpf_prog_stats *cocci_id/* kernel/bpf/syscall.c 1451 */;
	const gfp_t cocci_id/* kernel/bpf/syscall.c 143 */;
	struct user_struct *cocci_id/* kernel/bpf/syscall.c 1309 */;
	const struct bpf_prog_ops *cocci_id/* kernel/bpf/syscall.c 1292 */;
	const struct bpf_prog_ops *constcocci_id/* kernel/bpf/syscall.c 1281 */[];
	const struct bpf_map_ops *cocci_id/* kernel/bpf/syscall.c 104 */;
	struct stack_map_bucket cocci_id/* kernel/bpf/stackmap.c 63 */;
	struct stack_map_bucket *cocci_id/* kernel/bpf/stackmap.c 523 */;
	struct bpf_stack_map cocci_id/* kernel/bpf/stackmap.c 522 */;
	struct bpf_stack_map *cocci_id/* kernel/bpf/stackmap.c 522 */;
	struct stack_map_irq_work cocci_id/* kernel/bpf/stackmap.c 43 */;
	struct stack_map_irq_work *cocci_id/* kernel/bpf/stackmap.c 41 */;
	struct irq_work *cocci_id/* kernel/bpf/stackmap.c 39 */;
	struct stack_map_irq_work {
		struct irq_work irq_work;
		struct rw_semaphore *sem;
	} cocci_id/* kernel/bpf/stackmap.c 34 */;
	struct bpf_stack_build_id *cocci_id/* kernel/bpf/stackmap.c 282 */;
	struct bpf_stack_map {
		struct bpf_map map;
		void *elems;
		struct pcpu_freelist freelist;
		u32 n_buckets;
		struct stack_map_bucket *buckets[];
	} cocci_id/* kernel/bpf/stackmap.c 25 */;
	Elf32_Ehdr *cocci_id/* kernel/bpf/stackmap.c 247 */;
	Elf64_Phdr cocci_id/* kernel/bpf/stackmap.c 230 */;
	Elf64_Ehdr cocci_id/* kernel/bpf/stackmap.c 230 */;
	Elf64_Phdr *cocci_id/* kernel/bpf/stackmap.c 225 */;
	Elf64_Ehdr *cocci_id/* kernel/bpf/stackmap.c 224 */;
	Elf32_Phdr cocci_id/* kernel/bpf/stackmap.c 207 */;
	Elf32_Ehdr cocci_id/* kernel/bpf/stackmap.c 207 */;
	Elf32_Phdr *cocci_id/* kernel/bpf/stackmap.c 202 */;
	struct stack_map_bucket {
		struct pcpu_freelist_node fnode;
		u32 hash;
		u32 nr;
		u64 data[];
	} cocci_id/* kernel/bpf/stackmap.c 18 */;
	Elf32_Nhdr *cocci_id/* kernel/bpf/stackmap.c 174 */;
	Elf32_Nhdr cocci_id/* kernel/bpf/stackmap.c 173 */;
	Elf32_Word cocci_id/* kernel/bpf/stackmap.c 161 */;
	struct bpf_stack_build_id cocci_id/* kernel/bpf/stackmap.c 104 */;
	struct socket *cocci_id/* kernel/bpf/reuseport_array.c 255 */;
	struct sock_reuseport *cocci_id/* kernel/bpf/reuseport_array.c 253 */;
	struct reuseport_array *cocci_id/* kernel/bpf/reuseport_array.c 251 */;
	struct sock __rcu **cocci_id/* kernel/bpf/reuseport_array.c 23 */;
	const struct sock_reuseport *cocci_id/* kernel/bpf/reuseport_array.c 207 */;
	const struct sock *cocci_id/* kernel/bpf/reuseport_array.c 205 */;
	const struct reuseport_array *cocci_id/* kernel/bpf/reuseport_array.c 204 */;
	struct reuseport_array {
		struct bpf_map map;
		struct sock __rcu *ptrs[];
	} cocci_id/* kernel/bpf/reuseport_array.c 10 */;
	struct bpf_queue_stack cocci_id/* kernel/bpf/queue_stack_maps.c 27 */;
	struct bpf_queue_stack {
		struct bpf_map map;
		raw_spinlock_t lock;
		u32 head,tail;
		u32 size;
		char elements[0]__aligned(8);
	} cocci_id/* kernel/bpf/queue_stack_maps.c 16 */;
	struct bpf_queue_stack *cocci_id/* kernel/bpf/queue_stack_maps.c 116 */;
	struct pcpu_freelist *cocci_id/* kernel/bpf/percpu_freelist.c 84 */;
	struct pcpu_freelist_head *cocci_id/* kernel/bpf/percpu_freelist.c 28 */;
	struct pcpu_freelist_head cocci_id/* kernel/bpf/percpu_freelist.c 10 */;
	const struct bpf_prog_offload_ops *cocci_id/* kernel/bpf/offload.c 673 */;
	struct bpf_offload_dev *cocci_id/* kernel/bpf/offload.c 672 */;
	struct bpf_offload_netdev cocci_id/* kernel/bpf/offload.c 647 */;
	struct rhashtable cocci_id/* kernel/bpf/offload.c 58 */;
	struct bpf_prog_offload *cocci_id/* kernel/bpf/offload.c 550 */;
	struct bpf_offload_netdev *cocci_id/* kernel/bpf/offload.c 549 */;
	struct ns_get_path_bpf_map_args cocci_id/* kernel/bpf/offload.c 523 */;
	struct bpf_map_info *cocci_id/* kernel/bpf/offload.c 521 */;
	const struct rhashtable_params cocci_id/* kernel/bpf/offload.c 50 */;
	struct ns_get_path_bpf_map_args *cocci_id/* kernel/bpf/offload.c 498 */;
	struct ns_common *cocci_id/* kernel/bpf/offload.c 496 */;
	struct ns_get_path_bpf_map_args {
		struct bpf_offloaded_map *offmap;
		struct bpf_map_info *info;
	} cocci_id/* kernel/bpf/offload.c 491 */;
	struct bpf_offloaded_map *cocci_id/* kernel/bpf/offload.c 411 */;
	struct bpf_offload_netdev {
		struct rhash_head l;
		struct net_device *netdev;
		struct bpf_offload_dev *offdev;
		struct list_head progs;
		struct list_head maps;
		struct list_head offdev_netdevs;
	} cocci_id/* kernel/bpf/offload.c 41 */;
	struct bpf_offload_dev {
		const struct bpf_prog_offload_ops *ops;
		struct list_head netdevs;
		void *priv;
	} cocci_id/* kernel/bpf/offload.c 35 */;
	struct netdev_bpf cocci_id/* kernel/bpf/offload.c 349 */;
	enum bpf_netdev_command cocci_id/* kernel/bpf/offload.c 347 */;
	struct ns_get_path_bpf_prog_args cocci_id/* kernel/bpf/offload.c 297 */;
	struct bpf_prog_info *cocci_id/* kernel/bpf/offload.c 294 */;
	struct ns_get_path_bpf_prog_args *cocci_id/* kernel/bpf/offload.c 270 */;
	struct ns_get_path_bpf_prog_args {
		struct bpf_prog *prog;
		struct bpf_prog_info *info;
	} cocci_id/* kernel/bpf/offload.c 263 */;
	struct lpm_trie_node **cocci_id/* kernel/bpf/lpm_trie.c 635 */;
	struct lpm_trie *cocci_id/* kernel/bpf/lpm_trie.c 542 */;
	struct lpm_trie_node __rcu **cocci_id/* kernel/bpf/lpm_trie.c 435 */;
	struct bpf_lpm_trie_key *cocci_id/* kernel/bpf/lpm_trie.c 434 */;
	struct lpm_trie cocci_id/* kernel/bpf/lpm_trie.c 433 */;
	struct lpm_trie {
		struct bpf_map map;
		struct lpm_trie_node __rcu *root;
		size_t n_entries;
		size_t max_prefixlen;
		size_t data_size;
		raw_spinlock_t lock;
	} cocci_id/* kernel/bpf/lpm_trie.c 31 */;
	struct lpm_trie_node *cocci_id/* kernel/bpf/lpm_trie.c 276 */;
	struct lpm_trie_node {
		struct rcu_head rcu;
		struct lpm_trie_node __rcu *child[2];
		u32 prefixlen;
		u32 flags;
		u8 data[0];
	} cocci_id/* kernel/bpf/lpm_trie.c 23 */;
	__be16 *cocci_id/* kernel/bpf/lpm_trie.c 205 */;
	struct bpf_lpm_trie_key cocci_id/* kernel/bpf/lpm_trie.c 172 */;
	struct lpm_trie_node cocci_id/* kernel/bpf/lpm_trie.c 171 */;
	const struct bpf_lpm_trie_key *cocci_id/* kernel/bpf/lpm_trie.c 166 */;
	const struct lpm_trie_node *cocci_id/* kernel/bpf/lpm_trie.c 165 */;
	const struct lpm_trie *cocci_id/* kernel/bpf/lpm_trie.c 164 */;
	const u8 *cocci_id/* kernel/bpf/lpm_trie.c 151 */;
	struct rb_node **cocci_id/* kernel/bpf/local_storage.c 88 */;
	struct rb_root *cocci_id/* kernel/bpf/local_storage.c 585 */;
	struct rb_node *cocci_id/* kernel/bpf/local_storage.c 53 */;
	struct bpf_cgroup_storage_map *cocci_id/* kernel/bpf/local_storage.c 513 */;
	struct bpf_cgroup_storage cocci_id/* kernel/bpf/local_storage.c 495 */;
	struct bpf_cgroup_storage *cocci_id/* kernel/bpf/local_storage.c 477 */;
	struct bpf_storage_buffer cocci_id/* kernel/bpf/local_storage.c 465 */;
	struct bpf_cgroup_storage_key cocci_id/* kernel/bpf/local_storage.c 360 */;
	const struct bpf_cgroup_storage_key *cocci_id/* kernel/bpf/local_storage.c 34 */;
	struct btf_member *cocci_id/* kernel/bpf/local_storage.c 338 */;
	struct bpf_cgroup_storage_map cocci_id/* kernel/bpf/local_storage.c 295 */;
	struct bpf_cgroup_storage_map {
		struct bpf_map map;
		spinlock_t lock;
		struct bpf_prog *prog;
		struct rb_root root;
		struct list_head list;
	} cocci_id/* kernel/bpf/local_storage.c 19 */;
	struct bpf_cgroup_storage_key *cocci_id/* kernel/bpf/local_storage.c 174 */;
	struct bpf_storage_buffer *cocci_id/* kernel/bpf/local_storage.c 132 */;
	const struct inode_operations cocci_id/* kernel/bpf/inode.c 76 */;
	struct file_system_type cocci_id/* kernel/bpf/inode.c 682 */;
	struct bpf_mount_opts cocci_id/* kernel/bpf/inode.c 671 */;
	const struct fs_context_operations cocci_id/* kernel/bpf/inode.c 658 */;
	struct bpf_mount_opts *cocci_id/* kernel/bpf/inode.c 630 */;
	const struct tree_descr cocci_id/* kernel/bpf/inode.c 629 */[];
	struct super_block *cocci_id/* kernel/bpf/inode.c 627 */;
	struct fs_context *cocci_id/* kernel/bpf/inode.c 627 */;
	enum bpf_type *cocci_id/* kernel/bpf/inode.c 62 */;
	struct fs_parse_result cocci_id/* kernel/bpf/inode.c 607 */;
	struct fs_parameter *cocci_id/* kernel/bpf/inode.c 604 */;
	struct bpf_mount_opts {
		umode_t mode;
	} cocci_id/* kernel/bpf/inode.c 600 */;
	const struct fs_parameter_description cocci_id/* kernel/bpf/inode.c 595 */;
	const struct fs_parameter_spec cocci_id/* kernel/bpf/inode.c 590 */[];
	enum{OPT_MODE,} cocci_id/* kernel/bpf/inode.c 586 */;
	const struct super_operations cocci_id/* kernel/bpf/inode.c 579 */;
	const struct filename *cocci_id/* kernel/bpf/inode.c 448 */;
	const struct file_operations *cocci_id/* kernel/bpf/inode.c 309 */;
	const struct inode_operations *cocci_id/* kernel/bpf/inode.c 308 */;
	enum bpf_type cocci_id/* kernel/bpf/inode.c 30 */;
	struct map_iter *cocci_id/* kernel/bpf/inode.c 253 */;
	const struct seq_operations cocci_id/* kernel/bpf/inode.c 243 */;
	enum bpf_type{BPF_TYPE_UNSPEC=0, BPF_TYPE_PROG, BPF_TYPE_MAP,} cocci_id/* kernel/bpf/inode.c 24 */;
	struct map_iter {
		void *key;
		bool done;
	} cocci_id/* kernel/bpf/inode.c 151 */;
	long long *cocci_id/* kernel/bpf/helpers.c 416 */;
	unsigned long long *cocci_id/* kernel/bpf/helpers.c 365 */;
	bpf_get_current_cgroup_id cocci_id/* kernel/bpf/helpers.c 316 */;
	atomic_t *cocci_id/* kernel/bpf/helpers.c 246 */;
	union {
		__u32 val;
		arch_spinlock_t lock;
	} cocci_id/* kernel/bpf/helpers.c 224 */;
	arch_spinlock_t *cocci_id/* kernel/bpf/helpers.c 223 */;
	struct bpf_spin_lock *cocci_id/* kernel/bpf/helpers.c 221 */;
	bpf_get_current_uid_gid cocci_id/* kernel/bpf/helpers.c 171 */;
	bpf_get_current_pid_tgid cocci_id/* kernel/bpf/helpers.c 155 */;
	bpf_ktime_get_ns cocci_id/* kernel/bpf/helpers.c 143 */;
	bpf_get_numa_node_id cocci_id/* kernel/bpf/helpers.c 132 */;
	bpf_get_smp_processor_id cocci_id/* kernel/bpf/helpers.c 121 */;
	void __percpu **cocci_id/* kernel/bpf/hashtab.c 87 */;
	const struct bpf_htab *cocci_id/* kernel/bpf/hashtab.c 715 */;
	bool cocci_id/* kernel/bpf/hashtab.c 60 */(void *arg,
						   struct bpf_lru_node *node);
	void *(*cocci_id/* kernel/bpf/hashtab.c 550 */)(struct bpf_map *map,
							void *key);
	struct htab_elem *cocci_id/* kernel/bpf/hashtab.c 521 */;
	struct htab_elem {
		union {
			struct hlist_nulls_node hash_node;
			struct {
				void *padding;
				union {
					struct bpf_htab *htab;
					struct pcpu_freelist_node fnode;
				};
			};
		};
		union {
			struct rcu_head rcu;
			struct bpf_lru_node lru_node;
		};
		u32 hash;
		char key[0]__aligned(8);
	} cocci_id/* kernel/bpf/hashtab.c 41 */;
	struct bucket cocci_id/* kernel/bpf/hashtab.c 343 */;
	struct bpf_htab {
		struct bpf_map map;
		struct bucket *buckets;
		void *elems;
		union {
			struct pcpu_freelist freelist;
			struct bpf_lru lru;
		};
		struct htab_elem *__percpu*extra_elems;
		atomic_t count;
		u32 n_buckets;
		u32 elem_size;
		u32 hashrnd;
	} cocci_id/* kernel/bpf/hashtab.c 25 */;
	struct htab_elem cocci_id/* kernel/bpf/hashtab.c 218 */;
	struct pcpu_freelist_node *cocci_id/* kernel/bpf/hashtab.c 205 */;
	struct htab_elem *__percpu*cocci_id/* kernel/bpf/hashtab.c 204 */;
	struct bucket {
		struct hlist_nulls_head head;
		raw_spinlock_t lock;
	} cocci_id/* kernel/bpf/hashtab.c 20 */;
	struct hlist_nulls_node *cocci_id/* kernel/bpf/hashtab.c 1178 */;
	struct bucket *cocci_id/* kernel/bpf/hashtab.c 1036 */;
	struct hlist_nulls_head *cocci_id/* kernel/bpf/hashtab.c 1034 */;
	struct bpf_htab cocci_id/* kernel/bpf/hashtab.c 1032 */;
	struct bpf_htab *cocci_id/* kernel/bpf/hashtab.c 1032 */;
	const char *constcocci_id/* kernel/bpf/disasm.c 83 */[];
	const char *constcocci_id/* kernel/bpf/disasm.c 66 */[16];
	const char *constcocci_id/* kernel/bpf/disasm.c 55 */[8];
	char cocci_id/* kernel/bpf/disasm.c 202 */[64];
	const struct bpf_insn_cbs *cocci_id/* kernel/bpf/disasm.c 16 */;
	const bpf_insn_print_t cocci_id/* kernel/bpf/disasm.c 121 */;
	bpf_insn_print_t cocci_id/* kernel/bpf/disasm.c 107 */;
	struct _bpf_dtab_netdev cocci_id/* kernel/bpf/devmap.c 815 */;
	struct notifier_block cocci_id/* kernel/bpf/devmap.c 807 */;
	ulong cocci_id/* kernel/bpf/devmap.c 767 */;
	struct notifier_block *cocci_id/* kernel/bpf/devmap.c 766 */;
	struct bpf_dtab {
		struct bpf_map map;
		struct bpf_dtab_netdev **netdev_map;
		struct list_head __percpu *flush_list;
		struct list_head list;
		struct hlist_head *dev_index_head;
		spinlock_t index_lock;
		unsigned int items;
		u32 n_buckets;
	} cocci_id/* kernel/bpf/devmap.c 75 */;
	struct bpf_dtab_netdev {
		struct net_device *dev;
		struct hlist_node index_hlist;
		struct bpf_dtab *dtab;
		struct xdp_bulk_queue __percpu *bulkq;
		struct rcu_head rcu;
		unsigned int idx;
	} cocci_id/* kernel/bpf/devmap.c 66 */;
	struct bpf_dtab *cocci_id/* kernel/bpf/devmap.c 584 */;
	struct bpf_dtab_netdev *cocci_id/* kernel/bpf/devmap.c 583 */;
	struct xdp_bulk_queue {
		struct xdp_frame *q[DEV_MAP_BULK_SIZE];
		struct list_head flush_node;
		struct net_device *dev_rx;
		struct bpf_dtab_netdev *obj;
		unsigned int count;
	} cocci_id/* kernel/bpf/devmap.c 58 */;
	struct bpf_dtab_netdev cocci_id/* kernel/bpf/devmap.c 531 */;
	struct bpf_dtab cocci_id/* kernel/bpf/devmap.c 406 */;
	struct hlist_head *cocci_id/* kernel/bpf/devmap.c 293 */;
	struct hlist_node *cocci_id/* kernel/bpf/devmap.c 240 */;
	struct hlist_head cocci_id/* kernel/bpf/devmap.c 136 */;
	int cocci_id/* kernel/bpf/cpumap.c 78 */(struct xdp_bulk_queue *bq,
						 bool in_napi_ctx);
	struct bpf_cpu_map {
		struct bpf_map map;
		struct bpf_cpu_map_entry **cpu_map;
		struct list_head __percpu *flush_list;
	} cocci_id/* kernel/bpf/cpumap.c 71 */;
	struct bpf_cpu_map cocci_id/* kernel/bpf/cpumap.c 686 */;
	struct net_device *cocci_id/* kernel/bpf/cpumap.c 669 */;
	struct xdp_buff *cocci_id/* kernel/bpf/cpumap.c 668 */;
	struct bpf_cpu_map_entry {
		u32 cpu;
		int map_id;
		u32 qsize;
		struct xdp_bulk_queue __percpu *bulkq;
		struct bpf_cpu_map *cmap;
		struct ptr_ring *queue;
		struct task_struct *kthread;
		struct work_struct kthread_stop_wq;
		atomic_t refcnt;
		struct rcu_head rcu;
	} cocci_id/* kernel/bpf/cpumap.c 52 */;
	struct bpf_cpu_map *cocci_id/* kernel/bpf/cpumap.c 442 */;
	struct xdp_bulk_queue {
		void *q[CPU_MAP_BULK_SIZE];
		struct list_head flush_node;
		struct bpf_cpu_map_entry *obj;
		unsigned int count;
	} cocci_id/* kernel/bpf/cpumap.c 44 */;
	struct bpf_cpu_map_entry cocci_id/* kernel/bpf/cpumap.c 409 */;
	struct xdp_bulk_queue *cocci_id/* kernel/bpf/cpumap.c 339 */;
	struct bpf_cpu_map_entry *cocci_id/* kernel/bpf/cpumap.c 334 */;
	struct page *cocci_id/* kernel/bpf/cpumap.c 290 */;
	void *cocci_id/* kernel/bpf/cpumap.c 262 */[CPUMAP_BATCH];
	struct xdp_frame *cocci_id/* kernel/bpf/cpumap.c 229 */;
	struct ptr_ring *cocci_id/* kernel/bpf/cpumap.c 222 */;
	struct skb_shared_info cocci_id/* kernel/bpf/cpumap.c 192 */;
	struct xdp_frame cocci_id/* kernel/bpf/cpumap.c 172 */;
	s16 cocci_id/* kernel/bpf/core.c 951 */;
	bool *cocci_id/* kernel/bpf/core.c 912 */;
	bpf_jit_fill_hole_t cocci_id/* kernel/bpf/core.c 848 */;
	u8 **cocci_id/* kernel/bpf/core.c 846 */;
	struct bpf_binary_header *cocci_id/* kernel/bpf/core.c 845 */;
	void *__weakcocci_id/* kernel/bpf/core.c 835 */;
	u64 __weak cocci_id/* kernel/bpf/core.c 799 */;
	atomic_long_t cocci_id/* kernel/bpf/core.c 793 */;
	const u32 cocci_id/* kernel/bpf/core.c 764 */;
	const struct exception_table_entry *cocci_id/* kernel/bpf/core.c 714 */;
	const struct sk_buff *cocci_id/* kernel/bpf/core.c 63 */;
	struct latch_tree_root cocci_id/* kernel/bpf/core.c 619 */;
	const struct latch_tree_ops cocci_id/* kernel/bpf/core.c 612 */;
	struct bpf_prog_aux cocci_id/* kernel/bpf/core.c 583 */;
	const struct bpf_prog_aux *cocci_id/* kernel/bpf/core.c 581 */;
	struct latch_tree_node *cocci_id/* kernel/bpf/core.c 578 */;
	const struct bpf_binary_header *cocci_id/* kernel/bpf/core.c 533 */;
	struct bpf_insn cocci_id/* kernel/bpf/core.c 501 */;
	struct bpf_line_info *cocci_id/* kernel/bpf/core.c 416 */;
	const bool cocci_id/* kernel/bpf/core.c 375 */;
	const s32 cocci_id/* kernel/bpf/core.c 359 */;
	const s64 cocci_id/* kernel/bpf/core.c 341 */;
	__be64 *cocci_id/* kernel/bpf/core.c 276 */;
	__be32 *cocci_id/* kernel/bpf/core.c 275 */;
	u32 cocci_id/* kernel/bpf/core.c 270 */[SHA_WORKSPACE_WORDS];
	u32 cocci_id/* kernel/bpf/core.c 269 */[SHA_DIGEST_WORDS];
	__be64 cocci_id/* kernel/bpf/core.c 267 */;
	enum bpf_text_poke_type cocci_id/* kernel/bpf/core.c 2211 */;
	int __weak cocci_id/* kernel/bpf/core.c 2211 */;
	bool __weak cocci_id/* kernel/bpf/core.c 2188 */;
	void __weak cocci_id/* kernel/bpf/core.c 2184 */;
	struct bpf_prog *__weakcocci_id/* kernel/bpf/core.c 2176 */;
	bpf_ctx_copy_t cocci_id/* kernel/bpf/core.c 2156 */;
	u64 __weak cocci_id/* kernel/bpf/core.c 2154 */;
	const struct bpf_func_proto *__weakcocci_id/* kernel/bpf/core.c 2149 */;
	struct rnd_state *cocci_id/* kernel/bpf/core.c 2118 */;
	bpf_user_rnd_u32 cocci_id/* kernel/bpf/core.c 2110 */;
	struct bpf_prog_array_item *cocci_id/* kernel/bpf/core.c 1961 */;
	struct bpf_prog_array_item cocci_id/* kernel/bpf/core.c 1862 */;
	struct bpf_prog_array cocci_id/* kernel/bpf/core.c 1861 */;
	const struct bpf_line_info *cocci_id/* kernel/bpf/core.c 186 */;
	struct {
		struct bpf_prog_array hdr;
		struct bpf_prog *null_prog;
	} cocci_id/* kernel/bpf/core.c 1851 */;
	struct bpf_prog_dummy {
		struct bpf_prog prog;
	} cocci_id/* kernel/bpf/core.c 1837 */;
	const u32 *cocci_id/* kernel/bpf/core.c 183 */;
	const bool cocci_id/* kernel/bpf/core.c 1329 */[256];
	struct bpf_prog_stats *cocci_id/* kernel/bpf/core.c 123 */;
	struct bpf_prog_stats cocci_id/* kernel/bpf/core.c 115 */;
	struct bpf_insn cocci_id/* kernel/bpf/core.c 1122 */[16];
	struct bpf_sockopt_kern *cocci_id/* kernel/bpf/cgroup.c 957 */;
	struct bpf_prog_array *cocci_id/* kernel/bpf/cgroup.c 946 */;
	mm_segment_t cocci_id/* kernel/bpf/cgroup.c 896 */;
	struct bpf_sysctl_kern cocci_id/* kernel/bpf/cgroup.c 880 */;
	loff_t *cocci_id/* kernel/bpf/cgroup.c 877 */;
	struct ctl_table *cocci_id/* kernel/bpf/cgroup.c 875 */;
	struct ctl_table_header *cocci_id/* kernel/bpf/cgroup.c 874 */;
	const struct bpf_verifier_ops cocci_id/* kernel/bpf/cgroup.c 845 */;
	const struct bpf_prog_ops cocci_id/* kernel/bpf/cgroup.c 842 */;
	struct percpu_ref *cocci_id/* kernel/bpf/cgroup.c 77 */;
	struct bpf_cgroup_dev_ctx cocci_id/* kernel/bpf/cgroup.c 758 */;
	short cocci_id/* kernel/bpf/cgroup.c 754 */;
	struct bpf_sock_ops_kern *cocci_id/* kernel/bpf/cgroup.c 742 */;
	struct bpf_sock_addr_kern cocci_id/* kernel/bpf/cgroup.c 698 */;
	struct sockaddr *cocci_id/* kernel/bpf/cgroup.c 694 */;
	__u32 __user *cocci_id/* kernel/bpf/cgroup.c 494 */;
	struct cgroup cocci_id/* kernel/bpf/cgroup.c 38 */;
	typeof(*pl) cocci_id/* kernel/bpf/cgroup.c 363 */;
	struct bpf_prog_list *cocci_id/* kernel/bpf/cgroup.c 299 */;
	enum bpf_cgroup_storage_type cocci_id/* kernel/bpf/cgroup.c 298 */;
	struct bpf_cgroup_storage *cocci_id/* kernel/bpf/cgroup.c 296 */[MAX_BPF_CGROUP_STORAGE_TYPE];
	enum bpf_attach_type cocci_id/* kernel/bpf/cgroup.c 292 */;
	struct cgroup *cocci_id/* kernel/bpf/cgroup.c 291 */;
	struct cgroup_subsys_state *cocci_id/* kernel/bpf/cgroup.c 232 */;
	struct bpf_prog_array *cocci_id/* kernel/bpf/cgroup.c 201 */[NR];
	struct bpf_sockopt cocci_id/* kernel/bpf/cgroup.c 1497 */;
	const struct bpf_insn *cocci_id/* kernel/bpf/cgroup.c 1489 */;
	__u64 cocci_id/* kernel/bpf/cgroup.c 1457 */;
	enum bpf_func_id cocci_id/* kernel/bpf/cgroup.c 1403 */;
	struct bpf_prog_array **cocci_id/* kernel/bpf/cgroup.c 137 */;
	struct bpf_sysctl cocci_id/* kernel/bpf/cgroup.c 1340 */;
	const struct bpf_func_proto cocci_id/* kernel/bpf/cgroup.c 1229 */;
	const struct ctl_dir *cocci_id/* kernel/bpf/cgroup.c 1135 */;
	ssize_t cocci_id/* kernel/bpf/cgroup.c 1135 */;
	struct bpf_sockopt_kern cocci_id/* kernel/bpf/cgroup.c 1053 */;
	int __user *cocci_id/* kernel/bpf/cgroup.c 1049 */;
	struct resolve_vertex *cocci_id/* kernel/bpf/btf.c 996 */;
	const struct btf_verifier_env *cocci_id/* kernel/bpf/btf.c 962 */;
	struct btf cocci_id/* kernel/bpf/btf.c 906 */;
	struct btf_type **cocci_id/* kernel/bpf/btf.c 826 */;
	struct btf_type *cocci_id/* kernel/bpf/btf.c 815 */;
	u8 cocci_id/* kernel/bpf/btf.c 679 */;
	struct btf_verifier_env *cocci_id/* kernel/bpf/btf.c 673 */;
	char cocci_id/* kernel/bpf/btf.c 514 */;
	const struct btf_var *cocci_id/* kernel/bpf/btf.c 493 */;
	void __user *cocci_id/* kernel/bpf/btf.c 4222 */;
	struct bpf_btf_info cocci_id/* kernel/bpf/btf.c 4220 */;
	struct bpf_btf_info __user *cocci_id/* kernel/bpf/btf.c 4219 */;
	union bpf_attr __user *cocci_id/* kernel/bpf/btf.c 4217 */;
	const union bpf_attr *cocci_id/* kernel/bpf/btf.c 4216 */;
	struct fd cocci_id/* kernel/bpf/btf.c 4196 */;
	struct btf *cocci_id/* kernel/bpf/btf.c 4157 */;
	const struct file_operations cocci_id/* kernel/bpf/btf.c 4150 */;
	struct bpf_reg_state *cocci_id/* kernel/bpf/btf.c 4049 */;
	struct bpf_func_state *cocci_id/* kernel/bpf/btf.c 4048 */;
	struct bpf_verifier_state *cocci_id/* kernel/bpf/btf.c 4047 */;
	struct bpf_verifier_env *cocci_id/* kernel/bpf/btf.c 4045 */;
	struct btf_func_model *cocci_id/* kernel/bpf/btf.c 3997 */;
	const struct btf_type **cocci_id/* kernel/bpf/btf.c 3970 */;
	const struct bpf_func_proto *cocci_id/* kernel/bpf/btf.c 3947 */;
	const struct btf_param *cocci_id/* kernel/bpf/btf.c 3881 */;
	char cocci_id/* kernel/bpf/btf.c 3880 */[KSYM_SYMBOL_LEN + 4];
	struct bpf_verifier_log *cocci_id/* kernel/bpf/btf.c 3877 */;
	struct bpf_insn_access_aux *cocci_id/* kernel/bpf/btf.c 3633 */;
	enum bpf_access_type cocci_id/* kernel/bpf/btf.c 3631 */;
	const struct bpf_prog *cocci_id/* kernel/bpf/btf.c 3620 */;
	enum bpf_prog_type cocci_id/* kernel/bpf/btf.c 3478 */;
	u8 cocci_id/* kernel/bpf/btf.c 3468 */[];
	enum{

#define

BPF_PROG_TYPE

(

_id

,

_name

,

prog_ctx_type

,

kern_ctx_type

)

__ctx_convert

##

_id

,




#include <linux/bpf_types.h>


#undef

BPF_PROG_TYPE


__ctx_convert_unused,} cocci_id/* kernel/bpf/btf.c 3461 */; // err
	union {
		struct bpf_ctx_convert {
#define BPF_PROG_TYPE (_id, _name, prog_ctx_type, kern_ctx_type)prog_ctx_type _id##_prog;kern_ctx_type _id##_kern;
#include  <linux/bpf_types.h>
#undef BPF_PROG_TYPE 
		} *__t;
		const struct btf_type *t;
	} cocci_id/* kernel/bpf/btf.c 3450 */;
	char __weak cocci_id/* kernel/bpf/btf.c 3446 */[];
	char __user *cocci_id/* kernel/bpf/btf.c 3362 */;
	struct btf_header cocci_id/* kernel/bpf/btf.c 3302 */;
	struct btf_sec_info cocci_id/* kernel/bpf/btf.c 3255 */;
	struct btf_sec_info *cocci_id/* kernel/bpf/btf.c 3251 */;
	const struct btf_header *cocci_id/* kernel/bpf/btf.c 3243 */;
	struct btf_sec_info cocci_id/* kernel/bpf/btf.c 3241 */[ARRAY_SIZE(btf_sec_info_offset)];
	const struct btf_sec_info *cocci_id/* kernel/bpf/btf.c 3232 */;
	const size_t cocci_id/* kernel/bpf/btf.c 3225 */[];
	int cocci_id/* kernel/bpf/btf.c 308 */(struct btf_verifier_env *env, const struct btf_type *t, u32 type_id);
	struct btf_type cocci_id/* kernel/bpf/btf.c 306 */;
	const struct btf_kind_operations *constcocci_id/* kernel/bpf/btf.c 305 */[NR_BTF_KINDS];
	struct btf_header *cocci_id/* kernel/bpf/btf.c 3044 */;
	const struct btf_kind_operations cocci_id/* kernel/bpf/btf.c 2855 */;
	struct btf_kind_operations {
		s32 (*check_meta)(struct btf_verifier_env *env, const struct btf_type *t, u32 meta_left);
		int (*resolve)(struct btf_verifier_env *env, const struct resolve_vertex *v);
		int (*check_member)(struct btf_verifier_env *env, const struct btf_type *struct_type, const struct btf_member *member, const struct btf_type *member_type);
		int (*check_kflag_member)(struct btf_verifier_env *env, const struct btf_type *struct_type, const struct btf_member *member, const struct btf_type *member_type);
		void (*log_details)(struct btf_verifier_env *env, const struct btf_type *t);
		void (*seq_show)(const struct btf *btf, const struct btf_type *t, u32 type_id, void *data, u8 bits_offsets, struct seq_file *m);
	} cocci_id/* kernel/bpf/btf.c 284 */;
	const struct btf_var_secinfo *cocci_id/* kernel/bpf/btf.c 2716 */;
	const char *constcocci_id/* kernel/bpf/btf.c 265 */[NR_BTF_KINDS];
	struct btf_verifier_env {
		struct btf *btf;
		u8 *visit_states;
		struct resolve_vertex stack[MAX_RESOLVE_DEPTH];
		struct bpf_verifier_log log;
		u32 log_type_id;
		u32 top_stack;
		enum verifier_phase phase;
		enum resolve_mode resolve_mode;
	} cocci_id/* kernel/bpf/btf.c 254 */;
	struct btf_param cocci_id/* kernel/bpf/btf.c 2531 */;
	struct btf_sec_info {
		u32 off;
		u32 len;
	} cocci_id/* kernel/bpf/btf.c 249 */;
	const struct btf_enum *cocci_id/* kernel/bpf/btf.c 2434 */;
	enum resolve_mode{RESOLVE_TBD, RESOLVE_PTR, RESOLVE_STRUCT_OR_ARRAY,} cocci_id/* kernel/bpf/btf.c 239 */;
	enum visit_state{NOT_VISITED, VISITED, RESOLVED,} cocci_id/* kernel/bpf/btf.c 233 */;
	struct bpf_spin_lock cocci_id/* kernel/bpf/btf.c 2305 */;
	struct resolve_vertex {
		const struct btf_type *t;
		u32 type_id;
		u16 next_member;
	} cocci_id/* kernel/bpf/btf.c 227 */;
	enum verifier_phase{CHECK_META, CHECK_TYPE,} cocci_id/* kernel/bpf/btf.c 222 */;
	struct btf_kind_operations cocci_id/* kernel/bpf/btf.c 2096 */;
	const struct btf_kind_operations *cocci_id/* kernel/bpf/btf.c 2077 */;
	struct btf {
		void *data;
		struct btf_type **types;
		u32 *resolved_ids;
		u32 *resolved_sizes;
		const char *strings;
		void *nohdr_data;
		struct btf_header hdr;
		u32 nr_types;
		u32 types_size;
		u32 data_size;
		refcount_t refcnt;
		u32 id;
		struct rcu_head rcu;
	} cocci_id/* kernel/bpf/btf.c 206 */;
	const struct resolve_vertex *cocci_id/* kernel/bpf/btf.c 1999 */;
	const struct btf_array *cocci_id/* kernel/bpf/btf.c 1949 */;
	s32 cocci_id/* kernel/bpf/btf.c 1945 */;
	const struct btf_member *cocci_id/* kernel/bpf/btf.c 1918 */;
	struct btf_member cocci_id/* kernel/bpf/btf.c 1595 */;
	s8 *cocci_id/* kernel/bpf/btf.c 1545 */;
	u16 *cocci_id/* kernel/bpf/btf.c 1541 */;
	s16 *cocci_id/* kernel/bpf/btf.c 1539 */;
	s32 *cocci_id/* kernel/bpf/btf.c 1533 */;
	s64 *cocci_id/* kernel/bpf/btf.c 1527 */;
	u64 cocci_id/* kernel/bpf/btf.c 1468 */[2];
	struct bpf_lru_locallist cocci_id/* kernel/bpf/bpf_lru_list.c 665 */;
	struct bpf_lru_list cocci_id/* kernel/bpf/bpf_lru_list.c 651 */;
	del_from_htab_func cocci_id/* kernel/bpf/bpf_lru_list.c 646 */;
	struct bpf_common_lru *cocci_id/* kernel/bpf/bpf_lru_list.c 435 */;
	const struct bpf_lru_node *cocci_id/* kernel/bpf/bpf_lru_list.c 42 */;
	struct bpf_lru_locallist *cocci_id/* kernel/bpf/bpf_lru_list.c 348 */;
	enum bpf_lru_list_type cocci_id/* kernel/bpf/bpf_lru_list.c 259 */;
	struct bpf_lru_list *cocci_id/* kernel/bpf/bpf_lru_list.c 237 */;
	struct bpf_lru *cocci_id/* kernel/bpf/bpf_lru_list.c 237 */;
	struct bpf_lru_node cocci_id/* kernel/bpf/bpf_lru_list.c 146 */;
	struct bpf_lru_node *cocci_id/* kernel/bpf/bpf_lru_list.c 143 */;
	const struct bpf_lru_list *cocci_id/* kernel/bpf/bpf_lru_list.c 124 */;
	struct perf_event *cocci_id/* kernel/bpf/arraymap.c 914 */;
	struct bpf_event_entry cocci_id/* kernel/bpf/arraymap.c 900 */;
	struct bpf_event_entry *cocci_id/* kernel/bpf/arraymap.c 898 */;
	struct prog_poke_elem *cocci_id/* kernel/bpf/arraymap.c 852 */;
	struct bpf_array *cocci_id/* kernel/bpf/arraymap.c 83 */;
	struct bpf_array_aux *cocci_id/* kernel/bpf/arraymap.c 827 */;
	struct bpf_map_memory cocci_id/* kernel/bpf/arraymap.c 82 */;
	struct bpf_array_aux cocci_id/* kernel/bpf/arraymap.c 811 */;
	u8 *cocci_id/* kernel/bpf/arraymap.c 800 */;
	struct bpf_jit_poke_descriptor *cocci_id/* kernel/bpf/arraymap.c 756 */;
	union bpf_attr *cocci_id/* kernel/bpf/arraymap.c 75 */;
	struct bpf_map *cocci_id/* kernel/bpf/arraymap.c 75 */;
	struct bpf_prog *cocci_id/* kernel/bpf/arraymap.c 746 */;
	struct bpf_prog_aux *cocci_id/* kernel/bpf/arraymap.c 695 */;
	struct prog_poke_elem {
		struct list_head list;
		struct bpf_prog_aux *aux;
	} cocci_id/* kernel/bpf/arraymap.c 689 */;
	const struct bpf_map_ops cocci_id/* kernel/bpf/arraymap.c 492 */;
	pgoff_t cocci_id/* kernel/bpf/arraymap.c 484 */;
	const struct btf_type *cocci_id/* kernel/bpf/arraymap.c 451 */;
	const struct btf *cocci_id/* kernel/bpf/arraymap.c 450 */;
	const struct bpf_map *cocci_id/* kernel/bpf/arraymap.c 449 */;
	struct seq_file *cocci_id/* kernel/bpf/arraymap.c 406 */;
	void __percpu *cocci_id/* kernel/bpf/arraymap.c 31 */;
	const int cocci_id/* kernel/bpf/arraymap.c 216 */;
	struct bpf_insn *cocci_id/* kernel/bpf/arraymap.c 211 */;
	u64 *cocci_id/* kernel/bpf/arraymap.c 180 */;
	struct bpf_array cocci_id/* kernel/bpf/arraymap.c 142 */;
	struct bpf_map **cocci_id/* kernel/bpf/arraymap.c 1034 */;
	spinlock_t cocci_id/* kernel/bounds.c 24 */;
	unsigned long cocci_id/* kernel/backtracetest.c 47 */[8];
	struct audit_aux_data {
		struct audit_aux_data *next;
		int type;
	} cocci_id/* kernel/auditsc.c 99 */;
	struct audit_aux_data *cocci_id/* kernel/auditsc.c 880 */;
	const struct audit_krule *cocci_id/* kernel/auditsc.c 759 */;
	char **cocci_id/* kernel/auditsc.c 740 */;
	enum audit_state *cocci_id/* kernel/auditsc.c 442 */;
	struct audit_tree_refs *cocci_id/* kernel/auditsc.c 278 */;
	const struct audit_ntp_data *cocci_id/* kernel/auditsc.c 2538 */;
	const struct audit_ntp_val *cocci_id/* kernel/auditsc.c 2529 */;
	enum audit_ntp_type cocci_id/* kernel/auditsc.c 2527 */;
	struct cpu_vfs_cap_data cocci_id/* kernel/auditsc.c 2446 */;
	struct audit_aux_data_bprm_fcaps *cocci_id/* kernel/auditsc.c 2444 */;
	struct sockaddr_storage cocci_id/* kernel/auditsc.c 2356 */;
	struct audit_tree_refs cocci_id/* kernel/auditsc.c 235 */;
	unsigned long *cocci_id/* kernel/auditsc.c 2319 */;
	struct linux_binprm *cocci_id/* kernel/auditsc.c 2304 */;
	umode_t cocci_id/* kernel/auditsc.c 2293 */;
	gid_t cocci_id/* kernel/auditsc.c 2293 */;
	struct kern_ipc_perm *cocci_id/* kernel/auditsc.c 2273 */;
	mqd_t cocci_id/* kernel/auditsc.c 2260 */;
	struct mq_attr *cocci_id/* kernel/auditsc.c 2260 */;
	const struct sigevent *cocci_id/* kernel/auditsc.c 2241 */;
	const struct timespec64 *cocci_id/* kernel/auditsc.c 2217 */;
	struct mq_attr cocci_id/* kernel/auditsc.c 2198 */;
	const unsigned char cocci_id/* kernel/auditsc.c 2063 */;
	const struct file *cocci_id/* kernel/auditsc.c 2042 */;
	const struct dentry *cocci_id/* kernel/auditsc.c 1944 */;
	struct audit_names *cocci_id/* kernel/auditsc.c 1878 */;
	const __user char *cocci_id/* kernel/auditsc.c 1852 */;
	unsigned char cocci_id/* kernel/auditsc.c 1821 */;
	enum audit_state cocci_id/* kernel/auditsc.c 1632 */;
	struct audit_aux_data_pids *cocci_id/* kernel/auditsc.c 1532 */;
	int *cocci_id/* kernel/auditsc.c 1318 */;
	struct audit_tree_refs {
		struct audit_tree_refs *next;
		struct audit_chunk *c[31];
	} cocci_id/* kernel/auditsc.c 128 */;
	struct audit_aux_data_bprm_fcaps {
		struct audit_aux_data d;
		struct audit_cap_data fcap;
		unsigned int fcap_ver;
		struct audit_cap_data old_pcap;
		struct audit_cap_data new_pcap;
	} cocci_id/* kernel/auditsc.c 120 */;
	kernel_cap_t *cocci_id/* kernel/auditsc.c 1162 */;
	struct audit_aux_data_pids {
		struct audit_aux_data d;
		pid_t target_pid[AUDIT_AUX_PIDS];
		kuid_t target_auid[AUDIT_AUX_PIDS];
		kuid_t target_uid[AUDIT_AUX_PIDS];
		unsigned int target_sessionid[AUDIT_AUX_PIDS];
		u32 target_sid[AUDIT_AUX_PIDS];
		char target_comm[AUDIT_AUX_PIDS][TASK_COMM_LEN];
		int pid_count;
	} cocci_id/* kernel/auditsc.c 109 */;
	char cocci_id/* kernel/auditsc.c 1007 */[96];
	const char __user *cocci_id/* kernel/auditsc.c 1002 */;
	struct audit_field cocci_id/* kernel/auditfilter.c 836 */;
	void **cocci_id/* kernel/auditfilter.c 520 */;
	struct audit_field *cocci_id/* kernel/auditfilter.c 458 */;
	struct audit_rule_data *cocci_id/* kernel/auditfilter.c 441 */;
	struct list_head cocci_id/* kernel/auditfilter.c 39 */[AUDIT_NR_FILTERS];
	u32 cocci_id/* kernel/auditfilter.c 302 */[];
	__u32 cocci_id/* kernel/auditfilter.c 167 */;
	__u32 *cocci_id/* kernel/auditfilter.c 167 */;
	unsigned *cocci_id/* kernel/auditfilter.c 165 */;
	__u32 *cocci_id/* kernel/auditfilter.c 163 */[AUDIT_SYSCALL_CLASSES];
	size_t *cocci_id/* kernel/auditfilter.c 125 */;
	kgid_t cocci_id/* kernel/auditfilter.c 1236 */;
	struct audit_netlink_list cocci_id/* kernel/auditfilter.c 1169 */;
	struct audit_parent cocci_id/* kernel/audit_watch.c 95 */;
	struct audit_parent {
		struct list_head watches;
		struct fsnotify_mark mark;
	} cocci_id/* kernel/audit_watch.c 46 */;
	struct list_head **cocci_id/* kernel/audit_watch.c 401 */;
	struct audit_watch *cocci_id/* kernel/audit_watch.c 369 */;
	struct audit_parent *cocci_id/* kernel/audit_watch.c 367 */;
	struct audit_watch {
		refcount_t count;
		dev_t dev;
		char *path;
		unsigned long ino;
		struct audit_parent *parent;
		struct list_head wlist;
		struct list_head rules;
	} cocci_id/* kernel/audit_watch.c 36 */;
	struct path *cocci_id/* kernel/audit_watch.c 349 */;
	struct list_head *cocci_id/* kernel/audit_tree.c 979 */;
	struct audit_tree cocci_id/* kernel/audit_tree.c 97 */;
	struct audit_tree *cocci_id/* kernel/audit_tree.c 93 */;
	struct list_head cocci_id/* kernel/audit_tree.c 874 */;
	struct node *cocci_id/* kernel/audit_tree.c 845 */;
	void cocci_id/* kernel/audit_tree.c 646 */(void);
	struct audit_tree_mark {
		struct fsnotify_mark mark;
		struct audit_chunk *chunk;
	} cocci_id/* kernel/audit_tree.c 40 */;
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
	struct list_head cocci_id/* kernel/audit_tree.c 211 */[HASH_SIZE];
	enum{HASH_SIZE=128,} cocci_id/* kernel/audit_tree.c 210 */;
	struct node cocci_id/* kernel/audit_tree.c 194 */;
	struct audit_tree_mark *cocci_id/* kernel/audit_tree.c 178 */;
	struct audit_tree_mark cocci_id/* kernel/audit_tree.c 163 */;
	struct audit_chunk cocci_id/* kernel/audit_tree.c 147 */;
	struct audit_chunk *cocci_id/* kernel/audit_tree.c 147 */;
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
	struct inode *cocci_id/* kernel/audit_fsnotify.c 79 */;
	struct dentry *cocci_id/* kernel/audit_fsnotify.c 78 */;
	struct path cocci_id/* kernel/audit_fsnotify.c 77 */;
	struct audit_krule *cocci_id/* kernel/audit_fsnotify.c 74 */;
	struct audit_fsnotify_mark *cocci_id/* kernel/audit_fsnotify.c 74 */;
	dev_t cocci_id/* kernel/audit_fsnotify.c 60 */;
	struct audit_fsnotify_mark cocci_id/* kernel/audit_fsnotify.c 51 */;
	struct fsnotify_mark *cocci_id/* kernel/audit_fsnotify.c 47 */;
	struct fsnotify_group *cocci_id/* kernel/audit_fsnotify.c 35 */;
	struct audit_fsnotify_mark {
		dev_t dev;
		unsigned long ino;
		char *path;
		struct fsnotify_mark mark;
		struct audit_krule *rule;
	} cocci_id/* kernel/audit_fsnotify.c 26 */;
	const struct fsnotify_ops cocci_id/* kernel/audit_fsnotify.c 191 */;
	const struct inode *cocci_id/* kernel/audit_fsnotify.c 163 */;
	struct fsnotify_iter_info *cocci_id/* kernel/audit_fsnotify.c 159 */;
	const struct qstr *cocci_id/* kernel/audit_fsnotify.c 158 */;
	struct audit_entry cocci_id/* kernel/audit_fsnotify.c 148 */;
	struct audit_entry *cocci_id/* kernel/audit_fsnotify.c 148 */;
	struct audit_reply cocci_id/* kernel/audit.c 961 */;
	struct audit_reply *cocci_id/* kernel/audit.c 961 */;
	struct task_struct *cocci_id/* kernel/audit.c 960 */;
	const void *cocci_id/* kernel/audit.c 956 */;
	struct audit_net {
		struct sock *sk;
	} cocci_id/* kernel/audit.c 90 */;
	struct audit_netlink_list *cocci_id/* kernel/audit.c 884 */;
	void (*cocci_id/* kernel/audit.c 710 */)(struct sk_buff *skb);
	struct sk_buff_head *cocci_id/* kernel/audit.c 708 */;
	struct auditd_connection cocci_id/* kernel/audit.c 476 */;
	struct auditd_connection *cocci_id/* kernel/audit.c 474 */;
	struct rcu_head *cocci_id/* kernel/audit.c 472 */;
	u32 *cocci_id/* kernel/audit.c 399 */;
	struct audit_net *cocci_id/* kernel/audit.c 287 */;
	const struct net *cocci_id/* kernel/audit.c 285 */;
	struct sock *cocci_id/* kernel/audit.c 285 */;
	const struct auditd_connection *cocci_id/* kernel/audit.c 264 */;
	va_list cocci_id/* kernel/audit.c 2342 */;
	struct nlmsghdr *cocci_id/* kernel/audit.c 2303 */;
	kuid_t cocci_id/* kernel/audit.c 2200 */;
	char cocci_id/* kernel/audit.c 2124 */[sizeof(current->comm)];
	struct mm_struct *cocci_id/* kernel/audit.c 2086 */;
	unsigned int cocci_id/* kernel/audit.c 2042 */;
	const struct path *cocci_id/* kernel/audit.c 2018 */;
	struct audit_reply {
		__u32 portid;
		struct net *net;
		struct sk_buff *skb;
	} cocci_id/* kernel/audit.c 199 */;
	string cocci_id/* kernel/audit.c 1958 */;
	struct audit_buffer {
		struct sk_buff *skb;
		struct audit_context *ctx;
		gfp_t gfp_mask;
	} cocci_id/* kernel/audit.c 193 */;
	unsigned char *cocci_id/* kernel/audit.c 1908 */;
	size_t cocci_id/* kernel/audit.c 1905 */;
	const unsigned char *cocci_id/* kernel/audit.c 1904 */;
	struct sk_buff *cocci_id/* kernel/audit.c 1816 */;
	unsigned long long cocci_id/* kernel/audit.c 1801 */;
	struct audit_ctl_mutex {
		struct mutex lock;
		void *owner;
	} cocci_id/* kernel/audit.c 178 */;
	struct timespec64 cocci_id/* kernel/audit.c 1748 */;
	struct timespec64 *cocci_id/* kernel/audit.c 1721 */;
	unsigned int *cocci_id/* kernel/audit.c 1721 */;
	type cocci_id/* kernel/audit.c 1683 */;
	gfp_t cocci_id/* kernel/audit.c 1672 */;
	struct audit_context *cocci_id/* kernel/audit.c 1671 */;
	struct audit_buffer *cocci_id/* kernel/audit.c 1671 */;
	char *cocci_id/* kernel/audit.c 1644 */;
	int __init cocci_id/* kernel/audit.c 1644 */;
	char *cocci_id/* kernel/audit.c 162 */[2];
	struct audit_buffer cocci_id/* kernel/audit.c 1581 */;
	struct audit_features cocci_id/* kernel/audit.c 157 */;
	struct audit_net cocci_id/* kernel/audit.c 1569 */;
	struct pernet_operations cocci_id/* kernel/audit.c 1565 */;
	void __net_exit cocci_id/* kernel/audit.c 1552 */;
	struct netlink_kernel_cfg cocci_id/* kernel/audit.c 1533 */;
	int __net_init cocci_id/* kernel/audit.c 1531 */;
	struct net *cocci_id/* kernel/audit.c 1523 */;
	struct sk_buff_head cocci_id/* kernel/audit.c 148 */;
	struct audit_tty_status cocci_id/* kernel/audit.c 1441 */;
	struct kmem_cache *cocci_id/* kernel/audit.c 141 */;
	struct list_head cocci_id/* kernel/audit.c 139 */[AUDIT_INODE_BUCKETS];
	u32 cocci_id/* kernel/audit.c 1381 */[2];
	struct audit_rule_data cocci_id/* kernel/audit.c 1355 */;
	struct pid *cocci_id/* kernel/audit.c 1233 */;
	struct audit_status cocci_id/* kernel/audit.c 1193 */;
	struct audit_sig_info *cocci_id/* kernel/audit.c 1180 */;
	struct audit_features *cocci_id/* kernel/audit.c 1105 */;
	struct auditd_connection {
		struct pid *pid;
		u32 portid;
		struct net *net;
		struct rcu_head rcu;
	} *cocci_id/* kernel/audit.c 105 */;
	pid_t cocci_id/* kernel/audit.c 1047 */;
	uid_t cocci_id/* kernel/audit.c 1046 */;
	struct audit_buffer **cocci_id/* kernel/audit.c 1044 */;
	atomic_t cocci_id/* kernel/async.c 79 */;
	struct async_entry {
		struct list_head domain_list;
		struct list_head global_list;
		struct work_struct work;
		async_cookie_t cookie;
		async_func_t func;
		void *data;
		struct async_domain *domain;
	} cocci_id/* kernel/async.c 67 */;
	struct worker *cocci_id/* kernel/async.c 330 */;
	bool cocci_id/* kernel/async.c 328 */;
	async_func_t cocci_id/* kernel/async.c 231 */;
	async_cookie_t cocci_id/* kernel/async.c 231 */;
	void *cocci_id/* kernel/async.c 231 */;
	struct async_domain *cocci_id/* kernel/async.c 166 */;
	long long cocci_id/* kernel/async.c 119 */;
	ktime_t cocci_id/* kernel/async.c 114 */;
	struct async_entry cocci_id/* kernel/async.c 112 */;
	struct async_entry *cocci_id/* kernel/async.c 111 */;
	void cocci_id/* kernel/acct.c 96 */(struct bsd_acct_struct *acct);
	struct bsd_acct_struct {
		struct fs_pin pin;
		atomic_long_t count;
		struct rcu_head rcu;
		struct mutex lock;
		int active;
		unsigned long needcheck;
		struct file *file;
		struct pid_namespace *ns;
		struct work_struct work;
		struct completion done;
	} cocci_id/* kernel/acct.c 83 */;
	int cocci_id/* kernel/acct.c 74 */[3];
	struct vm_area_struct *cocci_id/* kernel/acct.c 540 */;
	unsigned long cocci_id/* kernel/acct.c 537 */;
	u64 cocci_id/* kernel/acct.c 536 */;
	struct pacct_struct *cocci_id/* kernel/acct.c 535 */;
	long cocci_id/* kernel/acct.c 533 */;
	void cocci_id/* kernel/acct.c 533 */;
	loff_t cocci_id/* kernel/acct.c 519 */;
	const struct cred *cocci_id/* kernel/acct.c 475 */;
	acct_t cocci_id/* kernel/acct.c 473 */;
	u16 cocci_id/* kernel/acct.c 447 */;
	struct tty_struct *cocci_id/* kernel/acct.c 419 */;
	acct_t *cocci_id/* kernel/acct.c 415 */;
	s64 cocci_id/* kernel/acct.c 397 */;
	unsigned cocci_id/* kernel/acct.c 392 */;
	u32 cocci_id/* kernel/acct.c 390 */;
	comp2_t cocci_id/* kernel/acct.c 357 */;
	comp_t cocci_id/* kernel/acct.c 315 */;
	struct pid_namespace *cocci_id/* kernel/acct.c 297 */;
	struct filename *cocci_id/* kernel/acct.c 281 */;
	int cocci_id/* kernel/acct.c 275 */;
	const char *cocci_id/* kernel/acct.c 273 */;
	struct bsd_acct_struct cocci_id/* kernel/acct.c 202 */;
	struct fs_pin *cocci_id/* kernel/acct.c 199 */;
	struct vfsmount *cocci_id/* kernel/acct.c 196 */;
	struct file *cocci_id/* kernel/acct.c 195 */;
	struct work_struct *cocci_id/* kernel/acct.c 183 */;
	struct bsd_acct_struct *cocci_id/* kernel/acct.c 144 */;
	struct kstatfs cocci_id/* kernel/acct.c 103 */;
	__typeof__(struct bpf_cgroup_storage *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 438 */[MAX_BPF_CGROUP_STORAGE_TYPE]DECLARE_PER_CPU(struct bpf_cgroup_storage*,
		bpf_cgroup_storage[MAX_BPF_CGROUP_STORAGE_TYPE]);
	__typeof__(u64) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(raw_spinlock_t) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(cpumask_var_t) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(bool) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(atomic_t) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(__u32) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct tick_sched) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct tick_device) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct tasklet_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct swevent_htable) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct sugov_cpu) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct stack_map_irq_work) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct send_signal_irq_work) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct rnd_state) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct psi_group_cpu) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct printk_safe_seq_buf) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct pmu_event_list) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct mutex) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct mmiowb_state) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct lockdep_stats) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct llist_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct listener_list) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct list_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct kernel_stat) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct kernel_cpustat) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct irqtime) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct irq_work) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct irq_timings) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct hrtimer_cpu_base) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct hrtimer) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct hlist_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct ftrace_stacks) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct ftrace_profile_stat) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct device) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct cpuhp_cpu_state) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct cpuacct_usage) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct cpu_stopper) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct cpu_stop_work) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct context_tracking) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct completion) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct cgroup_rstat_cpu) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct callback_head) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_trace_sample_data) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_raw_tp_regs) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_nested_pt_regs) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(long[RCU_TORTURE_PIPE_LEN + 1]) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct lock_class_stats[MAX_LOCKDEP_KEYS]) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct update_util_data *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct task_struct *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct sched_domain_shared *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct sched_domain *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct ring_buffer_event *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct perf_event *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct kprobe *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct ftrace_ret_stack *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct em_perf_domain *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct profile_hit *[2]) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(unsigned int) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(ktime_t) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(call_single_data_t) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */;
	__typeof__(struct pt_regs) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[4]DEFINE_PER_CPU(struct pt_regs,__perf_regs[4]); // err
	__typeof__(unsigned long) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[lockevent_num]DEFINE_PER_CPU(unsigned long,lockevents[lockevent_num]);
	__typeof__(struct bp_cpuinfo) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[TYPE_MAX]DEFINE_PER_CPU(struct bp_cpuinfo,bp_cpuinfo[TYPE_MAX]);
	__typeof__(int) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[PERF_NR_CONTEXTS]DEFINE_PER_CPU(int,callchain_recursion[PERF_NR_CONTEXTS]);
	__typeof__(struct vm_struct *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[NR_CACHED_STACKS]DEFINE_PER_CPU(struct vm_struct*,cached_stacks[NR_CACHED_STACKS]); // err
	__typeof__(struct timer_base) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[NR_BASES]DEFINE_PER_CPU(struct timer_base,timer_bases[NR_BASES]);
	__typeof__(struct bpf_cgroup_storage *) cocci_id/* /usr/local/bin/../lib/coccinelle/standard.h 437 */[MAX_BPF_CGROUP_STORAGE_TYPE]DEFINE_PER_CPU(struct bpf_cgroup_storage*,bpf_cgroup_storage[MAX_BPF_CGROUP_STORAGE_TYPE]);
}
