cocci_test_suite() {
	void __exit cocci_id/* net/netfilter/nft_limit.c 362 */;
	int __init cocci_id/* net/netfilter/nft_limit.c 344 */;
	const struct nft_object_ops *cocci_id/* net/netfilter/nft_limit.c 320 */;
	const struct nft_object_ops cocci_id/* net/netfilter/nft_limit.c 312 */;
	s64 cocci_id/* net/netfilter/nft_limit.c 31 */;
	struct nft_object *cocci_id/* net/netfilter/nft_limit.c 303 */;
	bool cocci_id/* net/netfilter/nft_limit.c 28 */;
	struct nft_limit_pkts cocci_id/* net/netfilter/nft_limit.c 276 */;
	struct nft_object_type cocci_id/* net/netfilter/nft_limit.c 273 */;
	const struct nft_limit_pkts *cocci_id/* net/netfilter/nft_limit.c 268 */;
	struct nft_limit_pkts *cocci_id/* net/netfilter/nft_limit.c 243 */;
	const struct nft_expr_ops *cocci_id/* net/netfilter/nft_limit.c 214 */;
	struct nft_limit cocci_id/* net/netfilter/nft_limit.c 208 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_limit.c 206 */;
	const struct nft_limit *cocci_id/* net/netfilter/nft_limit.c 201 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_limit.c 199 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_limit.c 198 */;
	int cocci_id/* net/netfilter/nft_limit.c 198 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_limit.c 191 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_limit.c 189 */;
	u64 cocci_id/* net/netfilter/nft_limit.c 183 */;
	struct nft_limit *cocci_id/* net/netfilter/nft_limit.c 182 */;
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_limit.c 180 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_limit.c 179 */;
	void cocci_id/* net/netfilter/nft_limit.c 178 */;
	struct nft_limit {
		spinlock_t lock;
		u64 last;
		u64 tokens;
		u64 tokens_max;
		u64 rate;
		u64 nsecs;
		u32 burst;
		bool invert;
	} cocci_id/* net/netfilter/nft_limit.c 17 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_limit.c 169 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_limit.c 139 */[NFTA_LIMIT_MAX + 1];
	struct nft_limit_pkts {
		struct nft_limit limit;
		u64 cost;
	} cocci_id/* net/netfilter/nft_limit.c 124 */;
	u32 cocci_id/* net/netfilter/nft_limit.c 107 */;
	enum nft_limit_type cocci_id/* net/netfilter/nft_limit.c 105 */;
}
