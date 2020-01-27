cocci_test_suite() {
	void *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 478 */;
	struct data *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 477 */;
	uint64_t cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 476 */;
	struct bpf_object *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 475 */;
	struct bpf_program *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 474 */;
	struct bpf_map *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 473 */;
	struct bpf_link *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 472 */;
	int cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 471 */;
	const char *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 470 */;
	struct core_reloc_test_case *cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 469 */;
	struct bpf_object_load_attr cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 468 */;
	const size_t cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 467 */;
	struct data cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 467 */;
	void cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 465 */;
	long cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 461 */;
	size_t cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 459 */;
	struct data {
		char in[256];
		char out[256];
		uint64_t my_pid_tgid;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 453 */;
	struct core_reloc_test_case {
		const char *case_name;
		const char *bpf_obj_file;
		const char *btf_src_file;
		const char *input;
		int input_len;
		const char *output;
		int output_len;
		bool fails;
		bool relaxed_core_relocs;
		bool direct_raw_tp;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/core_reloc.c 255 */;
}
