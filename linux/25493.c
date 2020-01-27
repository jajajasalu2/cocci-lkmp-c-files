cocci_test_suite() {
	struct block_range *cocci_id/* tools/perf/builtin-annotate.c 89 */;
	struct block_range_iter cocci_id/* tools/perf/builtin-annotate.c 88 */;
	struct symbol *cocci_id/* tools/perf/builtin-annotate.c 86 */;
	struct branch_flags *cocci_id/* tools/perf/builtin-annotate.c 84 */;
	struct addr_map_symbol *cocci_id/* tools/perf/builtin-annotate.c 82 */;
	struct option cocci_id/* tools/perf/builtin-annotate.c 496 */[];
	struct perf_data cocci_id/* tools/perf/builtin-annotate.c 493 */;
	struct perf_annotate cocci_id/* tools/perf/builtin-annotate.c 475 */;
	const char **cocci_id/* tools/perf/builtin-annotate.c 473 */;
	const char *const cocci_id/* tools/perf/builtin-annotate.c 468 */[];
	void (*cocci_id/* tools/perf/builtin-annotate.c 453 */)(void);
	struct perf_annotate {
		struct perf_tool tool;
		struct perf_session *session;
		struct annotation_options opts;
		bool use_tui,use_stdio,use_stdio2,use_gtk;
		bool skip_missing;
		bool has_br_stack;
		bool group_set;
		const char *sym_hist_filter;
		const char *cpu_list;
	DECLARE_BITMAP(cpu_bitmap,MAX_NR_CPUS)
		;
	} cocci_id/* tools/perf/builtin-annotate.c 45 */;
	u32 cocci_id/* tools/perf/builtin-annotate.c 430 */;
	struct hists *cocci_id/* tools/perf/builtin-annotate.c 429 */;
	u64 cocci_id/* tools/perf/builtin-annotate.c 395 */;
	struct evsel *cocci_id/* tools/perf/builtin-annotate.c 394 */;
	struct perf_session *cocci_id/* tools/perf/builtin-annotate.c 393 */;
	struct perf_annotate *cocci_id/* tools/perf/builtin-annotate.c 390 */;
	int cocci_id/* tools/perf/builtin-annotate.c 390 */;
	int (*cocci_id/* tools/perf/builtin-annotate.c 339 */)(struct hist_entry *he,
							       struct evsel *evsel,
							       struct hist_browser_timer *hbt);
	struct annotation *cocci_id/* tools/perf/builtin-annotate.c 318 */;
	struct hist_entry cocci_id/* tools/perf/builtin-annotate.c 317 */;
	struct rb_node *cocci_id/* tools/perf/builtin-annotate.c 313 */;
	void cocci_id/* tools/perf/builtin-annotate.c 309 */;
	struct hist_entry *cocci_id/* tools/perf/builtin-annotate.c 299 */;
	union perf_event *cocci_id/* tools/perf/builtin-annotate.c 292 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-annotate.c 261 */;
	struct machine *cocci_id/* tools/perf/builtin-annotate.c 219 */;
	bool cocci_id/* tools/perf/builtin-annotate.c 210 */;
	struct addr_location cocci_id/* tools/perf/builtin-annotate.c 192 */;
	struct hist_entry_iter cocci_id/* tools/perf/builtin-annotate.c 184 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-annotate.c 162 */;
	struct branch_info *cocci_id/* tools/perf/builtin-annotate.c 161 */;
	void *cocci_id/* tools/perf/builtin-annotate.c 158 */;
	struct addr_location *cocci_id/* tools/perf/builtin-annotate.c 156 */;
	struct hist_entry_iter *cocci_id/* tools/perf/builtin-annotate.c 155 */;
	struct branch_stack *cocci_id/* tools/perf/builtin-annotate.c 129 */;
}
