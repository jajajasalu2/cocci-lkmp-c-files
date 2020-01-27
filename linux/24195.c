cocci_test_suite() {
	struct fib6_nh_pcpu_arg cocci_id/* net/ipv6/ip6_fib.c 974 */;
	struct fib6_nh_pcpu_arg *cocci_id/* net/ipv6/ip6_fib.c 958 */;
	struct fib6_nh_pcpu_arg {
		struct fib6_info *from;
		const struct fib6_table *table;
	} cocci_id/* net/ipv6/ip6_fib.c 951 */;
	struct fib6_info **cocci_id/* net/ipv6/ip6_fib.c 945 */;
	struct fib6_info *cocci_id/* net/ipv6/ip6_fib.c 943 */;
	struct rt6_info *cocci_id/* net/ipv6/ip6_fib.c 932 */;
	struct rt6_info **cocci_id/* net/ipv6/ip6_fib.c 931 */;
	const struct fib6_table *cocci_id/* net/ipv6/ip6_fib.c 920 */;
	const struct fib6_info *cocci_id/* net/ipv6/ip6_fib.c 919 */;
	struct fib6_nh *cocci_id/* net/ipv6/ip6_fib.c 918 */;
	u8 *cocci_id/* net/ipv6/ip6_fib.c 726 */;
	struct rt6key *cocci_id/* net/ipv6/ip6_fib.c 713 */;
	void cocci_id/* net/ipv6/ip6_fib.c 71 */(struct timer_list *t);
	struct in6_addr *cocci_id/* net/ipv6/ip6_fib.c 706 */;
	struct dst_metrics *cocci_id/* net/ipv6/ip6_fib.c 683 */;
	int cocci_id/* net/ipv6/ip6_fib.c 62 */(struct fib6_walker *w);
	long cocci_id/* net/ipv6/ip6_fib.c 613 */;
	int cocci_id/* net/ipv6/ip6_fib.c 61 */(struct net *net,
						struct fib6_walker *w);
	struct rtmsg *cocci_id/* net/ipv6/ip6_fib.c 601 */;
	struct rtmsg cocci_id/* net/ipv6/ip6_fib.c 600 */;
	const struct nlmsghdr *cocci_id/* net/ipv6/ip6_fib.c 585 */;
	struct rt6_rtnl_dump_arg cocci_id/* net/ipv6/ip6_fib.c 583 */;
	struct fib6_node *cocci_id/* net/ipv6/ip6_fib.c 58 */(struct net *net,
							      struct fib6_table *table,
							      struct fib6_node *fn);
	struct fib6_info *cocci_id/* net/ipv6/ip6_fib.c 55 */(struct net *net,
							      struct fib6_table *table,
							      struct fib6_node *fn);
	struct sk_buff *cocci_id/* net/ipv6/ip6_fib.c 536 */;
	struct netlink_callback *cocci_id/* net/ipv6/ip6_fib.c 530 */;
	struct fib6_dump_arg cocci_id/* net/ipv6/ip6_fib.c 447 */;
	struct fib6_dump_arg *cocci_id/* net/ipv6/ip6_fib.c 409 */;
	struct fib6_dump_arg {
		struct net *net;
		struct notifier_block *nb;
		struct netlink_ext_ack *extack;
	} cocci_id/* net/ipv6/ip6_fib.c 403 */;
	struct fib6_cleaner {
		struct fib6_walker w;
		struct net *net;
		int (*func)(struct fib6_info *, void *arg);
		int sernum;
		void *arg;
		bool skip_notify;
	} cocci_id/* net/ipv6/ip6_fib.c 40 */;
	struct kmem_cache *cocci_id/* net/ipv6/ip6_fib.c 38 */;
	struct fib6_entry_notifier_info cocci_id/* net/ipv6/ip6_fib.c 365 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/ip6_fib.c 363 */;
	enum fib_event_type cocci_id/* net/ipv6/ip6_fib.c 361 */;
	struct notifier_block *cocci_id/* net/ipv6/ip6_fib.c 360 */;
	struct fib6_result *cocci_id/* net/ipv6/ip6_fib.c 330 */;
	struct flowi6 *cocci_id/* net/ipv6/ip6_fib.c 329 */;
	pol_lookup_t cocci_id/* net/ipv6/ip6_fib.c 313 */;
	const struct sk_buff *cocci_id/* net/ipv6/ip6_fib.c 312 */;
	struct dst_entry *cocci_id/* net/ipv6/ip6_fib.c 311 */;
	void __net_init cocci_id/* net/ipv6/ip6_fib.c 294 */;
	const struct seq_operations cocci_id/* net/ipv6/ip6_fib.c 2566 */;
	loff_t *cocci_id/* net/ipv6/ip6_fib.c 2491 */;
	struct seq_file *cocci_id/* net/ipv6/ip6_fib.c 2491 */;
	struct ipv6_route_iter *cocci_id/* net/ipv6/ip6_fib.c 2480 */;
	struct fib6_table cocci_id/* net/ipv6/ip6_fib.c 2477 */;
	const struct net_device *cocci_id/* net/ipv6/ip6_fib.c 2399 */;
	u32 cocci_id/* net/ipv6/ip6_fib.c 237 */;
	struct fib6_node cocci_id/* net/ipv6/ip6_fib.c 2360 */;
	int __init cocci_id/* net/ipv6/ip6_fib.c 2355 */;
	struct pernet_operations cocci_id/* net/ipv6/ip6_fib.c 2350 */;
	struct hlist_node *cocci_id/* net/ipv6/ip6_fib.c 2336 */;
	struct hlist_head cocci_id/* net/ipv6/ip6_fib.c 2264 */;
	int __net_init cocci_id/* net/ipv6/ip6_fib.c 2262 */;
	struct timer_list *cocci_id/* net/ipv6/ip6_fib.c 2255 */;
	struct fib6_gc_args cocci_id/* net/ipv6/ip6_fib.c 2229 */;
	unsigned long cocci_id/* net/ipv6/ip6_fib.c 2203 */;
	struct fib6_gc_args *cocci_id/* net/ipv6/ip6_fib.c 2202 */;
	unsigned int cocci_id/* net/ipv6/ip6_fib.c 2161 */;
	struct hlist_head *cocci_id/* net/ipv6/ip6_fib.c 2160 */;
	struct fib6_table *cocci_id/* net/ipv6/ip6_fib.c 2159 */;
	bool cocci_id/* net/ipv6/ip6_fib.c 2157 */;
	void *cocci_id/* net/ipv6/ip6_fib.c 2157 */;
	int cocci_id/* net/ipv6/ip6_fib.c 2157 */;
	int (*cocci_id/* net/ipv6/ip6_fib.c 2156 */)(struct fib6_info *,
						     void *);
	struct net *cocci_id/* net/ipv6/ip6_fib.c 2155 */;
	void cocci_id/* net/ipv6/ip6_fib.c 2155 */;
	int (*cocci_id/* net/ipv6/ip6_fib.c 2136 */)(struct fib6_info *,
						     void *arg);
	struct nl_info cocci_id/* net/ipv6/ip6_fib.c 2083 */;
	struct fib6_cleaner cocci_id/* net/ipv6/ip6_fib.c 2082 */;
	struct fib6_cleaner *cocci_id/* net/ipv6/ip6_fib.c 2082 */;
	struct fib6_walker *cocci_id/* net/ipv6/ip6_fib.c 2078 */;
	const struct in6_addr *cocci_id/* net/ipv6/ip6_fib.c 1655 */;
	struct rcu_head *cocci_id/* net/ipv6/ip6_fib.c 165 */;
	struct lookup_args cocci_id/* net/ipv6/ip6_fib.c 1569 */[];
	struct fib6_nh cocci_id/* net/ipv6/ip6_fib.c 152 */;
	struct lookup_args *cocci_id/* net/ipv6/ip6_fib.c 1496 */;
	struct lookup_args {
		int offset;
		const struct in6_addr *addr;
	} cocci_id/* net/ipv6/ip6_fib.c 1490 */;
	size_t cocci_id/* net/ipv6/ip6_fib.c 149 */;
	gfp_t cocci_id/* net/ipv6/ip6_fib.c 146 */;
	struct fib6_info cocci_id/* net/ipv6/ip6_fib.c 1341 */;
	const __be32 *cocci_id/* net/ipv6/ip6_fib.c 134 */;
	struct nl_info *cocci_id/* net/ipv6/ip6_fib.c 1321 */;
	__be32 cocci_id/* net/ipv6/ip6_fib.c 132 */;
	const void *cocci_id/* net/ipv6/ip6_fib.c 132 */;
	struct fib6_node *cocci_id/* net/ipv6/ip6_fib.c 1288 */;
	u16 cocci_id/* net/ipv6/ip6_fib.c 1042 */;
	struct fib6_info __rcu **cocci_id/* net/ipv6/ip6_fib.c 1034 */;
	enum{FIB6_NO_SERNUM_CHANGE=0,} cocci_id/* net/ipv6/ip6_fib.c 102 */;
}
