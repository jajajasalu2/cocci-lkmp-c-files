cocci_test_suite() {
	const void *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 97 */;
	struct augmented_arg *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 97 */;
	unsigned int cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 97 */;
	struct augmented_args_payload *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 90 */;
	void *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 90 */;
	int cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 90 */;
	void cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 84 */;
	struct augmented_args_payload cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 82 */;
	struct augmented_args_payload {
		struct syscall_enter_args args;
		union {
			struct {
				struct augmented_arg arg,arg2;
			};
			struct sockaddr_storage saddr;
		};
	} cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 71 */;
	struct augmented_arg {
		unsigned int size;
		int err;
		char value[PATH_MAX];
	} cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 63 */;
	struct syscall_exit_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long ret;
	} cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 57 */;
	struct syscall_enter_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		unsigned long args[6];
	} cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 51 */;
	struct syscall cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 35 */;
	struct syscall {
		bool enabled;
		u16 string_args_len[6];
	} cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 30 */;
	struct syscall_exit_args cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 276 */;
	struct syscall_exit_args *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 274 */;
	struct syscall *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 251 */;
	struct syscall_enter_args *cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 238 */;
	struct augmented_arg cocci_id/* tools/perf/examples/bpf/augmented_raw_syscalls.c 117 */;
}
