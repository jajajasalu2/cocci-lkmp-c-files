cocci_test_suite() {
	u64 cocci_id/* net/netfilter/nft_dynset.c 85 */;
	const struct nft_set_ext *cocci_id/* net/netfilter/nft_dynset.c 83 */;
	struct nft_set *cocci_id/* net/netfilter/nft_dynset.c 82 */;
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_dynset.c 79 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_dynset.c 79 */;
	struct nft_set_ext *cocci_id/* net/netfilter/nft_dynset.c 48 */;
	void *cocci_id/* net/netfilter/nft_dynset.c 44 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_dynset.c 323 */;
	struct nft_dynset cocci_id/* net/netfilter/nft_dynset.c 314 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_dynset.c 312 */;
	u32 cocci_id/* net/netfilter/nft_dynset.c 287 */;
	const struct nft_dynset *cocci_id/* net/netfilter/nft_dynset.c 286 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_dynset.c 284 */;
	int cocci_id/* net/netfilter/nft_dynset.c 284 */;
	struct nft_expr *cocci_id/* net/netfilter/nft_dynset.c 27 */;
	struct nft_dynset *cocci_id/* net/netfilter/nft_dynset.c 268 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_dynset.c 266 */;
	const struct nft_ctx *cocci_id/* net/netfilter/nft_dynset.c 265 */;
	void cocci_id/* net/netfilter/nft_dynset.c 265 */;
	enum nft_trans_phase cocci_id/* net/netfilter/nft_dynset.c 258 */;
	struct nft_dynset {
		struct nft_set *set;
		struct nft_set_ext_tmpl tmpl;
		enum nft_dynset_ops op:8;
		enum nft_registers sreg_key:8;
		enum nft_registers sreg_data:8;
		bool invert;
		u64 timeout;
		struct nft_expr *expr;
		struct nft_set_binding binding;
	} cocci_id/* net/netfilter/nft_dynset.c 15 */;
	u8 cocci_id/* net/netfilter/nft_dynset.c 133 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_dynset.c 130 */[];
	const struct nla_policy cocci_id/* net/netfilter/nft_dynset.c 116 */[NFTA_DYNSET_MAX + 1];
}
