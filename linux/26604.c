cocci_test_suite() {
	__u8 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 87 */;
	__u8 *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 87 */;
	struct ifreq cocci_id/* samples/bpf/xdp_router_ipv4_user.c 75 */;
	__be64 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 73 */;
	char *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 73 */;
	__u32 *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 705 */;
	void cocci_id/* samples/bpf/xdp_router_ipv4_user.c 64 */;
	char cocci_id/* samples/bpf/xdp_router_ipv4_user.c 636 */[256];
	struct bpf_object *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 635 */;
	const char *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 634 */;
	struct bpf_prog_info cocci_id/* samples/bpf/xdp_router_ipv4_user.c 632 */;
	struct bpf_prog_load_attr cocci_id/* samples/bpf/xdp_router_ipv4_user.c 629 */;
	struct rlimit cocci_id/* samples/bpf/xdp_router_ipv4_user.c 628 */;
	char **cocci_id/* samples/bpf/xdp_router_ipv4_user.c 626 */;
	__u64 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 572 */;
	__u64 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 522 */[nr_cpus];
	__u64 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 520 */[nr_keys][nr_cpus];
	struct pollfd cocci_id/* samples/bpf/xdp_router_ipv4_user.c 519 */;
	const unsigned int cocci_id/* samples/bpf/xdp_router_ipv4_user.c 518 */;
	unsigned int cocci_id/* samples/bpf/xdp_router_ipv4_user.c 517 */;
	void *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 488 */;
	struct rtmsg cocci_id/* samples/bpf/xdp_router_ipv4_user.c 480 */;
	struct sockaddr *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 474 */;
	struct {
		struct nlmsghdr nl;
		struct ndmsg rt;
		char buf[8192];
	} cocci_id/* samples/bpf/xdp_router_ipv4_user.c 461 */;
	struct iovec cocci_id/* samples/bpf/xdp_router_ipv4_user.c 458 */;
	struct msghdr cocci_id/* samples/bpf/xdp_router_ipv4_user.c 457 */;
	struct nlmsghdr *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 455 */;
	struct sockaddr_nl cocci_id/* samples/bpf/xdp_router_ipv4_user.c 454 */;
	__u32 cocci_id/* samples/bpf/xdp_router_ipv4_user.c 42 */;
	__be64 *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 410 */;
	__be32 *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 406 */;
	int cocci_id/* samples/bpf/xdp_router_ipv4_user.c 39 */(int rtm_family);
	struct direct_map {
		struct arp_table arp;
		int ifindex;
		__be64 mac;
	} cocci_id/* samples/bpf/xdp_router_ipv4_user.c 388 */;
	struct arp_table {
		__be64 mac;
		__be32 dst;
	} cocci_id/* samples/bpf/xdp_router_ipv4_user.c 384 */;
	struct ndmsg *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 381 */;
	char cocci_id/* samples/bpf/xdp_router_ipv4_user.c 380 */[24];
	struct rtattr *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 379 */;
	int cocci_id/* samples/bpf/xdp_router_ipv4_user.c 35 */;
	struct {
		struct nlmsghdr nl;
		struct rtmsg rt;
		char buf[8192];
	} cocci_id/* samples/bpf/xdp_router_ipv4_user.c 322 */;
	char cocci_id/* samples/bpf/xdp_router_ipv4_user.c 32 */[8192];
	int *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 30 */;
	struct trie_value {
		__u8 prefix[4];
		__be64 value;
		int ifindex;
		int metric;
		__be32 gw;
	} *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 203 */;
	struct route_table {
		int dst_len,iface,metric;
		char *iface_name;
		__be32 dst,gw;
		__be64 mac;
	} cocci_id/* samples/bpf/xdp_router_ipv4_user.c 131 */;
	struct rtmsg *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 127 */;
	struct bpf_lpm_trie_key *cocci_id/* samples/bpf/xdp_router_ipv4_user.c 125 */;
}
