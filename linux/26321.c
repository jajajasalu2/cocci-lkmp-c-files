cocci_test_suite() {
	struct packed_trailing_space {
		int a;
		short b;
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 9 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 63 */;
	union jump_code_union {
		char code[5];
		struct {
			char jump;
			int offset;
		}__attribute__((packed));
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 53 */;
	union union_does_not_need_packing {
		struct {
			long int a;
			int b;
		}__attribute__((packed));
		int c;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 45 */;
	union union_is_never_packed {
		int a:4;
		char b;
		char c:1;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 39 */;
	struct nested_packed {
		char:4;
		int a:4;
		long int b;
		struct {
			char c;
			int d;
		}__attribute__((packed)) e;
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 29 */;
	struct non_packed_fields {
		short a;
		int b;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 24 */;
	struct packed_fields {
		short a;
		int b;
	}__attribute__((packed)) cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 19 */;
	struct non_packed_trailing_space {
		int a;
		short b;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_packing.c 14 */;
}
