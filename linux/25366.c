cocci_test_suite() {
	struct syscall_enter_newstat_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		char *filename_ptr;
		struct stat *statbuf;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 96 */;
	struct statbuf cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 94 */;
	struct syscall_enter_inotify_add_watch_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long fd;
		char *filename_ptr;
		long mask;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 84 */;
	struct syscall_enter_open_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		char *filename_ptr;
		long flags;
		long mode;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 74 */;
	struct syscall_enter_openat_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long dfd;
		char *filename_ptr;
		long flags;
		long mode;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 63 */;
	struct augmented_filename {
		unsigned int size;
		int reserved;
		char value[256];
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 31 */;
	struct syscall_exit_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long ret;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 25 */;
	int cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 23 */;
	struct syscall_enter_sendto_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long fd;
		void *buff;
		long len;
		unsigned long flags;
		struct sockaddr *addr_ptr;
		long addr_len;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 156 */;
	struct syscall_enter_connect_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long fd;
		struct sockaddr *addr_ptr;
		unsigned long addrlen;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 146 */;
	struct syscall_enter_bind_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long fd;
		struct sockaddr *addr_ptr;
		unsigned long addrlen;
	} cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 136 */;
	struct sockaddr cocci_id/* tools/perf/examples/bpf/augmented_syscalls.c 134 */;
}
