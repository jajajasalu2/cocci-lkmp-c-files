cocci_test_suite() {
	const char *cocci_id/* samples/bpf/xdp_rxq_info_user.c 95 */[XDP_ACTION_MAX];
	enum cfg_options_flags{NO_TOUCH=0x0U, READ_MEM=0x1U, SWAP_MAC=0x2U,} cocci_id/* samples/bpf/xdp_rxq_info_user.c 88 */;
	struct config {
		__u32 action;
		int ifindex;
		__u32 options;
	} cocci_id/* samples/bpf/xdp_rxq_info_user.c 83 */;
	__u32 cocci_id/* samples/bpf/xdp_rxq_info_user.c 62 */;
	char cocci_id/* samples/bpf/xdp_rxq_info_user.c 477 */[XDP_ACTION_MAX_STRLEN + 1];
	char cocci_id/* samples/bpf/xdp_rxq_info_user.c 471 */[256];
	struct bpf_map *cocci_id/* samples/bpf/xdp_rxq_info_user.c 470 */;
	const struct option cocci_id/* samples/bpf/xdp_rxq_info_user.c 47 */[];
	struct bpf_object *cocci_id/* samples/bpf/xdp_rxq_info_user.c 469 */;
	struct config cocci_id/* samples/bpf/xdp_rxq_info_user.c 468 */;
	bool cocci_id/* samples/bpf/xdp_rxq_info_user.c 467 */;
	struct bpf_prog_info cocci_id/* samples/bpf/xdp_rxq_info_user.c 464 */;
	struct bpf_prog_load_attr cocci_id/* samples/bpf/xdp_rxq_info_user.c 461 */;
	struct rlimit cocci_id/* samples/bpf/xdp_rxq_info_user.c 460 */;
	char **cocci_id/* samples/bpf/xdp_rxq_info_user.c 457 */;
	struct stats_record **cocci_id/* samples/bpf/xdp_rxq_info_user.c 428 */;
	const char *cocci_id/* samples/bpf/xdp_rxq_info_user.c 4 */;
	double cocci_id/* samples/bpf/xdp_rxq_info_user.c 329 */;
	__u64 cocci_id/* samples/bpf/xdp_rxq_info_user.c 328 */;
	char *cocci_id/* samples/bpf/xdp_rxq_info_user.c 31 */;
	char cocci_id/* samples/bpf/xdp_rxq_info_user.c 30 */[IF_NAMESIZE];
	struct datarec cocci_id/* samples/bpf/xdp_rxq_info_user.c 266 */[nr_cpus];
	struct stats_record *cocci_id/* samples/bpf/xdp_rxq_info_user.c 229 */;
	struct record cocci_id/* samples/bpf/xdp_rxq_info_user.c 219 */;
	struct record *cocci_id/* samples/bpf/xdp_rxq_info_user.c 213 */;
	struct datarec cocci_id/* samples/bpf/xdp_rxq_info_user.c 203 */;
	size_t cocci_id/* samples/bpf/xdp_rxq_info_user.c 201 */;
	unsigned int cocci_id/* samples/bpf/xdp_rxq_info_user.c 199 */;
	struct datarec *cocci_id/* samples/bpf/xdp_rxq_info_user.c 197 */;
	void cocci_id/* samples/bpf/xdp_rxq_info_user.c 197 */;
	struct stats_record {
		struct record stats;
		struct record *rxq;
	} cocci_id/* samples/bpf/xdp_rxq_info_user.c 192 */;
	struct record {
		__u64 timestamp;
		struct datarec total;
		struct datarec *cpu;
	} cocci_id/* samples/bpf/xdp_rxq_info_user.c 187 */;
	struct datarec {
		__u64 processed;
		__u64 issue;
	} cocci_id/* samples/bpf/xdp_rxq_info_user.c 183 */;
	struct timespec cocci_id/* samples/bpf/xdp_rxq_info_user.c 171 */;
	char *cocci_id/* samples/bpf/xdp_rxq_info_user.c 147 */[];
	enum cfg_options_flags cocci_id/* samples/bpf/xdp_rxq_info_user.c 135 */;
	int cocci_id/* samples/bpf/xdp_rxq_info_user.c 102 */;
}
