cocci_test_suite() {
	struct metric_event *cocci_id/* tools/perf/util/stat-shadow.c 829 */;
	struct rblist *cocci_id/* tools/perf/util/stat-shadow.c 821 */;
	char cocci_id/* tools/perf/util/stat-shadow.c 786 */[64];
	u64 cocci_id/* tools/perf/util/stat-shadow.c 746 */;
	struct stats *cocci_id/* tools/perf/util/stat-shadow.c 745 */;
	struct saved_value *cocci_id/* tools/perf/util/stat-shadow.c 744 */;
	void *cocci_id/* tools/perf/util/stat-shadow.c 737 */;
	struct parse_ctx cocci_id/* tools/perf/util/stat-shadow.c 734 */;
	print_metric_t cocci_id/* tools/perf/util/stat-shadow.c 733 */;
	struct runtime_stat *cocci_id/* tools/perf/util/stat-shadow.c 731 */;
	struct perf_stat_output_ctx *cocci_id/* tools/perf/util/stat-shadow.c 730 */;
	double cocci_id/* tools/perf/util/stat-shadow.c 728 */;
	char *cocci_id/* tools/perf/util/stat-shadow.c 725 */;
	struct evsel **cocci_id/* tools/perf/util/stat-shadow.c 724 */;
	const char *cocci_id/* tools/perf/util/stat-shadow.c 723 */;
	struct perf_stat_config *cocci_id/* tools/perf/util/stat-shadow.c 722 */;
	void cocci_id/* tools/perf/util/stat-shadow.c 722 */;
	const struct saved_value *cocci_id/* tools/perf/util/stat-shadow.c 43 */;
	enum stat_type cocci_id/* tools/perf/util/stat-shadow.c 402 */;
	const void *cocci_id/* tools/perf/util/stat-shadow.c 38 */;
	const char **cocci_id/* tools/perf/util/stat-shadow.c 328 */;
	struct evlist *cocci_id/* tools/perf/util/stat-shadow.c 324 */;
	const double cocci_id/* tools/perf/util/stat-shadow.c 294 */[GRC_MAX_NR][3];
	enum grc_type cocci_id/* tools/perf/util/stat-shadow.c 292 */;
	enum grc_type{GRC_STALLED_CYCLES_FE, GRC_STALLED_CYCLES_BE, GRC_CACHE_MISSES, GRC_MAX_NR,} cocci_id/* tools/perf/util/stat-shadow.c 285 */;
	struct saved_value {
		struct rb_node rb_node;
		struct evsel *evsel;
		enum stat_type type;
		int ctx;
		int cpu;
		struct runtime_stat *stat;
		struct stats stats;
		u64 metric_total;
		int metric_other;
	} cocci_id/* tools/perf/util/stat-shadow.c 26 */;
	struct runtime_stat cocci_id/* tools/perf/util/stat-shadow.c 23 */;
	bool cocci_id/* tools/perf/util/stat-shadow.c 21 */;
	struct stats cocci_id/* tools/perf/util/stat-shadow.c 181 */;
	struct saved_value cocci_id/* tools/perf/util/stat-shadow.c 179 */;
	struct rb_node *cocci_id/* tools/perf/util/stat-shadow.c 172 */;
	struct evsel *cocci_id/* tools/perf/util/stat-shadow.c 151 */;
	int cocci_id/* tools/perf/util/stat-shadow.c 151 */;
	struct metric_expr *cocci_id/* tools/perf/util/stat-shadow.c 1052 */;
	char cocci_id/* tools/perf/util/stat-shadow.c 1033 */[10];
	char cocci_id/* tools/perf/util/stat-shadow.c 1032 */;
}
