cocci_test_suite() {
	struct nft_byteorder *cocci_id/* net/netfilter/nft_byteorder.c 99 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_byteorder.c 97 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_byteorder.c 95 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_byteorder.c 87 */[NFTA_BYTEORDER_MAX + 1];
	__u16 cocci_id/* net/netfilter/nft_byteorder.c 80 */;
	__be16 cocci_id/* net/netfilter/nft_byteorder.c 76 */;
	__u32 cocci_id/* net/netfilter/nft_byteorder.c 68 */;
	__be32 cocci_id/* net/netfilter/nft_byteorder.c 64 */;
	__u64 cocci_id/* net/netfilter/nft_byteorder.c 52 */;
	u64 cocci_id/* net/netfilter/nft_byteorder.c 41 */;
	void *cocci_id/* net/netfilter/nft_byteorder.c 36 */;
	unsigned int cocci_id/* net/netfilter/nft_byteorder.c 34 */;
	union {
		u32 u32;
		u16 u16;
	} *cocci_id/* net/netfilter/nft_byteorder.c 33 */;
	u32 *cocci_id/* net/netfilter/nft_byteorder.c 31 */;
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_byteorder.c 28 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_byteorder.c 27 */;
	void cocci_id/* net/netfilter/nft_byteorder.c 26 */;
	struct nft_byteorder {
		enum nft_registers sreg:8;
		enum nft_registers dreg:8;
		enum nft_byteorder_ops op:8;
		u8 len;
		u8 size;
	} cocci_id/* net/netfilter/nft_byteorder.c 18 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_byteorder.c 178 */;
	struct nft_byteorder cocci_id/* net/netfilter/nft_byteorder.c 172 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_byteorder.c 170 */;
	const struct nft_byteorder *cocci_id/* net/netfilter/nft_byteorder.c 152 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_byteorder.c 150 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_byteorder.c 150 */;
	int cocci_id/* net/netfilter/nft_byteorder.c 150 */;
	u32 cocci_id/* net/netfilter/nft_byteorder.c 100 */;
}
