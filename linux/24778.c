cocci_test_suite() {
	u32 cocci_id/* net/netfilter/nft_range.c 56 */;
	struct nft_data_desc cocci_id/* net/netfilter/nft_range.c 54 */;
	struct nft_range_expr *cocci_id/* net/netfilter/nft_range.c 53 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_range.c 51 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_range.c 50 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_range.c 43 */[NFTA_RANGE_MAX + 1];
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_range.c 24 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_range.c 24 */;
	void cocci_id/* net/netfilter/nft_range.c 23 */;
	struct nft_range_expr {
		struct nft_data data_from;
		struct nft_data data_to;
		enum nft_registers sreg:8;
		u8 len;
		enum nft_range_ops op:8;
	} cocci_id/* net/netfilter/nft_range.c 15 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_range.c 145 */;
	struct nft_range_expr cocci_id/* net/netfilter/nft_range.c 139 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_range.c 137 */;
	const struct nft_range_expr *cocci_id/* net/netfilter/nft_range.c 119 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_range.c 117 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_range.c 117 */;
	int cocci_id/* net/netfilter/nft_range.c 117 */;
}
