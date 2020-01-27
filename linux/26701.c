cocci_test_suite() {
	char cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 632 */[256];
	struct bpf_program *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 630 */;
	struct bpf_prog_info cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 626 */;
	struct bpf_prog_load_attr cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 623 */;
	struct rlimit cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 621 */;
	char **cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 619 */;
	struct bpf_object *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 591 */;
	const struct option cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 57 */[];
	bool cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 488 */;
	__u32 cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 487 */;
	struct stats_record **cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 478 */;
	const char *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 4 */;
	char *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 35 */;
	char cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 34 */[IF_NAMESIZE];
	__u64 cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 271 */;
	double cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 271 */;
	struct record *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 247 */;
	int cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 216 */;
	struct stats_record *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 213 */;
	struct datarec cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 203 */;
	size_t cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 201 */;
	unsigned int cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 199 */;
	struct datarec *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 197 */;
	void cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 197 */;
	struct datarec cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 168 */[nr_cpus];
	struct stats_record {
		struct record rx_cnt;
		struct record redir_err;
		struct record kthread;
		struct record exception;
		struct record enq[MAX_CPUS];
	} cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 156 */;
	struct record {
		__u64 timestamp;
		struct datarec total;
		struct datarec *cpu;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 151 */;
	struct datarec {
		__u64 processed;
		__u64 dropped;
		__u64 issue;
	} cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 146 */;
	struct timespec cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 134 */;
	char *cocci_id/* samples/bpf/xdp_redirect_cpu_user.c 104 */[];
}
