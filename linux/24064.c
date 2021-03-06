cocci_test_suite() {
	struct dcb_app cocci_id/* net/dcb/dcbnl.c 990 */;
	u16 cocci_id/* net/dcb/dcbnl.c 980 */;
	const struct dcbnl_rtnl_ops *cocci_id/* net/dcb/dcbnl.c 979 */;
	struct dcb_peer_app_info cocci_id/* net/dcb/dcbnl.c 977 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 96 */[DCB_TC_ATTR_PARAM_MAX + 1];
	bool cocci_id/* net/dcb/dcbnl.c 878 */;
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 874 */[DCB_BCN_ATTR_MAX + 1];
	u32 cocci_id/* net/dcb/dcbnl.c 766 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 74 */[DCB_PG_ATTR_MAX + 1];
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 61 */[DCB_PFC_UP_ATTR_MAX + 1];
	u8 cocci_id/* net/dcb/dcbnl.c 557 */;
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 556 */[DCB_TC_ATTR_PARAM_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 555 */[DCB_PG_ATTR_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 554 */;
	struct sk_buff *cocci_id/* net/dcb/dcbnl.c 552 */;
	struct nlattr **cocci_id/* net/dcb/dcbnl.c 552 */;
	struct nlmsghdr *cocci_id/* net/dcb/dcbnl.c 551 */;
	struct net_device *cocci_id/* net/dcb/dcbnl.c 551 */;
	int cocci_id/* net/dcb/dcbnl.c 551 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 44 */[DCB_ATTR_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 435 */[DCB_APP_ATTR_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 325 */[DCB_NUMTCS_ATTR_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 280 */[DCB_CAP_ATTR_MAX + 1];
	u8 cocci_id/* net/dcb/dcbnl.c 266 */[MAX_ADDR_LEN];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 221 */[DCB_PFC_UP_ATTR_MAX + 1];
	int __init cocci_id/* net/dcb/dcbnl.c 2056 */;
	const struct net_device *cocci_id/* net/dcb/dcbnl.c 2036 */;
	struct dcb_ieee_app_dscp_map *cocci_id/* net/dcb/dcbnl.c 2007 */;
	void cocci_id/* net/dcb/dcbnl.c 2005 */;
	struct dcb_ieee_app_prio_map *cocci_id/* net/dcb/dcbnl.c 1977 */;
	struct dcb_app_type cocci_id/* net/dcb/dcbnl.c 1947 */;
	struct nlmsghdr **cocci_id/* net/dcb/dcbnl.c 183 */;
	struct dcb_app *cocci_id/* net/dcb/dcbnl.c 1827 */;
	struct dcb_app_type *cocci_id/* net/dcb/dcbnl.c 1807 */;
	const struct dcb_app *cocci_id/* net/dcb/dcbnl.c 1805 */;
	const struct reply_func *cocci_id/* net/dcb/dcbnl.c 1743 */;
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 1738 */[DCB_ATTR_MAX + 1];
	struct dcbmsg *cocci_id/* net/dcb/dcbnl.c 1737 */;
	struct net *cocci_id/* net/dcb/dcbnl.c 1735 */;
	struct netlink_ext_ack *cocci_id/* net/dcb/dcbnl.c 1733 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 172 */[DCB_FEATCFG_ATTR_MAX + 1];
	const struct reply_func cocci_id/* net/dcb/dcbnl.c 1702 */[DCB_CMD_MAX + 1];
	struct reply_func {
		int type;
		int (*cb)(struct net_device *, struct nlmsghdr *, u32,
			  struct nlattr **, struct sk_buff *);
	} cocci_id/* net/dcb/dcbnl.c 1693 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 161 */[DCB_ATTR_IEEE_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 1601 */[DCB_FEATCFG_ATTR_MAX + 1];
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 154 */[DCB_APP_ATTR_MAX + 1];
	struct nlattr *cocci_id/* net/dcb/dcbnl.c 1529 */[DCB_ATTR_IEEE_MAX + 1];
	struct dcbnl_buffer *cocci_id/* net/dcb/dcbnl.c 1475 */;
	struct ieee_pfc *cocci_id/* net/dcb/dcbnl.c 1468 */;
	struct ieee_qcn *cocci_id/* net/dcb/dcbnl.c 1459 */;
	struct ieee_maxrate *cocci_id/* net/dcb/dcbnl.c 1451 */;
	struct ieee_ets *cocci_id/* net/dcb/dcbnl.c 1444 */;
	struct cee_pfc cocci_id/* net/dcb/dcbnl.c 1337 */;
	struct cee_pg cocci_id/* net/dcb/dcbnl.c 1328 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 125 */[DCB_BCN_ATTR_MAX + 1];
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 118 */[DCB_NUMTCS_ATTR_MAX + 1];
	struct dcbnl_buffer cocci_id/* net/dcb/dcbnl.c 1103 */;
	struct ieee_pfc cocci_id/* net/dcb/dcbnl.c 1094 */;
	struct ieee_qcn_stats cocci_id/* net/dcb/dcbnl.c 1081 */;
	struct ieee_qcn cocci_id/* net/dcb/dcbnl.c 1068 */;
	struct ieee_maxrate cocci_id/* net/dcb/dcbnl.c 1056 */;
	const struct nla_policy cocci_id/* net/dcb/dcbnl.c 105 */[DCB_CAP_ATTR_MAX + 1];
	struct ieee_ets cocci_id/* net/dcb/dcbnl.c 1047 */;
}
