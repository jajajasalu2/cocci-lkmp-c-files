cocci_test_suite() {
	const char *const cocci_id/* tools/perf/builtin-lock.c 979 */[];
	const struct option cocci_id/* tools/perf/builtin-lock.c 956 */[];
	char *cocci_id/* tools/perf/builtin-lock.c 932 */;
	unsigned int cocci_id/* tools/perf/builtin-lock.c 916 */;
	const char *cocci_id/* tools/perf/builtin-lock.c 913 */[];
	const char **cocci_id/* tools/perf/builtin-lock.c 911 */;
	int cocci_id/* tools/perf/builtin-lock.c 911 */;
	struct perf_data cocci_id/* tools/perf/builtin-lock.c 869 */;
	struct perf_tool cocci_id/* tools/perf/builtin-lock.c 863 */;
	bool cocci_id/* tools/perf/builtin-lock.c 860 */;
	const struct evsel_str_handler cocci_id/* tools/perf/builtin-lock.c 851 */[];
	tracepoint_handler cocci_id/* tools/perf/builtin-lock.c 830 */;
	struct machine *cocci_id/* tools/perf/builtin-lock.c 817 */;
	union perf_event *cocci_id/* tools/perf/builtin-lock.c 814 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-lock.c 813 */;
	int (*cocci_id/* tools/perf/builtin-lock.c 810 */)(struct evsel *evsel,
							   struct perf_sample *sample);
	void cocci_id/* tools/perf/builtin-lock.c 794 */;
	struct lock_stat *cocci_id/* tools/perf/builtin-lock.c 784 */;
	struct thread_stat cocci_id/* tools/perf/builtin-lock.c 773 */;
	struct thread *cocci_id/* tools/perf/builtin-lock.c 767 */;
	struct rb_node *cocci_id/* tools/perf/builtin-lock.c 766 */;
	struct thread_stat *cocci_id/* tools/perf/builtin-lock.c 765 */;
	char cocci_id/* tools/perf/builtin-lock.c 711 */[20];
	double cocci_id/* tools/perf/builtin-lock.c 701 */;
	const char *cocci_id/* tools/perf/builtin-lock.c 696 */[4];
	struct perf_sample *cocci_id/* tools/perf/builtin-lock.c 661 */;
	struct evsel *cocci_id/* tools/perf/builtin-lock.c 660 */;
	struct trace_lock_handler *cocci_id/* tools/perf/builtin-lock.c 658 */;
	struct trace_lock_handler cocci_id/* tools/perf/builtin-lock.c 651 */;
	struct lock_stat {
		struct list_head hash_entry;
		struct rb_node rb;
		void *addr;
		char *name;
		unsigned int nr_acquire;
		unsigned int nr_acquired;
		unsigned int nr_contended;
		unsigned int nr_release;
		unsigned int nr_readlock;
		unsigned int nr_trylock;
		u64 avg_wait_time;
		u64 wait_time_total;
		u64 wait_time_min;
		u64 wait_time_max;
		int discard;
	} cocci_id/* tools/perf/builtin-lock.c 46 */;
	unsigned long cocci_id/* tools/perf/builtin-lock.c 43 */;
	struct list_head cocci_id/* tools/perf/builtin-lock.c 41 */[LOCKHASH_SIZE];
	enum acquire_flags{TRY_LOCK=1, READ_LOCK=2,} cocci_id/* tools/perf/builtin-lock.c 395 */;
	int cocci_id/* tools/perf/builtin-lock.c 393 */[BROKEN_MAX];
	enum broken_state{BROKEN_ACQUIRE, BROKEN_ACQUIRED, BROKEN_CONTENDED, BROKEN_RELEASE, BROKEN_MAX,} cocci_id/* tools/perf/builtin-lock.c 385 */;
	struct lock_seq_stat cocci_id/* tools/perf/builtin-lock.c 373 */;
	struct lock_seq_stat *cocci_id/* tools/perf/builtin-lock.c 364 */;
	void *cocci_id/* tools/perf/builtin-lock.c 364 */;
	struct trace_lock_handler {
		int (*acquire_event)(struct evsel *evsel,
				     struct perf_sample *sample);
		int (*acquired_event)(struct evsel *evsel,
				      struct perf_sample *sample);
		int (*contended_event)(struct evsel *evsel,
				       struct perf_sample *sample);
		int (*release_event)(struct evsel *evsel,
				     struct perf_sample *sample);
	} cocci_id/* tools/perf/builtin-lock.c 350 */;
	struct perf_session *cocci_id/* tools/perf/builtin-lock.c 35 */;
	char cocci_id/* tools/perf/builtin-lock.c 333 */;
	struct list_head *cocci_id/* tools/perf/builtin-lock.c 320 */;
	const char *cocci_id/* tools/perf/builtin-lock.c 318 */;
	struct lock_stat cocci_id/* tools/perf/builtin-lock.c 290 */;
	struct rb_node **cocci_id/* tools/perf/builtin-lock.c 285 */;
	struct lock_key cocci_id/* tools/perf/builtin-lock.c 253 */[];
	struct rb_root cocci_id/* tools/perf/builtin-lock.c 249 */;
	int (*cocci_id/* tools/perf/builtin-lock.c 247 */)(struct lock_stat *,
							   struct lock_stat *);
	struct lock_key {
		const char *name;
		int (*key)(struct lock_stat *, struct lock_stat *);
	} cocci_id/* tools/perf/builtin-lock.c 235 */;
	u64 cocci_id/* tools/perf/builtin-lock.c 226 */;
	struct thread_stat *(*cocci_id/* tools/perf/builtin-lock.c 187 */)(u32 tid);
	struct thread_stat *cocci_id/* tools/perf/builtin-lock.c 186 */(u32 tid);
	u32 cocci_id/* tools/perf/builtin-lock.c 123 */;
	struct thread_stat {
		struct rb_node rb;
		u32 tid;
		struct list_head seq_list;
	} cocci_id/* tools/perf/builtin-lock.c 114 */;
	struct lock_seq_stat {
		struct list_head list;
		int state;
		u64 prev_event_time;
		void *addr;
		int read_count;
	} cocci_id/* tools/perf/builtin-lock.c 105 */;
}
