cocci_test_suite() {
	struct dn_fib_table *cocci_id/* net/decnet/dn_rules.c 73 */;
	struct fib_lookup_arg *cocci_id/* net/decnet/dn_rules.c 69 */;
	struct flowi *cocci_id/* net/decnet/dn_rules.c 68 */;
	struct fib_rule *cocci_id/* net/decnet/dn_rules.c 68 */;
	struct fib_lookup_arg cocci_id/* net/decnet/dn_rules.c 56 */;
	struct flowidn *cocci_id/* net/decnet/dn_rules.c 54 */;
	struct dn_fib_res *cocci_id/* net/decnet/dn_rules.c 54 */;
	int cocci_id/* net/decnet/dn_rules.c 54 */;
	struct dn_fib_rule {
		struct fib_rule common;
		unsigned char dst_len;
		unsigned char src_len;
		__le16 src;
		__le16 srcmask;
		__le16 dst;
		__le16 dstmask;
		__le16 srcmap;
		u8 flags;
	} cocci_id/* net/decnet/dn_rules.c 40 */;
	void __exit cocci_id/* net/decnet/dn_rules.c 252 */;
	void __init cocci_id/* net/decnet/dn_rules.c 243 */;
	struct fib_rules_ops *cocci_id/* net/decnet/dn_rules.c 222 */;
	void cocci_id/* net/decnet/dn_rules.c 222 */;
	struct dn_fib_res cocci_id/* net/decnet/dn_rules.c 187 */;
	struct flowidn cocci_id/* net/decnet/dn_rules.c 186 */;
	unsigned int cocci_id/* net/decnet/dn_rules.c 184 */;
	struct dn_fib_rule *cocci_id/* net/decnet/dn_rules.c 167 */;
	struct nlattr **cocci_id/* net/decnet/dn_rules.c 165 */;
	struct fib_rule_hdr *cocci_id/* net/decnet/dn_rules.c 164 */;
	struct netlink_ext_ack *cocci_id/* net/decnet/dn_rules.c 125 */;
	struct sk_buff *cocci_id/* net/decnet/dn_rules.c 122 */;
	__le16 cocci_id/* net/decnet/dn_rules.c 112 */;
	const struct nla_policy cocci_id/* net/decnet/dn_rules.c 104 */[FRA_MAX + 1];
}
