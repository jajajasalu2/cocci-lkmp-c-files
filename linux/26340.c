cocci_test_suite() {
	int cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 68 */("version");
	struct bpf_sock *cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 44 */;
	struct bpf_sock_ops *cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 42 */;
	struct socket_cookie *cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 25 */;
	struct bpf_sock_addr *cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 23 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 23 */;
	socket_cookies cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 20 */(".maps");
	struct socket_cookie {
		__u64 cookie_key;
		__u32 cookie_value;
	} cocci_id/* tools/testing/selftests/bpf/progs/socket_cookie_prog.c 10 */;
}
