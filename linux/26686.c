cocci_test_suite() {
	const char *cocci_id/* samples/bpf/xdp_monitor_user.c 87 */[REDIR_RES_MAX];
	enum{REDIR_SUCCESS=0, REDIR_ERROR=1,} cocci_id/* samples/bpf/xdp_monitor_user.c 82 */;
	struct timespec cocci_id/* samples/bpf/xdp_monitor_user.c 71 */;
	char cocci_id/* samples/bpf/xdp_monitor_user.c 655 */[256];
	struct rlimit cocci_id/* samples/bpf/xdp_monitor_user.c 652 */;
	char **cocci_id/* samples/bpf/xdp_monitor_user.c 650 */;
	char *cocci_id/* samples/bpf/xdp_monitor_user.c 636 */;
	struct stats_record **cocci_id/* samples/bpf/xdp_monitor_user.c 576 */;
	struct datarec cocci_id/* samples/bpf/xdp_monitor_user.c 546 */;
	struct u64rec cocci_id/* samples/bpf/xdp_monitor_user.c 539 */;
	struct stats_record *cocci_id/* samples/bpf/xdp_monitor_user.c 524 */;
	void cocci_id/* samples/bpf/xdp_monitor_user.c 524 */;
	size_t cocci_id/* samples/bpf/xdp_monitor_user.c 512 */;
	unsigned int cocci_id/* samples/bpf/xdp_monitor_user.c 510 */;
	void *cocci_id/* samples/bpf/xdp_monitor_user.c 508 */;
	char *cocci_id/* samples/bpf/xdp_monitor_user.c 47 */[];
	const char *cocci_id/* samples/bpf/xdp_monitor_user.c 4 */;
	const struct option cocci_id/* samples/bpf/xdp_monitor_user.c 36 */[];
	bool cocci_id/* samples/bpf/xdp_monitor_user.c 34 */;
	__u64 cocci_id/* samples/bpf/xdp_monitor_user.c 260 */;
	struct datarec *cocci_id/* samples/bpf/xdp_monitor_user.c 258 */;
	double cocci_id/* samples/bpf/xdp_monitor_user.c 258 */;
	struct u64rec *cocci_id/* samples/bpf/xdp_monitor_user.c 246 */;
	struct record_u64 *cocci_id/* samples/bpf/xdp_monitor_user.c 222 */;
	struct record *cocci_id/* samples/bpf/xdp_monitor_user.c 210 */;
	struct u64rec cocci_id/* samples/bpf/xdp_monitor_user.c 189 */[nr_cpus];
	struct datarec cocci_id/* samples/bpf/xdp_monitor_user.c 152 */[nr_cpus];
	__u32 cocci_id/* samples/bpf/xdp_monitor_user.c 148 */;
	struct stats_record {
		struct record_u64 xdp_redirect[REDIR_RES_MAX];
		struct record_u64 xdp_exception[XDP_ACTION_MAX];
		struct record xdp_cpumap_kthread;
		struct record xdp_cpumap_enqueue[MAX_CPUS];
		struct record xdp_devmap_xmit;
	} cocci_id/* samples/bpf/xdp_monitor_user.c 140 */;
	struct record_u64 {
		__u64 timestamp;
		struct u64rec total;
		struct u64rec *cpu;
	} cocci_id/* samples/bpf/xdp_monitor_user.c 133 */;
	struct u64rec {
		__u64 processed;
	} cocci_id/* samples/bpf/xdp_monitor_user.c 130 */;
	struct record {
		__u64 timestamp;
		struct datarec total;
		struct datarec *cpu;
	} cocci_id/* samples/bpf/xdp_monitor_user.c 125 */;
	struct datarec {
		__u64 processed;
		__u64 dropped;
		__u64 info;
		__u64 err;
	} cocci_id/* samples/bpf/xdp_monitor_user.c 116 */;
	int cocci_id/* samples/bpf/xdp_monitor_user.c 108 */;
	const char *cocci_id/* samples/bpf/xdp_monitor_user.c 100 */[XDP_ACTION_MAX];
}
