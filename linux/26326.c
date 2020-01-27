cocci_test_suite() {
	struct zone {
		int a;
		short b;
		struct zone_padding __pad__;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 99 */;
	struct zone_padding {
		char x[0];
	}__attribute__((__aligned__(8))) cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 95 */;
	struct padded_cache_line {
		int a;
		int b __attribute__((aligned(32)));
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 74 */;
	struct padded_a_lot {
		int a;
		long:64;
		long:64;
		int b;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 48 */;
	struct padded_explicitly {
		int a;
		int:1;
		int b;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 29 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 105 */;
	struct padded_implicitly {
		int a;
		long int b;
		char c;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_padding.c 10 */;
}
