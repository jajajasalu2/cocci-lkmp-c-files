cocci_test_suite() {
	struct core_reloc_primitives *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 34 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 32 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 32 */;
	struct core_reloc_primitives {
		char a;
		int b;
		enum core_reloc_primitives_enum c;
		void *d;
		int (*f)(const char *);
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 21 */;
	enum core_reloc_primitives_enum{A=0, B=1,} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_primitives.c 11 */;
}
