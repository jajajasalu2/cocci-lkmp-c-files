cocci_test_suite() {
	struct ordered_events *cocci_id/* tools/perf/builtin-inject.c 88 */;
	const char *const cocci_id/* tools/perf/builtin-inject.c 774 */[];
	struct option cocci_id/* tools/perf/builtin-inject.c 748 */[];
	struct perf_data cocci_id/* tools/perf/builtin-inject.c 743 */;
	struct perf_inject cocci_id/* tools/perf/builtin-inject.c 709 */;
	const char **cocci_id/* tools/perf/builtin-inject.c 707 */;
	const char *cocci_id/* tools/perf/builtin-inject.c 625 */;
	struct evsel *cocci_id/* tools/perf/builtin-inject.c 622 */;
	u64 cocci_id/* tools/perf/builtin-inject.c 605 */;
	struct perf_data *cocci_id/* tools/perf/builtin-inject.c 603 */;
	struct perf_session *cocci_id/* tools/perf/builtin-inject.c 602 */;
	struct perf_inject *cocci_id/* tools/perf/builtin-inject.c 599 */;
	int cocci_id/* tools/perf/builtin-inject.c 599 */;
	struct evlist *cocci_id/* tools/perf/builtin-inject.c 590 */;
	struct machine *cocci_id/* tools/perf/builtin-inject.c 583 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-inject.c 581 */;
	union perf_event *cocci_id/* tools/perf/builtin-inject.c 580 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-inject.c 579 */;
	void *cocci_id/* tools/perf/builtin-inject.c 57 */;
	size_t cocci_id/* tools/perf/builtin-inject.c 57 */;
	struct perf_event_attr *cocci_id/* tools/perf/builtin-inject.c 567 */;
	void cocci_id/* tools/perf/builtin-inject.c 559 */;
	u32 cocci_id/* tools/perf/builtin-inject.c 539 */;
	struct perf_sample cocci_id/* tools/perf/builtin-inject.c 537 */;
	struct event_entry cocci_id/* tools/perf/builtin-inject.c 516 */;
	struct event_entry {
		struct list_head node;
		u32 tid;
		union perf_event event[0];
	} cocci_id/* tools/perf/builtin-inject.c 51 */;
	struct event_entry *cocci_id/* tools/perf/builtin-inject.c 492 */;
	struct thread *cocci_id/* tools/perf/builtin-inject.c 451 */;
	struct addr_location cocci_id/* tools/perf/builtin-inject.c 450 */;
	u16 cocci_id/* tools/perf/builtin-inject.c 423 */;
	struct dso *cocci_id/* tools/perf/builtin-inject.c 420 */;
	struct perf_inject {
		struct perf_tool tool;
		struct perf_session *session;
		bool build_ids;
		bool sched_stat;
		bool have_auxtrace;
		bool strip;
		bool jit_mode;
		const char *input_name;
		struct perf_data output;
		u64 bytes_written;
		u64 aux_id;
		struct list_head samples;
		struct itrace_synth_opts itrace_synth_opts;
		char event_copy[PERF_SAMPLE_MAX_SIZE];
	} cocci_id/* tools/perf/builtin-inject.c 34 */;
	inject_handler cocci_id/* tools/perf/builtin-inject.c 256 */;
	int (*cocci_id/* tools/perf/builtin-inject.c 240 */)(struct perf_tool *tool,
							     union perf_event *event,
							     struct perf_sample *sample,
							     struct evsel *evsel,
							     struct machine *machine);
	u64 *cocci_id/* tools/perf/builtin-inject.c 235 */;
	struct perf_event_header cocci_id/* tools/perf/builtin-inject.c 229 */;
	s64 cocci_id/* tools/perf/builtin-inject.c 139 */;
	ssize_t cocci_id/* tools/perf/builtin-inject.c 123 */;
	char cocci_id/* tools/perf/builtin-inject.c 122 */[4096];
	off_t cocci_id/* tools/perf/builtin-inject.c 120 */;
	struct evlist **cocci_id/* tools/perf/builtin-inject.c 102 */;
}
