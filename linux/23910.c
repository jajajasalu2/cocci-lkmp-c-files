cocci_test_suite() {
	const struct xfrm_input_afinfo *cocci_id/* net/xfrm/xfrm_input.c 85 */;
	unsigned long cocci_id/* net/xfrm/xfrm_input.c 806 */;
	struct xfrm_trans_tasklet *cocci_id/* net/xfrm/xfrm_input.c 801 */;
	void __init cocci_id/* net/xfrm/xfrm_input.c 790 */;
	int (*cocci_id/* net/xfrm/xfrm_input.c 773 */)(struct net *,
						       struct sock *,
						       struct sk_buff *);
	struct sk_buff_head cocci_id/* net/xfrm/xfrm_input.c 762 */;
	void *cocci_id/* net/xfrm/xfrm_input.c 761 */;
	struct xfrm_offload *cocci_id/* net/xfrm/xfrm_input.c 471 */;
	struct net_device cocci_id/* net/xfrm/xfrm_input.c 47 */;
	bool cocci_id/* net/xfrm/xfrm_input.c 469 */;
	unsigned int cocci_id/* net/xfrm/xfrm_input.c 466 */;
	u32 cocci_id/* net/xfrm/xfrm_input.c 465 */;
	xfrm_address_t *cocci_id/* net/xfrm/xfrm_input.c 464 */;
	struct gro_cells cocci_id/* net/xfrm/xfrm_input.c 46 */;
	struct net *cocci_id/* net/xfrm/xfrm_input.c 458 */;
	const struct xfrm_state_afinfo *cocci_id/* net/xfrm/xfrm_input.c 457 */;
	__be32 cocci_id/* net/xfrm/xfrm_input.c 455 */;
	const __rcu struct xfrm_input_afinfo *cocci_id/* net/xfrm/xfrm_input.c 44 */[AF_INET6 + 1];
	struct xfrm_trans_cb *cocci_id/* net/xfrm/xfrm_input.c 41 */;
	const struct xfrm_mode *cocci_id/* net/xfrm/xfrm_input.c 330 */;
	struct ipv6hdr cocci_id/* net/xfrm/xfrm_input.c 296 */;
	struct xfrm_trans_tasklet {
		struct tasklet_struct tasklet;
		struct sk_buff_head queue;
	} cocci_id/* net/xfrm/xfrm_input.c 26 */;
	struct ipv6hdr *cocci_id/* net/xfrm/xfrm_input.c 257 */;
	struct sk_buff *cocci_id/* net/xfrm/xfrm_input.c 255 */;
	void cocci_id/* net/xfrm/xfrm_input.c 255 */;
	struct iphdr cocci_id/* net/xfrm/xfrm_input.c 232 */;
	struct iphdr *cocci_id/* net/xfrm/xfrm_input.c 219 */;
	struct ip_beet_phdr *cocci_id/* net/xfrm/xfrm_input.c 178 */;
	struct xfrm_state *cocci_id/* net/xfrm/xfrm_input.c 171 */;
	int cocci_id/* net/xfrm/xfrm_input.c 171 */;
	__be16 *cocci_id/* net/xfrm/xfrm_input.c 155 */;
	struct ip_comp_hdr cocci_id/* net/xfrm/xfrm_input.c 153 */;
	struct ip_esp_hdr cocci_id/* net/xfrm/xfrm_input.c 148 */;
	struct ip_auth_hdr cocci_id/* net/xfrm/xfrm_input.c 143 */;
	u8 cocci_id/* net/xfrm/xfrm_input.c 136 */;
	__be32 *cocci_id/* net/xfrm/xfrm_input.c 136 */;
	struct sec_path *cocci_id/* net/xfrm/xfrm_input.c 114 */;
	__typeof__(struct xfrm_trans_tasklet) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	struct xfrm_trans_cb {
		union {
			struct inet_skb_parm h4;
#if IS_ENABLED(CONFIG_IPV6)
			struct inet6_skb_parm h6;
#endif
		} header;
		int (*finish)(struct net *net, struct sock *sk,
			      struct sk_buff *skb);
	} cocci_id/*  1 */;
}
