cocci_test_suite() {
	int cocci_id/* tools/testing/selftests/net/socket.c 88 */;
	void cocci_id/* tools/testing/selftests/net/socket.c 88 */;
	struct socket_testcase *cocci_id/* tools/testing/selftests/net/socket.c 45 */;
	char cocci_id/* tools/testing/selftests/net/socket.c 39 */[ERR_STRING_SZ];
	struct socket_testcase cocci_id/* tools/testing/selftests/net/socket.c 26 */[];
	struct socket_testcase {
		int domain;
		int type;
		int protocol;
		int expect;
		int nosupport_ok;
	} cocci_id/* tools/testing/selftests/net/socket.c 10 */;
}
