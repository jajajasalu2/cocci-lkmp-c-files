cocci_test_suite() {
	struct flowi6 cocci_id/* net/ipv6/ila/ila_lwt.c 64 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ila/ila_lwt.c 63 */;
	struct rt6_info *cocci_id/* net/ipv6/ila/ila_lwt.c 41 */;
	struct sock *cocci_id/* net/ipv6/ila/ila_lwt.c 38 */;
	struct net *cocci_id/* net/ipv6/ila/ila_lwt.c 38 */;
	const struct lwtunnel_encap_ops cocci_id/* net/ipv6/ila/ila_lwt.c 306 */;
	u64 cocci_id/* net/ipv6/ila/ila_lwt.c 291 */;
	struct sk_buff *cocci_id/* net/ipv6/ila/ila_lwt.c 262 */;
	void cocci_id/* net/ipv6/ila/ila_lwt.c 257 */;
	struct in6_addr cocci_id/* net/ipv6/ila/ila_lwt.c 249 */;
	__be64 cocci_id/* net/ipv6/ila/ila_lwt.c 236 */;
	struct ila_lwt {
		struct ila_params p;
		struct dst_cache dst_cache;
		u32 connected:1;
		u32 lwt_output:1;
	} cocci_id/* net/ipv6/ila/ila_lwt.c 19 */;
	struct ila_locator cocci_id/* net/ipv6/ila/ila_lwt.c 167 */;
	bool cocci_id/* net/ipv6/ila/ila_lwt.c 142 */;
	u8 cocci_id/* net/ipv6/ila/ila_lwt.c 139 */;
	struct ila_addr *cocci_id/* net/ipv6/ila/ila_lwt.c 138 */;
	const struct fib6_config *cocci_id/* net/ipv6/ila/ila_lwt.c 137 */;
	struct lwtunnel_state *cocci_id/* net/ipv6/ila/ila_lwt.c 136 */;
	struct nlattr *cocci_id/* net/ipv6/ila/ila_lwt.c 135 */[ILA_ATTR_MAX + 1];
	struct ila_params *cocci_id/* net/ipv6/ila/ila_lwt.c 134 */;
	struct ila_lwt *cocci_id/* net/ipv6/ila/ila_lwt.c 133 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/ila/ila_lwt.c 131 */;
	struct lwtunnel_state **cocci_id/* net/ipv6/ila/ila_lwt.c 130 */;
	const void *cocci_id/* net/ipv6/ila/ila_lwt.c 129 */;
	unsigned int cocci_id/* net/ipv6/ila/ila_lwt.c 129 */;
	struct nlattr *cocci_id/* net/ipv6/ila/ila_lwt.c 128 */;
	int cocci_id/* net/ipv6/ila/ila_lwt.c 128 */;
	const struct nla_policy cocci_id/* net/ipv6/ila/ila_lwt.c 121 */[ILA_ATTR_MAX + 1];
	struct dst_entry *cocci_id/* net/ipv6/ila/ila_lwt.c 103 */;
}
