cocci_test_suite() {
	struct ila_map cocci_id/* net/ipv6/ila/ila_xlat.c 87 */;
	const struct rhashtable_params cocci_id/* net/ipv6/ila/ila_xlat.c 85 */;
	__be64 *cocci_id/* net/ipv6/ila/ila_xlat.c 72 */;
	const struct ila_map *cocci_id/* net/ipv6/ila/ila_xlat.c 70 */;
	const void *cocci_id/* net/ipv6/ila/ila_xlat.c 68 */;
	struct rhashtable_compare_arg *cocci_id/* net/ipv6/ila/ila_xlat.c 67 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ila/ila_xlat.c 636 */;
	bool cocci_id/* net/ipv6/ila/ila_xlat.c 633 */;
	struct ila_addr *cocci_id/* net/ipv6/ila/ila_xlat.c 56 */;
	struct rhashtable_iter *cocci_id/* net/ipv6/ila/ila_xlat.c 537 */;
	struct ila_dump_iter *cocci_id/* net/ipv6/ila/ila_xlat.c 536 */;
	struct netlink_callback *cocci_id/* net/ipv6/ila/ila_xlat.c 534 */;
	long cocci_id/* net/ipv6/ila/ila_xlat.c 518 */;
	struct ila_dump_iter {
		struct rhashtable_iter rhiter;
		int skip;
	} cocci_id/* net/ipv6/ila/ila_xlat.c 500 */;
	struct ila_locator cocci_id/* net/ipv6/ila/ila_xlat.c 50 */;
	void *cocci_id/* net/ipv6/ila/ila_xlat.c 444 */;
	u8 cocci_id/* net/ipv6/ila/ila_xlat.c 442 */;
	struct sk_buff *cocci_id/* net/ipv6/ila/ila_xlat.c 442 */;
	u32 *cocci_id/* net/ipv6/ila/ila_xlat.c 43 */;
	u64 cocci_id/* net/ipv6/ila/ila_xlat.c 427 */;
	struct rhashtable_iter cocci_id/* net/ipv6/ila/ila_xlat.c 383 */;
	void cocci_id/* net/ipv6/ila/ila_xlat.c 36 */;
	u32 cocci_id/* net/ipv6/ila/ila_xlat.c 35 */;
	struct ila_xlat_params cocci_id/* net/ipv6/ila/ila_xlat.c 348 */;
	struct genl_info *cocci_id/* net/ipv6/ila/ila_xlat.c 345 */;
	struct ila_net *cocci_id/* net/ipv6/ila/ila_xlat.c 28 */;
	int cocci_id/* net/ipv6/ila/ila_xlat.c 28 */;
	spinlock_t *cocci_id/* net/ipv6/ila/ila_xlat.c 208 */;
	struct ila_map *cocci_id/* net/ipv6/ila/ila_xlat.c 207 */;
	struct net *cocci_id/* net/ipv6/ila/ila_xlat.c 204 */;
	struct ila_xlat_params *cocci_id/* net/ipv6/ila/ila_xlat.c 204 */;
	const struct nf_hook_ops cocci_id/* net/ipv6/ila/ila_xlat.c 195 */[];
	const struct nf_hook_state *cocci_id/* net/ipv6/ila/ila_xlat.c 189 */;
	unsigned int cocci_id/* net/ipv6/ila/ila_xlat.c 186 */;
	int cocci_id/* net/ipv6/ila/ila_xlat.c 184 */(struct sk_buff *skb,
						      bool sir2ila);
	struct ila_map {
		struct ila_xlat_params xp;
		struct rhash_head node;
		struct ila_map __rcu *next;
		struct rcu_head rcu;
	} cocci_id/* net/ipv6/ila/ila_xlat.c 18 */;
	struct ila_xlat_params {
		struct ila_params ip;
		int ifindex;
	} cocci_id/* net/ipv6/ila/ila_xlat.c 13 */;
	__be64 cocci_id/* net/ipv6/ila/ila_xlat.c 102 */;
}
