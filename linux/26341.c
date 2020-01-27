cocci_test_suite() {
	const struct bpf_sock *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 83 */;
	void cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 82 */;
	bool cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 77 */;
	__u32 *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 77 */;
	sk_pkt_out_cnt10 cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 75 */(".maps");
	sk_pkt_out_cnt cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 68 */(".maps");
	struct bpf_spinlock_cnt {
		struct bpf_spin_lock lock;
		__u32 cnt;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 58 */;
	linum_map cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 56 */(".maps");
	tcp_sock_result_map cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 49 */(".maps");
	sock_result_map cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 42 */(".maps");
	addr_map cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 35 */(".maps");
	enum bpf_linum_array_idx{EGRESS_LINUM_IDX, INGRESS_LINUM_IDX, __NR_BPF_LINUM_ARRAY_IDX,} cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 24 */;
	enum bpf_result_array_idx{EGRESS_SRV_IDX, EGRESS_CLI_IDX, INGRESS_LISTEN_IDX, __NR_BPF_RESULT_ARRAY_IDX,} cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 17 */;
	struct bpf_sock *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 147 */;
	struct bpf_tcp_sock *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 146 */;
	struct sockaddr_in6 *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 145 */;
	struct bpf_spinlock_cnt *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 144 */;
	__u32 cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 143 */;
	struct bpf_spinlock_cnt cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 142 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 140 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 140 */;
	enum bpf_addr_array_idx{ADDR_SRV_IDX, ADDR_CLI_IDX, __NR_BPF_ADDR_ARRAY_IDX,} cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 11 */;
	const struct bpf_tcp_sock *cocci_id/* tools/testing/selftests/bpf/progs/test_sock_fields_kern.c 107 */;
}
