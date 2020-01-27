cocci_test_suite() {
	struct core_reloc_arrays_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 41 */;
	struct core_reloc_arrays *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 40 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 38 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 38 */;
	struct core_reloc_arrays {
		int a[5];
		char b[2][3][4];
		struct core_reloc_arrays_substruct c[3];
		struct core_reloc_arrays_substruct d[1][2];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 28 */;
	struct core_reloc_arrays_substruct {
		int c;
		int d;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 23 */;
	struct core_reloc_arrays_output {
		int a2;
		char b123;
		int c1c;
		int d00d;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_arrays.c 11 */;
}
