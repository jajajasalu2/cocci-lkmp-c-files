cocci_test_suite() {
	__be32 cocci_id/* net/ipv6/ip6_gre.c 965 */;
	__u32 cocci_id/* net/ipv6/ip6_gre.c 924 */;
	struct flowi6 cocci_id/* net/ipv6/ip6_gre.c 921 */;
	struct net_device_stats *cocci_id/* net/ipv6/ip6_gre.c 917 */;
	struct dst_entry *cocci_id/* net/ipv6/ip6_gre.c 916 */;
	void cocci_id/* net/ipv6/ip6_gre.c 80 */(struct ip6_tnl *t,
						 int set_mtu);
	void cocci_id/* net/ipv6/ip6_gre.c 78 */(struct ip6gre_net *ign,
						 struct ip6_tnl *t);
	void cocci_id/* net/ipv6/ip6_gre.c 77 */(struct net_device *dev);
	int cocci_id/* net/ipv6/ip6_gre.c 76 */(struct net_device *dev);
	struct rtnl_link_ops cocci_id/* net/ipv6/ip6_gre.c 75 */;
	const struct ip_tunnel_key *cocci_id/* net/ipv6/ip6_gre.c 729 */;
	struct ip_tunnel_info *cocci_id/* net/ipv6/ip6_gre.c 728 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ip6_gre.c 717 */;
	struct ip6_tnl *cocci_id/* net/ipv6/ip6_gre.c 710 */;
	__be16 cocci_id/* net/ipv6/ip6_gre.c 708 */;
	__u32 *cocci_id/* net/ipv6/ip6_gre.c 708 */;
	struct flowi6 *cocci_id/* net/ipv6/ip6_gre.c 707 */;
	int cocci_id/* net/ipv6/ip6_gre.c 707 */;
	__u8 cocci_id/* net/ipv6/ip6_gre.c 706 */;
	struct net_device *cocci_id/* net/ipv6/ip6_gre.c 706 */;
	netdev_tx_t cocci_id/* net/ipv6/ip6_gre.c 705 */;
	struct sk_buff *cocci_id/* net/ipv6/ip6_gre.c 705 */;
	__u16 cocci_id/* net/ipv6/ip6_gre.c 665 */;
	struct ip6gre_net {
		struct ip6_tnl __rcu *tunnels[4][IP6_GRE_HASH_SIZE];
		struct ip6_tnl __rcu *collect_md_tun;
		struct ip6_tnl __rcu *collect_md_tun_erspan;
		struct net_device *fb_tunnel_dev;
	} cocci_id/* net/ipv6/ip6_gre.c 65 */;
	const struct iphdr *cocci_id/* net/ipv6/ip6_gre.c 637 */;
	int *cocci_id/* net/ipv6/ip6_gre.c 635 */;
	__u8 *cocci_id/* net/ipv6/ip6_gre.c 634 */;
	bool cocci_id/* net/ipv6/ip6_gre.c 626 */;
	struct tnl_ptk_info cocci_id/* net/ipv6/ip6_gre.c 598 */;
	__be64 cocci_id/* net/ipv6/ip6_gre.c 555 */;
	unsigned char *cocci_id/* net/ipv6/ip6_gre.c 554 */;
	struct metadata_dst *cocci_id/* net/ipv6/ip6_gre.c 552 */;
	struct erspan_metadata *cocci_id/* net/ipv6/ip6_gre.c 551 */;
	u8 cocci_id/* net/ipv6/ip6_gre.c 530 */;
	struct erspan_md2 *cocci_id/* net/ipv6/ip6_gre.c 528 */;
	const struct ipv6hdr *cocci_id/* net/ipv6/ip6_gre.c 527 */;
	struct erspan_base_hdr *cocci_id/* net/ipv6/ip6_gre.c 526 */;
	struct tnl_ptk_info *cocci_id/* net/ipv6/ip6_gre.c 523 */;
	const struct tnl_ptk_info *cocci_id/* net/ipv6/ip6_gre.c 489 */;
	struct ipv6_tlv_tnl_enc_lim *cocci_id/* net/ipv6/ip6_gre.c 440 */;
	struct inet6_skb_parm *cocci_id/* net/ipv6/ip6_gre.c 421 */;
	char cocci_id/* net/ipv6/ip6_gre.c 350 */[IFNAMSIZ];
	const struct ip6_tnl *cocci_id/* net/ipv6/ip6_gre.c 292 */;
	unsigned int cocci_id/* net/ipv6/ip6_gre.c 253 */;
	const struct __ip6_tnl_parm *cocci_id/* net/ipv6/ip6_gre.c 249 */;
	struct ip6gre_net *cocci_id/* net/ipv6/ip6_gre.c 248 */;
	struct ip6_tnl __rcu **cocci_id/* net/ipv6/ip6_gre.c 248 */;
	void __exit cocci_id/* net/ipv6/ip6_gre.c 2360 */;
	int __init cocci_id/* net/ipv6/ip6_gre.c 2318 */;
	struct ip6_tnl cocci_id/* net/ipv6/ip6_gre.c 2304 */;
	struct __ip6_tnl_parm cocci_id/* net/ipv6/ip6_gre.c 2255 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/ip6_gre.c 2252 */;
	struct nlattr *cocci_id/* net/ipv6/ip6_gre.c 2250 */[];
	struct net *cocci_id/* net/ipv6/ip6_gre.c 2206 */;
	const struct nla_policy cocci_id/* net/ipv6/ip6_gre.c 2167 */[IFLA_GRE_MAX + 1];
	const struct net_device *cocci_id/* net/ipv6/ip6_gre.c 2106 */;
	struct in6_addr cocci_id/* net/ipv6/ip6_gre.c 2078 */;
	size_t cocci_id/* net/ipv6/ip6_gre.c 2064 */;
	struct list_head *cocci_id/* net/ipv6/ip6_gre.c 2055 */;
	struct ip_tunnel_encap cocci_id/* net/ipv6/ip6_gre.c 2009 */;
	struct ip_tunnel_encap *cocci_id/* net/ipv6/ip6_gre.c 1904 */;
	const struct net_device_ops cocci_id/* net/ipv6/ip6_gre.c 1876 */;
	struct pcpu_sw_netstats cocci_id/* net/ipv6/ip6_gre.c 1844 */;
	struct ipv6hdr cocci_id/* net/ipv6/ip6_gre.c 1827 */;
	struct __ip6_tnl_parm *cocci_id/* net/ipv6/ip6_gre.c 1725 */;
	void cocci_id/* net/ipv6/ip6_gre.c 1724 */;
	u16 cocci_id/* net/ipv6/ip6_gre.c 1707 */;
	struct ip6gre_net cocci_id/* net/ipv6/ip6_gre.c 1612 */;
	struct pernet_operations cocci_id/* net/ipv6/ip6_gre.c 1608 */;
	void __net_exit cocci_id/* net/ipv6/ip6_gre.c 1596 */;
	int __net_init cocci_id/* net/ipv6/ip6_gre.c 1558 */;
	struct inet6_protocol cocci_id/* net/ipv6/ip6_gre.c 1520 */;
	const struct header_ops cocci_id/* net/ipv6/ip6_gre.c 1368 */;
	__be16 *cocci_id/* net/ipv6/ip6_gre.c 1339 */;
	const void *cocci_id/* net/ipv6/ip6_gre.c 1334 */;
	unsigned short cocci_id/* net/ipv6/ip6_gre.c 1334 */;
	struct ip6_tnl_parm2 cocci_id/* net/ipv6/ip6_gre.c 1226 */;
	struct ifreq *cocci_id/* net/ipv6/ip6_gre.c 1223 */;
	struct ip6_tnl_parm2 *cocci_id/* net/ipv6/ip6_gre.c 1204 */;
	const struct ip6_tnl_parm2 *cocci_id/* net/ipv6/ip6_gre.c 1188 */;
	struct rt6_info *cocci_id/* net/ipv6/ip6_gre.c 1112 */;
	u32 cocci_id/* net/ipv6/ip6_gre.c 101 */;
	const struct in6_addr *cocci_id/* net/ipv6/ip6_gre.c 101 */;
}