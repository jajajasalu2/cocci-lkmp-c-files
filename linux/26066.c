cocci_test_suite() {
	struct bpf_sock cocci_id/* tools/testing/selftests/bpf/test_sock.c 53 */;
	struct sock_test cocci_id/* tools/testing/selftests/bpf/test_sock.c 47 */[];
	char **cocci_id/* tools/testing/selftests/bpf/test_sock.c 462 */;
	const struct sock_test *cocci_id/* tools/testing/selftests/bpf/test_sock.c 399 */;
	const struct sockaddr *cocci_id/* tools/testing/selftests/bpf/test_sock.c 388 */;
	struct sockaddr_in6 cocci_id/* tools/testing/selftests/bpf/test_sock.c 378 */;
	void *cocci_id/* tools/testing/selftests/bpf/test_sock.c 375 */;
	struct sockaddr_in cocci_id/* tools/testing/selftests/bpf/test_sock.c 371 */;
	socklen_t cocci_id/* tools/testing/selftests/bpf/test_sock.c 361 */;
	struct sockaddr_in *cocci_id/* tools/testing/selftests/bpf/test_sock.c 359 */;
	struct sockaddr_in6 *cocci_id/* tools/testing/selftests/bpf/test_sock.c 358 */;
	struct sockaddr_storage cocci_id/* tools/testing/selftests/bpf/test_sock.c 357 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_sock.c 355 */;
	unsigned short cocci_id/* tools/testing/selftests/bpf/test_sock.c 355 */;
	enum bpf_attach_type cocci_id/* tools/testing/selftests/bpf/test_sock.c 350 */;
	int cocci_id/* tools/testing/selftests/bpf/test_sock.c 349 */;
	struct bpf_load_program_attr cocci_id/* tools/testing/selftests/bpf/test_sock.c 331 */;
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_sock.c 328 */;
	size_t cocci_id/* tools/testing/selftests/bpf/test_sock.c 318 */;
	struct sock_test {
		const char *descr;
		struct bpf_insn insns[MAX_INSNS];
		enum bpf_attach_type expected_attach_type;
		enum bpf_attach_type attach_type;
		int domain;
		int type;
		const char *ip;
		unsigned short port;
		enum{LOAD_REJECT, ATTACH_REJECT, BIND_REJECT, SUCCESS,} result;
	} cocci_id/* tools/testing/selftests/bpf/test_sock.c 26 */;
	bool cocci_id/* tools/testing/selftests/bpf/test_sock.c 24 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sock.c 23 */[BPF_LOG_BUF_SIZE];
}
