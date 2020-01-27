cocci_test_suite() {
	char **cocci_id/* tools/testing/selftests/bpf/test_align.c 698 */;
	struct bpf_align_test *cocci_id/* tools/testing/selftests/bpf/test_align.c 679 */;
	unsigned int cocci_id/* tools/testing/selftests/bpf/test_align.c 672 */;
	int cocci_id/* tools/testing/selftests/bpf/test_align.c 672 */;
	struct bpf_reg_match cocci_id/* tools/testing/selftests/bpf/test_align.c 640 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_align.c 615 */;
	struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_align.c 612 */;
	char cocci_id/* tools/testing/selftests/bpf/test_align.c 608 */[32768];
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_align.c 598 */;
	struct bpf_align_test cocci_id/* tools/testing/selftests/bpf/test_align.c 44 */[];
	struct bpf_align_test {
		const char *descr;
		struct bpf_insn insns[MAX_INSNS];
		enum{UNDEF, ACCEPT, REJECT,} result;
		enum bpf_prog_type prog_type;
		struct bpf_reg_match matches[MAX_MATCHES];
	} cocci_id/* tools/testing/selftests/bpf/test_align.c 31 */;
	struct bpf_reg_match {
		unsigned int line;
		const char *match;
	} cocci_id/* tools/testing/selftests/bpf/test_align.c 26 */;
}
