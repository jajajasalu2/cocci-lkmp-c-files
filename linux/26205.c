cocci_test_suite() {
	struct tcp_rtt_storage {
		__u32 invoked;
		__u32 dsack_dups;
		__u32 delivered;
		__u32 delivered_ce;
		__u32 icsk_retransmits;
	} cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 8 */;
	struct bpf_sock *cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 29 */;
	struct bpf_tcp_sock *cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 27 */;
	struct tcp_rtt_storage *cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 26 */;
	struct bpf_sock_ops *cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 24 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 24 */;
	socket_storage_map cocci_id/* tools/testing/selftests/bpf/progs/tcp_rtt.c 21 */(".maps");
}
