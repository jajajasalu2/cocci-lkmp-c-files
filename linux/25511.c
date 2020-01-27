cocci_test_suite() {
	struct syscall_arg_fmt {
		size_t (*scnprintf)(char *bf, size_t size,
				    struct syscall_arg *arg);
		bool (*strtoul)(char *bf, size_t size,
				struct syscall_arg *arg, u64 *val);
		unsigned long (*mask_val)(struct syscall_arg *arg,
					  unsigned long val);
		void *parm;
		const char *name;
		u16 nr_entries;
		bool show_zero;
	} cocci_id/* tools/perf/builtin-trace.c 93 */;
	struct syscall_fmt cocci_id/* tools/perf/builtin-trace.c 909 */[];
	struct strarray *cocci_id/* tools/perf/builtin-trace.c 768 */[];
	const char *cocci_id/* tools/perf/builtin-trace.c 712 */[];
	size_t cocci_id/* tools/perf/builtin-trace.c 675 */(char *bf,
							    size_t size,
							    struct syscall_arg *arg);
	u64 *cocci_id/* tools/perf/builtin-trace.c 580 */;
	struct strarrays *cocci_id/* tools/perf/builtin-trace.c 558 */;
	struct syscall_arg *cocci_id/* tools/perf/builtin-trace.c 525 */;
	const char *cocci_id/* tools/perf/builtin-trace.c 524 */;
	char *cocci_id/* tools/perf/builtin-trace.c 523 */;
	size_t cocci_id/* tools/perf/builtin-trace.c 523 */;
	struct strarray *cocci_id/* tools/perf/builtin-trace.c 509 */;
	long cocci_id/* tools/perf/builtin-trace.c 5047 */;
	struct parse_events_error cocci_id/* tools/perf/builtin-trace.c 4842 */;
	char cocci_id/* tools/perf/builtin-trace.c 4790 */[BUFSIZ];
	const char *const cocci_id/* tools/perf/builtin-trace.c 4788 */[];
	bool __maybe_unused cocci_id/* tools/perf/builtin-trace.c 4785 */;
	const struct option cocci_id/* tools/perf/builtin-trace.c 4703 */[];
	struct trace cocci_id/* tools/perf/builtin-trace.c 4679 */;
	const char **cocci_id/* tools/perf/builtin-trace.c 4670 */;
	struct option cocci_id/* tools/perf/builtin-trace.c 4582 */;
	struct strlist_config cocci_id/* tools/perf/builtin-trace.c 4564 */;
	int *cocci_id/* tools/perf/builtin-trace.c 4420 */;
	const struct option *cocci_id/* tools/perf/builtin-trace.c 4417 */;
	struct intlist *cocci_id/* tools/perf/builtin-trace.c 4378 */;
	struct syscall_stats *cocci_id/* tools/perf/builtin-trace.c 4262 */;
	struct tep_format_field *cocci_id/* tools/perf/builtin-trace.c 426 */;
	struct rb_node *cocci_id/* tools/perf/builtin-trace.c 4249 */;
	struct perf_session *cocci_id/* tools/perf/builtin-trace.c 4132 */;
	struct perf_data cocci_id/* tools/perf/builtin-trace.c 4127 */;
	const struct evsel_str_handler cocci_id/* tools/perf/builtin-trace.c 4124 */[];
	struct mmap *cocci_id/* tools/perf/builtin-trace.c 4013 */;
	const bool cocci_id/* tools/perf/builtin-trace.c 3833 */;
	struct evsel **cocci_id/* tools/perf/builtin-trace.c 3809 */;
	char cocci_id/* tools/perf/builtin-trace.c 3744 */[128];
	struct ordered_event *cocci_id/* tools/perf/builtin-trace.c 3689 */;
	struct ordered_events *cocci_id/* tools/perf/builtin-trace.c 3688 */;
	u64 cocci_id/* tools/perf/builtin-trace.c 3655 */;
	struct perf_sample cocci_id/* tools/perf/builtin-trace.c 3641 */;
	struct evlist *cocci_id/* tools/perf/builtin-trace.c 3640 */;
	union perf_event *cocci_id/* tools/perf/builtin-trace.c 3638 */;
	struct trace *cocci_id/* tools/perf/builtin-trace.c 3638 */;
	pid_t cocci_id/* tools/perf/builtin-trace.c 3589 */[32];
	pid_t *cocci_id/* tools/perf/builtin-trace.c 3569 */;
	struct bpf_map *cocci_id/* tools/perf/builtin-trace.c 3568 */;
	struct evsel_trace *cocci_id/* tools/perf/builtin-trace.c 339 */;
	struct syscall_arg_fmt *cocci_id/* tools/perf/builtin-trace.c 337 */;
	struct evsel *cocci_id/* tools/perf/builtin-trace.c 337 */;
	struct bpf_map_syscall_entry cocci_id/* tools/perf/builtin-trace.c 3291 */;
	struct bpf_map_syscall_entry *cocci_id/* tools/perf/builtin-trace.c 3244 */;
	char cocci_id/* tools/perf/builtin-trace.c 3194 */[256];
	struct bpf_program *cocci_id/* tools/perf/builtin-trace.c 3180 */;
	struct syscall_tp *cocci_id/* tools/perf/builtin-trace.c 316 */;
	tracepoint_handler cocci_id/* tools/perf/builtin-trace.c 3097 */;
	const u32 cocci_id/* tools/perf/builtin-trace.c 3072 */;
	struct perf_event_attr cocci_id/* tools/perf/builtin-trace.c 3053 */;
	size_t cocci_id/* tools/perf/builtin-trace.c 3013 */(struct trace *trace,
							     FILE *fp);
	struct evsel_trace cocci_id/* tools/perf/builtin-trace.c 300 */;
	struct evsel_trace {
		struct syscall_tp sc;
		struct syscall_arg_fmt *fmt;
	} cocci_id/* tools/perf/builtin-trace.c 293 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-trace.c 2918 */;
	char cocci_id/* tools/perf/builtin-trace.c 2833 */;
	struct addr_location cocci_id/* tools/perf/builtin-trace.c 2832 */;
	struct addr_location *cocci_id/* tools/perf/builtin-trace.c 2810 */;
	struct syscall_tp {
		struct tp_field id;
		union {
			struct tp_field args,ret;
		};
	} cocci_id/* tools/perf/builtin-trace.c 281 */;
	struct tp_field *cocci_id/* tools/perf/builtin-trace.c 269 */;
	uintptr_t cocci_id/* tools/perf/builtin-trace.c 2683 */;
	char cocci_id/* tools/perf/builtin-trace.c 2649 */[2048];
	struct perf_sample *cocci_id/* tools/perf/builtin-trace.c 2639 */;
	void cocci_id/* tools/perf/builtin-trace.c 2638 */;
	unsigned char cocci_id/* tools/perf/builtin-trace.c 2617 */;
	void *cocci_id/* tools/perf/builtin-trace.c 2615 */;
	unsigned int cocci_id/* tools/perf/builtin-trace.c 2615 */;
	enum binary_printer_ops cocci_id/* tools/perf/builtin-trace.c 2614 */;
	ssize_t cocci_id/* tools/perf/builtin-trace.c 2530 */;
	char cocci_id/* tools/perf/builtin-trace.c 2470 */[STRERR_BUFSIZE];
	struct perf_env *cocci_id/* tools/perf/builtin-trace.c 2383 */;
	const unsigned int cocci_id/* tools/perf/builtin-trace.c 2374 */;
	struct callchain_cursor *cocci_id/* tools/perf/builtin-trace.c 2355 */;
	bool cocci_id/* tools/perf/builtin-trace.c 235 */;
	char cocci_id/* tools/perf/builtin-trace.c 2327 */[1024];
	u32 cocci_id/* tools/perf/builtin-trace.c 2152 */;
	u32 *cocci_id/* tools/perf/builtin-trace.c 2152 */;
	struct int_node *cocci_id/* tools/perf/builtin-trace.c 2118 */;
	struct syscall_stats {
		struct stats stats;
		u64 nr_failures;
		int max_errno;
		u32 *errnos;
	} cocci_id/* tools/perf/builtin-trace.c 2108 */;
	int (*cocci_id/* tools/perf/builtin-trace.c 2051 */)(struct trace *trace,
							     struct evsel *evsel,
							     union perf_event *event,
							     struct perf_sample *sample);
	struct tp_field {
		int offset;
		union {
			u64 (*integer)(struct tp_field *field,
				       struct perf_sample *sample);
			void *(*pointer)(struct tp_field *field,
					 struct perf_sample *sample);
		};
	} cocci_id/* tools/perf/builtin-trace.c 202 */;
	struct thread_trace *cocci_id/* tools/perf/builtin-trace.c 1981 */;
	struct syscall_arg cocci_id/* tools/perf/builtin-trace.c 1969 */;
	u8 cocci_id/* tools/perf/builtin-trace.c 1968 */;
	unsigned char *cocci_id/* tools/perf/builtin-trace.c 1963 */;
	struct str_node *cocci_id/* tools/perf/builtin-trace.c 1825 */;
	const int *cocci_id/* tools/perf/builtin-trace.c 1816 */;
	const void *cocci_id/* tools/perf/builtin-trace.c 1814 */;
	struct syscall_arg_fmt cocci_id/* tools/perf/builtin-trace.c 1676 */;
	const int cocci_id/* tools/perf/builtin-trace.c 1674 */;
	const struct syscall_arg_fmt *cocci_id/* tools/perf/builtin-trace.c 1669 */;
	struct syscall_arg_fmt cocci_id/* tools/perf/builtin-trace.c 1662 */[];
	struct syscall *cocci_id/* tools/perf/builtin-trace.c 1642 */;
	struct machine *cocci_id/* tools/perf/builtin-trace.c 1593 */;
	char **cocci_id/* tools/perf/builtin-trace.c 1591 */;
	unsigned long long *cocci_id/* tools/perf/builtin-trace.c 1591 */;
	double cocci_id/* tools/perf/builtin-trace.c 1510 */;
	FILE *cocci_id/* tools/perf/builtin-trace.c 1508 */;
	struct augmented_arg *cocci_id/* tools/perf/builtin-trace.c 1474 */;
	struct thread *cocci_id/* tools/perf/builtin-trace.c 1436 */;
	pid_t cocci_id/* tools/perf/builtin-trace.c 1433 */;
	off_t cocci_id/* tools/perf/builtin-trace.c 1387 */;
	struct stat cocci_id/* tools/perf/builtin-trace.c 1376 */;
	char cocci_id/* tools/perf/builtin-trace.c 1375 */[PATH_MAX];
	struct file *cocci_id/* tools/perf/builtin-trace.c 1351 */;
	struct file cocci_id/* tools/perf/builtin-trace.c 1332 */;
	const size_t cocci_id/* tools/perf/builtin-trace.c 1324 */;
	size_t (*cocci_id/* tools/perf/builtin-trace.c 1314 */)(char *bf,
								size_t size,
								struct syscall_arg *arg);
	struct thread_trace cocci_id/* tools/perf/builtin-trace.c 1279 */;
	struct thread_trace {
		u64 entry_time;
		bool entry_pending;
		unsigned long nr_events;
		unsigned long pfmaj,pfmin;
		char *entry_str;
		double runtime_ms;
		size_t (*ret_scnprintf)(char *bf, size_t size,
					struct syscall_arg *arg);
		struct {
			unsigned long ptr;
			short int entry_str_pos;
			bool pending_open;
			unsigned int namelen;
			char *name;
		} filename;
		struct {
			int max;
			struct file *table;
		} files;
		struct intlist *syscall_stats;
	} cocci_id/* tools/perf/builtin-trace.c 1254 */;
	unsigned long cocci_id/* tools/perf/builtin-trace.c 1231 */;
	struct bpf_map_syscall_entry {
		bool enabled;
		u16 string_args_len[6];
	} cocci_id/* tools/perf/builtin-trace.c 1219 */;
	struct syscall {
		struct tep_event *tp_format;
		int nr_args;
		int args_size;
		struct {
			struct bpf_program *sys_enter,*sys_exit;
		} bpf_prog;
		bool is_exit;
		bool is_open;
		bool nonexistent;
		struct tep_format_field *args;
		const char *name;
		struct syscall_fmt *fmt;
		struct syscall_arg_fmt *arg_fmt;
	} cocci_id/* tools/perf/builtin-trace.c 1197 */;
	int cocci_id/* tools/perf/builtin-trace.c 1175 */;
	struct trace {
		struct perf_tool tool;
		struct syscalltbl *sctbl;
		struct {
			struct syscall *table;
			struct bpf_map *map;
			struct {
				struct bpf_map *sys_enter,*sys_exit;
			} prog_array;
			struct {
				struct evsel *sys_enter,*sys_exit,*augmented;
			} events;
			struct bpf_program *unaugmented_prog;
		} syscalls;
		struct {
			struct bpf_map *map;
		} dump;
		struct record_opts opts;
		struct evlist *evlist;
		struct machine *host;
		struct thread *current;
		struct bpf_object *bpf_obj;
		struct cgroup *cgroup;
		u64 base_time;
		FILE *output;
		unsigned long nr_events;
		unsigned long nr_events_printed;
		unsigned long max_events;
		struct evswitch evswitch;
		struct strlist *ev_qualifier;
		struct {
			size_t nr;
			int *entries;
		} ev_qualifier_ids;
		struct {
			size_t nr;
			pid_t *entries;
			struct bpf_map *map;
		} filter_pids;
		double duration_filter;
		double runtime_ms;
		struct {
			u64 vfs_getname,proc_getname;
		} stats;
		unsigned int max_stack;
		unsigned int min_stack;
		int raw_augmented_syscalls_args_size;
		bool raw_augmented_syscalls;
		bool fd_path_disabled;
		bool sort_events;
		bool not_ev_qualifier;
		bool live;
		bool full_time;
		bool sched;
		bool multiple_threads;
		bool summary;
		bool summary_only;
		bool errno_summary;
		bool failure_only;
		bool show_comm;
		bool print_sample;
		bool show_tool_stats;
		bool trace_syscalls;
		bool libtraceevent_print;
		bool kernel_syscallchains;
		s16 args_alignment;
		bool show_tstamp;
		bool show_duration;
		bool show_zeros;
		bool show_arg_names;
		bool show_string_prefix;
		bool force;
		bool vfs_getname;
		int trace_pgfaults;
		char *perfconfig_events;
		struct {
			struct ordered_events data;
			u64 last;
		} oe;
	} cocci_id/* tools/perf/builtin-trace.c 117 */;
	struct syscall_fmt cocci_id/* tools/perf/builtin-trace.c 1164 */;
	struct syscall_fmt *cocci_id/* tools/perf/builtin-trace.c 1162 */;
	const struct syscall_fmt *cocci_id/* tools/perf/builtin-trace.c 1158 */;
	struct syscall_fmt {
		const char *name;
		const char *alias;
		struct {
			const char *sys_enter,*sys_exit;
		} bpf_prog_name;
		struct syscall_arg_fmt arg[6];
		u8 nr_args;
		bool errpid;
		bool timeout;
		bool hexret;
	} cocci_id/* tools/perf/builtin-trace.c 103 */;
}
