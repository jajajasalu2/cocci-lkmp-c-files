cocci_test_suite() {
	u16 cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 98 */;
	struct bitmap_ipmac_elem {
		unsigned char ether[ETH_ALEN];
		unsigned char filled;
	}__aligned(__alignof__(u64)) cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 63 */;
	struct bitmap_ipmac_adt_elem {
		unsigned char ether[ETH_ALEN]__aligned(2);
		u16 id;
		u16 add_mac;
	} cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 57 */;
	struct bitmap_ipmac {
		void *members;
		u32 first_ip;
		u32 last_ip;
		u32 elements;
		size_t memsize;
		struct timer_list gc;
		struct ip_set *set;
		unsigned char extensions[0]
		__aligned(__alignof__(u64));
	} cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 44 */;
	void cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 416 */;
	void __exit cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 415 */;
	int __init cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 409 */;
	enum{MAC_UNSET, MAC_FILLED,} cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 38 */;
	struct ip_set_type cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 376 */;
	struct bitmap_ipmac_elem cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 357 */;
	u8 cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 342 */;
	u64 cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 322 */;
	struct nlattr *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 318 */[];
	struct net *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 318 */;
	const struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 281 */;
	bool cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 280 */;
	u32 *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 242 */;
	struct ip_set_ext cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 215 */;
	struct bitmap_ipmac_adt_elem cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 214 */;
	ipset_adtfn cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 213 */;
	enum ipset_adt cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 210 */;
	struct ip_set_adt_opt *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 210 */;
	const struct xt_action_param *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 209 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 208 */;
	const struct bitmap_ipmac *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 201 */;
	struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 201 */;
	const struct bitmap_ipmac_elem *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 191 */;
	struct bitmap_ipmac_elem *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 146 */;
	size_t cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 144 */;
	u32 cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 121 */;
	struct bitmap_ipmac *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 119 */;
	const struct ip_set_ext *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 118 */;
	struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 118 */;
	const struct bitmap_ipmac_adt_elem *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 117 */;
	unsigned long *cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 116 */;
	int cocci_id/* net/netfilter/ipset/ip_set_bitmap_ipmac.c 115 */;
}
