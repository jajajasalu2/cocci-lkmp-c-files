cocci_test_suite() {
	cpu_set_t cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 94 */;
	struct bpf_map *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 93 */;
	struct bpf_object *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 92 */;
	struct bpf_program *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 91 */;
	struct timespec cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 90 */;
	struct bpf_link *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 89 */;
	struct perf_buffer *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 88 */;
	struct perf_buffer_opts cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 87 */;
	__u64 *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 35 */;
	struct get_stack_trace_t cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 34 */;
	struct ksym *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 30 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 29 */;
	struct get_stack_trace_t *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 27 */;
	const char *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 26 */;
	bool cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 25 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 23 */;
	void *cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 23 */;
	void cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 23 */;
	struct get_stack_trace_t {
		int pid;
		int kern_stack_size;
		int user_stack_size;
		int user_stack_buildid_size;
		__u64 kern_stack[MAX_STACK_RAWTP];
		__u64 user_stack[MAX_STACK_RAWTP];
		struct bpf_stack_build_id user_stack_buildid[MAX_STACK_RAWTP];
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 13 */;
	int cocci_id/* tools/testing/selftests/bpf/prog_tests/get_stack_raw_tp.c 11 */;
}
