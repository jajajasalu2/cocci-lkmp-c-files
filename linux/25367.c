cocci_test_suite() {
	struct syscall_enter_open_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		char *filename_ptr;
		long flags;
		long mode;
	} cocci_id/* tools/perf/examples/bpf/etcsnoop.c 66 */;
	struct syscall_enter_openat_args {
		unsigned long long common_tp_fields;
		long syscall_nr;
		long dfd;
		char *filename_ptr;
		long flags;
		long mode;
	} cocci_id/* tools/perf/examples/bpf/etcsnoop.c 55 */;
	struct augmented_filename {
		int size;
		int reserved;
		char value[64];
	} cocci_id/* tools/perf/examples/bpf/etcsnoop.c 27 */;
	int cocci_id/* tools/perf/examples/bpf/etcsnoop.c 25 */;
}
