cocci_test_suite() {
	enum syscall_clone_args{SCC_FLAGS=(1 << 0), SCC_CHILD_STACK=(1 << 1), SCC_PARENT_TIDPTR=(1 << 2), SCC_CHILD_TIDPTR=(1 << 3), SCC_TLS=(1 << 4),} cocci_id/* tools/perf/trace/beauty/clone.c 60 */;
	struct syscall_arg *cocci_id/* tools/perf/trace/beauty/clone.c 57 */;
	int cocci_id/* tools/perf/trace/beauty/clone.c 16 */;
	const char *cocci_id/* tools/perf/trace/beauty/clone.c 15 */;
	bool cocci_id/* tools/perf/trace/beauty/clone.c 13 */;
	char *cocci_id/* tools/perf/trace/beauty/clone.c 13 */;
	unsigned long cocci_id/* tools/perf/trace/beauty/clone.c 13 */;
	size_t cocci_id/* tools/perf/trace/beauty/clone.c 13 */;
}
