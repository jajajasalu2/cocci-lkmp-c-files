cocci_test_suite() {
	u8 cocci_id/* net/tipc/net.c 282 */[NODE_ID_LEN];
	u32 cocci_id/* net/tipc/net.c 262 */;
	struct nlattr *cocci_id/* net/tipc/net.c 242 */[TIPC_NLA_NET_MAX + 1];
	struct sk_buff *cocci_id/* net/tipc/net.c 240 */;
	struct genl_info *cocci_id/* net/tipc/net.c 240 */;
	struct tipc_nl_msg cocci_id/* net/tipc/net.c 220 */;
	struct netlink_callback *cocci_id/* net/tipc/net.c 215 */;
	void *cocci_id/* net/tipc/net.c 185 */;
	struct nlattr *cocci_id/* net/tipc/net.c 184 */;
	u64 *cocci_id/* net/tipc/net.c 182 */;
	struct tipc_net *cocci_id/* net/tipc/net.c 181 */;
	struct tipc_nl_msg *cocci_id/* net/tipc/net.c 179 */;
	struct net *cocci_id/* net/tipc/net.c 179 */;
	int cocci_id/* net/tipc/net.c 179 */;
	struct tipc_net_work cocci_id/* net/tipc/net.c 149 */;
	struct tipc_net_work *cocci_id/* net/tipc/net.c 147 */;
	struct work_struct *cocci_id/* net/tipc/net.c 145 */;
	void cocci_id/* net/tipc/net.c 131 */;
	u8 *cocci_id/* net/tipc/net.c 116 */;
	void cocci_id/* net/tipc/net.c 114 */(struct net *net, u32 addr);
	struct tipc_net_work {
		struct work_struct work;
		struct net *net;
		u32 addr;
	} cocci_id/* net/tipc/net.c 108 */;
}
