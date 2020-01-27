cocci_test_suite() {
	struct list_head *cocci_id/* tools/perf/builtin-sched.c 987 */;
	struct sort_dimension *cocci_id/* tools/perf/builtin-sched.c 945 */;
	struct thread_runtime cocci_id/* tools/perf/builtin-sched.c 918 */;
	struct sort_dimension {
		const char *name;
		sort_fn_t cmp;
		struct list_head list;
	} cocci_id/* tools/perf/builtin-sched.c 905 */;
	struct sched_atom {
		enum sched_event_type type;
		int specific_wait;
		u64 timestamp;
		u64 duration;
		unsigned long nr;
		sem_t *wait_sem;
		struct task_desc *wakee;
	} cocci_id/* tools/perf/builtin-sched.c 81 */;
	enum sched_event_type{SCHED_EVENT_RUN, SCHED_EVENT_SLEEP, SCHED_EVENT_WAKEUP, SCHED_EVENT_MIGRATION,} cocci_id/* tools/perf/builtin-sched.c 74 */;
	struct sched_thread_parms *cocci_id/* tools/perf/builtin-sched.c 676 */;
	pthread_attr_t cocci_id/* tools/perf/builtin-sched.c 662 */;
	char cocci_id/* tools/perf/builtin-sched.c 622 */[22];
	struct sched_thread_parms {
		struct task_desc *task;
		struct perf_sched *sched;
		int fd;
	} cocci_id/* tools/perf/builtin-sched.c 609 */;
	struct rlimit cocci_id/* tools/perf/builtin-sched.c 561 */;
	struct task_desc {
		unsigned long nr;
		unsigned long pid;
		char comm[COMM_LEN];
		unsigned long nr_events;
		unsigned long curr_event;
		struct sched_atom **atoms;
		pthread_t thread;
		sem_t sleep_sem;
		sem_t ready_for_work;
		sem_t work_done_sem;
		u64 cpu_usage;
	} cocci_id/* tools/perf/builtin-sched.c 56 */;
	char cocci_id/* tools/perf/builtin-sched.c 559 */[STRERR_BUFSIZE];
	struct perf_event_attr cocci_id/* tools/perf/builtin-sched.c 558 */;
	struct rusage cocci_id/* tools/perf/builtin-sched.c 543 */;
	struct sched_atom cocci_id/* tools/perf/builtin-sched.c 54 */;
	unsigned long cocci_id/* tools/perf/builtin-sched.c 503 */;
	struct task_desc *cocci_id/* tools/perf/builtin-sched.c 502 */;
	struct perf_sched *cocci_id/* tools/perf/builtin-sched.c 500 */;
	struct sched_atom *cocci_id/* tools/perf/builtin-sched.c 385 */;
	struct trace_sched_handler cocci_id/* tools/perf/builtin-sched.c 3458 */;
	const char *cocci_id/* tools/perf/builtin-sched.c 3454 */[];
	const struct option cocci_id/* tools/perf/builtin-sched.c 3370 */[];
	struct perf_sched cocci_id/* tools/perf/builtin-sched.c 3348 */;
	const char cocci_id/* tools/perf/builtin-sched.c 3347 */[];
	char *cocci_id/* tools/perf/builtin-sched.c 3329 */;
	const char *const cocci_id/* tools/perf/builtin-sched.c 3311 */[];
	unsigned int cocci_id/* tools/perf/builtin-sched.c 3309 */;
	const char **cocci_id/* tools/perf/builtin-sched.c 3307 */;
	int cocci_id/* tools/perf/builtin-sched.c 3307 */;
	const struct option *cocci_id/* tools/perf/builtin-sched.c 3289 */;
	struct perf_cpu_map *cocci_id/* tools/perf/builtin-sched.c 3221 */;
	struct perf_thread_map *cocci_id/* tools/perf/builtin-sched.c 3204 */;
	struct rb_node *cocci_id/* tools/perf/builtin-sched.c 3140 */;
	struct work_atoms cocci_id/* tools/perf/builtin-sched.c 3093 */;
	bool cocci_id/* tools/perf/builtin-sched.c 3088 */;
	const char *cocci_id/* tools/perf/builtin-sched.c 3087 */;
	struct rb_node **cocci_id/* tools/perf/builtin-sched.c 3085 */;
	struct work_atoms *cocci_id/* tools/perf/builtin-sched.c 3083 */;
	struct rb_root_cached *cocci_id/* tools/perf/builtin-sched.c 3083 */;
	void cocci_id/* tools/perf/builtin-sched.c 3083 */;
	struct evlist *cocci_id/* tools/perf/builtin-sched.c 2972 */;
	struct timespec cocci_id/* tools/perf/builtin-sched.c 293 */;
	sched_handler cocci_id/* tools/perf/builtin-sched.c 2924 */;
	int (*cocci_id/* tools/perf/builtin-sched.c 2904 */)(struct perf_tool *tool,
							     union perf_event *event,
							     struct evsel *evsel,
							     struct perf_sample *sample,
							     struct machine *machine);
	char cocci_id/* tools/perf/builtin-sched.c 289 */[];
	struct total_run_stats cocci_id/* tools/perf/builtin-sched.c 2803 */;
	struct callchain_node cocci_id/* tools/perf/builtin-sched.c 2785 */;
	struct idle_thread_runtime {
		struct thread_runtime tr;
		struct thread *last_thread;
		struct rb_root_cached sorted_root;
		struct callchain_root callchain;
		struct callchain_cursor cursor;
	} cocci_id/* tools/perf/builtin-sched.c 278 */;
	char cocci_id/* tools/perf/builtin-sched.c 2750 */[1024];
	struct callchain_list *cocci_id/* tools/perf/builtin-sched.c 2748 */;
	FILE *cocci_id/* tools/perf/builtin-sched.c 2745 */;
	struct callchain_node *cocci_id/* tools/perf/builtin-sched.c 2745 */;
	size_t cocci_id/* tools/perf/builtin-sched.c 2745 */;
	struct evsel_runtime {
		u64 *last_time;
		u32 ncpu;
	} cocci_id/* tools/perf/builtin-sched.c 272 */;
	struct thread_runtime *cocci_id/* tools/perf/builtin-sched.c 2709 */;
	struct total_run_stats *cocci_id/* tools/perf/builtin-sched.c 2708 */;
	struct thread *cocci_id/* tools/perf/builtin-sched.c 2706 */;
	void *cocci_id/* tools/perf/builtin-sched.c 2706 */;
	struct total_run_stats {
		struct perf_sched *sched;
		u64 sched_count;
		u64 task_count;
		u64 total_run_time;
	} cocci_id/* tools/perf/builtin-sched.c 2699 */;
	float cocci_id/* tools/perf/builtin-sched.c 2662 */;
	char cocci_id/* tools/perf/builtin-sched.c 2648 */[64];
	struct addr_location cocci_id/* tools/perf/builtin-sched.c 2516 */;
	struct perf_time_interval *cocci_id/* tools/perf/builtin-sched.c 2515 */;
	struct thread_runtime {
		u64 last_time;
		u64 dt_run;
		u64 dt_sleep;
		u64 dt_iowait;
		u64 dt_preempt;
		u64 dt_delay;
		u64 ready_to_run;
		struct stats run_stats;
		u64 total_run_time;
		u64 total_sleep_time;
		u64 total_iowait_time;
		u64 total_preempt_time;
		u64 total_delay_time;
		int last_state;
		char shortname[3];
		bool comm_changed;
		u64 migrations;
	} cocci_id/* tools/perf/builtin-sched.c 247 */;
	struct thread **cocci_id/* tools/perf/builtin-sched.c 2262 */;
	struct idle_thread_runtime *cocci_id/* tools/perf/builtin-sched.c 2189 */;
	struct symbol *cocci_id/* tools/perf/builtin-sched.c 2169 */;
	struct callchain_cursor_node *cocci_id/* tools/perf/builtin-sched.c 2168 */;
	struct callchain_cursor *cocci_id/* tools/perf/builtin-sched.c 2144 */;
	struct evsel *cocci_id/* tools/perf/builtin-sched.c 2130 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-sched.c 2129 */;
	char cocci_id/* tools/perf/builtin-sched.c 2008 */[30];
	struct addr_location *cocci_id/* tools/perf/builtin-sched.c 1999 */;
	unsigned cocci_id/* tools/perf/builtin-sched.c 1987 */;
	u32 cocci_id/* tools/perf/builtin-sched.c 1890 */;
	struct evsel_runtime cocci_id/* tools/perf/builtin-sched.c 1853 */;
	struct evsel_runtime *cocci_id/* tools/perf/builtin-sched.c 1848 */;
	unsigned long long cocci_id/* tools/perf/builtin-sched.c 1833 */;
	struct perf_data cocci_id/* tools/perf/builtin-sched.c 1794 */;
	struct perf_session *cocci_id/* tools/perf/builtin-sched.c 1793 */;
	const struct evsel_str_handler cocci_id/* tools/perf/builtin-sched.c 1786 */[];
	struct perf_sched {
		struct perf_tool tool;
		const char *sort_order;
		unsigned long nr_tasks;
		struct task_desc **pid_to_task;
		struct task_desc **tasks;
		const struct trace_sched_handler *tp_handler;
		pthread_mutex_t start_work_mutex;
		pthread_mutex_t work_done_wait_mutex;
		int profile_cpu;
		int max_cpu;
		u32 curr_pid[MAX_CPUS];
		struct thread *curr_thread[MAX_CPUS];
		char next_shortname1;
		char next_shortname2;
		unsigned int replay_repeat;
		unsigned long nr_run_events;
		unsigned long nr_sleep_events;
		unsigned long nr_wakeup_events;
		unsigned long nr_sleep_corrections;
		unsigned long nr_run_events_optimized;
		unsigned long targetless_wakeups;
		unsigned long multitarget_wakeups;
		unsigned long nr_runs;
		unsigned long nr_timestamps;
		unsigned long nr_unordered_timestamps;
		unsigned long nr_context_switch_bugs;
		unsigned long nr_events;
		unsigned long nr_lost_chunks;
		unsigned long nr_lost_events;
		u64 run_measurement_overhead;
		u64 sleep_measurement_overhead;
		u64 start_time;
		u64 cpu_usage;
		u64 runavg_cpu_usage;
		u64 parent_cpu_usage;
		u64 runavg_parent_cpu_usage;
		u64 sum_runtime;
		u64 sum_fluct;
		u64 run_avg;
		u64 all_runtime;
		u64 all_count;
		u64 cpu_last_switched[MAX_CPUS];
		struct rb_root_cached atom_root,sorted_atom_root,merged_atom_root;
		struct list_head sort_list,cmp_pid;
		bool force;
		bool skip_merge;
		struct perf_sched_map map;
		bool summary;
		bool summary_only;
		bool idle_hist;
		bool show_callchain;
		unsigned int max_stack;
		bool show_cpu_visual;
		bool show_wakeups;
		bool show_next;
		bool show_migrations;
		bool show_state;
		u64 skipped_samples;
		const char *time_str;
		struct perf_time_interval ptime;
		struct perf_time_interval hist_time;
	} cocci_id/* tools/perf/builtin-sched.c 176 */;
	union perf_event *cocci_id/* tools/perf/builtin-sched.c 1754 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-sched.c 1753 */;
	tracepoint_handler cocci_id/* tools/perf/builtin-sched.c 1746 */;
	int (*cocci_id/* tools/perf/builtin-sched.c 1732 */)(struct perf_tool *tool,
							     struct evsel *evsel,
							     struct perf_sample *sample,
							     struct machine *machine);
	struct perf_sched_map {
	DECLARE_BITMAP(comp_cpus_mask,MAX_CPUS)
		;
		int *comp_cpus;
		bool comp;
		struct perf_thread_map *color_pids;
		const char *color_pids_str;
		struct perf_cpu_map *color_cpus;
		const char *color_cpus_str;
		struct perf_cpu_map *cpus;
		const char *cpus_str;
	} cocci_id/* tools/perf/builtin-sched.c 164 */;
	char cocci_id/* tools/perf/builtin-sched.c 1536 */[32];
	union map_priv cocci_id/* tools/perf/builtin-sched.c 1509 */;
	pid_t cocci_id/* tools/perf/builtin-sched.c 1506 */;
	union map_priv {
		void *ptr;
		bool color;
	} cocci_id/* tools/perf/builtin-sched.c 1491 */;
	struct sort_dimension *cocci_id/* tools/perf/builtin-sched.c 1438 */[];
	struct sort_dimension cocci_id/* tools/perf/builtin-sched.c 1418 */;
	struct trace_sched_handler {
		int (*switch_event)(struct perf_sched *sched,
				    struct evsel *evsel,
				    struct perf_sample *sample,
				    struct machine *machine);
		int (*runtime_event)(struct perf_sched *sched,
				     struct evsel *evsel,
				     struct perf_sample *sample,
				     struct machine *machine);
		int (*wakeup_event)(struct perf_sched *sched,
				    struct evsel *evsel,
				    struct perf_sample *sample,
				    struct machine *machine);
		int (*fork_event)(struct perf_sched *sched,
				  union perf_event *event,
				  struct machine *machine);
		int (*migrate_task_event)(struct perf_sched *sched,
					  struct evsel *evsel,
					  struct perf_sample *sample,
					  struct machine *machine);
	} cocci_id/* tools/perf/builtin-sched.c 141 */;
	int (*cocci_id/* tools/perf/builtin-sched.c 137 */)(struct work_atoms *,
							    struct work_atoms *);
	double cocci_id/* tools/perf/builtin-sched.c 1347 */;
	const u32 cocci_id/* tools/perf/builtin-sched.c 1272 */;
	struct machine *cocci_id/* tools/perf/builtin-sched.c 1270 */;
	struct work_atoms {
		struct list_head work_list;
		struct thread *thread;
		struct rb_node node;
		u64 max_lat;
		u64 max_lat_at;
		u64 total_lat;
		u64 nb_atoms;
		u64 total_runtime;
		int num_merged;
	} cocci_id/* tools/perf/builtin-sched.c 125 */;
	const u64 cocci_id/* tools/perf/builtin-sched.c 1177 */;
	struct work_atom {
		struct list_head list;
		enum thread_state state;
		u64 sched_out_time;
		u64 wake_up_time;
		u64 sched_in_time;
		u64 runtime;
	} cocci_id/* tools/perf/builtin-sched.c 116 */;
	s64 cocci_id/* tools/perf/builtin-sched.c 1113 */;
	enum thread_state{THREAD_SLEEPING=0, THREAD_WAIT_CPU, THREAD_SCHED_IN, THREAD_IGNORE,} cocci_id/* tools/perf/builtin-sched.c 109 */;
	struct work_atom cocci_id/* tools/perf/builtin-sched.c 1064 */;
	struct work_atom *cocci_id/* tools/perf/builtin-sched.c 1060 */;
	u64 cocci_id/* tools/perf/builtin-sched.c 1057 */;
	char cocci_id/* tools/perf/builtin-sched.c 1036 */;
}
