cocci_test_suite() {
	struct core_reloc_nesting *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 39 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 37 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 37 */;
	struct core_reloc_nesting {
		union {
			struct core_reloc_nesting_substruct a;
		} a;
		struct {
			union core_reloc_nesting_subunion b;
		} b;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 25 */;
	union core_reloc_nesting_subunion {
		int b;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 20 */;
	struct core_reloc_nesting_substruct {
		int a;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_nesting.c 11 */;
}
