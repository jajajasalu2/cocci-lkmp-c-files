cocci_test_suite() {
	void cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 971 */;
	socklen_t cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 926 */;
	void *cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 880 */;
	struct sockopt_test *cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 877 */;
	struct bpf_load_program_attr cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 855 */;
	enum bpf_attach_type cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 853 */;
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 852 */;
	int cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 852 */;
	enum sockopt_test_error{OK=0, DENY_LOAD, DENY_ATTACH, EPERM_GETSOCKOPT, EFAULT_GETSOCKOPT, EPERM_SETSOCKOPT, EFAULT_SETSOCKOPT,} cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 8 */;
	bool cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 6 */;
	char cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 5 */[4096];
	struct sockopt_test {
		const char *descr;
		const struct bpf_insn insns[64];
		enum bpf_attach_type attach_type;
		enum bpf_attach_type expected_attach_type;
		int set_optname;
		int set_level;
		const char set_optval[64];
		socklen_t set_optlen;
		int get_optname;
		int get_level;
		const char get_optval[64];
		socklen_t get_optlen;
		socklen_t get_optlen_ret;
		enum sockopt_test_error error;
	} cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 18 */[];
	struct bpf_sockopt cocci_id/* tools/testing/selftests/bpf/prog_tests/sockopt.c 106 */;
}
