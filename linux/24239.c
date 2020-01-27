cocci_test_suite() {
	const struct pcpu_sw_netstats *cocci_id/* net/ipv6/ip6_tunnel.c 99 */;
	unsigned int cocci_id/* net/ipv6/ip6_tunnel.c 98 */;
	struct ipv6_opt_hdr *cocci_id/* net/ipv6/ip6_tunnel.c 950 */;
	struct ipv6_tel_txoption cocci_id/* net/ipv6/ip6_tunnel.c 942 */;
	__u8 cocci_id/* net/ipv6/ip6_tunnel.c 940 */;
	struct ipv6_tel_txoption *cocci_id/* net/ipv6/ip6_tunnel.c 940 */;
	void cocci_id/* net/ipv6/ip6_tunnel.c 940 */;
	struct pcpu_sw_netstats cocci_id/* net/ipv6/ip6_tunnel.c 94 */;
	struct ipv6_tel_txoption {
		struct ipv6_txoptions ops;
		__u8 dst_opt[8];
	} cocci_id/* net/ipv6/ip6_tunnel.c 935 */;
	struct net_device_stats *cocci_id/* net/ipv6/ip6_tunnel.c 92 */;
	const struct tnl_ptk_info cocci_id/* net/ipv6/ip6_tunnel.c 873 */;
	struct dst_entry *cocci_id/* net/ipv6/ip6_tunnel.c 846 */;
	struct inet6_skb_parm cocci_id/* net/ipv6/ip6_tunnel.c 820 */;
	struct ip6_tnl_net {
		struct net_device *fb_tnl_dev;
		struct ip6_tnl __rcu *tnls_r_l[IP6_TUNNEL_HASH_SIZE];
		struct ip6_tnl __rcu *tnls_wc[1];
		struct ip6_tnl __rcu **tnls[2];
		struct ip6_tnl __rcu *collect_md_tun;
	} cocci_id/* net/ipv6/ip6_tunnel.c 82 */;
	struct rtnl_link_ops cocci_id/* net/ipv6/ip6_tunnel.c 79 */;
	void cocci_id/* net/ipv6/ip6_tunnel.c 78 */(struct net_device *dev);
	const struct ipv6hdr *cocci_id/* net/ipv6/ip6_tunnel.c 779 */;
	struct pcpu_sw_netstats *cocci_id/* net/ipv6/ip6_tunnel.c 778 */;
	bool cocci_id/* net/ipv6/ip6_tunnel.c 776 */;
	int (*cocci_id/* net/ipv6/ip6_tunnel.c 773 */)(const struct ip6_tnl *t,
						       const struct ipv6hdr *ipv6h,
						       struct sk_buff *skb);
	struct metadata_dst *cocci_id/* net/ipv6/ip6_tunnel.c 772 */;
	const struct tnl_ptk_info *cocci_id/* net/ipv6/ip6_tunnel.c 771 */;
	struct sk_buff *cocci_id/* net/ipv6/ip6_tunnel.c 770 */;
	struct ip6_tnl *cocci_id/* net/ipv6/ip6_tunnel.c 770 */;
	int cocci_id/* net/ipv6/ip6_tunnel.c 770 */;
	int cocci_id/* net/ipv6/ip6_tunnel.c 77 */(struct net_device *dev);
	u32 cocci_id/* net/ipv6/ip6_tunnel.c 70 */;
	const struct in6_addr *cocci_id/* net/ipv6/ip6_tunnel.c 70 */;
	const struct ip6_tnl *cocci_id/* net/ipv6/ip6_tunnel.c 695 */;
	struct iphdr cocci_id/* net/ipv6/ip6_tunnel.c 598 */;
	struct flowi4 cocci_id/* net/ipv6/ip6_tunnel.c 571 */;
	struct rtable *cocci_id/* net/ipv6/ip6_tunnel.c 570 */;
	const struct iphdr *cocci_id/* net/ipv6/ip6_tunnel.c 565 */;
	__u32 cocci_id/* net/ipv6/ip6_tunnel.c 564 */;
	u8 cocci_id/* net/ipv6/ip6_tunnel.c 562 */;
	__be32 cocci_id/* net/ipv6/ip6_tunnel.c 562 */;
	struct inet6_skb_parm *cocci_id/* net/ipv6/ip6_tunnel.c 561 */;
	struct ipv6_tlv_tnl_enc_lim *cocci_id/* net/ipv6/ip6_tunnel.c 499 */;
	__u16 cocci_id/* net/ipv6/ip6_tunnel.c 481 */;
	u8 *cocci_id/* net/ipv6/ip6_tunnel.c 470 */;
	__u32 *cocci_id/* net/ipv6/ip6_tunnel.c 470 */;
	int *cocci_id/* net/ipv6/ip6_tunnel.c 470 */;
	struct frag_hdr *cocci_id/* net/ipv6/ip6_tunnel.c 414 */;
	u16 cocci_id/* net/ipv6/ip6_tunnel.c 407 */;
	__u8 *cocci_id/* net/ipv6/ip6_tunnel.c 398 */;
	char cocci_id/* net/ipv6/ip6_tunnel.c 294 */[IFNAMSIZ];
	void __exit cocci_id/* net/ipv6/ip6_tunnel.c 2326 */;
	int __init cocci_id/* net/ipv6/ip6_tunnel.c 2284 */;
	struct ip6_tnl_net cocci_id/* net/ipv6/ip6_tunnel.c 2275 */;
	struct pernet_operations cocci_id/* net/ipv6/ip6_tunnel.c 2271 */;
	void __net_exit cocci_id/* net/ipv6/ip6_tunnel.c 2192 */;
	struct xfrm6_tunnel cocci_id/* net/ipv6/ip6_tunnel.c 2180 */;
	struct ip6_tnl cocci_id/* net/ipv6/ip6_tunnel.c 2169 */;
	const struct nla_policy cocci_id/* net/ipv6/ip6_tunnel.c 2148 */[IFLA_IPTUN_MAX + 1];
	const struct net_device *cocci_id/* net/ipv6/ip6_tunnel.c 2108 */;
	size_t cocci_id/* net/ipv6/ip6_tunnel.c 2074 */;
	struct list_head *cocci_id/* net/ipv6/ip6_tunnel.c 2065 */;
	struct ip_tunnel_encap cocci_id/* net/ipv6/ip6_tunnel.c 2040 */;
	struct __ip6_tnl_parm cocci_id/* net/ipv6/ip6_tunnel.c 2037 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/ip6_tunnel.c 2034 */;
	struct nlattr *cocci_id/* net/ipv6/ip6_tunnel.c 2032 */[];
	const struct __ip6_tnl_parm *cocci_id/* net/ipv6/ip6_tunnel.c 191 */;
	struct ip6_tnl __rcu **cocci_id/* net/ipv6/ip6_tunnel.c 190 */;
	struct ip6_tnl_net *cocci_id/* net/ipv6/ip6_tunnel.c 1898 */;
	struct net *cocci_id/* net/ipv6/ip6_tunnel.c 1897 */;
	int __net_init cocci_id/* net/ipv6/ip6_tunnel.c 1894 */;
	struct ipv6hdr cocci_id/* net/ipv6/ip6_tunnel.c 1846 */;
	struct in6_addr cocci_id/* net/ipv6/ip6_tunnel.c 1805 */;
	const struct net_device_ops cocci_id/* net/ipv6/ip6_tunnel.c 1773 */;
	struct ip_tunnel_encap *cocci_id/* net/ipv6/ip6_tunnel.c 1751 */;
	const struct ip6_tnl_encap_ops **cocci_id/* net/ipv6/ip6_tunnel.c 1726 */;
	const struct ip6_tnl_encap_ops *cocci_id/* net/ipv6/ip6_tunnel.c 1720 */;
	struct ip6_tnl_parm cocci_id/* net/ipv6/ip6_tunnel.c 1587 */;
	struct ifreq *cocci_id/* net/ipv6/ip6_tunnel.c 1584 */;
	struct ip6_tnl_parm *cocci_id/* net/ipv6/ip6_tunnel.c 1542 */;
	const struct ip6_tnl_parm *cocci_id/* net/ipv6/ip6_tunnel.c 1528 */;
	struct __ip6_tnl_parm *cocci_id/* net/ipv6/ip6_tunnel.c 1519 */;
	struct rt6_info *cocci_id/* net/ipv6/ip6_tunnel.c 1457 */;
	struct flowi6 *cocci_id/* net/ipv6/ip6_tunnel.c 1424 */;
	netdev_tx_t cocci_id/* net/ipv6/ip6_tunnel.c 1387 */;
	void *cocci_id/* net/ipv6/ip6_tunnel.c 1342 */;
	const struct ip_tunnel_key *cocci_id/* net/ipv6/ip6_tunnel.c 1250 */;
	struct ip_tunnel_info *cocci_id/* net/ipv6/ip6_tunnel.c 1249 */;
	struct flowi6 cocci_id/* net/ipv6/ip6_tunnel.c 1235 */;
	struct net_device *cocci_id/* net/ipv6/ip6_tunnel.c 1230 */;
	struct neighbour *cocci_id/* net/ipv6/ip6_tunnel.c 1062 */;
	struct in6_addr *cocci_id/* net/ipv6/ip6_tunnel.c 1061 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ip6_tunnel.c 1039 */;
}
