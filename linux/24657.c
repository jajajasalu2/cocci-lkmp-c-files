cocci_test_suite() {
	struct ip_set_ext cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 90 */;
	struct hash_ipmac4_elem cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 89 */;
	ipset_adtfn cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 88 */;
	enum ipset_adt cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 86 */;
	struct ip_set_adt_opt *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 86 */;
	const struct xt_action_param *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 85 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 84 */;
	struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 84 */;
	int cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 83 */;
	struct hash_ipmac4_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 71 */;
	void cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 70 */;
	struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 59 */;
	u32 *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 53 */;
	const struct hash_ipmac4_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 51 */;
	bool cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 50 */;
	struct hash_ipmac4_elem {
		__be32 ip;
		union {
			unsigned char ether[ETH_ALEN];
			__be32 foo[2];
		};
	} cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 39 */;
	void __exit cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 302 */;
	int __init cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 296 */;
	struct ip_set_type cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 263 */;
	struct hash_ipmac6_elem cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 202 */;
	struct hash_ipmac6_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 179 */;
	const struct hash_ipmac6_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 158 */;
	struct hash_ipmac6_elem {
		union nf_inet_addr ip;
		union {
			unsigned char ether[ETH_ALEN];
			__be32 foo[2];
		};
	} cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 146 */;
	u32 cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 111 */;
	struct nlattr *cocci_id/* net/netfilter/ipset/ip_set_hash_ipmac.c 110 */[];
}
