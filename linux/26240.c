cocci_test_suite() {
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 58 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 56 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 56 */;
	struct sched_switch_args *cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 54 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 54 */;
	struct sched_switch_args {
		unsigned long long pad;
		char prev_comm[16];
		int prev_pid;
		int prev_prio;
		long long prev_state;
		char next_comm[16];
		int next_pid;
		int next_prio;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 42 */;
	stack_amap cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 39 */(".maps");
	stackmap cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 32 */(".maps");
	__u64 cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 25 */[PERF_MAX_STACK_DEPTH];
	stackid_hmap cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 23 */(".maps");
	control_map cocci_id/* tools/testing/selftests/bpf/progs/test_stacktrace_map.c 16 */(".maps");
}
