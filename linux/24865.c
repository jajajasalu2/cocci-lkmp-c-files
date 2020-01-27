cocci_test_suite() {
	struct ip_options cocci_id/* net/netfilter/nft_exthdr.c 90 */;
	struct iphdr cocci_id/* net/netfilter/nft_exthdr.c 84 */;
	__be32 cocci_id/* net/netfilter/nft_exthdr.c 78 */;
	bool cocci_id/* net/netfilter/nft_exthdr.c 77 */;
	unsigned int cocci_id/* net/netfilter/nft_exthdr.c 76 */;
	struct iphdr *cocci_id/* net/netfilter/nft_exthdr.c 75 */;
	struct ip_options *cocci_id/* net/netfilter/nft_exthdr.c 74 */;
	unsigned char cocci_id/* net/netfilter/nft_exthdr.c 73 */[sizeof(struct ip_options) + 40];
	unsigned int *cocci_id/* net/netfilter/nft_exthdr.c 71 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_exthdr.c 70 */;
	struct net *cocci_id/* net/netfilter/nft_exthdr.c 70 */;
	int cocci_id/* net/netfilter/nft_exthdr.c 70 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_exthdr.c 539 */;
	const struct nft_expr_ops *cocci_id/* net/netfilter/nft_exthdr.c 504 */;
	struct nft_exthdr cocci_id/* net/netfilter/nft_exthdr.c 482 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_exthdr.c 480 */;
	const struct nft_exthdr *cocci_id/* net/netfilter/nft_exthdr.c 454 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_exthdr.c 452 */;
	u32 cocci_id/* net/netfilter/nft_exthdr.c 320 */;
	struct nft_exthdr *cocci_id/* net/netfilter/nft_exthdr.c 319 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_exthdr.c 317 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_exthdr.c 315 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_exthdr.c 305 */[NFTA_EXTHDR_MAX + 1];
	const u8 *cocci_id/* net/netfilter/nft_exthdr.c 27 */;
	u16 *cocci_id/* net/netfilter/nft_exthdr.c 267 */;
	union {
		u8 octet;
		__be16 v16;
		__be32 v32;
	} cocci_id/* net/netfilter/nft_exthdr.c 239 */;
	u8 *cocci_id/* net/netfilter/nft_exthdr.c 188 */;
	struct tcphdr *cocci_id/* net/netfilter/nft_exthdr.c 187 */;
	u8 cocci_id/* net/netfilter/nft_exthdr.c 183 */[sizeof(struct tcphdr) + MAX_TCP_OPTION_SPACE];
	struct nft_exthdr {
		u8 type;
		u8 offset;
		u8 len;
		u8 op;
		enum nft_registers dreg:8;
		enum nft_registers sreg:8;
		u8 flags;
	} cocci_id/* net/netfilter/nft_exthdr.c 17 */;
	void *cocci_id/* net/netfilter/nft_exthdr.c 159 */;
	u32 *cocci_id/* net/netfilter/nft_exthdr.c 134 */;
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_exthdr.c 131 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_exthdr.c 130 */;
	void cocci_id/* net/netfilter/nft_exthdr.c 129 */;
}
