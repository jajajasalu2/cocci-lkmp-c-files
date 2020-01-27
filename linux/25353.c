cocci_test_suite() {
	struct hist_entry_iter cocci_id/* tools/perf/tests/hists_cumulate.c 88 */;
	size_t cocci_id/* tools/perf/tests/hists_cumulate.c 85 */;
	struct perf_sample cocci_id/* tools/perf/tests/hists_cumulate.c 84 */;
	struct evsel *cocci_id/* tools/perf/tests/hists_cumulate.c 83 */;
	struct addr_location cocci_id/* tools/perf/tests/hists_cumulate.c 82 */;
	struct machine *cocci_id/* tools/perf/tests/hists_cumulate.c 80 */;
	struct hists *cocci_id/* tools/perf/tests/hists_cumulate.c 80 */;
	int cocci_id/* tools/perf/tests/hists_cumulate.c 80 */;
	test_fn_t cocci_id/* tools/perf/tests/hists_cumulate.c 700 */[];
	struct evlist *cocci_id/* tools/perf/tests/hists_cumulate.c 698 */;
	struct machines cocci_id/* tools/perf/tests/hists_cumulate.c 695 */;
	struct test *cocci_id/* tools/perf/tests/hists_cumulate.c 692 */;
	u64 cocci_id/* tools/perf/tests/hists_cumulate.c 53 */[][10];
	struct callchain_result cocci_id/* tools/perf/tests/hists_cumulate.c 378 */[];
	struct result cocci_id/* tools/perf/tests/hists_cumulate.c 269 */[];
	struct sample cocci_id/* tools/perf/tests/hists_cumulate.c 26 */[];
	struct callchain_node cocci_id/* tools/perf/tests/hists_cumulate.c 225 */;
	struct callchain_list *cocci_id/* tools/perf/tests/hists_cumulate.c 186 */;
	struct callchain_node *cocci_id/* tools/perf/tests/hists_cumulate.c 185 */;
	struct rb_root *cocci_id/* tools/perf/tests/hists_cumulate.c 183 */;
	char cocci_id/* tools/perf/tests/hists_cumulate.c 180 */[32];
	struct callchain_result *cocci_id/* tools/perf/tests/hists_cumulate.c 178 */;
	struct result *cocci_id/* tools/perf/tests/hists_cumulate.c 177 */;
	struct sample {
		u32 pid;
		u64 ip;
		struct thread *thread;
		struct map *map;
		struct symbol *sym;
	} cocci_id/* tools/perf/tests/hists_cumulate.c 17 */;
	struct callchain_result {
		u64 nr;
		struct {
			const char *dso;
			const char *sym;
		} node[10];
	} cocci_id/* tools/perf/tests/hists_cumulate.c 169 */;
	struct result {
		u64 children;
		u64 self;
		const char *comm;
		const char *dso;
		const char *sym;
	} cocci_id/* tools/perf/tests/hists_cumulate.c 161 */;
	int (*cocci_id/* tools/perf/tests/hists_cumulate.c 150 */)(struct evsel *,
								   struct machine *);
	struct hist_entry cocci_id/* tools/perf/tests/hists_cumulate.c 143 */;
	struct rb_node *cocci_id/* tools/perf/tests/hists_cumulate.c 131 */;
	struct rb_root_cached *cocci_id/* tools/perf/tests/hists_cumulate.c 129 */;
	struct hist_entry *cocci_id/* tools/perf/tests/hists_cumulate.c 128 */;
	void cocci_id/* tools/perf/tests/hists_cumulate.c 126 */;
	struct ip_callchain *cocci_id/* tools/perf/tests/hists_cumulate.c 103 */;
}
