cocci_test_suite() {
	int cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_bitfields.c 85 */;
	struct bitfield_flushed {
		int a:4;
		long:0;
		long b:16;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_bitfields.c 79 */;
	struct bitfield_mixed_with_others {
		long:4;
		int a:4;
		short b;
		long c;
		long d:8;
		int e;
		int f;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_bitfields.c 55 */;
	struct bitfields_only_mixed_types {
		int a:3;
		long int b:2;
		bool c:1;
		enum{A, B,} d:1;
		short e:5;
		unsigned f:30;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_bitfields.c 28 */;
}
