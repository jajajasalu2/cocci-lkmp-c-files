cocci_test_suite() {
	struct timeval *cocci_id/* tools/perf/bench/mem-functions.c 94 */;
	struct perf_event_attr cocci_id/* tools/perf/bench/mem-functions.c 66 */;
	struct function {
		const char *name;
		const char *desc;
		union {
			memcpy_t memcpy;
			memset_t memset;
		} fn;
	} cocci_id/* tools/perf/bench/mem-functions.c 57 */;
	void *(*cocci_id/* tools/perf/bench/mem-functions.c 55 */)(void *,
								   int,
								   size_t);
	void *(*cocci_id/* tools/perf/bench/mem-functions.c 54 */)(void *,
								   const void *,
								   size_t);
	const struct option cocci_id/* tools/perf/bench/mem-functions.c 37 */[];
	const struct function cocci_id/* tools/perf/bench/mem-functions.c 350 */[];
	bool cocci_id/* tools/perf/bench/mem-functions.c 34 */;
	const char *cocci_id/* tools/perf/bench/mem-functions.c 32 */;
	memset_t cocci_id/* tools/perf/bench/mem-functions.c 306 */;
	struct bench_mem_info cocci_id/* tools/perf/bench/mem-functions.c 292 */;
	const char *const cocci_id/* tools/perf/bench/mem-functions.c 285 */[];
	struct function cocci_id/* tools/perf/bench/mem-functions.c 271 */[];
	struct timeval cocci_id/* tools/perf/bench/mem-functions.c 251 */;
	memcpy_t cocci_id/* tools/perf/bench/mem-functions.c 229 */;
	s64 cocci_id/* tools/perf/bench/mem-functions.c 195 */;
	char *cocci_id/* tools/perf/bench/mem-functions.c 192 */;
	const char **cocci_id/* tools/perf/bench/mem-functions.c 176 */;
	void *cocci_id/* tools/perf/bench/mem-functions.c 123 */;
	u64 cocci_id/* tools/perf/bench/mem-functions.c 122 */;
	const struct function *cocci_id/* tools/perf/bench/mem-functions.c 120 */;
	struct bench_mem_info *cocci_id/* tools/perf/bench/mem-functions.c 118 */;
	double cocci_id/* tools/perf/bench/mem-functions.c 118 */;
	int cocci_id/* tools/perf/bench/mem-functions.c 118 */;
	size_t cocci_id/* tools/perf/bench/mem-functions.c 118 */;
	void cocci_id/* tools/perf/bench/mem-functions.c 118 */;
	struct bench_mem_info {
		const struct function *functions;
		u64 (*do_cycles)(const struct function *r, size_t size,
				 void *src, void *dst);
		double (*do_gettimeofday)(const struct function *r,
					  size_t size, void *src, void *dst);
		const char *const *usage;
		bool alloc_src;
	} cocci_id/* tools/perf/bench/mem-functions.c 110 */;
}
