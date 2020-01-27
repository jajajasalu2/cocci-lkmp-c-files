cocci_test_suite() {
	struct syscall_enter_openat_args {
		unsigned long long unused;
		long syscall_nr;
		long dfd;
		char *filename_ptr;
		long flags;
		long mode;
	} cocci_id/* tools/perf/examples/bpf/sys_enter_openat.c 19 */;
}
