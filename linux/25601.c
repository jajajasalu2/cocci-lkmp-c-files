cocci_test_suite() {
	const char *cocci_id/* tools/perf/util/parse-events.c 979 */[__PARSE_EVENTS__TERM_TYPE_NR];
	struct parse_events_term *cocci_id/* tools/perf/util/parse-events.c 959 */;
	long cocci_id/* tools/perf/util/parse-events.c 946 */;
	unsigned long cocci_id/* tools/perf/util/parse-events.c 938 */;
	char cocci_id/* tools/perf/util/parse-events.c 780 */[BUFSIZ];
	struct __add_bpf_event_param cocci_id/* tools/perf/util/parse-events.c 722 */;
	struct parse_events_state *cocci_id/* tools/perf/util/parse-events.c 672 */;
	struct __add_bpf_event_param *cocci_id/* tools/perf/util/parse-events.c 671 */;
	void *cocci_id/* tools/perf/util/parse-events.c 668 */;
	struct bpf_object *cocci_id/* tools/perf/util/parse-events.c 667 */;
	struct __add_bpf_event_param {
		struct parse_events_state *parse_state;
		struct list_head *list;
		struct list_head *head_config;
	} cocci_id/* tools/perf/util/parse-events.c 661 */;
	struct event_symbol cocci_id/* tools/perf/util/parse-events.c 58 */[PERF_COUNT_HW_MAX];
	DIR *cocci_id/* tools/perf/util/parse-events.c 574 */;
	struct dirent *cocci_id/* tools/perf/util/parse-events.c 573 */;
	struct parse_events_error *cocci_id/* tools/perf/util/parse-events.c 544 */;
	int cocci_id/* tools/perf/util/parse-events.c 46 */(struct list_head *head_config,
							    struct list_head *head_terms __maybe_unused);
	int cocci_id/* tools/perf/util/parse-events.c 45 */(void *parse_state,
							    void *scanner);
	char *cocci_id/* tools/perf/util/parse-events.c 446 */[2];
	char cocci_id/* tools/perf/util/parse-events.c 444 */[MAX_NAME_LEN];
	int cocci_id/* tools/perf/util/parse-events.c 432 */(struct perf_event_attr *attr,
							     struct list_head *head,
							     struct parse_events_error *err,
							     config_term_func_t config_term);
	int cocci_id/* tools/perf/util/parse-events.c 429 */(struct perf_event_attr *attr,
							     struct parse_events_term *term,
							     struct parse_events_error *err);
	const char *cocci_id/* tools/perf/util/parse-events.c 408 */[][PERF_EVSEL__MAX_ALIASES];
	struct perf_event_attr cocci_id/* tools/perf/util/parse-events.c 394 */;
	enum perf_tool_event cocci_id/* tools/perf/util/parse-events.c 391 */;
	struct perf_cpu_map *cocci_id/* tools/perf/util/parse-events.c 358 */;
	const char *cocci_id/* tools/perf/util/parse-events.c 355 */;
	bool cocci_id/* tools/perf/util/parse-events.c 354 */;
	struct perf_pmu *cocci_id/* tools/perf/util/parse-events.c 353 */;
	char *cocci_id/* tools/perf/util/parse-events.c 353 */;
	struct perf_event_attr *cocci_id/* tools/perf/util/parse-events.c 352 */;
	struct list_head *cocci_id/* tools/perf/util/parse-events.c 351 */;
	int *cocci_id/* tools/perf/util/parse-events.c 351 */;
	struct evsel *cocci_id/* tools/perf/util/parse-events.c 350 */;
	char cocci_id/* tools/perf/util/parse-events.c 3010 */[__PARSE_EVENTS__TERM_TYPE_NR * (sizeof("no-overwrite") - 1)];
	size_t cocci_id/* tools/perf/util/parse-events.c 2975 */;
	struct parse_events_array *cocci_id/* tools/perf/util/parse-events.c 2961 */;
	struct list_head cocci_id/* tools/perf/util/parse-events.c 2929 */;
	struct list_head **cocci_id/* tools/perf/util/parse-events.c 2919 */;
	struct parse_events_term cocci_id/* tools/perf/util/parse-events.c 2884 */;
	struct event_symbol *cocci_id/* tools/perf/util/parse-events.c 2858 */;
	YYLTYPE *cocci_id/* tools/perf/util/parse-events.c 2822 */;
	struct parse_events_term **cocci_id/* tools/perf/util/parse-events.c 2787 */;
	char **cocci_id/* tools/perf/util/parse-events.c 2576 */;
	struct str_node *cocci_id/* tools/perf/util/parse-events.c 2499 */;
	struct strlist_config cocci_id/* tools/perf/util/parse-events.c 2498 */;
	struct strlist *cocci_id/* tools/perf/util/parse-events.c 2497 */;
	struct probe_cache_entry *cocci_id/* tools/perf/util/parse-events.c 2496 */;
	struct probe_cache *cocci_id/* tools/perf/util/parse-events.c 2495 */;
	struct perf_thread_map *cocci_id/* tools/perf/util/parse-events.c 2464 */;
	u8 cocci_id/* tools/perf/util/parse-events.c 2454 */;
	unsigned cocci_id/* tools/perf/util/parse-events.c 2454 */;
	char cocci_id/* tools/perf/util/parse-events.c 2422 */[MAXPATHLEN];
	const char *const *cocci_id/* tools/perf/util/parse-events.c 2309 */;
	const char *const cocci_id/* tools/perf/util/parse-events.c 2298 */[];
	struct evlist *cocci_id/* tools/perf/util/parse-events.c 2292 */;
	struct evlist **cocci_id/* tools/perf/util/parse-events.c 2292 */;
	const struct option *cocci_id/* tools/perf/util/parse-events.c 2288 */;
	char cocci_id/* tools/perf/util/parse-events.c 2269 */[64];
	const void *cocci_id/* tools/perf/util/parse-events.c 2267 */;
	char cocci_id/* tools/perf/util/parse-events.c 222 */[24];
	struct evsel cocci_id/* tools/perf/util/parse-events.c 2203 */;
	int (*cocci_id/* tools/perf/util/parse-events.c 2178 */)(struct evsel *evsel,
								 const void *arg);
	struct tracepoint_path *cocci_id/* tools/perf/util/parse-events.c 217 */;
	struct parse_events_error cocci_id/* tools/perf/util/parse-events.c 2162 */;
	char cocci_id/* tools/perf/util/parse-events.c 2086 */[MAX_WIDTH];
	int cocci_id/* tools/perf/util/parse-events.c 2082 */;
	void cocci_id/* tools/perf/util/parse-events.c 2082 */;
	struct winsize cocci_id/* tools/perf/util/parse-events.c 2076 */;
	struct parse_events_state cocci_id/* tools/perf/util/parse-events.c 2034 */;
	YY_BUFFER_STATE cocci_id/* tools/perf/util/parse-events.c 1989 */;
	struct perf_pmu_event_symbol cocci_id/* tools/perf/util/parse-events.c 1966 */;
	enum perf_pmu_event_symbol_type cocci_id/* tools/perf/util/parse-events.c 1963 */;
	struct perf_pmu_event_symbol *cocci_id/* tools/perf/util/parse-events.c 1878 */;
	struct event_modifier cocci_id/* tools/perf/util/parse-events.c 1829 */;
	struct event_modifier *cocci_id/* tools/perf/util/parse-events.c 1714 */;
	struct event_modifier {
		int eu;
		int ek;
		int eh;
		int eH;
		int eG;
		int eI;
		int precise;
		int precise_max;
		int exclude_GH;
		int sample_read;
		int pinned;
		int weak;
	} cocci_id/* tools/perf/util/parse-events.c 1699 */;
	uintptr_t cocci_id/* tools/perf/util/parse-events.c 1589 */;
	uintptr_t *cocci_id/* tools/perf/util/parse-events.c 1581 */;
	struct perf_pmu_alias *cocci_id/* tools/perf/util/parse-events.c 1506 */;
	struct perf_pmu_info cocci_id/* tools/perf/util/parse-events.c 1403 */;
	struct perf_evsel_config_term *cocci_id/* tools/perf/util/parse-events.c 1386 */;
	u32 cocci_id/* tools/perf/util/parse-events.c 1354 */;
	u64 cocci_id/* tools/perf/util/parse-events.c 1305 */;
	config_term_func_t cocci_id/* tools/perf/util/parse-events.c 1208 */;
	unsigned int cocci_id/* tools/perf/util/parse-events.c 1121 */;
	struct event_symbol cocci_id/* tools/perf/util/parse-events.c 101 */[PERF_COUNT_SW_MAX];
}
