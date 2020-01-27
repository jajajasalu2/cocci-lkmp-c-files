cocci_test_suite() {
	FILE *cocci_id/* tools/testing/vsock/vsock_diag_test.c 89 */;
	void (*cocci_id/* tools/testing/vsock/vsock_diag_test.c 659 */)(unsigned int peer_cid);
	unsigned int cocci_id/* tools/testing/vsock/vsock_diag_test.c 606 */;
	const char *cocci_id/* tools/testing/vsock/vsock_diag_test.c 603 */;
	char **cocci_id/* tools/testing/vsock/vsock_diag_test.c 601 */;
	const struct option cocci_id/* tools/testing/vsock/vsock_diag_test.c 552 */[];
	const char cocci_id/* tools/testing/vsock/vsock_diag_test.c 551 */[];
	unsigned long int cocci_id/* tools/testing/vsock/vsock_diag_test.c 540 */;
	char *cocci_id/* tools/testing/vsock/vsock_diag_test.c 539 */;
	struct sigaction cocci_id/* tools/testing/vsock/vsock_diag_test.c 529 */;
	struct {
		const char *name;
		void (*run_client)(unsigned int peer_cid);
		void (*run_server)(unsigned int peer_cid);
	} cocci_id/* tools/testing/vsock/vsock_diag_test.c 506 */[];
	socklen_t cocci_id/* tools/testing/vsock/vsock_diag_test.c 449 */;
	struct vsock_stat {
		struct list_head list;
		struct vsock_diag_msg msg;
	} cocci_id/* tools/testing/vsock/vsock_diag_test.c 40 */;
	union {
		struct sockaddr sa;
		struct sockaddr_vm svm;
	} cocci_id/* tools/testing/vsock/vsock_diag_test.c 389 */;
	enum test_mode{TEST_MODE_UNSET, TEST_MODE_CLIENT, TEST_MODE_SERVER,} cocci_id/* tools/testing/vsock/vsock_diag_test.c 33 */;
	struct vsock_diag_msg cocci_id/* tools/testing/vsock/vsock_diag_test.c 314 */;
	const struct nlmsgerr *cocci_id/* tools/testing/vsock/vsock_diag_test.c 296 */;
	struct nlmsghdr *cocci_id/* tools/testing/vsock/vsock_diag_test.c 289 */;
	ssize_t cocci_id/* tools/testing/vsock/vsock_diag_test.c 279 */;
	const struct nlmsghdr *cocci_id/* tools/testing/vsock/vsock_diag_test.c 278 */;
	long cocci_id/* tools/testing/vsock/vsock_diag_test.c 266 */[8192 / sizeof(long)];
	struct vsock_stat *cocci_id/* tools/testing/vsock/vsock_diag_test.c 249 */;
	const struct vsock_diag_msg *cocci_id/* tools/testing/vsock/vsock_diag_test.c 247 */;
	struct list_head *cocci_id/* tools/testing/vsock/vsock_diag_test.c 246 */;
	void cocci_id/* tools/testing/vsock/vsock_diag_test.c 246 */;
	struct msghdr cocci_id/* tools/testing/vsock/vsock_diag_test.c 226 */;
	struct iovec cocci_id/* tools/testing/vsock/vsock_diag_test.c 222 */;
	struct sockaddr_nl cocci_id/* tools/testing/vsock/vsock_diag_test.c 219 */;
	void *cocci_id/* tools/testing/vsock/vsock_diag_test.c 217 */;
	size_t cocci_id/* tools/testing/vsock/vsock_diag_test.c 217 */;
	__u32 cocci_id/* tools/testing/vsock/vsock_diag_test.c 190 */;
	struct {
		struct nlmsghdr nlh;
		struct vsock_diag_req vreq;
	} cocci_id/* tools/testing/vsock/vsock_diag_test.c 179 */;
	__u8 cocci_id/* tools/testing/vsock/vsock_diag_test.c 165 */;
	int cocci_id/* tools/testing/vsock/vsock_diag_test.c 149 */;
	struct stat cocci_id/* tools/testing/vsock/vsock_diag_test.c 125 */;
}
