cocci_test_suite() {
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 963 */[TIPC_NLA_PUBL_MAX + 1];
	u32 cocci_id/* net/tipc/netlink_compat.c 962 */;
	u16 cocci_id/* net/tipc/netlink_compat.c 96 */;
	void *cocci_id/* net/tipc/netlink_compat.c 96 */;
	struct tlv_desc *cocci_id/* net/tipc/netlink_compat.c 91 */;
	int cocci_id/* net/tipc/netlink_compat.c 91 */;
	const char *const cocci_id/* net/tipc/netlink_compat.c 892 */[];
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 889 */[TIPC_NLA_NAME_TABLE_MAX + 1];
	struct tipc_name_table_query *cocci_id/* net/tipc/netlink_compat.c 888 */;
	char cocci_id/* net/tipc/netlink_compat.c 887 */[27];
	struct tipc_name_table_query cocci_id/* net/tipc/netlink_compat.c 870 */;
	struct tipc_link_config cocci_id/* net/tipc/netlink_compat.c 804 */;
	struct tipc_media *cocci_id/* net/tipc/netlink_compat.c 798 */;
	struct tipc_bearer *cocci_id/* net/tipc/netlink_compat.c 797 */;
	struct tipc_nl_compat_cmd_doit {
		int (*doit)(struct sk_buff *skb, struct genl_info *info);
		int (*transcode)(struct tipc_nl_compat_cmd_doit *cmd,
				 struct sk_buff *skb,
				 struct tipc_nl_compat_msg *msg);
	} cocci_id/* net/tipc/netlink_compat.c 71 */;
	struct tipc_link_config *cocci_id/* net/tipc/netlink_compat.c 697 */;
	struct sk_buff *cocci_id/* net/tipc/netlink_compat.c 695 */;
	struct tipc_link_info cocci_id/* net/tipc/netlink_compat.c 675 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 674 */[TIPC_NLA_LINK_MAX + 1];
	struct tipc_nl_compat_cmd_dump {
		int (*header)(struct tipc_nl_compat_msg *);
		int (*dumpit)(struct sk_buff *, struct netlink_callback *);
		int (*format)(struct tipc_nl_compat_msg *msg,
			      struct nlattr **attrs);
	} cocci_id/* net/tipc/netlink_compat.c 65 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 537 */[TIPC_NLA_STATS_MAX + 1];
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 536 */[TIPC_NLA_PROP_MAX + 1];
	struct tipc_nl_compat_msg {
		u16 cmd;
		int rep_type;
		int rep_size;
		int req_type;
		int req_size;
		struct net *net;
		struct sk_buff *rep;
		struct tlv_desc *req;
		struct sock *dst_sk;
	} cocci_id/* net/tipc/netlink_compat.c 53 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 493 */[];
	struct tipc_nl_compat_msg *cocci_id/* net/tipc/netlink_compat.c 492 */;
	void cocci_id/* net/tipc/netlink_compat.c 492 */;
	struct tipc_bearer_config cocci_id/* net/tipc/netlink_compat.c 430 */;
	struct tipc_bearer_config *cocci_id/* net/tipc/netlink_compat.c 420 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 398 */[TIPC_NLA_BEARER_MAX + 1];
	const struct nlattr *cocci_id/* net/tipc/netlink_compat.c 354 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 332 */;
	struct genl_info cocci_id/* net/tipc/netlink_compat.c 325 */;
	struct nlattr **cocci_id/* net/tipc/netlink_compat.c 324 */;
	struct tipc_nl_compat_cmd_doit *cocci_id/* net/tipc/netlink_compat.c 318 */;
	char *cocci_id/* net/tipc/netlink_compat.c 262 */;
	struct netlink_callback cocci_id/* net/tipc/netlink_compat.c 189 */;
	struct nlmsghdr *cocci_id/* net/tipc/netlink_compat.c 188 */;
	struct genl_dumpit_info cocci_id/* net/tipc/netlink_compat.c 184 */;
	struct tipc_nl_compat_cmd_dump *cocci_id/* net/tipc/netlink_compat.c 180 */;
	bool cocci_id/* net/tipc/netlink_compat.c 175 */;
	int __init cocci_id/* net/tipc/netlink_compat.c 1349 */;
	struct genl_family cocci_id/* net/tipc/netlink_compat.c 1338 */;
	const struct genl_ops cocci_id/* net/tipc/netlink_compat.c 1330 */[];
	struct tipc_genlmsghdr *cocci_id/* net/tipc/netlink_compat.c 1288 */;
	struct tipc_nl_compat_msg cocci_id/* net/tipc/netlink_compat.c 1285 */;
	struct genl_info *cocci_id/* net/tipc/netlink_compat.c 1281 */;
	va_list cocci_id/* net/tipc/netlink_compat.c 128 */;
	const char *cocci_id/* net/tipc/netlink_compat.c 121 */;
	struct tipc_nl_compat_cmd_doit cocci_id/* net/tipc/netlink_compat.c 1184 */;
	struct tipc_nl_compat_cmd_dump cocci_id/* net/tipc/netlink_compat.c 1183 */;
	struct tlv_desc cocci_id/* net/tipc/netlink_compat.c 118 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 1153 */[TIPC_NLA_NET_MAX + 1];
	__be32 cocci_id/* net/tipc/netlink_compat.c 1152 */;
	__be32 *cocci_id/* net/tipc/netlink_compat.c 1131 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 1106 */[TIPC_NLA_NODE_MAX + 1];
	struct tipc_node_info cocci_id/* net/tipc/netlink_compat.c 1105 */;
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 1086 */[TIPC_NLA_MEDIA_MAX + 1];
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 1049 */[TIPC_NLA_CON_MAX + 1];
	struct nlattr *cocci_id/* net/tipc/netlink_compat.c 1034 */[TIPC_NLA_SOCK_MAX + 1];
}
