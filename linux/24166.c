cocci_test_suite() {
	void cocci_id/* net/ipv6/ip6mr.c 96 */(struct timer_list *t);
	void cocci_id/* net/ipv6/ip6mr.c 95 */(struct mr_table *mrt,
					       int flags);
	struct in6_addr *cocci_id/* net/ipv6/ip6mr.c 947 */;
	struct mfc6_cache_cmp_arg cocci_id/* net/ipv6/ip6mr.c 937 */;
	const struct in6_addr *cocci_id/* net/ipv6/ip6mr.c 934 */;
	int cocci_id/* net/ipv6/ip6mr.c 93 */(struct sk_buff *skb,
					      struct netlink_callback *cb);
	void cocci_id/* net/ipv6/ip6mr.c 92 */(struct mr_table *mrt,
					       struct sk_buff *pkt);
	void cocci_id/* net/ipv6/ip6mr.c 90 */(struct mr_table *mrt,
					       struct mfc6_cache *mfc,
					       int cmd);
	int cocci_id/* net/ipv6/ip6mr.c 88 */(struct mr_table *mrt,
					      struct sk_buff *pkt,
					      mifi_t mifi, int assert);
	struct inet6_dev *cocci_id/* net/ipv6/ip6mr.c 864 */;
	struct mif6ctl *cocci_id/* net/ipv6/ip6mr.c 859 */;
	void cocci_id/* net/ipv6/ip6mr.c 85 */(struct net *net,
					       struct mr_table *mrt,
					       struct net_device *dev,
					       struct sk_buff *skb,
					       struct mfc6_cache *cache);
	unsigned char *cocci_id/* net/ipv6/ip6mr.c 837 */;
	void cocci_id/* net/ipv6/ip6mr.c 83 */(struct mr_table *mrt);
	struct mr_table *cocci_id/* net/ipv6/ip6mr.c 82 */(struct net *net,
							   u32 id);
	struct timer_list *cocci_id/* net/ipv6/ip6mr.c 818 */;
	struct kmem_cache *cocci_id/* net/ipv6/ip6mr.c 80 */;
	struct mr_mfc cocci_id/* net/ipv6/ip6mr.c 754 */;
	struct rcu_head *cocci_id/* net/ipv6/ip6mr.c 752 */;
	struct list_head *cocci_id/* net/ipv6/ip6mr.c 694 */;
	enum fib_event_type cocci_id/* net/ipv6/ip6mr.c 685 */;
	struct net *cocci_id/* net/ipv6/ip6mr.c 684 */;
	mifi_t cocci_id/* net/ipv6/ip6mr.c 677 */;
	struct vif_device *cocci_id/* net/ipv6/ip6mr.c 676 */;
	char cocci_id/* net/ipv6/ip6mr.c 644 */[IFNAMSIZ];
	const struct net_device_ops cocci_id/* net/ipv6/ip6mr.c 626 */;
	const struct net_device *cocci_id/* net/ipv6/ip6mr.c 621 */;
	netdev_tx_t cocci_id/* net/ipv6/ip6mr.c 590 */;
	const struct inet6_protocol cocci_id/* net/ipv6/ip6mr.c 584 */;
	struct ip6mr_result {
		struct mr_table *mrt;
	} cocci_id/* net/ipv6/ip6mr.c 57 */;
	struct ip6mr_rule {
		struct fib_rule common;
	} cocci_id/* net/ipv6/ip6mr.c 53 */;
	struct pimreghdr *cocci_id/* net/ipv6/ip6mr.c 521 */;
	const struct mr_mfc_iter *cocci_id/* net/ipv6/ip6mr.c 478 */;
	const struct mfc6_cache *cocci_id/* net/ipv6/ip6mr.c 477 */;
	const struct seq_operations cocci_id/* net/ipv6/ip6mr.c 448 */;
	const char *cocci_id/* net/ipv6/ip6mr.c 436 */;
	const struct vif_device *cocci_id/* net/ipv6/ip6mr.c 435 */;
	struct mr_vif_iter *cocci_id/* net/ipv6/ip6mr.c 428 */;
	struct seq_file *cocci_id/* net/ipv6/ip6mr.c 426 */;
	loff_t *cocci_id/* net/ipv6/ip6mr.c 403 */;
	struct mr_table_ops cocci_id/* net/ipv6/ip6mr.c 372 */;
	const struct rhashtable_params cocci_id/* net/ipv6/ip6mr.c 350 */;
	const struct mfc6_cache_cmp_arg *cocci_id/* net/ipv6/ip6mr.c 343 */;
	const void *cocci_id/* net/ipv6/ip6mr.c 341 */;
	struct rhashtable_compare_arg *cocci_id/* net/ipv6/ip6mr.c 340 */;
	const struct fib_rule *cocci_id/* net/ipv6/ip6mr.c 279 */;
	struct fib_dump_filter cocci_id/* net/ipv6/ip6mr.c 2489 */;
	const struct nlmsghdr *cocci_id/* net/ipv6/ip6mr.c 2488 */;
	struct netlink_callback *cocci_id/* net/ipv6/ip6mr.c 2486 */;
	struct rtgenmsg cocci_id/* net/ipv6/ip6mr.c 2456 */;
	struct mrt6msg cocci_id/* net/ipv6/ip6mr.c 2448 */;
	struct nlattr *cocci_id/* net/ipv6/ip6mr.c 2445 */;
	struct rtgenmsg *cocci_id/* net/ipv6/ip6mr.c 2442 */;
	struct rta_mfc_stats cocci_id/* net/ipv6/ip6mr.c 2390 */;
	struct rtnexthop cocci_id/* net/ipv6/ip6mr.c 2388 */;
	struct in6_addr cocci_id/* net/ipv6/ip6mr.c 2380 */;
	struct rtmsg cocci_id/* net/ipv6/ip6mr.c 2378 */;
	size_t cocci_id/* net/ipv6/ip6mr.c 2377 */;
	struct mfc6_cache *cocci_id/* net/ipv6/ip6mr.c 2371 */;
	u32 cocci_id/* net/ipv6/ip6mr.c 2368 */;
	struct mr_mfc *cocci_id/* net/ipv6/ip6mr.c 2368 */;
	struct sk_buff *cocci_id/* net/ipv6/ip6mr.c 2367 */;
	struct mr_table *cocci_id/* net/ipv6/ip6mr.c 2367 */;
	int cocci_id/* net/ipv6/ip6mr.c 2367 */;
	struct rtmsg *cocci_id/* net/ipv6/ip6mr.c 2328 */;
	struct rt6_info *cocci_id/* net/ipv6/ip6mr.c 2259 */;
	struct fib_rules_ops *cocci_id/* net/ipv6/ip6mr.c 225 */;
	struct flowi6 cocci_id/* net/ipv6/ip6mr.c 2191 */;
	struct net_device *cocci_id/* net/ipv6/ip6mr.c 2085 */;
	struct dst_entry *cocci_id/* net/ipv6/ip6mr.c 2005 */;
	struct ipv6hdr *cocci_id/* net/ipv6/ip6mr.c 2002 */;
	struct nlattr **cocci_id/* net/ipv6/ip6mr.c 195 */;
	struct fib_rule_hdr *cocci_id/* net/ipv6/ip6mr.c 194 */;
	struct compat_sioc_mif_req6 cocci_id/* net/ipv6/ip6mr.c 1930 */;
	struct compat_sioc_sg_req6 cocci_id/* net/ipv6/ip6mr.c 1929 */;
	void __user *cocci_id/* net/ipv6/ip6mr.c 1927 */;
	struct compat_sioc_mif_req6 {
		mifi_t mifi;
		compat_ulong_t icount;
		compat_ulong_t ocount;
		compat_ulong_t ibytes;
		compat_ulong_t obytes;
	} cocci_id/* net/ipv6/ip6mr.c 1919 */;
	struct compat_sioc_sg_req6 {
		struct sockaddr_in6 src;
		struct sockaddr_in6 grp;
		compat_ulong_t pktcnt;
		compat_ulong_t bytecnt;
		compat_ulong_t wrong_if;
	} cocci_id/* net/ipv6/ip6mr.c 1911 */;
	struct sioc_mif_req6 cocci_id/* net/ipv6/ip6mr.c 1855 */;
	struct sioc_sg_req6 cocci_id/* net/ipv6/ip6mr.c 1854 */;
	const struct nla_policy cocci_id/* net/ipv6/ip6mr.c 183 */[FRA_MAX + 1];
	int __user *cocci_id/* net/ipv6/ip6mr.c 1803 */;
	struct sock *cocci_id/* net/ipv6/ip6mr.c 1802 */;
	char __user *cocci_id/* net/ipv6/ip6mr.c 1802 */;
	u32 __user *cocci_id/* net/ipv6/ip6mr.c 1770 */;
	struct mf6cctl cocci_id/* net/ipv6/ip6mr.c 1634 */;
	struct mif6ctl cocci_id/* net/ipv6/ip6mr.c 1633 */;
	unsigned int cocci_id/* net/ipv6/ip6mr.c 1630 */;
	struct ip6mr_result *cocci_id/* net/ipv6/ip6mr.c 154 */;
	struct fib_lookup_arg *cocci_id/* net/ipv6/ip6mr.c 152 */;
	struct flowi *cocci_id/* net/ipv6/ip6mr.c 151 */;
	struct fib_rule *cocci_id/* net/ipv6/ip6mr.c 151 */;
	unsigned char cocci_id/* net/ipv6/ip6mr.c 1407 */[MAXMIFS];
	struct mf6cctl *cocci_id/* net/ipv6/ip6mr.c 1405 */;
	void cocci_id/* net/ipv6/ip6mr.c 1393 */;
	struct mfc6_cache cocci_id/* net/ipv6/ip6mr.c 1356 */;
	int __init cocci_id/* net/ipv6/ip6mr.c 1351 */;
	struct fib_lookup_arg cocci_id/* net/ipv6/ip6mr.c 135 */;
	struct pernet_operations cocci_id/* net/ipv6/ip6mr.c 1346 */;
	struct ip6mr_result cocci_id/* net/ipv6/ip6mr.c 134 */;
	void __net_exit cocci_id/* net/ipv6/ip6mr.c 1336 */;
	struct mr_mfc_iter cocci_id/* net/ipv6/ip6mr.c 1319 */;
	struct mr_vif_iter cocci_id/* net/ipv6/ip6mr.c 1316 */;
	struct mr_table **cocci_id/* net/ipv6/ip6mr.c 131 */;
	int __net_init cocci_id/* net/ipv6/ip6mr.c 1301 */;
	struct flowi6 *cocci_id/* net/ipv6/ip6mr.c 130 */;
	struct fib_notifier_ops *cocci_id/* net/ipv6/ip6mr.c 1281 */;
	const struct fib_notifier_ops cocci_id/* net/ipv6/ip6mr.c 1272 */;
	struct notifier_block cocci_id/* net/ipv6/ip6mr.c 1268 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/ip6mr.c 1262 */;
	void *cocci_id/* net/ipv6/ip6mr.c 1232 */;
	unsigned long cocci_id/* net/ipv6/ip6mr.c 1232 */;
	struct notifier_block *cocci_id/* net/ipv6/ip6mr.c 1231 */;
	bool cocci_id/* net/ipv6/ip6mr.c 1136 */;
	struct mr_table cocci_id/* net/ipv6/ip6mr.c 109 */;
	struct ipv6hdr cocci_id/* net/ipv6/ip6mr.c 1051 */;
	struct mrt6msg *cocci_id/* net/ipv6/ip6mr.c 1042 */;
	struct nlmsgerr *cocci_id/* net/ipv6/ip6mr.c 1023 */;
	struct nlmsgerr cocci_id/* net/ipv6/ip6mr.c 1021 */;
	u8 *cocci_id/* net/ipv6/ip6mr.c 1018 */;
	struct nlmsghdr *cocci_id/* net/ipv6/ip6mr.c 1013 */;
}
