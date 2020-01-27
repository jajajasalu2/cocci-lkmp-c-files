cocci_test_suite() {
	int cocci_id/* tools/testing/selftests/bpf/progs/test_pinning.c 6 */("version");
	nopinmap2 cocci_id/* tools/testing/selftests/bpf/progs/test_pinning.c 29 */(".maps");
	nopinmap cocci_id/* tools/testing/selftests/bpf/progs/test_pinning.c 21 */(".maps");
	pinmap cocci_id/* tools/testing/selftests/bpf/progs/test_pinning.c 14 */(".maps");
}
