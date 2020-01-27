cocci_test_suite() {
	struct tcphdr cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 99 */;
	struct ipv6hdr cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 98 */;
	struct tcpbpf_globals cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 79 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 78 */;
	struct tcphdr *cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 57 */;
	char cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 56 */[sizeof(struct ipv6hdr) + sizeof(struct tcphdr)];
	struct bpf_sock_ops *cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 54 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 54 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 51 */("version");
	void cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 31 */;
	sockopt_results cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 29 */(".maps");
	global_map cocci_id/* tools/testing/selftests/bpf/progs/test_tcpbpf_kern.c 22 */(".maps");
}
