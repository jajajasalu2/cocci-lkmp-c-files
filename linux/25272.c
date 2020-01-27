cocci_test_suite() {
	char cocci_id/* tools/lib/bpf/netlink.c 81 */[4096];
	struct nlmsgerr *cocci_id/* tools/lib/bpf/netlink.c 79 */;
	bool cocci_id/* tools/lib/bpf/netlink.c 78 */;
	__dump_nlmsg_t cocci_id/* tools/lib/bpf/netlink.c 75 */;
	struct sockaddr *cocci_id/* tools/lib/bpf/netlink.c 50 */;
	struct tcmsg cocci_id/* tools/lib/bpf/netlink.c 358 */;
	struct {
		struct nlmsghdr nlh;
		struct tcmsg t;
	} cocci_id/* tools/lib/bpf/netlink.c 354 */;
	unsigned int cocci_id/* tools/lib/bpf/netlink.c 351 */;
	struct nlattr *cocci_id/* tools/lib/bpf/netlink.c 344 */;
	struct tcmsg *cocci_id/* tools/lib/bpf/netlink.c 340 */;
	socklen_t cocci_id/* tools/lib/bpf/netlink.c 34 */;
	struct nlattr *cocci_id/* tools/lib/bpf/netlink.c 339 */[TCA_MAX + 1];
	void *cocci_id/* tools/lib/bpf/netlink.c 337 */;
	libbpf_dump_nlmsg_t cocci_id/* tools/lib/bpf/netlink.c 336 */;
	struct nlmsghdr *cocci_id/* tools/lib/bpf/netlink.c 335 */;
	int cocci_id/* tools/lib/bpf/netlink.c 335 */;
	struct sockaddr_nl cocci_id/* tools/lib/bpf/netlink.c 33 */;
	struct {
		struct nlmsghdr nlh;
		struct ifinfomsg ifm;
	} cocci_id/* tools/lib/bpf/netlink.c 316 */;
	struct xdp_link_info cocci_id/* tools/lib/bpf/netlink.c 303 */;
	__u32 cocci_id/* tools/lib/bpf/netlink.c 301 */;
	__u32 *cocci_id/* tools/lib/bpf/netlink.c 301 */;
	struct xdp_id_md cocci_id/* tools/lib/bpf/netlink.c 254 */;
	size_t cocci_id/* tools/lib/bpf/netlink.c 252 */;
	struct xdp_link_info *cocci_id/* tools/lib/bpf/netlink.c 251 */;
	struct xdp_id_md {
		int ifindex;
		__u32 flags;
		struct xdp_link_info info;
	} cocci_id/* tools/lib/bpf/netlink.c 25 */;
	int (*cocci_id/* tools/lib/bpf/netlink.c 22 */)(struct nlmsghdr *nlmsg,
							libbpf_dump_nlmsg_t,
							void *cookie);
	struct xdp_id_md *cocci_id/* tools/lib/bpf/netlink.c 209 */;
	struct nlattr *cocci_id/* tools/lib/bpf/netlink.c 208 */[IFLA_XDP_MAX + 1];
	struct nlattr **cocci_id/* tools/lib/bpf/netlink.c 206 */;
	struct ifinfomsg *cocci_id/* tools/lib/bpf/netlink.c 195 */;
	struct nlattr *cocci_id/* tools/lib/bpf/netlink.c 194 */[IFLA_MAX + 1];
	char *cocci_id/* tools/lib/bpf/netlink.c 157 */;
	struct ifinfomsg cocci_id/* tools/lib/bpf/netlink.c 148 */;
	struct {
		struct nlmsghdr nh;
		struct ifinfomsg ifinfo;
		char attrbuf[64];
	} cocci_id/* tools/lib/bpf/netlink.c 136 */;
}
