cocci_test_suite() {
	enum l2tp_pwtype cocci_id/* net/l2tp/l2tp_netlink.c 985 */;
	const struct l2tp_nl_cmd_ops *cocci_id/* net/l2tp/l2tp_netlink.c 985 */;
	const struct genl_ops cocci_id/* net/l2tp/l2tp_netlink.c 912 */[];
	struct in6_addr cocci_id/* net/l2tp/l2tp_netlink.c 892 */;
	const struct nla_policy cocci_id/* net/l2tp/l2tp_netlink.c 861 */[L2TP_ATTR_MAX + 1];
	struct netlink_callback *cocci_id/* net/l2tp/l2tp_netlink.c 818 */;
	void *cocci_id/* net/l2tp/l2tp_netlink.c 77 */;
	struct sk_buff *cocci_id/* net/l2tp/l2tp_netlink.c 74 */;
	struct genl_info *cocci_id/* net/l2tp/l2tp_netlink.c 74 */;
	int cocci_id/* net/l2tp/l2tp_netlink.c 74 */;
	struct nlattr *cocci_id/* net/l2tp/l2tp_netlink.c 708 */;
	u8 cocci_id/* net/l2tp/l2tp_netlink.c 705 */;
	u16 cocci_id/* net/l2tp/l2tp_netlink.c 572 */;
	char *cocci_id/* net/l2tp/l2tp_netlink.c 52 */;
	struct net *cocci_id/* net/l2tp/l2tp_netlink.c 517 */;
	struct l2tp_session_cfg cocci_id/* net/l2tp/l2tp_netlink.c 516 */;
	struct l2tp_session *cocci_id/* net/l2tp/l2tp_netlink.c 515 */;
	struct l2tp_tunnel *cocci_id/* net/l2tp/l2tp_netlink.c 514 */;
	u32 cocci_id/* net/l2tp/l2tp_netlink.c 510 */;
	const struct l2tp_nl_cmd_ops *cocci_id/* net/l2tp/l2tp_netlink.c 46 */[__L2TP_PWTYPE_MAX];
	int cocci_id/* net/l2tp/l2tp_netlink.c 41 */(struct sk_buff *skb,
						     u32 portid, u32 seq,
						     int flags,
						     struct l2tp_session *session,
						     u8 cmd);
	int cocci_id/* net/l2tp/l2tp_netlink.c 39 */(struct sk_buff *skb,
						     u32 portid, u32 seq,
						     int flags,
						     struct l2tp_tunnel *tunnel,
						     u8 cmd);
	struct ipv6_pinfo *cocci_id/* net/l2tp/l2tp_netlink.c 331 */;
	const struct genl_multicast_group cocci_id/* net/l2tp/l2tp_netlink.c 33 */[];
	struct inet_sock *cocci_id/* net/l2tp/l2tp_netlink.c 329 */;
	struct sock *cocci_id/* net/l2tp/l2tp_netlink.c 328 */;
	struct genl_family cocci_id/* net/l2tp/l2tp_netlink.c 31 */;
	struct l2tp_tunnel_cfg cocci_id/* net/l2tp/l2tp_netlink.c 167 */;
	struct genl_family *cocci_id/* net/l2tp/l2tp_netlink.c 132 */;
	void cocci_id/* net/l2tp/l2tp_netlink.c 1024 */;
	int __init cocci_id/* net/l2tp/l2tp_netlink.c 1018 */;
}
