cocci_test_suite() {
	dn_fib_idx_t *cocci_id/* net/decnet/dn_table.c 93 */;
	struct hlist_node *cocci_id/* net/decnet/dn_table.c 917 */;
	void __exit cocci_id/* net/decnet/dn_table.c 914 */;
	struct dn_fib_info cocci_id/* net/decnet/dn_table.c 909 */;
	void __init cocci_id/* net/decnet/dn_table.c 906 */;
	u16 cocci_id/* net/decnet/dn_table.c 89 */;
	void cocci_id/* net/decnet/dn_table.c 881 */;
	dn_fib_idx_t cocci_id/* net/decnet/dn_table.c 87 */;
	struct dn_hash cocci_id/* net/decnet/dn_table.c 865 */;
	struct dn_fib_table cocci_id/* net/decnet/dn_table.c 865 */;
	struct kmem_cache *cocci_id/* net/decnet/dn_table.c 84 */;
	struct hlist_head cocci_id/* net/decnet/dn_table.c 81 */[DN_FIB_TABLE_HASHSZ];
	const struct flowidn *cocci_id/* net/decnet/dn_table.c 790 */;
	struct dn_fib_res *cocci_id/* net/decnet/dn_table.c 790 */;
	struct dn_hash *cocci_id/* net/decnet/dn_table.c 669 */;
	struct netlink_skb_parms *cocci_id/* net/decnet/dn_table.c 667 */;
	struct dn_hash {
		struct dn_zone *dh_zones[17];
		struct dn_zone *dh_zone_list;
	} cocci_id/* net/decnet/dn_table.c 56 */;
	struct dn_fib_node *cocci_id/* net/decnet/dn_table.c 533 */;
	struct rtmsg *cocci_id/* net/decnet/dn_table.c 501 */;
	struct rtmsg cocci_id/* net/decnet/dn_table.c 500 */;
	struct dn_fib_table *cocci_id/* net/decnet/dn_table.c 494 */;
	unsigned int cocci_id/* net/decnet/dn_table.c 492 */;
	struct net *cocci_id/* net/decnet/dn_table.c 491 */;
	struct sk_buff *cocci_id/* net/decnet/dn_table.c 489 */;
	struct netlink_callback *cocci_id/* net/decnet/dn_table.c 489 */;
	int cocci_id/* net/decnet/dn_table.c 489 */;
	struct dn_zone {
		struct dn_zone *dz_next;
		struct dn_fib_node **dz_hash;
		int dz_nent;
		int dz_divisor;
		u32 dz_hashmask;
#define DZ_HASHMASK (dz)((dz)->dz_hashmask)
				int dz_order;
		__le16 dz_mask;
#define DZ_MASK (dz)((dz)->dz_mask)
			} cocci_id/* net/decnet/dn_table.c 43 */;
	unsigned char *cocci_id/* net/decnet/dn_table.c 367 */;
	struct nlattr *cocci_id/* net/decnet/dn_table.c 349 */;
	struct rtnexthop *cocci_id/* net/decnet/dn_table.c 348 */;
	struct nlmsghdr *cocci_id/* net/decnet/dn_table.c 306 */;
	struct dn_fib_info *cocci_id/* net/decnet/dn_table.c 303 */;
	u8 cocci_id/* net/decnet/dn_table.c 302 */;
	void *cocci_id/* net/decnet/dn_table.c 302 */;
	u32 cocci_id/* net/decnet/dn_table.c 301 */;
	size_t cocci_id/* net/decnet/dn_table.c 274 */;
	__le16 cocci_id/* net/decnet/dn_table.c 253 */;
	struct rtnexthop cocci_id/* net/decnet/dn_table.c 252 */;
	struct nlattr *cocci_id/* net/decnet/dn_table.c 229 */[];
	struct dn_zone cocci_id/* net/decnet/dn_table.c 190 */;
	dn_fib_key_t cocci_id/* net/decnet/dn_table.c 103 */;
	struct dn_zone *cocci_id/* net/decnet/dn_table.c 103 */;
	struct dn_fib_node **cocci_id/* net/decnet/dn_table.c 103 */;
	const struct dn_fib_nh *cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 719 */;
}
