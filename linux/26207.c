cocci_test_suite() {
	struct core_reloc_mods_output *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 51 */;
	struct core_reloc_mods *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 50 */;
	void *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 48 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 48 */;
	struct core_reloc_mods {
		int a;
		int_t b;
		char *c;
		char_ptr_t d;
		int e[3];
		arr_t f;
		struct core_reloc_mods_substruct g;
		core_reloc_mods_substruct_t h;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 34 */;
	struct {
		int x;
		int y;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 29 */;
	struct core_reloc_mods_substruct {
		int x;
		int y;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 24 */;
	const int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 22 */[7];
	const char *cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 21 */;
	const int cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 20 */;
	struct core_reloc_mods_output {
		int a,b,c,d,e,f,g,h;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 16 */;
	struct {
		char in[256];
		char out[256];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_core_reloc_mods.c 11 */;
}
