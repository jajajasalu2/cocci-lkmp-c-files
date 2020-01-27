cocci_test_suite() {
	char *cocci_id/* tools/perf/builtin-mem.c 93 */;
	struct option cocci_id/* tools/perf/builtin-mem.c 77 */[];
	bool cocci_id/* tools/perf/builtin-mem.c 76 */;
	struct perf_mem *cocci_id/* tools/perf/builtin-mem.c 71 */;
	const char **cocci_id/* tools/perf/builtin-mem.c 71 */;
	int cocci_id/* tools/perf/builtin-mem.c 71 */;
	const char *const *cocci_id/* tools/perf/builtin-mem.c 69 */;
	const char *const cocci_id/* tools/perf/builtin-mem.c 63 */[];
	struct perf_mem_event *cocci_id/* tools/perf/builtin-mem.c 52 */;
	const char *cocci_id/* tools/perf/builtin-mem.c 430 */[];
	const struct option cocci_id/* tools/perf/builtin-mem.c 409 */[];
	struct perf_mem **cocci_id/* tools/perf/builtin-mem.c 40 */;
	struct perf_mem cocci_id/* tools/perf/builtin-mem.c 391 */;
	struct stat cocci_id/* tools/perf/builtin-mem.c 390 */;
	const struct mem_mode *cocci_id/* tools/perf/builtin-mem.c 339 */;
	int *cocci_id/* tools/perf/builtin-mem.c 338 */;
	const struct option *cocci_id/* tools/perf/builtin-mem.c 336 */;
	const struct mem_mode cocci_id/* tools/perf/builtin-mem.c 329 */[];
	struct mem_mode {
		const char *name;
		int mode;
	} cocci_id/* tools/perf/builtin-mem.c 319 */;
	struct perf_session *cocci_id/* tools/perf/builtin-mem.c 250 */;
	struct perf_mem {
		struct perf_tool tool;
		const char *input_name;
		bool hide_unresolved;
		bool dump_raw;
		bool force;
		bool phys_addr;
		int operation;
		const char *cpu_list;
	DECLARE_BITMAP(cpu_bitmap,MAX_NR_CPUS)
		;
	} cocci_id/* tools/perf/builtin-mem.c 25 */;
	struct perf_data cocci_id/* tools/perf/builtin-mem.c 244 */;
	struct evsel *cocci_id/* tools/perf/builtin-mem.c 236 */;
	const char *cocci_id/* tools/perf/builtin-mem.c 160 */;
	struct addr_location cocci_id/* tools/perf/builtin-mem.c 159 */;
	struct machine *cocci_id/* tools/perf/builtin-mem.c 156 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-mem.c 155 */;
	union perf_event *cocci_id/* tools/perf/builtin-mem.c 154 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-mem.c 153 */;
}
