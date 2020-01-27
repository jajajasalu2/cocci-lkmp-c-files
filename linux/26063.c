cocci_test_suite() {
	struct bpf_sysctl cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 85 */;
	struct sysctl_test cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 46 */[];
	struct sysctl_test {
		const char *descr;
		size_t fixup_value_insn;
		struct bpf_insn insns[MAX_INSNS];
		const char *prog_file;
		enum bpf_attach_type attach_type;
		const char *sysctl;
		int open_flags;
		int seek;
		const char *newval;
		const char *oldval;
		enum{LOAD_REJECT, ATTACH_REJECT, OP_EPERM, SUCCESS,} result;
	} cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 27 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 25 */[BPF_LOG_BUF_SIZE];
	char **cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1617 */;
	enum bpf_attach_type cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1551 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1520 */[128];
	const struct sysctl_test *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1505 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1504 */;
	int cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1504 */;
	struct sysctl_test *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1497 */;
	struct bpf_object *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1480 */;
	struct bpf_prog_load_attr cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1479 */;
	ssize_t cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1449 */;
	struct bpf_load_program_attr cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1438 */;
	uint32_t cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1428 */;
	union {
		uint8_t raw[sizeof(uint64_t)];
		uint64_t num;
	} cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1413 */;
	struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1411 */;
	size_t cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1410 */;
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_sysctl.c 1400 */;
}
