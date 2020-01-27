cocci_test_suite() {
	struct bss_data {
		__u64 in_val;
		__u64 out_val;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/mmap.c 9 */;
	struct map_data {
		__u64 val[512 * 4];
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/mmap.c 5 */;
	long cocci_id/* tools/testing/selftests/bpf/prog_tests/mmap.c 16 */;
	size_t cocci_id/* tools/testing/selftests/bpf/prog_tests/mmap.c 14 */;
}
