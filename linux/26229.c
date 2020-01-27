cocci_test_suite() {
	uint32_t cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 39 */;
	uint64_t cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 38 */;
	struct core_reloc_kernel_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 37 */;
	struct task_struct *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 36 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 34 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 34 */;
	struct task_struct {
		int pid;
		int tgid;
		char comm[16];
		struct task_struct *group_leader;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 24 */;
	struct core_reloc_kernel_output {
		int valid[10];
		char comm[sizeof("test_progs")];
		int comm_len;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 17 */;
	struct {
		char in[256];
		char out[256];
		uint64_t my_pid_tgid;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_kernel.c 11 */;
}
