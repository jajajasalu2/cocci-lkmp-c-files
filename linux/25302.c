cocci_test_suite() {
	struct perf_c2c {
		struct perf_tool tool;
		struct c2c_hists hists;
		struct mem2node mem2node;
		unsigned long **nodes;
		int nodes_cnt;
		int cpus_cnt;
		int *cpu2node;
		int node_info;
		bool show_src;
		bool show_all;
		bool use_stdio;
		bool stats_only;
		bool symbol_full;
		struct c2c_stats hitm_stats;
		int shared_clines;
		int display;
		const char *coalesce;
		char *cl_sort;
		char *cl_resort;
		char *cl_output;
	} cocci_id/* tools/perf/builtin-c2c.c 82 */;
	get_percent_cb cocci_id/* tools/perf/builtin-c2c.c 798 */;
	double cocci_id/* tools/perf/builtin-c2c.c 794 */(struct c2c_hist_entry *);
	struct c2c_hist_entry {
		struct c2c_hists *hists;
		struct c2c_stats stats;
		unsigned long *cpuset;
		unsigned long *nodeset;
		struct c2c_stats *node_stats;
		unsigned int cacheline_idx;
		struct compute_stats cstats;
		unsigned long paddr;
		unsigned long paddr_cnt;
		bool paddr_zero;
		char *nodestr;
		struct hist_entry he;
	} cocci_id/* tools/perf/builtin-c2c.c 58 */;
	struct compute_stats {
		struct stats lcl_hitm;
		struct stats rmt_hitm;
		struct stats load;
	} cocci_id/* tools/perf/builtin-c2c.c 52 */;
	char cocci_id/* tools/perf/builtin-c2c.c 497 */[20];
	uint64_t cocci_id/* tools/perf/builtin-c2c.c 495 */;
	struct c2c_hists {
		struct hists hists;
		struct perf_hpp_list list;
		struct c2c_stats stats;
	} cocci_id/* tools/perf/builtin-c2c.c 46 */;
	struct c2c_fmt cocci_id/* tools/perf/builtin-c2c.c 454 */;
	const char *cocci_id/* tools/perf/builtin-c2c.c 451 */;
	struct c2c_dimension *cocci_id/* tools/perf/builtin-c2c.c 450 */;
	struct c2c_fmt *cocci_id/* tools/perf/builtin-c2c.c 449 */;
	struct perf_hpp_list *cocci_id/* tools/perf/builtin-c2c.c 448 */;
	int *cocci_id/* tools/perf/builtin-c2c.c 446 */;
	struct perf_hpp_fmt *cocci_id/* tools/perf/builtin-c2c.c 445 */;
	struct perf_hpp *cocci_id/* tools/perf/builtin-c2c.c 445 */;
	struct sort_entry *cocci_id/* tools/perf/builtin-c2c.c 418 */;
	struct c2c_fmt {
		struct perf_hpp_fmt fmt;
		struct c2c_dimension *dim;
	} cocci_id/* tools/perf/builtin-c2c.c 408 */;
	struct c2c_dimension {
		struct c2c_header header;
		const char *name;
		int width;
		struct sort_entry *se;
		int64_t (*cmp)(struct perf_hpp_fmt *fmt, struct hist_entry *,
			       struct hist_entry *);
		int (*entry)(struct perf_hpp_fmt *fmt, struct perf_hpp *hpp,
			     struct hist_entry *he);
		int (*color)(struct perf_hpp_fmt *fmt, struct perf_hpp *hpp,
			     struct hist_entry *he);
	} cocci_id/* tools/perf/builtin-c2c.c 394 */;
	struct c2c_header {
		struct {
			const char *text;
			int span;
		} line[C2C_HEADER_MAX];
	} cocci_id/* tools/perf/builtin-c2c.c 387 */;
	const char **cocci_id/* tools/perf/builtin-c2c.c 2976 */;
	struct option cocci_id/* tools/perf/builtin-c2c.c 2897 */[];
	const char *const *cocci_id/* tools/perf/builtin-c2c.c 2888 */;
	const char *const cocci_id/* tools/perf/builtin-c2c.c 2882 */[];
	bool *cocci_id/* tools/perf/builtin-c2c.c 2875 */;
	char cocci_id/* tools/perf/builtin-c2c.c 2723 */[];
	struct perf_data cocci_id/* tools/perf/builtin-c2c.c 2720 */;
	struct ui_progress cocci_id/* tools/perf/builtin-c2c.c 2719 */;
	struct mem_info *cocci_id/* tools/perf/builtin-c2c.c 267 */;
	struct addr_location cocci_id/* tools/perf/builtin-c2c.c 266 */;
	struct c2c_stats cocci_id/* tools/perf/builtin-c2c.c 264 */;
	bool cocci_id/* tools/perf/builtin-c2c.c 2629 */;
	char *cocci_id/* tools/perf/builtin-c2c.c 2629 */;
	int cocci_id/* tools/perf/builtin-c2c.c 2629 */;
	struct machine *cocci_id/* tools/perf/builtin-c2c.c 260 */;
	enum perf_call_graph_mode cocci_id/* tools/perf/builtin-c2c.c 2581 */;
	union perf_event *cocci_id/* tools/perf/builtin-c2c.c 257 */;
	struct callchain_param *cocci_id/* tools/perf/builtin-c2c.c 2563 */;
	const struct option *cocci_id/* tools/perf/builtin-c2c.c 2561 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-c2c.c 256 */;
	const char cocci_id/* tools/perf/builtin-c2c.c 2556 */[];
	struct compute_stats *cocci_id/* tools/perf/builtin-c2c.c 246 */;
	struct c2c_stats *cocci_id/* tools/perf/builtin-c2c.c 243 */;
	struct hists *cocci_id/* tools/perf/builtin-c2c.c 2337 */;
	struct c2c_cacheline_browser *cocci_id/* tools/perf/builtin-c2c.c 2336 */;
	struct c2c_cacheline_browser cocci_id/* tools/perf/builtin-c2c.c 2326 */;
	struct c2c_cacheline_browser {
		struct hist_browser hb;
		struct hist_entry *he;
	} cocci_id/* tools/perf/builtin-c2c.c 2313 */;
	struct hist_entry cocci_id/* tools/perf/builtin-c2c.c 2302 */;
	struct hist_entry *cocci_id/* tools/perf/builtin-c2c.c 2302 */;
	struct rb_node *cocci_id/* tools/perf/builtin-c2c.c 2299 */;
	u64 cocci_id/* tools/perf/builtin-c2c.c 2298 */;
	struct hist_browser *cocci_id/* tools/perf/builtin-c2c.c 2296 */;
	void cocci_id/* tools/perf/builtin-c2c.c 2296 */;
	FILE *cocci_id/* tools/perf/builtin-c2c.c 2265 */;
	struct perf_session *cocci_id/* tools/perf/builtin-c2c.c 2265 */;
	struct evsel *cocci_id/* tools/perf/builtin-c2c.c 2248 */;
	struct evlist *cocci_id/* tools/perf/builtin-c2c.c 2247 */;
	struct perf_hpp_list cocci_id/* tools/perf/builtin-c2c.c 2214 */;
	struct perf_hpp cocci_id/* tools/perf/builtin-c2c.c 2191 */;
	char cocci_id/* tools/perf/builtin-c2c.c 2190 */[1000];
	unsigned int cocci_id/* tools/perf/builtin-c2c.c 213 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-c2c.c 211 */;
	hists__resort_cb_t cocci_id/* tools/perf/builtin-c2c.c 2102 */;
	struct c2c_hist_entry *cocci_id/* tools/perf/builtin-c2c.c 210 */;
	struct perf_cpu_map *cocci_id/* tools/perf/builtin-c2c.c 2060 */;
	unsigned long *cocci_id/* tools/perf/builtin-c2c.c 2044 */;
	unsigned long **cocci_id/* tools/perf/builtin-c2c.c 2030 */;
	struct numa_node *cocci_id/* tools/perf/builtin-c2c.c 2029 */;
	struct c2c_hists cocci_id/* tools/perf/builtin-c2c.c 1976 */;
	char cocci_id/* tools/perf/builtin-c2c.c 1954 */[30];
	double cocci_id/* tools/perf/builtin-c2c.c 1895 */;
	struct c2c_hists *cocci_id/* tools/perf/builtin-c2c.c 1863 */;
	int cocci_id/* tools/perf/builtin-c2c.c 180 */(struct c2c_hists *hists,
						       const char *sort,
						       int nr_header_lines);
	struct hist_entry_ops cocci_id/* tools/perf/builtin-c2c.c 175 */;
	int64_t (*cocci_id/* tools/perf/builtin-c2c.c 1742 */)(struct hist_entry *,
							       struct hist_entry *);
	int64_t cocci_id/* tools/perf/builtin-c2c.c 1728 */;
	struct c2c_dimension *cocci_id/* tools/perf/builtin-c2c.c 1633 */[];
	struct c2c_hist_entry cocci_id/* tools/perf/builtin-c2c.c 162 */;
	void *cocci_id/* tools/perf/builtin-c2c.c 158 */;
	struct c2c_header cocci_id/* tools/perf/builtin-c2c.c 1559 */[3];
	struct c2c_header cocci_id/* tools/perf/builtin-c2c.c 1468 */[];
	struct c2c_dimension cocci_id/* tools/perf/builtin-c2c.c 1356 */;
	size_t cocci_id/* tools/perf/builtin-c2c.c 131 */;
	struct c2c_header cocci_id/* tools/perf/builtin-c2c.c 1298 */;
	struct perf_c2c cocci_id/* tools/perf/builtin-c2c.c 129 */;
	const struct option cocci_id/* tools/perf/builtin-c2c.c 124 */[];
	char cocci_id/* tools/perf/builtin-c2c.c 1222 */[10];
	const char *cocci_id/* tools/perf/builtin-c2c.c 118 */[DISPLAY_MAX];
	enum{DISPLAY_LCL, DISPLAY_RMT, DISPLAY_TOT, DISPLAY_MAX,} cocci_id/* tools/perf/builtin-c2c.c 111 */;
}
