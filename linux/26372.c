cocci_test_suite() {
	struct sched_switch_args {
		unsigned long long pad;
		char prev_comm[16];
		int prev_pid;
		int prev_prio;
		long long prev_state;
		char next_comm[16];
		int next_pid;
		int next_prio;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_tracepoint.c 8 */;
	struct sched_switch_args *cocci_id/* tools/testing/selftests/bpf/progs/test_tracepoint.c 20 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_tracepoint.c 20 */;
}
