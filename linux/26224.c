cocci_test_suite() {
	struct stack_trace_t {
		int pid;
		int kern_stack_size;
		int user_stack_size;
		int user_stack_buildid_size;
		__u64 kern_stack[MAX_STACK_RAWTP];
		__u64 user_stack[MAX_STACK_RAWTP];
		struct bpf_stack_build_id user_stack_buildid[MAX_STACK_RAWTP];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 8 */;
	struct bpf_stack_build_id cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 70 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 69 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 63 */;
	struct stack_trace_t *cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 61 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 58 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 58 */;
	rawdata_map cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 55 */(".maps");
	stackdata_map cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 30 */(".maps");
	perfmap cocci_id/* tools/testing/selftests/bpf/progs/test_get_stack_rawtp.c 23 */(".maps");
}
