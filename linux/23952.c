cocci_test_suite() {
	struct fib4_rule *cocci_id/* net/ipv4/fib_rules.c 94 */;
	struct fib_lookup_arg cocci_id/* net/ipv4/fib_rules.c 82 */;
	struct fib_result *cocci_id/* net/ipv4/fib_rules.c 80 */;
	unsigned int cocci_id/* net/ipv4/fib_rules.c 80 */;
	struct net *cocci_id/* net/ipv4/fib_rules.c 79 */;
	struct flowi4 *cocci_id/* net/ipv4/fib_rules.c 79 */;
	int cocci_id/* net/ipv4/fib_rules.c 79 */;
	struct notifier_block *cocci_id/* net/ipv4/fib_rules.c 68 */;
	bool cocci_id/* net/ipv4/fib_rules.c 56 */;
	const struct fib_rule *cocci_id/* net/ipv4/fib_rules.c 56 */;
	struct fib4_rule cocci_id/* net/ipv4/fib_rules.c 49 */;
	void __net_exit cocci_id/* net/ipv4/fib_rules.c 427 */;
	int __net_init cocci_id/* net/ipv4/fib_rules.c 404 */;
	struct fib_rules_ops *cocci_id/* net/ipv4/fib_rules.c 365 */;
	void cocci_id/* net/ipv4/fib_rules.c 365 */;
	size_t cocci_id/* net/ipv4/fib_rules.c 358 */;
	struct fib4_rule {
		struct fib_rule common;
		u8 dst_len;
		u8 src_len;
		u8 tos;
		__be32 src;
		__be32 srcmask;
		__be32 dst;
		__be32 dstmask;
#ifdef CONFIG_IP_ROUTE_CLASSID
		u32 tclassid;
#endif
	} cocci_id/* net/ipv4/fib_rules.c 33 */;
	struct nlattr **cocci_id/* net/ipv4/fib_rules.c 306 */;
	struct fib_rule_hdr *cocci_id/* net/ipv4/fib_rules.c 305 */;
	struct netlink_ext_ack *cocci_id/* net/ipv4/fib_rules.c 222 */;
	struct sk_buff *cocci_id/* net/ipv4/fib_rules.c 219 */;
	const struct nla_policy cocci_id/* net/ipv4/fib_rules.c 214 */[FRA_MAX + 1];
	__be32 cocci_id/* net/ipv4/fib_rules.c 176 */;
	struct fib_nh_common *cocci_id/* net/ipv4/fib_rules.c 147 */;
	struct net_device *cocci_id/* net/ipv4/fib_rules.c 144 */;
	u32 cocci_id/* net/ipv4/fib_rules.c 111 */;
	struct fib_table *cocci_id/* net/ipv4/fib_rules.c 110 */;
	struct fib_lookup_arg *cocci_id/* net/ipv4/fib_rules.c 107 */;
	struct flowi *cocci_id/* net/ipv4/fib_rules.c 106 */;
	struct fib_rule *cocci_id/* net/ipv4/fib_rules.c 106 */;
}
