cocci_test_suite() {
	struct core_reloc_size_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 39 */;
	struct core_reloc_size *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 38 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 36 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 36 */;
	struct core_reloc_size {
		int int_field;
		struct {
			int x;
		} struct_field;
		union {
			int x;
		} union_field;
		int arr_field[4];
		void *ptr_field;
		enum{VALUE=123,} enum_field;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 26 */;
	struct core_reloc_size_output {
		int int_sz;
		int struct_sz;
		int union_sz;
		int arr_sz;
		int arr_elem_sz;
		int ptr_sz;
		int enum_sz;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_size.c 11 */;
}
