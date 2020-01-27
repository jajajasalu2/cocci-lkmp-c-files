cocci_test_suite() {
	struct sockopt_inherit *cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 55 */;
	__u8 *cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 54 */;
	struct bpf_sockopt *cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 52 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 52 */;
	listener_only_map cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 36 */(".maps");
	cloned2_map cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 29 */(".maps");
	cloned1_map cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 22 */(".maps");
	struct sockopt_inherit {
		__u8 val;
	} cocci_id/* tools/testing/selftests/bpf/progs/sockopt_inherit.c 13 */;
}
