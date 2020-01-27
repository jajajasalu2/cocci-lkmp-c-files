cocci_test_suite() {
	void cocci_id/* net/ipv6/route.c 99 */(struct dst_entry *dst,
					       struct sock *sk,
					       struct sk_buff *skb);
	void cocci_id/* net/ipv6/route.c 97 */(struct dst_entry *dst,
					       struct sock *sk,
					       struct sk_buff *skb, u32 mtu);
	void cocci_id/* net/ipv6/route.c 96 */(struct sk_buff *skb);
	struct route_info cocci_id/* net/ipv6/route.c 943 */;
	struct route_info *cocci_id/* net/ipv6/route.c 937 */;
	int cocci_id/* net/ipv6/route.c 93 */(struct net *net,
					      struct sock *sk,
					      struct sk_buff *skb);
	int cocci_id/* net/ipv6/route.c 92 */(struct sk_buff *skb);
	int cocci_id/* net/ipv6/route.c 90 */(struct dst_ops *ops);
	void cocci_id/* net/ipv6/route.c 88 */(struct dst_entry *,
					       struct net_device *dev,
					       int how);
	void cocci_id/* net/ipv6/route.c 87 */(struct dst_entry *);
	struct dst_entry *cocci_id/* net/ipv6/route.c 86 */(struct dst_entry *);
	unsigned int cocci_id/* net/ipv6/route.c 84 */(const struct dst_entry *dst);
	struct dst_entry *cocci_id/* net/ipv6/route.c 83 */(struct dst_entry *dst,
							    u32 cookie);
	struct fib6_nh_frl_arg cocci_id/* net/ipv6/route.c 813 */;
	struct fib6_nh *cocci_id/* net/ipv6/route.c 802 */;
	bool cocci_id/* net/ipv6/route.c 801 */;
	bool *cocci_id/* net/ipv6/route.c 794 */;
	int *cocci_id/* net/ipv6/route.c 794 */;
	int cocci_id/* net/ipv6/route.c 794 */;
	struct fib6_result *cocci_id/* net/ipv6/route.c 793 */;
	struct fib6_info **cocci_id/* net/ipv6/route.c 793 */;
	u32 cocci_id/* net/ipv6/route.c 792 */;
	struct fib6_info *cocci_id/* net/ipv6/route.c 791 */;
	void cocci_id/* net/ipv6/route.c 791 */;
	struct fib6_nh_frl_arg *cocci_id/* net/ipv6/route.c 784 */;
	struct fib6_nh_frl_arg {
		u32 flags;
		int oif;
		int strict;
		int *mpri;
		bool *do_rr;
		struct fib6_nh *nh;
	} cocci_id/* net/ipv6/route.c 773 */;
	enum rt6_nud_state{RT6_NUD_FAIL_HARD=-3, RT6_NUD_FAIL_PROBE=-2, RT6_NUD_FAIL_DO_RR=-1, RT6_NUD_SUCCEED=1,} cocci_id/* net/ipv6/route.c 76 */;
	int cocci_id/* net/ipv6/route.c 69 */(u8 fib6_type);
	enum rt6_nud_state cocci_id/* net/ipv6/route.c 687 */;
	struct uncached_list *cocci_id/* net/ipv6/route.c 6386 */;
	int __init cocci_id/* net/ipv6/route.c 6323 */;
	void __init cocci_id/* net/ipv6/route.c 6307 */;
	struct notifier_block cocci_id/* net/ipv6/route.c 6302 */;
	struct pernet_operations cocci_id/* net/ipv6/route.c 6297 */;
	struct inet_peer_base *cocci_id/* net/ipv6/route.c 6285 */;
	struct ipv6_route_iter cocci_id/* net/ipv6/route.c 6252 */;
	void __net_exit cocci_id/* net/ipv6/route.c 6237 */;
	struct __rt6_probe_work *cocci_id/* net/ipv6/route.c 622 */;
	int __net_init cocci_id/* net/ipv6/route.c 6155 */;
	struct ctl_table *cocci_id/* net/ipv6/route.c 6126 */;
	struct ctl_table *__net_init cocci_id/* net/ipv6/route.c 6124 */;
	struct __rt6_probe_work cocci_id/* net/ipv6/route.c 612 */;
	struct work_struct *cocci_id/* net/ipv6/route.c 608 */;
	struct ctl_table cocci_id/* net/ipv6/route.c 6041 */[];
	loff_t *cocci_id/* net/ipv6/route.c 6023 */;
	size_t *cocci_id/* net/ipv6/route.c 6023 */;
	struct __rt6_probe_work {
		struct work_struct work;
		struct in6_addr target;
		struct net_device *dev;
	} cocci_id/* net/ipv6/route.c 602 */;
	struct seq_file *cocci_id/* net/ipv6/route.c 6003 */;
	struct notifier_block *cocci_id/* net/ipv6/route.c 5964 */;
	struct rt6_info cocci_id/* net/ipv6/route.c 5851 */;
	struct in6_addr cocci_id/* net/ipv6/route.c 5781 */;
	struct flowi6 cocci_id/* net/ipv6/route.c 5768 */;
	struct rtmsg *cocci_id/* net/ipv6/route.c 5767 */;
	struct nlattr *cocci_id/* net/ipv6/route.c 5761 */[RTA_MAX + 1];
	struct nlattr **cocci_id/* net/ipv6/route.c 5692 */;
	const struct nlmsghdr *cocci_id/* net/ipv6/route.c 5691 */;
	struct fib6_nh_exception_dump_walker cocci_id/* net/ipv6/route.c 5666 */;
	struct fib_dump_filter *cocci_id/* net/ipv6/route.c 5626 */;
	struct rt6_rtnl_dump_arg *cocci_id/* net/ipv6/route.c 5625 */;
	struct fib6_nh_exception_dump_walker *cocci_id/* net/ipv6/route.c 5573 */;
	struct fib6_nh_exception_dump_walker {
		struct rt6_rtnl_dump_arg *dump;
		struct fib6_info *rt;
		unsigned int flags;
		unsigned int skip;
		unsigned int count;
	} cocci_id/* net/ipv6/route.c 5563 */;
	const struct fib6_info *cocci_id/* net/ipv6/route.c 5536 */;
	long cocci_id/* net/ipv6/route.c 5369 */;
	unsigned char cocci_id/* net/ipv6/route.c 5366 */;
	u32 *cocci_id/* net/ipv6/route.c 5365 */;
	struct rt6key *cocci_id/* net/ipv6/route.c 5364 */;
	unsigned char *cocci_id/* net/ipv6/route.c 5329 */;
	struct rta_cacheinfo cocci_id/* net/ipv6/route.c 5322 */;
	struct rtmsg cocci_id/* net/ipv6/route.c 5312 */;
	size_t cocci_id/* net/ipv6/route.c 5289 */;
	struct rtnexthop cocci_id/* net/ipv6/route.c 5276 */;
	struct nlmsghdr *cocci_id/* net/ipv6/route.c 5227 */;
	struct fib6_nh_dm_arg cocci_id/* net/ipv6/route.c 517 */;
	struct nlattr *cocci_id/* net/ipv6/route.c 5057 */;
	struct fib6_nh_dm_arg *cocci_id/* net/ipv6/route.c 504 */;
	struct rtnexthop *cocci_id/* net/ipv6/route.c 5027 */;
	enum fib_event_type cocci_id/* net/ipv6/route.c 5025 */;
	void *cocci_id/* net/ipv6/route.c 502 */;
	struct fib6_info cocci_id/* net/ipv6/route.c 5012 */;
	__u16 cocci_id/* net/ipv6/route.c 5002 */;
	struct rt6_nh *cocci_id/* net/ipv6/route.c 4980 */;
	struct list_head *cocci_id/* net/ipv6/route.c 4976 */;
	struct rt6_nh {
		struct fib6_info *fib6_info;
		struct fib6_config r_cfg;
		struct list_head next;
	} cocci_id/* net/ipv6/route.c 4969 */;
	struct fib6_nh_dm_arg {
		struct net *net;
		const struct in6_addr *saddr;
		int oif;
		int flags;
		struct fib6_nh *nh;
	} cocci_id/* net/ipv6/route.c 494 */;
	const struct nla_policy cocci_id/* net/ipv6/route.c 4806 */[RTA_MAX + 1];
	struct rt6_mtu_change_arg cocci_id/* net/ipv6/route.c 4798 */;
	const struct net_device *cocci_id/* net/ipv6/route.c 476 */;
	struct rt6_mtu_change_arg *cocci_id/* net/ipv6/route.c 4744 */;
	struct rt6_mtu_change_arg {
		struct net_device *dev;
		unsigned int mtu;
		struct fib6_info *f6i;
	} cocci_id/* net/ipv6/route.c 4736 */;
	const struct fib6_nh *cocci_id/* net/ipv6/route.c 473 */;
	struct arg_netdev_event cocci_id/* net/ipv6/route.c 4715 */;
	unsigned int cocci_id/* net/ipv6/route.c 4688 */;
	const struct arg_netdev_event *cocci_id/* net/ipv6/route.c 4672 */;
	struct arg_netdev_event {
		const struct net_device *dev;
		union {
			unsigned char nh_flags;
			unsigned long event;
		};
	} cocci_id/* net/ipv6/route.c 4483 */;
	struct arg_dev_net_ip cocci_id/* net/ipv6/route.c 4444 */;
	struct inet6_ifaddr *cocci_id/* net/ipv6/route.c 4441 */;
	struct arg_dev_net_ip *cocci_id/* net/ipv6/route.c 4425 */;
	struct arg_dev_net_ip {
		struct net_device *dev;
		struct net *net;
		struct in6_addr *addr;
	} cocci_id/* net/ipv6/route.c 4417 */;
	struct fib6_config cocci_id/* net/ipv6/route.c 4390 */;
	gfp_t cocci_id/* net/ipv6/route.c 4388 */;
	struct sock *cocci_id/* net/ipv6/route.c 4364 */;
	u8 cocci_id/* net/ipv6/route.c 4324 */;
	struct in6_rtmsg cocci_id/* net/ipv6/route.c 4286 */;
	void __user *cocci_id/* net/ipv6/route.c 4283 */;
	struct in6_rtmsg *cocci_id/* net/ipv6/route.c 4261 */;
	const struct net *cocci_id/* net/ipv6/route.c 425 */;
	struct hlist_head *cocci_id/* net/ipv6/route.c 4244 */;
	struct inet6_dev *cocci_id/* net/ipv6/route.c 4226 */;
	struct net_device *cocci_id/* net/ipv6/route.c 4225 */;
	const struct rt6_info *cocci_id/* net/ipv6/route.c 401 */;
	u8 *cocci_id/* net/ipv6/route.c 3948 */;
	struct ndisc_options cocci_id/* net/ipv6/route.c 3943 */;
	struct netevent_redirect cocci_id/* net/ipv6/route.c 3940 */;
	struct fib6_nh_del_cached_rt_arg cocci_id/* net/ipv6/route.c 3843 */;
	struct fib6_nh_del_cached_rt_arg *cocci_id/* net/ipv6/route.c 3834 */;
	struct fib6_nh_del_cached_rt_arg {
		struct fib6_config *cfg;
		struct fib6_info *f6i;
	} cocci_id/* net/ipv6/route.c 3827 */;
	struct rt6_info *cocci_id/* net/ipv6/route.c 3795 */;
	struct fib6_config *cocci_id/* net/ipv6/route.c 3795 */;
	struct sk_buff *cocci_id/* net/ipv6/route.c 3741 */;
	struct nl_info cocci_id/* net/ipv6/route.c 3732 */;
	struct fib6_table *cocci_id/* net/ipv6/route.c 3712 */;
	struct net *cocci_id/* net/ipv6/route.c 3711 */;
	struct nl_info *cocci_id/* net/ipv6/route.c 3709 */;
	struct nexthop *cocci_id/* net/ipv6/route.c 3542 */;
	struct rt6_info **cocci_id/* net/ipv6/route.c 3518 */;
	const struct rt6_info cocci_id/* net/ipv6/route.c 327 */;
	struct inet6_dev **cocci_id/* net/ipv6/route.c 3238 */;
	struct net_device **cocci_id/* net/ipv6/route.c 3237 */;
	struct net cocci_id/* net/ipv6/route.c 3160 */;
	struct dst_ops *cocci_id/* net/ipv6/route.c 3158 */;
	struct tcphdr cocci_id/* net/ipv6/route.c 3039 */;
	struct ipv6hdr cocci_id/* net/ipv6/route.c 3039 */;
	const struct rd_msg *cocci_id/* net/ipv6/route.c 3011 */;
	struct rd_msg *cocci_id/* net/ipv6/route.c 3011 */;
	struct ipv6hdr *cocci_id/* net/ipv6/route.c 2990 */;
	kuid_t cocci_id/* net/ipv6/route.c 2988 */;
	struct dst_metrics *cocci_id/* net/ipv6/route.c 298 */;
	struct ip6rd_flowi cocci_id/* net/ipv6/route.c 2978 */;
	const struct flowi6 *cocci_id/* net/ipv6/route.c 2973 */;
	const struct fib6_info cocci_id/* net/ipv6/route.c 292 */;
	struct fib6_node *cocci_id/* net/ipv6/route.c 2899 */;
	struct fib6_nh_rd_arg cocci_id/* net/ipv6/route.c 2892 */;
	struct fib6_result cocci_id/* net/ipv6/route.c 2891 */;
	struct ip6rd_flowi *cocci_id/* net/ipv6/route.c 2889 */;
	const struct sk_buff *cocci_id/* net/ipv6/route.c 2886 */;
	struct flowi6 *cocci_id/* net/ipv6/route.c 2885 */;
	const u32 cocci_id/* net/ipv6/route.c 288 */[RTAX_MAX];
	struct ip6rd_flowi {
		struct flowi6 fl6;
		struct in6_addr gateway;
	} cocci_id/* net/ipv6/route.c 2878 */;
	struct fib6_nh_rd_arg *cocci_id/* net/ipv6/route.c 2871 */;
	struct fib6_nh_rd_arg {
		struct fib6_result *res;
		struct flowi6 *fl6;
		const struct in6_addr *gw;
		struct rt6_info **ret;
	} cocci_id/* net/ipv6/route.c 2862 */;
	struct ipv6_pinfo *cocci_id/* net/ipv6/route.c 2819 */;
	__be32 cocci_id/* net/ipv6/route.c 2793 */;
	struct dst_ops cocci_id/* net/ipv6/route.c 276 */;
	struct fib6_nh_match_arg cocci_id/* net/ipv6/route.c 2736 */;
	const struct in6_addr *cocci_id/* net/ipv6/route.c 2697 */;
	const struct ipv6hdr *cocci_id/* net/ipv6/route.c 2695 */;
	const struct sock *cocci_id/* net/ipv6/route.c 2694 */;
	struct dst_entry *cocci_id/* net/ipv6/route.c 2694 */;
	const struct dst_entry *cocci_id/* net/ipv6/route.c 259 */;
	struct rt6key cocci_id/* net/ipv6/route.c 2534 */;
	struct ip_tunnel_info *cocci_id/* net/ipv6/route.c 2422 */;
	struct flow_keys cocci_id/* net/ipv6/route.c 2327 */;
	struct icmp6hdr cocci_id/* net/ipv6/route.c 2288 */;
	const struct icmp6hdr *cocci_id/* net/ipv6/route.c 2286 */;
	struct flow_keys *cocci_id/* net/ipv6/route.c 2279 */;
	struct neighbour *cocci_id/* net/ipv6/route.c 215 */;
	struct fib6_nh_age_excptn_arg cocci_id/* net/ipv6/route.c 2143 */;
	struct fib6_nh_age_excptn_arg *cocci_id/* net/ipv6/route.c 2132 */;
	struct fib6_nh_age_excptn_arg {
		struct fib6_gc_args *gc_args;
		unsigned long now;
	} cocci_id/* net/ipv6/route.c 2125 */;
	struct hlist_node *cocci_id/* net/ipv6/route.c 2102 */;
	struct rt6_exception_bucket *cocci_id/* net/ipv6/route.c 2100 */;
	unsigned long cocci_id/* net/ipv6/route.c 2098 */;
	struct fib6_gc_args *cocci_id/* net/ipv6/route.c 2097 */;
	__u8 cocci_id/* net/ipv6/route.c 2079 */;
	struct fib6_nh_match_arg *cocci_id/* net/ipv6/route.c 1924 */;
	struct fib6_nh_match_arg {
		const struct net_device *dev;
		const struct in6_addr *gw;
		struct fib6_nh *match;
	} cocci_id/* net/ipv6/route.c 1915 */;
	const void *cocci_id/* net/ipv6/route.c 188 */;
	struct fib6_nh_excptn_arg cocci_id/* net/ipv6/route.c 1872 */;
	struct fib6_nh_excptn_arg *cocci_id/* net/ipv6/route.c 1853 */;
	struct fib6_nh_excptn_arg {
		struct rt6_info *rt;
		int plen;
	} cocci_id/* net/ipv6/route.c 1846 */;
	spinlock_t *cocci_id/* net/ipv6/route.c 1620 */;
	const struct fib6_result *cocci_id/* net/ipv6/route.c 1559 */;
	struct rt6_exception_bucket **cocci_id/* net/ipv6/route.c 1530 */;
	struct rt6_exception *cocci_id/* net/ipv6/route.c 1529 */;
	const u32 *cocci_id/* net/ipv6/route.c 1482 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/route.c 1306 */;
	struct uncached_list cocci_id/* net/ipv6/route.c 130 */;
	struct uncached_list {
		spinlock_t lock;
		struct list_head head;
	} cocci_id/* net/ipv6/route.c 125 */;
	struct fib6_info *cocci_id/* net/ipv6/route.c 119 */(struct net *net,
							     const struct in6_addr *prefix,
							     int prefixlen,
							     const struct in6_addr *gwaddr,
							     struct net_device *dev);
	struct in6_addr *cocci_id/* net/ipv6/route.c 1150 */;
	struct fib6_info *cocci_id/* net/ipv6/route.c 114 */(struct net *net,
							     const struct in6_addr *prefix,
							     int prefixlen,
							     const struct in6_addr *gwaddr,
							     struct net_device *dev,
							     unsigned int pref);
	struct rt6_info *cocci_id/* net/ipv6/route.c 109 */(const struct fib6_result *res,
							    const struct in6_addr *daddr,
							    const struct in6_addr *saddr);
	unsigned short cocci_id/* net/ipv6/route.c 1055 */;
	int cocci_id/* net/ipv6/route.c 104 */(struct net *net,
					       struct sk_buff *skb,
					       struct fib6_info *rt,
					       struct dst_entry *dst,
					       struct in6_addr *dest,
					       struct in6_addr *src, int iif,
					       int type, u32 portid, u32 seq,
					       unsigned int flags);
	const int cocci_id/* net/ipv6/route.c 1035 */[RTN_MAX + 1];
	size_t cocci_id/* net/ipv6/route.c 103 */(struct fib6_info *f6i);
	int cocci_id/* net/ipv6/route.c 101 */(const struct fib6_nh *nh,
					       u32 fib6_flags, int oif,
					       int strict);
}
