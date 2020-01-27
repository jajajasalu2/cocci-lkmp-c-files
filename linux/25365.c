cocci_test_suite() {
	char cocci_id/* tools/perf/builtin-ftrace.c 76 */[512];
	ssize_t cocci_id/* tools/perf/builtin-ftrace.c 74 */;
	bool cocci_id/* tools/perf/builtin-ftrace.c 70 */;
	void *cocci_id/* tools/perf/builtin-ftrace.c 64 */;
	siginfo_t *cocci_id/* tools/perf/builtin-ftrace.c 63 */;
	void cocci_id/* tools/perf/builtin-ftrace.c 438 */;
	struct filter_entry {
		struct list_head list;
		char name[];
	} cocci_id/* tools/perf/builtin-ftrace.c 43 */;
	const struct option *cocci_id/* tools/perf/builtin-ftrace.c 422 */;
	struct perf_ftrace {
		struct evlist *evlist;
		struct target target;
		const char *tracer;
		struct list_head filters;
		struct list_head notrace;
		struct list_head graph_funcs;
		struct list_head nograph_funcs;
		int graph_depth;
	} cocci_id/* tools/perf/builtin-ftrace.c 32 */;
	struct pollfd cocci_id/* tools/perf/builtin-ftrace.c 283 */;
	char cocci_id/* tools/perf/builtin-ftrace.c 282 */[4096];
	char *cocci_id/* tools/perf/builtin-ftrace.c 280 */;
	struct perf_ftrace *cocci_id/* tools/perf/builtin-ftrace.c 278 */;
	const char **cocci_id/* tools/perf/builtin-ftrace.c 278 */;
	int cocci_id/* tools/perf/builtin-ftrace.c 278 */;
	char cocci_id/* tools/perf/builtin-ftrace.c 260 */[16];
	struct filter_entry *cocci_id/* tools/perf/builtin-ftrace.c 218 */;
	const char *cocci_id/* tools/perf/builtin-ftrace.c 216 */;
	struct list_head *cocci_id/* tools/perf/builtin-ftrace.c 216 */;
	struct perf_cpu_map *cocci_id/* tools/perf/builtin-ftrace.c 208 */;
	size_t cocci_id/* tools/perf/builtin-ftrace.c 174 */;
	void cocci_id/* tools/perf/builtin-ftrace.c 131 */(void);
	int cocci_id/* tools/perf/builtin-ftrace.c 130 */(void);
}
