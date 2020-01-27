cocci_test_suite() {
	void __exit cocci_id/* net/ipv6/ah6.c 791 */;
	int __init cocci_id/* net/ipv6/ah6.c 775 */;
	struct xfrm6_protocol cocci_id/* net/ipv6/ah6.c 768 */;
	const struct xfrm_type cocci_id/* net/ipv6/ah6.c 756 */;
	struct ah_data *cocci_id/* net/ipv6/ah6.c 742 */;
	struct xfrm_state *cocci_id/* net/ipv6/ah6.c 740 */;
	void cocci_id/* net/ipv6/ah6.c 740 */;
	struct ipv6hdr cocci_id/* net/ipv6/ah6.c 723 */;
	struct ip_auth_hdr cocci_id/* net/ipv6/ah6.c 716 */;
	struct crypto_ahash *cocci_id/* net/ipv6/ah6.c 675 */;
	struct xfrm_algo_desc *cocci_id/* net/ipv6/ah6.c 674 */;
	xfrm_address_t *cocci_id/* net/ipv6/ah6.c 657 */;
	struct ip_auth_hdr *cocci_id/* net/ipv6/ah6.c 650 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ah6.c 649 */;
	struct net *cocci_id/* net/ipv6/ah6.c 648 */;
	u8 cocci_id/* net/ipv6/ah6.c 646 */;
	__be32 cocci_id/* net/ipv6/ah6.c 646 */;
	struct sk_buff *cocci_id/* net/ipv6/ah6.c 645 */;
	struct inet6_skb_parm *cocci_id/* net/ipv6/ah6.c 645 */;
	int cocci_id/* net/ipv6/ah6.c 645 */;
	struct scatterlist cocci_id/* net/ipv6/ah6.c 61 */;
	struct ahash_request cocci_id/* net/ipv6/ah6.c 60 */;
	__be32 *cocci_id/* net/ipv6/ah6.c 529 */;
	u16 cocci_id/* net/ipv6/ah6.c 523 */;
	struct scatterlist *cocci_id/* net/ipv6/ah6.c 519 */;
	struct ahash_request *cocci_id/* net/ipv6/ah6.c 518 */;
	u8 *cocci_id/* net/ipv6/ah6.c 513 */;
	unsigned int cocci_id/* net/ipv6/ah6.c 50 */;
	void *cocci_id/* net/ipv6/ah6.c 49 */;
	struct ah_skb_cb *cocci_id/* net/ipv6/ah6.c 47 */;
	struct crypto_async_request *cocci_id/* net/ipv6/ah6.c 457 */;
	struct ah_skb_cb {
		struct xfrm_skb_cb xfrm;
		void *tmp;
	} cocci_id/* net/ipv6/ah6.c 42 */;
	char *cocci_id/* net/ipv6/ah6.c 367 */;
	struct tmp_ext *cocci_id/* net/ipv6/ah6.c 337 */;
	union {
		struct ipv6hdr *iph;
		struct ipv6_opt_hdr *opth;
		struct ipv6_rt_hdr *rth;
		char *raw;
	} cocci_id/* net/ipv6/ah6.c 246 */;
	struct rt0_hdr *cocci_id/* net/ipv6/ah6.c 234 */;
	struct in6_addr *cocci_id/* net/ipv6/ah6.c 217 */;
	struct ipv6_rt_hdr *cocci_id/* net/ipv6/ah6.c 214 */;
	struct ipv6_destopt_hao *cocci_id/* net/ipv6/ah6.c 179 */;
	struct in6_addr cocci_id/* net/ipv6/ah6.c 178 */;
	struct ipv6_opt_hdr *cocci_id/* net/ipv6/ah6.c 149 */;
	bool cocci_id/* net/ipv6/ah6.c 105 */;
	unsigned long cocci_id/* net/ipv6/ah6.c 100 */;
	struct tmp_ext {
#if IS_ENABLED(CONFIG_IPV6_MIP6)
		struct in6_addr saddr;
#endif
		struct in6_addr daddr;
		char hdrs[0];
	} cocci_id/*  1 */;
}
