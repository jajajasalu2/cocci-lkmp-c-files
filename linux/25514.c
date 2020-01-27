cocci_test_suite() {
	const char *cocci_id/* tools/perf/builtin-diff.c 99 */;
	struct evsel *cocci_id/* tools/perf/builtin-diff.c 972 */;
	struct evlist *cocci_id/* tools/perf/builtin-diff.c 971 */;
	s64 cocci_id/* tools/perf/builtin-diff.c 781 */;
	double cocci_id/* tools/perf/builtin-diff.c 760 */;
	struct hist_entry *cocci_id/* tools/perf/builtin-diff.c 754 */;
	int64_t cocci_id/* tools/perf/builtin-diff.c 753 */;
	struct data__file {
		struct perf_session *session;
		struct perf_data data;
		int idx;
		struct hists *hists;
		struct diff_hpp_fmt fmt[PERF_HPP_DIFF__MAX_INDEX];
	} cocci_id/* tools/perf/builtin-diff.c 70 */;
	struct hist_entry cocci_id/* tools/perf/builtin-diff.c 666 */;
	struct rb_node *cocci_id/* tools/perf/builtin-diff.c 663 */;
	struct rb_root_cached *cocci_id/* tools/perf/builtin-diff.c 662 */;
	struct hists *cocci_id/* tools/perf/builtin-diff.c 659 */;
	struct diff_hpp_fmt {
		struct perf_hpp_fmt fmt;
		int idx;
		char *header;
		int header_width;
	} cocci_id/* tools/perf/builtin-diff.c 63 */;
	struct stats *cocci_id/* tools/perf/builtin-diff.c 620 */;
	struct block_info *cocci_id/* tools/perf/builtin-diff.c 577 */;
	bool cocci_id/* tools/perf/builtin-diff.c 543 */;
	struct data__file cocci_id/* tools/perf/builtin-diff.c 491 */;
	enum{PERF_HPP_DIFF__BASELINE, PERF_HPP_DIFF__PERIOD, PERF_HPP_DIFF__PERIOD_BASELINE, PERF_HPP_DIFF__DELTA, PERF_HPP_DIFF__RATIO, PERF_HPP_DIFF__WEIGHTED_DIFF, PERF_HPP_DIFF__FORMULA, PERF_HPP_DIFF__DELTA_ABS, PERF_HPP_DIFF__CYCLES, PERF_HPP_DIFF__CYCLES_HIST, PERF_HPP_DIFF__MAX_INDEX,} cocci_id/* tools/perf/builtin-diff.c 48 */;
	struct addr_location cocci_id/* tools/perf/builtin-diff.c 394 */;
	struct perf_diff cocci_id/* tools/perf/builtin-diff.c 393 */;
	struct perf_diff *cocci_id/* tools/perf/builtin-diff.c 393 */;
	struct machine *cocci_id/* tools/perf/builtin-diff.c 391 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-diff.c 389 */;
	union perf_event *cocci_id/* tools/perf/builtin-diff.c 388 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-diff.c 387 */;
	struct hist_entry_ops cocci_id/* tools/perf/builtin-diff.c 382 */;
	struct perf_diff {
		struct perf_tool tool;
		const char *time_str;
		struct perf_time_interval *ptime_range;
		int range_size;
		int range_num;
		bool has_br_stack;
	} cocci_id/* tools/perf/builtin-diff.c 38 */;
	void *cocci_id/* tools/perf/builtin-diff.c 373 */;
	unsigned cocci_id/* tools/perf/builtin-diff.c 231 */;
	char cocci_id/* tools/perf/builtin-diff.c 230 */[50];
	const struct option *cocci_id/* tools/perf/builtin-diff.c 225 */;
	const char **cocci_id/* tools/perf/builtin-diff.c 1888 */;
	struct perf_data *cocci_id/* tools/perf/builtin-diff.c 1848 */;
	unsigned int cocci_id/* tools/perf/builtin-diff.c 1838 */;
	const char *cocci_id/* tools/perf/builtin-diff.c 1817 */[];
	char cocci_id/* tools/perf/builtin-diff.c 1643 */[MAX_HEADER_NAME];
	int *cocci_id/* tools/perf/builtin-diff.c 1620 */;
	char cocci_id/* tools/perf/builtin-diff.c 1606 */[MAX_COL_WIDTH];
	size_t cocci_id/* tools/perf/builtin-diff.c 1585 */;
	char cocci_id/* tools/perf/builtin-diff.c 1458 */[32];
	unsigned long *cocci_id/* tools/perf/builtin-diff.c 1422 */;
	struct block_hist cocci_id/* tools/perf/builtin-diff.c 1344 */;
	struct block_hist *cocci_id/* tools/perf/builtin-diff.c 1342 */;
	char cocci_id/* tools/perf/builtin-diff.c 1338 */[20];
	struct diff_hpp_fmt cocci_id/* tools/perf/builtin-diff.c 1334 */;
	struct diff_hpp_fmt *cocci_id/* tools/perf/builtin-diff.c 1333 */;
	struct perf_hpp *cocci_id/* tools/perf/builtin-diff.c 1330 */;
	struct perf_hpp_fmt *cocci_id/* tools/perf/builtin-diff.c 1329 */;
	struct header_column {
		const char *name;
		int width;
	} cocci_id/* tools/perf/builtin-diff.c 131 */[PERF_HPP_DIFF__MAX_INDEX];
	char cocci_id/* tools/perf/builtin-diff.c 1293 */[128];
	u64 cocci_id/* tools/perf/builtin-diff.c 1252 */;
	int cocci_id/* tools/perf/builtin-diff.c 121 */[COMPUTE_MAX];
	const struct option cocci_id/* tools/perf/builtin-diff.c 1198 */[];
	const char *const cocci_id/* tools/perf/builtin-diff.c 1193 */[];
	char *cocci_id/* tools/perf/builtin-diff.c 1132 */;
	struct data__file *cocci_id/* tools/perf/builtin-diff.c 1130 */;
	int cocci_id/* tools/perf/builtin-diff.c 1128 */;
	void cocci_id/* tools/perf/builtin-diff.c 1128 */;
	const char *cocci_id/* tools/perf/builtin-diff.c 111 */[COMPUTE_MAX];
	char **cocci_id/* tools/perf/builtin-diff.c 1026 */;
	enum{COMPUTE_DELTA, COMPUTE_RATIO, COMPUTE_WEIGHTED_DIFF, COMPUTE_DELTA_ABS, COMPUTE_CYCLES, COMPUTE_MAX,} cocci_id/* tools/perf/builtin-diff.c 102 */;
}