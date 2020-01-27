cocci_test_suite() {
	struct core_reloc_existence_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 45 */;
	struct core_reloc_existence *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 44 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 42 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 42 */;
	struct core_reloc_existence {
		struct {
			int x;
		} s;
		int arr[1];
		int a;
		struct {
			int b;
		};
		int c;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 29 */;
	struct core_reloc_existence_output {
		int a_exists;
		int a_value;
		int b_exists;
		int b_value;
		int c_exists;
		int c_value;
		int arr_exists;
		int arr_value;
		int s_exists;
		int s_value;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_existence.c 11 */;
}
