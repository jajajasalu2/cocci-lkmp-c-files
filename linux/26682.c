cocci_test_suite() {
	struct syscalls_enter_open_args {
		unsigned long long unused;
		long syscall_nr;
		long filename_ptr;
		long flags;
		long mode;
	} cocci_id/* samples/bpf/syscall_tp_kern.c 7 */;
	struct syscalls_exit_open_args *cocci_id/* samples/bpf/syscall_tp_kern.c 62 */;
	int cocci_id/* samples/bpf/syscall_tp_kern.c 62 */;
	struct syscalls_enter_open_args *cocci_id/* samples/bpf/syscall_tp_kern.c 48 */;
	u32 *cocci_id/* samples/bpf/syscall_tp_kern.c 38 */;
	u32 cocci_id/* samples/bpf/syscall_tp_kern.c 37 */;
	void *cocci_id/* samples/bpf/syscall_tp_kern.c 35 */;
	void cocci_id/* samples/bpf/syscall_tp_kern.c 35 */;
	struct syscalls_exit_open_args {
		unsigned long long unused;
		long syscall_nr;
		long ret;
	} cocci_id/* samples/bpf/syscall_tp_kern.c 15 */;
}
