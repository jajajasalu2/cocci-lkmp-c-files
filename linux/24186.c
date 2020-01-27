cocci_test_suite() {
	struct ifmcaddr6 *cocci_id/* net/ipv6/mcast.c 947 */;
	const struct in6_addr *cocci_id/* net/ipv6/mcast.c 945 */;
	struct inet6_dev *cocci_id/* net/ipv6/mcast.c 945 */;
	int cocci_id/* net/ipv6/mcast.c 945 */;
	int cocci_id/* net/ipv6/mcast.c 94 */(struct net_device *dev,
					      const struct in6_addr *addr,
					      unsigned int mode);
	int cocci_id/* net/ipv6/mcast.c 92 */(struct sock *sk,
					      struct ipv6_mc_socklist *iml,
					      struct inet6_dev *idev);
	int cocci_id/* net/ipv6/mcast.c 89 */(struct inet6_dev *idev,
					      const struct in6_addr *pmca,
					      int sfmode, int sfcount,
					      const struct in6_addr *psfsrc,
					      int delta);
	unsigned int cocci_id/* net/ipv6/mcast.c 884 */;
	struct net_device *cocci_id/* net/ipv6/mcast.c 883 */;
	void cocci_id/* net/ipv6/mcast.c 85 */(struct ifmcaddr6 *pmc);
	int cocci_id/* net/ipv6/mcast.c 83 */(struct ifmcaddr6 *pmc);
	bool cocci_id/* net/ipv6/mcast.c 82 */(const struct inet6_dev *idev);
	void cocci_id/* net/ipv6/mcast.c 81 */(struct inet6_dev *idev);
	void cocci_id/* net/ipv6/mcast.c 79 */(struct inet6_dev *idev,
					       struct ifmcaddr6 *pmc);
	void cocci_id/* net/ipv6/mcast.c 74 */(struct timer_list *t);
	void cocci_id/* net/ipv6/mcast.c 72 */(struct ifmcaddr6 *ma);
	struct mld2_grec cocci_id/* net/ipv6/mcast.c 67 */;
	char cocci_id/* net/ipv6/mcast.c 662 */[MAX_ADDR_LEN];
	struct mld2_report cocci_id/* net/ipv6/mcast.c 66 */;
	struct mld2_query cocci_id/* net/ipv6/mcast.c 65 */;
	int cocci_id/* net/ipv6/mcast.c 64 */[]__attribute__((__unused__));
	struct ip6_sf_socklist *cocci_id/* net/ipv6/mcast.c 625 */;
	bool cocci_id/* net/ipv6/mcast.c 620 */;
	struct sockaddr_storage cocci_id/* net/ipv6/mcast.c 604 */;
	struct sockaddr_in6 *cocci_id/* net/ipv6/mcast.c 560 */;
	struct group_filter __user *cocci_id/* net/ipv6/mcast.c 550 */;
	int __user *cocci_id/* net/ipv6/mcast.c 550 */;
	struct group_filter *cocci_id/* net/ipv6/mcast.c 549 */;
	struct group_source_req *cocci_id/* net/ipv6/mcast.c 329 */;
	int __init cocci_id/* net/ipv6/mcast.c 3005 */;
	struct pernet_operations cocci_id/* net/ipv6/mcast.c 3000 */;
	void __net_exit cocci_id/* net/ipv6/mcast.c 2993 */;
	int __net_init cocci_id/* net/ipv6/mcast.c 2957 */;
	struct igmp6_mcf_iter_state cocci_id/* net/ipv6/mcast.c 2930 */;
	struct net *cocci_id/* net/ipv6/mcast.c 293 */;
	struct igmp6_mc_iter_state cocci_id/* net/ipv6/mcast.c 2926 */;
	struct ipv6_mc_socklist *cocci_id/* net/ipv6/mcast.c 292 */;
	struct ipv6_pinfo *cocci_id/* net/ipv6/mcast.c 291 */;
	struct sock *cocci_id/* net/ipv6/mcast.c 289 */;
	void cocci_id/* net/ipv6/mcast.c 289 */;
	struct igmp6_mcf_iter_state *cocci_id/* net/ipv6/mcast.c 2792 */;
	struct igmp6_mcf_iter_state {
		struct seq_net_private p;
		struct net_device *dev;
		struct inet6_dev *idev;
		struct ifmcaddr6 *im;
	} cocci_id/* net/ipv6/mcast.c 2779 */;
	const struct seq_operations cocci_id/* net/ipv6/mcast.c 2772 */;
	loff_t *cocci_id/* net/ipv6/mcast.c 2736 */;
	void *cocci_id/* net/ipv6/mcast.c 2736 */;
	loff_t cocci_id/* net/ipv6/mcast.c 2720 */;
	struct igmp6_mc_iter_state *cocci_id/* net/ipv6/mcast.c 2677 */;
	struct seq_file *cocci_id/* net/ipv6/mcast.c 2674 */;
	struct igmp6_mc_iter_state {
		struct seq_net_private p;
		struct net_device *dev;
		struct inet6_dev *idev;
	} cocci_id/* net/ipv6/mcast.c 2666 */;
	struct notifier_block cocci_id/* net/ipv6/mcast.c 2661 */;
	struct notifier_block *cocci_id/* net/ipv6/mcast.c 2642 */;
	struct timer_list *cocci_id/* net/ipv6/mcast.c 2495 */;
	struct ipv6_mc_socklist __rcu **cocci_id/* net/ipv6/mcast.c 221 */;
	struct mld_msg cocci_id/* net/ipv6/mcast.c 2038 */;
	struct dst_entry *cocci_id/* net/ipv6/mcast.c 1997 */;
	struct flowi6 cocci_id/* net/ipv6/mcast.c 1996 */;
	u8 cocci_id/* net/ipv6/mcast.c 1993 */[8];
	struct ip6_sf_list **cocci_id/* net/ipv6/mcast.c 1890 */;
	struct in6_addr *cocci_id/* net/ipv6/mcast.c 1774 */;
	struct ip6_sf_list *cocci_id/* net/ipv6/mcast.c 1737 */;
	struct mld2_grec *cocci_id/* net/ipv6/mcast.c 1736 */;
	struct mld2_report *cocci_id/* net/ipv6/mcast.c 1735 */;
	struct sk_buff *cocci_id/* net/ipv6/mcast.c 1730 */;
	struct mld2_grec **cocci_id/* net/ipv6/mcast.c 1707 */;
	struct rt6_info *cocci_id/* net/ipv6/mcast.c 166 */;
	struct ipv6hdr *cocci_id/* net/ipv6/mcast.c 1570 */;
	struct ipv6_mc_socklist cocci_id/* net/ipv6/mcast.c 157 */;
	struct icmp6hdr cocci_id/* net/ipv6/mcast.c 1389 */;
	struct ipv6hdr cocci_id/* net/ipv6/mcast.c 1352 */;
	struct in6_addr cocci_id/* net/ipv6/mcast.c 1348 */;
	struct mld_msg *cocci_id/* net/ipv6/mcast.c 1343 */;
	unsigned long cocci_id/* net/ipv6/mcast.c 1341 */;
	struct mld2_query *cocci_id/* net/ipv6/mcast.c 1338 */;
	unsigned long *cocci_id/* net/ipv6/mcast.c 1276 */;
	const struct mld2_query *cocci_id/* net/ipv6/mcast.c 1241 */;
	const int cocci_id/* net/ipv6/mcast.c 1227 */;
	const struct inet6_dev *cocci_id/* net/ipv6/mcast.c 1165 */;
}
