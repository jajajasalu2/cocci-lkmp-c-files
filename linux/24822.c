cocci_test_suite() {
	const struct nla_policy cocci_id/* net/netfilter/nft_hash.c 59 */[NFTA_HASH_MAX + 1];
	struct nft_symhash *cocci_id/* net/netfilter/nft_hash.c 50 */;
	struct nft_symhash {
		enum nft_registers dreg:8;
		u32 modulus;
		u32 offset;
	} cocci_id/* net/netfilter/nft_hash.c 40 */;
	const void *cocci_id/* net/netfilter/nft_hash.c 31 */;
	struct nft_jhash *cocci_id/* net/netfilter/nft_hash.c 30 */;
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_hash.c 28 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_hash.c 27 */;
	void __exit cocci_id/* net/netfilter/nft_hash.c 240 */;
	void cocci_id/* net/netfilter/nft_hash.c 240 */;
	int __init cocci_id/* net/netfilter/nft_hash.c 235 */;
	u32 cocci_id/* net/netfilter/nft_hash.c 210 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_hash.c 208 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_hash.c 207 */;
	const struct nft_expr_ops *cocci_id/* net/netfilter/nft_hash.c 206 */;
	struct nft_symhash cocci_id/* net/netfilter/nft_hash.c 200 */;
	struct nft_jhash cocci_id/* net/netfilter/nft_hash.c 192 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_hash.c 190 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_hash.c 189 */;
	const struct nft_symhash *cocci_id/* net/netfilter/nft_hash.c 172 */;
	struct nft_jhash {
		enum nft_registers sreg:8;
		enum nft_registers dreg:8;
		u8 len;
		bool autogen_seed:1;
		u32 modulus;
		u32 seed;
		u32 offset;
	} cocci_id/* net/netfilter/nft_hash.c 16 */;
	const struct nft_jhash *cocci_id/* net/netfilter/nft_hash.c 145 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_hash.c 143 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_hash.c 142 */;
	int cocci_id/* net/netfilter/nft_hash.c 142 */;
}
