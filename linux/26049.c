cocci_test_suite() {
	struct in_addr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 894 */;
	int32_t cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 861 */;
	int cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 86 */(const struct sock_addr_test *test);
	struct bpf_object *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 832 */;
	struct bpf_prog_load_attr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 831 */;
	const char *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 829 */;
	struct in6_addr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 766 */;
	struct sockaddr_in6 cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 765 */;
	struct bpf_insn cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 760 */;
	struct bpf_sock_addr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 698 */;
	struct bpf_insn cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 693 */[];
	struct sockaddr *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 689 */;
	void *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 683 */;
	struct sockaddr_in cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 681 */;
	union {
		uint8_t u4_addr8[4];
		uint16_t u4_addr16[2];
		uint32_t u4_addr32;
	} cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 676 */;
	const struct sock_addr_test *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 674 */;
	int cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 674 */;
	struct bpf_load_program_attr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 644 */;
	const struct bpf_insn *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 642 */;
	size_t cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 642 */;
	struct sockaddr_in *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 607 */;
	struct sockaddr_in6 *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 606 */;
	unsigned short cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 603 */;
	struct sock_addr_test {
		const char *descr;
		load_fn loadfn;
		enum bpf_attach_type expected_attach_type;
		enum bpf_attach_type attach_type;
		int domain;
		int type;
		const char *requested_ip;
		unsigned short requested_port;
		const char *expected_ip;
		unsigned short expected_port;
		const char *expected_src_ip;
		enum{LOAD_REJECT, ATTACH_REJECT, ATTACH_OKAY, SYSCALL_EPERM, SYSCALL_ENOTSUPP, SUCCESS,} expected_result;
	} cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 60 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 58 */[BPF_LOG_BUF_SIZE];
	int (*cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 56 */)(int,
									     struct sockaddr *,
									     socklen_t *);
	int (*cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 55 */)(const struct sock_addr_test *test);
	struct sock_addr_test cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 53 */;
	char **cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1611 */;
	struct sockaddr_storage *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1351 */;
	fd_set cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1325 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1324 */[64];
	struct iovec cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1323 */;
	struct msghdr cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1322 */;
	struct timeval cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1321 */;
	char cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1255 */;
	union {
		char buf[CMSG_SPACE(sizeof(struct in_pktinfo))];
		struct cmsghdr align;
	} cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1249 */;
	union {
		char buf[CMSG_SPACE(sizeof(struct in6_pktinfo))];
		struct cmsghdr align;
	} cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1245 */;
	int *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1243 */;
	struct in6_pktinfo cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1228 */;
	struct in_pktinfo cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1219 */;
	struct in_pktinfo *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1214 */;
	struct in6_pktinfo *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1213 */;
	struct cmsghdr *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1211 */;
	const struct sockaddr *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1198 */;
	socklen_t *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1127 */;
	socklen_t cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1124 */;
	struct sockaddr_storage cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1123 */;
	info_fn cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1120 */;
	const struct sockaddr_in6 *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1099 */;
	const struct sockaddr_in *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1098 */;
	const struct sockaddr_storage *cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 1095 */;
	struct sock_addr_test cocci_id/* tools/testing/selftests/bpf/test_sock_addr.c 103 */[];
}
