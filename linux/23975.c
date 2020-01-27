cocci_test_suite() {
	struct igmpv3_query cocci_id/* net/ipv4/igmp.c 984 */;
	struct igmpv3_query *cocci_id/* net/ipv4/igmp.c 937 */;
	struct igmphdr *cocci_id/* net/ipv4/igmp.c 936 */;
	bool cocci_id/* net/ipv4/igmp.c 933 */;
	struct timer_list *cocci_id/* net/ipv4/igmp.c 796 */;
	u8 *cocci_id/* net/ipv4/igmp.c 781 */;
	struct iphdr cocci_id/* net/ipv4/igmp.c 770 */;
	struct flowi4 cocci_id/* net/ipv4/igmp.c 734 */;
	struct rtable *cocci_id/* net/ipv4/igmp.c 730 */;
	struct iphdr *cocci_id/* net/ipv4/igmp.c 728 */;
	struct ip_sf_list **cocci_id/* net/ipv4/igmp.c 626 */;
	struct igmpv3_grec cocci_id/* net/ipv4/igmp.c 528 */;
	__be32 *cocci_id/* net/ipv4/igmp.c 505 */;
	struct ip_sf_list *cocci_id/* net/ipv4/igmp.c 466 */;
	struct igmpv3_grec *cocci_id/* net/ipv4/igmp.c 465 */;
	struct igmpv3_report *cocci_id/* net/ipv4/igmp.c 464 */;
	struct net_device *cocci_id/* net/ipv4/igmp.c 462 */;
	struct sk_buff *cocci_id/* net/ipv4/igmp.c 459 */;
	struct igmpv3_grec **cocci_id/* net/ipv4/igmp.c 435 */;
	const int cocci_id/* net/ipv4/igmp.c 422 */;
	const struct in_ifaddr *cocci_id/* net/ipv4/igmp.c 335 */;
	const struct flowi4 *cocci_id/* net/ipv4/igmp.c 332 */;
	int __init cocci_id/* net/ipv4/igmp.c 3069 */;
	struct notifier_block cocci_id/* net/ipv4/igmp.c 3065 */;
	struct notifier_block *cocci_id/* net/ipv4/igmp.c 3047 */;
	struct pernet_operations cocci_id/* net/ipv4/igmp.c 3041 */;
	void __net_exit cocci_id/* net/ipv4/igmp.c 3034 */;
	struct igmp_mcf_iter_state cocci_id/* net/ipv4/igmp.c 3013 */;
	struct igmp_mc_iter_state cocci_id/* net/ipv4/igmp.c 3009 */;
	struct proc_dir_entry *cocci_id/* net/ipv4/igmp.c 3005 */;
	int __net_init cocci_id/* net/ipv4/igmp.c 3003 */;
	struct igmp_mcf_iter_state *cocci_id/* net/ipv4/igmp.c 2884 */;
	struct igmp_mcf_iter_state {
		struct seq_net_private p;
		struct net_device *dev;
		struct in_device *idev;
		struct ip_mc_list *im;
	} cocci_id/* net/ipv4/igmp.c 2870 */;
	const struct seq_operations cocci_id/* net/ipv4/igmp.c 2863 */;
	long cocci_id/* net/ipv4/igmp.c 2837 */;
	char *cocci_id/* net/ipv4/igmp.c 2836 */;
	loff_t *cocci_id/* net/ipv4/igmp.c 2807 */;
	void *cocci_id/* net/ipv4/igmp.c 2807 */;
	loff_t cocci_id/* net/ipv4/igmp.c 2791 */;
	struct igmp_mc_iter_state *cocci_id/* net/ipv4/igmp.c 2754 */;
	struct seq_file *cocci_id/* net/ipv4/igmp.c 2750 */;
	struct igmp_mc_iter_state {
		struct seq_net_private p;
		struct net_device *dev;
		struct in_device *in_dev;
	} cocci_id/* net/ipv4/igmp.c 2742 */;
	u32 cocci_id/* net/ipv4/igmp.c 2707 */;
	u8 cocci_id/* net/ipv4/igmp.c 2698 */;
	struct sockaddr_storage cocci_id/* net/ipv4/igmp.c 2607 */;
	struct ip_sf_socklist *cocci_id/* net/ipv4/igmp.c 2577 */;
	struct sockaddr_in *cocci_id/* net/ipv4/igmp.c 2573 */;
	struct group_filter __user *cocci_id/* net/ipv4/igmp.c 2570 */;
	int __user *cocci_id/* net/ipv4/igmp.c 2570 */;
	struct group_filter *cocci_id/* net/ipv4/igmp.c 2569 */;
	struct ip_mreqn cocci_id/* net/ipv4/igmp.c 2515 */;
	struct ip_msfilter __user *cocci_id/* net/ipv4/igmp.c 2512 */;
	struct ip_msfilter *cocci_id/* net/ipv4/igmp.c 2511 */;
	struct ip_mreq_source *cocci_id/* net/ipv4/igmp.c 2290 */;
	unsigned long cocci_id/* net/ipv4/igmp.c 228 */;
	struct ip_mc_socklist __rcu **cocci_id/* net/ipv4/igmp.c 2246 */;
	struct inet_sock *cocci_id/* net/ipv4/igmp.c 2162 */;
	struct ip_mc_socklist *cocci_id/* net/ipv4/igmp.c 2160 */;
	struct sock *cocci_id/* net/ipv4/igmp.c 2156 */;
	struct ip_mreqn *cocci_id/* net/ipv4/igmp.c 2156 */;
	struct ip_mc_list __rcu **cocci_id/* net/ipv4/igmp.c 1664 */;
	int cocci_id/* net/ipv4/igmp.c 166 */(struct in_device *in_dev,
					      __be32 *pmca, int sfmode,
					      int sfcount, __be32 *psfsrc,
					      int delta);
	void cocci_id/* net/ipv4/igmp.c 165 */(struct ip_mc_list *pmc);
	int cocci_id/* net/ipv4/igmp.c 162 */(struct ip_mc_list *pmc);
	void cocci_id/* net/ipv4/igmp.c 161 */(struct in_device *in_dev);
	void cocci_id/* net/ipv4/igmp.c 160 */(struct in_device *in_dev,
					       struct ip_mc_list *im);
	void cocci_id/* net/ipv4/igmp.c 158 */(struct in_device *in_dev,
					       struct ip_mc_list *im,
					       gfp_t gfp);
	__sum16 cocci_id/* net/ipv4/igmp.c 1566 */;
	struct igmpv3_report cocci_id/* net/ipv4/igmp.c 1519 */;
	const struct iphdr *cocci_id/* net/ipv4/igmp.c 1484 */;
	struct ip_mc_list *cocci_id/* net/ipv4/igmp.c 1425 */;
	gfp_t cocci_id/* net/ipv4/igmp.c 1423 */;
	unsigned int cocci_id/* net/ipv4/igmp.c 1423 */;
	__be32 cocci_id/* net/ipv4/igmp.c 1422 */;
	struct in_device *cocci_id/* net/ipv4/igmp.c 1422 */;
	void cocci_id/* net/ipv4/igmp.c 1422 */;
	const struct ip_mc_list *cocci_id/* net/ipv4/igmp.c 1367 */;
	int cocci_id/* net/ipv4/igmp.c 1283 */;
	struct net *cocci_id/* net/ipv4/igmp.c 1282 */;
	char cocci_id/* net/ipv4/igmp.c 1133 */[MAX_ADDR_LEN];
	struct igmphdr cocci_id/* net/ipv4/igmp.c 1080 */;
}
