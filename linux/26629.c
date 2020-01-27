cocci_test_suite() {
	unsigned long cocci_id/* samples/bpf/cpustat_user.c 80 */;
	struct cpu_stat_data *cocci_id/* samples/bpf/cpustat_user.c 43 */;
	char cocci_id/* samples/bpf/cpustat_user.c 42 */[sizeof("cstate-9")];
	struct cpu_stat_data cocci_id/* samples/bpf/cpustat_user.c 37 */[MAX_CPU];
	struct cpu_stat_data {
		unsigned long cstate[MAX_CSTATE_ENTRIES];
		unsigned long pstate[MAX_PSTATE_ENTRIES];
	} cocci_id/* samples/bpf/cpustat_user.c 32 */;
	char cocci_id/* samples/bpf/cpustat_user.c 191 */[256];
	char **cocci_id/* samples/bpf/cpustat_user.c 189 */;
	int cocci_id/* samples/bpf/cpustat_user.c 153 */;
	void cocci_id/* samples/bpf/cpustat_user.c 153 */;
	cpu_set_t cocci_id/* samples/bpf/cpustat_user.c 109 */;
}
