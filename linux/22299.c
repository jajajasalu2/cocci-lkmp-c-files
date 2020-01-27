cocci_test_suite() {
	struct msghdr *cocci_id/* security/tomoyo/network.c 758 */;
	struct tomoyo_addr_info cocci_id/* security/tomoyo/network.c 726 */;
	struct socket *cocci_id/* security/tomoyo/network.c 723 */;
	u16 cocci_id/* security/tomoyo/network.c 71 */;
	struct sockaddr_storage cocci_id/* security/tomoyo/network.c 655 */;
	struct sock *cocci_id/* security/tomoyo/network.c 626 */;
	void cocci_id/* security/tomoyo/network.c 613 */;
	struct sockaddr_un *cocci_id/* security/tomoyo/network.c 603 */;
	struct tomoyo_unix_addr_info *cocci_id/* security/tomoyo/network.c 597 */;
	struct sockaddr *cocci_id/* security/tomoyo/network.c 593 */;
	struct tomoyo_path_info cocci_id/* security/tomoyo/network.c 564 */;
	char *cocci_id/* security/tomoyo/network.c 55 */;
	struct sockaddr_in *cocci_id/* security/tomoyo/network.c 524 */;
	struct sockaddr_in cocci_id/* security/tomoyo/network.c 520 */;
	struct sockaddr_in6 *cocci_id/* security/tomoyo/network.c 516 */;
	__be32 *cocci_id/* security/tomoyo/network.c 515 */;
	struct tomoyo_ipaddr_union *cocci_id/* security/tomoyo/network.c 51 */;
	struct sockaddr cocci_id/* security/tomoyo/network.c 508 */;
	struct tomoyo_inet_addr_info *cocci_id/* security/tomoyo/network.c 506 */;
	struct tomoyo_addr_info *cocci_id/* security/tomoyo/network.c 504 */;
	const u16 cocci_id/* security/tomoyo/network.c 503 */;
	const unsigned int cocci_id/* security/tomoyo/network.c 502 */;
	const struct sockaddr *cocci_id/* security/tomoyo/network.c 501 */;
	struct tomoyo_acl_param *cocci_id/* security/tomoyo/network.c 50 */;
	struct tomoyo_request_info cocci_id/* security/tomoyo/network.c 470 */;
	const int cocci_id/* security/tomoyo/network.c 469 */;
	const struct tomoyo_addr_info *cocci_id/* security/tomoyo/network.c 467 */;
	const struct tomoyo_unix_acl *cocci_id/* security/tomoyo/network.c 452 */;
	typeof(*acl) cocci_id/* security/tomoyo/network.c 423 */;
	const struct tomoyo_inet_acl *cocci_id/* security/tomoyo/network.c 422 */;
	const struct tomoyo_acl_info *cocci_id/* security/tomoyo/network.c 420 */;
	bool cocci_id/* security/tomoyo/network.c 419 */;
	const struct in6_addr *cocci_id/* security/tomoyo/network.c 386 */;
	const __be32 *cocci_id/* security/tomoyo/network.c 383 */;
	char cocci_id/* security/tomoyo/network.c 381 */[128];
	struct tomoyo_request_info *cocci_id/* security/tomoyo/network.c 379 */;
	int cocci_id/* security/tomoyo/network.c 379 */;
	const u8 cocci_id/* security/tomoyo/network.c 364 */;
	const char *cocci_id/* security/tomoyo/network.c 364 */;
	const char *constcocci_id/* security/tomoyo/network.c 33 */[TOMOYO_SOCK_MAX];
	struct tomoyo_unix_acl cocci_id/* security/tomoyo/network.c 261 */;
	struct tomoyo_addr_info {
		u8 protocol;
		u8 operation;
		struct tomoyo_inet_addr_info inet;
		struct tomoyo_unix_addr_info unix0;
	} cocci_id/* security/tomoyo/network.c 25 */;
	u8 cocci_id/* security/tomoyo/network.c 236 */;
	struct tomoyo_inet_acl cocci_id/* security/tomoyo/network.c 235 */;
	u8 *constcocci_id/* security/tomoyo/network.c 234 */;
	const bool cocci_id/* security/tomoyo/network.c 232 */;
	struct tomoyo_acl_info *cocci_id/* security/tomoyo/network.c 230 */;
	typeof(*p2) cocci_id/* security/tomoyo/network.c 196 */;
	typeof(*p1) cocci_id/* security/tomoyo/network.c 195 */;
	struct tomoyo_unix_addr_info {
		u8 *addr;
		unsigned int addr_len;
	} cocci_id/* security/tomoyo/network.c 19 */;
	const u8 cocci_id/* security/tomoyo/network.c 138 */[TOMOYO_SOCK_MAX][TOMOYO_MAX_NETWORK_OPERATION];
	const struct tomoyo_ipaddr_union *cocci_id/* security/tomoyo/network.c 125 */;
	struct tomoyo_inet_addr_info {
		__be16 port;
		const __be32 *address;
		bool is_ipv6;
	} cocci_id/* security/tomoyo/network.c 12 */;
}
