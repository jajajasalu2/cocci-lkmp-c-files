cocci_test_suite() {
	pid_t cocci_id/* tools/perf/tests/switch-tracking.c 75 */;
	const char *cocci_id/* tools/perf/tests/switch-tracking.c 72 */;
	struct switch_tracking *cocci_id/* tools/perf/tests/switch-tracking.c 71 */;
	struct switch_tracking {
		struct evsel *switch_evsel;
		struct evsel *cycles_evsel;
		pid_t *tids;
		int nr_tids;
		int comm_seen[4];
		int cycles_before_comm_1;
		int cycles_between_comm_2_and_comm_3;
		int cycles_after_comm_4;
	} cocci_id/* tools/perf/tests/switch-tracking.c 60 */;
	unsigned long cocci_id/* tools/perf/tests/switch-tracking.c 486 */;
	struct perf_cpu_map *cocci_id/* tools/perf/tests/switch-tracking.c 337 */;
	struct perf_thread_map *cocci_id/* tools/perf/tests/switch-tracking.c 336 */;
	struct record_opts cocci_id/* tools/perf/tests/switch-tracking.c 327 */;
	struct switch_tracking cocci_id/* tools/perf/tests/switch-tracking.c 326 */;
	struct test *cocci_id/* tools/perf/tests/switch-tracking.c 323 */;
	struct mmap *cocci_id/* tools/perf/tests/switch-tracking.c 268 */;
	unsigned cocci_id/* tools/perf/tests/switch-tracking.c 265 */;
	s64 cocci_id/* tools/perf/tests/switch-tracking.c 256 */;
	const struct event_node *cocci_id/* tools/perf/tests/switch-tracking.c 254 */;
	const void *cocci_id/* tools/perf/tests/switch-tracking.c 252 */;
	struct timespec cocci_id/* tools/perf/tests/switch-tracking.c 25 */;
	void cocci_id/* tools/perf/tests/switch-tracking.c 241 */;
	struct timeval cocci_id/* tools/perf/tests/switch-tracking.c 24 */;
	struct event_node cocci_id/* tools/perf/tests/switch-tracking.c 218 */;
	struct event_node *cocci_id/* tools/perf/tests/switch-tracking.c 216 */;
	struct perf_sample cocci_id/* tools/perf/tests/switch-tracking.c 215 */;
	union perf_event *cocci_id/* tools/perf/tests/switch-tracking.c 213 */;
	struct list_head *cocci_id/* tools/perf/tests/switch-tracking.c 212 */;
	struct evlist *cocci_id/* tools/perf/tests/switch-tracking.c 212 */;
	int cocci_id/* tools/perf/tests/switch-tracking.c 212 */;
	struct event_node {
		struct list_head list;
		union perf_event *event;
		u64 event_time;
	} cocci_id/* tools/perf/tests/switch-tracking.c 206 */;
	struct evsel *cocci_id/* tools/perf/tests/switch-tracking.c 127 */;
	void *cocci_id/* tools/perf/tests/switch-tracking.c 107 */;
}
