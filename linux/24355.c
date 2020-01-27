cocci_test_suite() {
	u8 *cocci_id/* net/mpls/af_mpls.c 95 */;
	struct mpls_route *cocci_id/* net/mpls/af_mpls.c 95 */;
	struct mpls_nh *cocci_id/* net/mpls/af_mpls.c 95 */;
	unsigned int *cocci_id/* net/mpls/af_mpls.c 937 */;
	struct rtvia cocci_id/* net/mpls/af_mpls.c 851 */;
	struct nlattr *cocci_id/* net/mpls/af_mpls.c 844 */;
	u8 cocci_id/* net/mpls/af_mpls.c 833 */;
	struct rtnexthop *cocci_id/* net/mpls/af_mpls.c 833 */;
	struct mpls_route_config *cocci_id/* net/mpls/af_mpls.c 765 */;
	void cocci_id/* net/mpls/af_mpls.c 73 */(int event, u32 label,
						 struct mpls_route *rt,
						 struct nlmsghdr *nlh,
						 struct net *net, u32 portid,
						 unsigned int nlm_flags);
	struct rtvia *cocci_id/* net/mpls/af_mpls.c 720 */;
	u8 cocci_id/* net/mpls/af_mpls.c 718 */[];
	struct net_device *cocci_id/* net/mpls/af_mpls.c 644 */;
	struct in6_addr cocci_id/* net/mpls/af_mpls.c 625 */;
	struct flowi6 cocci_id/* net/mpls/af_mpls.c 619 */;
	struct dst_entry *cocci_id/* net/mpls/af_mpls.c 618 */;
	const void *cocci_id/* net/mpls/af_mpls.c 615 */;
	struct in_addr cocci_id/* net/mpls/af_mpls.c 591 */;
	struct rtable *cocci_id/* net/mpls/af_mpls.c 590 */;
	size_t cocci_id/* net/mpls/af_mpls.c 572 */;
	struct mpls_route __rcu **cocci_id/* net/mpls/af_mpls.c 571 */;
	struct net *cocci_id/* net/mpls/af_mpls.c 569 */;
	unsigned cocci_id/* net/mpls/af_mpls.c 569 */;
	const struct nl_info *cocci_id/* net/mpls/af_mpls.c 538 */;
	void cocci_id/* net/mpls/af_mpls.c 53 */;
	const struct ip_tunnel_encap_ops cocci_id/* net/mpls/af_mpls.c 49 */;
	struct mpls_route_config {
		u32 rc_protocol;
		u32 rc_ifindex;
		u8 rc_via_table;
		u8 rc_via_alen;
		u8 rc_via[MAX_VIA_ALEN];
		u32 rc_label;
		u8 rc_ttl_propagate;
		u8 rc_output_labels;
		u32 rc_output_label[MAX_NEW_LABELS];
		u32 rc_nlflags;
		enum mpls_payload_type rc_payload_type;
		struct nl_info rc_nlinfo;
		struct rtnexthop *rc_mp;
		int rc_mp_len;
	} cocci_id/* net/mpls/af_mpls.c 488 */;
	const struct nla_policy cocci_id/* net/mpls/af_mpls.c 482 */[RTA_MAX + 1];
	struct packet_type cocci_id/* net/mpls/af_mpls.c 477 */;
	struct mpls_shim_hdr cocci_id/* net/mpls/af_mpls.c 46 */;
	struct ip_tunnel_encap *cocci_id/* net/mpls/af_mpls.c 44 */;
	struct mpls_shim_hdr *cocci_id/* net/mpls/af_mpls.c 345 */;
	struct packet_type *cocci_id/* net/mpls/af_mpls.c 342 */;
	struct ipv6hdr *cocci_id/* net/mpls/af_mpls.c 317 */;
	struct iphdr *cocci_id/* net/mpls/af_mpls.c 294 */;
	void __exit cocci_id/* net/mpls/af_mpls.c 2766 */;
	int __init cocci_id/* net/mpls/af_mpls.c 2725 */;
	enum mpls_payload_type cocci_id/* net/mpls/af_mpls.c 272 */;
	struct rtnl_af_ops cocci_id/* net/mpls/af_mpls.c 2719 */;
	struct pernet_operations cocci_id/* net/mpls/af_mpls.c 2714 */;
	struct mpls_entry_decoded cocci_id/* net/mpls/af_mpls.c 270 */;
	struct ctl_table cocci_id/* net/mpls/af_mpls.c 2602 */;
	u32 cocci_id/* net/mpls/af_mpls.c 2343 */[MAX_NEW_LABELS];
	struct nlattr *cocci_id/* net/mpls/af_mpls.c 2342 */[RTA_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/mpls/af_mpls.c 2337 */;
	struct rtnexthop cocci_id/* net/mpls/af_mpls.c 2237 */;
	struct rtmsg cocci_id/* net/mpls/af_mpls.c 2217 */;
	struct fib_dump_filter cocci_id/* net/mpls/af_mpls.c 2160 */;
	const struct nlmsghdr *cocci_id/* net/mpls/af_mpls.c 2157 */;
	struct netlink_callback *cocci_id/* net/mpls/af_mpls.c 2155 */;
	const struct ipv6hdr *cocci_id/* net/mpls/af_mpls.c 208 */;
	struct fib_dump_filter *cocci_id/* net/mpls/af_mpls.c 2075 */;
	struct ipv6hdr cocci_id/* net/mpls/af_mpls.c 207 */;
	const struct mpls_nh *cocci_id/* net/mpls/af_mpls.c 1997 */;
	bool cocci_id/* net/mpls/af_mpls.c 1989 */;
	const struct iphdr *cocci_id/* net/mpls/af_mpls.c 198 */;
	struct iphdr cocci_id/* net/mpls/af_mpls.c 197 */;
	struct rtmsg *cocci_id/* net/mpls/af_mpls.c 1968 */;
	struct nlmsghdr *cocci_id/* net/mpls/af_mpls.c 1967 */;
	u32 cocci_id/* net/mpls/af_mpls.c 1963 */;
	struct sk_buff *cocci_id/* net/mpls/af_mpls.c 1963 */;
	u32 cocci_id/* net/mpls/af_mpls.c 1701 */[];
	const struct nlattr *cocci_id/* net/mpls/af_mpls.c 1700 */;
	const u32 cocci_id/* net/mpls/af_mpls.c 1679 */[];
	const int cocci_id/* net/mpls/af_mpls.c 1658 */[NEIGH_NR_TABLES + 1];
	struct notifier_block cocci_id/* net/mpls/af_mpls.c 1651 */;
	void *cocci_id/* net/mpls/af_mpls.c 1581 */;
	struct notifier_block *cocci_id/* net/mpls/af_mpls.c 1580 */;
	unsigned long cocci_id/* net/mpls/af_mpls.c 1580 */;
	struct rcu_head *cocci_id/* net/mpls/af_mpls.c 1486 */;
	struct mpls_pcpu_stats *cocci_id/* net/mpls/af_mpls.c 1464 */;
	struct inet6_dev *cocci_id/* net/mpls/af_mpls.c 146 */;
	struct mpls_pcpu_stats cocci_id/* net/mpls/af_mpls.c 1459 */;
	struct mpls_dev *cocci_id/* net/mpls/af_mpls.c 1447 */;
	uintptr_t cocci_id/* net/mpls/af_mpls.c 1414 */;
	char *cocci_id/* net/mpls/af_mpls.c 1414 */;
	char cocci_id/* net/mpls/af_mpls.c 1401 */[sizeof("net/mpls/conf/") + IFNAMSIZ];
	const struct ctl_table cocci_id/* net/mpls/af_mpls.c 1387 */[];
	struct mpls_dev cocci_id/* net/mpls/af_mpls.c 1377 */;
	int *cocci_id/* net/mpls/af_mpls.c 1368 */;
	loff_t *cocci_id/* net/mpls/af_mpls.c 1366 */;
	size_t *cocci_id/* net/mpls/af_mpls.c 1366 */;
	void __user *cocci_id/* net/mpls/af_mpls.c 1365 */;
	struct ctl_table *cocci_id/* net/mpls/af_mpls.c 1364 */;
	struct netconfmsg *cocci_id/* net/mpls/af_mpls.c 1312 */;
	struct hlist_head *cocci_id/* net/mpls/af_mpls.c 1304 */;
	struct nlattr *cocci_id/* net/mpls/af_mpls.c 1255 */[NETCONFA_MAX + 1];
	struct nlattr **cocci_id/* net/mpls/af_mpls.c 1212 */;
	int cocci_id/* net/mpls/af_mpls.c 1207 */;
	const struct nla_policy cocci_id/* net/mpls/af_mpls.c 1206 */[NETCONFA_MAX + 1];
	const struct sk_buff *cocci_id/* net/mpls/af_mpls.c 119 */;
	struct netconfmsg cocci_id/* net/mpls/af_mpls.c 1139 */;
	const struct net_device *cocci_id/* net/mpls/af_mpls.c 112 */;
	unsigned int cocci_id/* net/mpls/af_mpls.c 112 */;
	struct mpls_link_stats cocci_id/* net/mpls/af_mpls.c 1109 */;
	struct mpls_link_stats *cocci_id/* net/mpls/af_mpls.c 1100 */;
	const u8 *cocci_id/* net/mpls/af_mpls.c 100 */;
	const struct mpls_route *cocci_id/* net/mpls/af_mpls.c 100 */;
	struct dn_fib_nh *cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 722 */;
	const struct dn_fib_nh *cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 719 */;
}
