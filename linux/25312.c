cocci_test_suite() {
	struct {
		enum test_llvm__testcase prog_id;
		const char *desc;
		const char *name;
		const char *msg_compile_fail;
		const char *msg_load_fail;
		int (*target_func)(void);
		int expect_result;
		bool pin;
	} cocci_id/* tools/perf/tests/bpf.c 62 */[];
	int cocci_id/* tools/perf/tests/bpf.c 43 */[2];
	struct test *cocci_id/* tools/perf/tests/bpf.c 332 */;
	struct bpf_insn cocci_id/* tools/perf/tests/bpf.c 308 */[];
	char cocci_id/* tools/perf/tests/bpf.c 306 */[];
	unsigned int cocci_id/* tools/perf/tests/bpf.c 305 */;
	void cocci_id/* tools/perf/tests/bpf.c 302 */;
	struct bpf_object *cocci_id/* tools/perf/tests/bpf.c 230 */;
	size_t cocci_id/* tools/perf/tests/bpf.c 229 */;
	void *cocci_id/* tools/perf/tests/bpf.c 228 */;
	int cocci_id/* tools/perf/tests/bpf.c 225 */;
	const char *cocci_id/* tools/perf/tests/bpf.c 213 */;
	const u32 cocci_id/* tools/perf/tests/bpf.c 192 */;
	struct mmap *cocci_id/* tools/perf/tests/bpf.c 185 */;
	union perf_event *cocci_id/* tools/perf/tests/bpf.c 184 */;
	struct parse_events_error cocci_id/* tools/perf/tests/bpf.c 130 */;
	struct parse_events_state cocci_id/* tools/perf/tests/bpf.c 129 */;
	struct evlist *cocci_id/* tools/perf/tests/bpf.c 126 */;
	char cocci_id/* tools/perf/tests/bpf.c 125 */[STRERR_BUFSIZE];
	char cocci_id/* tools/perf/tests/bpf.c 124 */[16];
	struct record_opts cocci_id/* tools/perf/tests/bpf.c 114 */;
	int (*cocci_id/* tools/perf/tests/bpf.c 111 */)(void);
}
