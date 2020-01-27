cocci_test_suite() {
	struct urandom_read *cocci_id/* samples/bpf/test_overhead_tp_kern.c 32 */;
	struct urandom_read {
		__u64 pad;
		int got_bits;
		int pool_left;
		int input_left;
	} cocci_id/* samples/bpf/test_overhead_tp_kern.c 25 */;
	struct task_rename *cocci_id/* samples/bpf/test_overhead_tp_kern.c 19 */;
	int cocci_id/* samples/bpf/test_overhead_tp_kern.c 19 */;
	struct task_rename {
		__u64 pad;
		__u32 pid;
		char oldcomm[16];
		char newcomm[16];
		__u16 oom_score_adj;
	} cocci_id/* samples/bpf/test_overhead_tp_kern.c 11 */;
}
