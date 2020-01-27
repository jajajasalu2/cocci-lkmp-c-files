cocci_test_suite() {
	const xfrm_address_t *cocci_id/* net/ipv6/xfrm6_tunnel.c 74 */;
	const struct in6_addr *cocci_id/* net/ipv6/xfrm6_tunnel.c 61 */;
	struct kmem_cache *cocci_id/* net/ipv6/xfrm6_tunnel.c 55 */;
	struct xfrm6_tunnel_spi {
		struct hlist_node list_byaddr;
		struct hlist_node list_byspi;
		xfrm_address_t addr;
		u32 spi;
		refcount_t refcnt;
		struct rcu_head rcu_head;
	} cocci_id/* net/ipv6/xfrm6_tunnel.c 44 */;
	void __exit cocci_id/* net/ipv6/xfrm6_tunnel.c 386 */;
	int __init cocci_id/* net/ipv6/xfrm6_tunnel.c 351 */;
	struct xfrm6_tunnel_net cocci_id/* net/ipv6/xfrm6_tunnel.c 348 */;
	struct pernet_operations cocci_id/* net/ipv6/xfrm6_tunnel.c 344 */;
	unsigned int cocci_id/* net/ipv6/xfrm6_tunnel.c 332 */;
	void __net_exit cocci_id/* net/ipv6/xfrm6_tunnel.c 329 */;
	int __net_init cocci_id/* net/ipv6/xfrm6_tunnel.c 315 */;
	struct xfrm6_tunnel cocci_id/* net/ipv6/xfrm6_tunnel.c 309 */;
	const struct xfrm_type cocci_id/* net/ipv6/xfrm6_tunnel.c 293 */;
	struct xfrm_state *cocci_id/* net/ipv6/xfrm6_tunnel.c 286 */;
	struct ipv6hdr cocci_id/* net/ipv6/xfrm6_tunnel.c 281 */;
	struct xfrm6_tunnel_net {
		struct hlist_head spi_byaddr[XFRM6_TUNNEL_SPI_BYADDR_HSIZE];
		struct hlist_head spi_byspi[XFRM6_TUNNEL_SPI_BYSPI_HSIZE];
		u32 spi;
	} cocci_id/* net/ipv6/xfrm6_tunnel.c 28 */;
	u8 cocci_id/* net/ipv6/xfrm6_tunnel.c 233 */;
	struct sk_buff *cocci_id/* net/ipv6/xfrm6_tunnel.c 232 */;
	struct inet6_skb_parm *cocci_id/* net/ipv6/xfrm6_tunnel.c 232 */;
	const struct ipv6hdr *cocci_id/* net/ipv6/xfrm6_tunnel.c 225 */;
	struct hlist_node *cocci_id/* net/ipv6/xfrm6_tunnel.c 191 */;
	struct xfrm6_tunnel_spi cocci_id/* net/ipv6/xfrm6_tunnel.c 184 */;
	struct rcu_head *cocci_id/* net/ipv6/xfrm6_tunnel.c 181 */;
	void cocci_id/* net/ipv6/xfrm6_tunnel.c 181 */;
	__be32 cocci_id/* net/ipv6/xfrm6_tunnel.c 163 */;
	int cocci_id/* net/ipv6/xfrm6_tunnel.c 122 */;
	struct xfrm6_tunnel_spi *cocci_id/* net/ipv6/xfrm6_tunnel.c 121 */;
	struct xfrm6_tunnel_net *cocci_id/* net/ipv6/xfrm6_tunnel.c 119 */;
	u32 cocci_id/* net/ipv6/xfrm6_tunnel.c 117 */;
	xfrm_address_t *cocci_id/* net/ipv6/xfrm6_tunnel.c 117 */;
	struct net *cocci_id/* net/ipv6/xfrm6_tunnel.c 117 */;
}
