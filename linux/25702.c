cocci_test_suite() {
	unsigned long cocci_id/* tools/perf/bench/mem-memcpy-x86-64-lib.c 9 */(char *to,
									       char *from,
									       unsigned len);
	unsigned long cocci_id/* tools/perf/bench/mem-memcpy-x86-64-lib.c 8 */(void *dst,
									       const void *src,
									       size_t cnt);
	char *cocci_id/* tools/perf/bench/mem-memcpy-x86-64-lib.c 11 */;
	unsigned long cocci_id/* tools/perf/bench/mem-memcpy-x86-64-lib.c 11 */;
	unsigned cocci_id/* tools/perf/bench/mem-memcpy-x86-64-lib.c 11 */;
}
