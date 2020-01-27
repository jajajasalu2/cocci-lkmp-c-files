cocci_test_suite() {
	struct nft_tunnel *cocci_id/* net/netfilter/nft_tunnel.c 76 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_tunnel.c 74 */[];
	const struct nft_ctx *cocci_id/* net/netfilter/nft_tunnel.c 72 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 66 */[NFTA_TUNNEL_MAX + 1];
	void __exit cocci_id/* net/netfilter/nft_tunnel.c 592 */;
	int __init cocci_id/* net/netfilter/nft_tunnel.c 577 */;
	struct nft_tunnel_obj cocci_id/* net/netfilter/nft_tunnel.c 562 */;
	const struct nft_object_ops cocci_id/* net/netfilter/nft_tunnel.c 560 */;
	struct nft_object_type cocci_id/* net/netfilter/nft_tunnel.c 559 */;
	struct nft_tunnel_obj *cocci_id/* net/netfilter/nft_tunnel.c 554 */;
	struct nft_object *cocci_id/* net/netfilter/nft_tunnel.c 552 */;
	bool cocci_id/* net/netfilter/nft_tunnel.c 530 */;
	u32 cocci_id/* net/netfilter/nft_tunnel.c 514 */;
	struct ip_tunnel_info *cocci_id/* net/netfilter/nft_tunnel.c 512 */;
	struct sk_buff *cocci_id/* net/netfilter/nft_tunnel.c 511 */;
	int cocci_id/* net/netfilter/nft_tunnel.c 511 */;
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 438 */;
	struct dst_entry *cocci_id/* net/netfilter/nft_tunnel.c 432 */;
	struct metadata_dst *cocci_id/* net/netfilter/nft_tunnel.c 347 */;
	struct ip_tunnel_info cocci_id/* net/netfilter/nft_tunnel.c 346 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 331 */[NFTA_TUNNEL_KEY_MAX + 1];
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 310 */[NFTA_TUNNEL_KEY_OPTS_MAX + 1];
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 300 */[NFTA_TUNNEL_KEY_OPTS_MAX + 1];
	struct erspan_metadata cocci_id/* net/netfilter/nft_tunnel.c 294 */;
	uint8_t cocci_id/* net/netfilter/nft_tunnel.c 260 */;
	u32 *cocci_id/* net/netfilter/nft_tunnel.c 26 */;
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 259 */[NFTA_TUNNEL_KEY_ERSPAN_MAX + 1];
	struct nft_tunnel_opts *cocci_id/* net/netfilter/nft_tunnel.c 257 */;
	const struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 256 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 250 */[NFTA_TUNNEL_KEY_ERSPAN_MAX + 1];
	struct vxlan_metadata cocci_id/* net/netfilter/nft_tunnel.c 244 */;
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 231 */[NFTA_TUNNEL_KEY_VXLAN_MAX + 1];
	const struct nft_pktinfo *cocci_id/* net/netfilter/nft_tunnel.c 23 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 224 */[NFTA_TUNNEL_KEY_VXLAN_MAX + 1];
	struct nft_regs *cocci_id/* net/netfilter/nft_tunnel.c 22 */;
	void cocci_id/* net/netfilter/nft_tunnel.c 21 */;
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 195 */[NFTA_TUNNEL_KEY_IP6_MAX + 1];
	struct in6_addr cocci_id/* net/netfilter/nft_tunnel.c 186 */;
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 185 */[NFTA_TUNNEL_KEY_IP6_MAX + 1];
	struct nlattr *cocci_id/* net/netfilter/nft_tunnel.c 166 */[NFTA_TUNNEL_KEY_IP_MAX + 1];
	const struct nla_policy cocci_id/* net/netfilter/nft_tunnel.c 157 */[NFTA_TUNNEL_KEY_IP_MAX + 1];
	struct nft_tunnel_obj {
		struct metadata_dst *md;
		struct nft_tunnel_opts opts;
	} cocci_id/* net/netfilter/nft_tunnel.c 152 */;
	struct nft_tunnel {
		enum nft_tunnel_keys key:8;
		enum nft_registers dreg:8;
		enum nft_tunnel_mode mode:8;
	} cocci_id/* net/netfilter/nft_tunnel.c 15 */;
	struct nft_tunnel_opts {
		union {
			struct vxlan_metadata vxlan;
			struct erspan_metadata erspan;
		} u;
		u32 len;
		__be16 flags;
	} cocci_id/* net/netfilter/nft_tunnel.c 143 */;
	struct nft_tunnel cocci_id/* net/netfilter/nft_tunnel.c 129 */;
	const struct nft_expr_ops cocci_id/* net/netfilter/nft_tunnel.c 127 */;
	struct nft_expr_type cocci_id/* net/netfilter/nft_tunnel.c 126 */;
	const struct nft_tunnel *cocci_id/* net/netfilter/nft_tunnel.c 112 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_tunnel.c 110 */;
}
