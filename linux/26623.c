cocci_test_suite() {
	struct key_t cocci_id/* samples/bpf/offwaketime_kern.c 81 */;
	struct wokeby_t *cocci_id/* samples/bpf/offwaketime_kern.c 79 */;
	void *cocci_id/* samples/bpf/offwaketime_kern.c 77 */;
	struct wokeby_t cocci_id/* samples/bpf/offwaketime_kern.c 65 */;
	struct task_struct *cocci_id/* samples/bpf/offwaketime_kern.c 64 */;
	struct pt_regs *cocci_id/* samples/bpf/offwaketime_kern.c 62 */;
	struct wokeby_t {
		char name[TASK_COMM_LEN];
		u32 ret;
	} cocci_id/* samples/bpf/offwaketime_kern.c 40 */;
	struct key_t {
		char waker[TASK_COMM_LEN];
		char target[TASK_COMM_LEN];
		u32 wret;
		u32 tret;
	} cocci_id/* samples/bpf/offwaketime_kern.c 19 */;
	typeof(P) cocci_id/* samples/bpf/offwaketime_kern.c 15 */;
	u64 cocci_id/* samples/bpf/offwaketime_kern.c 131 */;
	u32 cocci_id/* samples/bpf/offwaketime_kern.c 122 */;
	struct sched_switch_args *cocci_id/* samples/bpf/offwaketime_kern.c 119 */;
	int cocci_id/* samples/bpf/offwaketime_kern.c 119 */;
	struct sched_switch_args {
		unsigned long long pad;
		char prev_comm[16];
		int prev_pid;
		int prev_prio;
		long long prev_state;
		char next_comm[16];
		int next_pid;
		int next_prio;
	} cocci_id/* samples/bpf/offwaketime_kern.c 108 */;
}
