cocci_test_suite() {
	struct sec_name_test {
		const char sec_name[32];
		struct {
			int rc;
			enum bpf_prog_type prog_type;
			enum bpf_attach_type expected_attach_type;
		} expected_load;
		struct {
			int rc;
			enum bpf_attach_type attach_type;
		} expected_attach;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 7 */;
	int cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 5 */;
	struct sec_name_test cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 20 */[];
	struct sec_name_test *cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 198 */;
	enum bpf_attach_type cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 177 */;
	const struct sec_name_test *cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 175 */;
	void cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 175 */;
	enum bpf_prog_type cocci_id/* tools/testing/selftests/bpf/prog_tests/section_names.c 154 */;
}
