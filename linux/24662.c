cocci_test_suite() {
	u8 cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 97 */;
	struct hash_netportnet4_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 96 */;
	void cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 95 */;
	u8 *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 83 */;
	int cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 70 */;
	u32 *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 62 */;
	void __exit cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 600 */;
	const struct hash_netportnet4_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 60 */;
	int __init cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 594 */;
	bool cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 59 */;
	struct ip_set_type cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 552 */;
	struct hash_netportnet6_elem cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 434 */;
	const struct hash_netportnet6 *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 432 */;
	struct hash_netportnet4_elem {
		union {
			__be32 ip[2];
			__be64 ipcmp;
		};
		__be16 port;
		union {
			u8 cidr[2];
			u16 ccmp;
		};
		u16 padding;
		u8 nomatch;
		u8 proto;
	} cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 42 */;
	struct hash_netportnet6_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 372 */;
	const struct hash_netportnet6_elem *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 335 */;
	struct hash_netportnet6_elem {
		union nf_inet_addr ip[2];
		__be16 port;
		union {
			u8 cidr[2];
			u16 ccmp;
		};
		u16 padding;
		u8 nomatch;
		u8 proto;
	} cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 320 */;
	struct nlattr *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 176 */[];
	struct ip_set_ext cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 156 */;
	struct hash_netportnet4_elem cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 155 */;
	ipset_adtfn cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 154 */;
	const struct hash_netportnet4 *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 153 */;
	enum ipset_adt cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 151 */;
	struct ip_set_adt_opt *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 151 */;
	const struct xt_action_param *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 150 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 149 */;
	struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 149 */;
	u32 cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 112 */;
	struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_hash_netportnet.c 109 */;
}
