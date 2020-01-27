cocci_test_suite() {
	const
__net_initconst
struct ip6addrlbl_init_table {
		const struct in6_addr *prefix;
		int prefixlen;
		u32 label;
	} cocci_id/* net/ipv6/addrlabel.c 65 */[];
	struct in6_addr *cocci_id/* net/ipv6/addrlabel.c 576 */;
	struct nlattr *cocci_id/* net/ipv6/addrlabel.c 575 */[IFAL_MAX + 1];
	struct ifaddrlblmsg *cocci_id/* net/ipv6/addrlabel.c 574 */;
	struct netlink_ext_ack *cocci_id/* net/ipv6/addrlabel.c 571 */;
	struct nlattr **cocci_id/* net/ipv6/addrlabel.c 528 */;
	void cocci_id/* net/ipv6/addrlabel.c 519 */;
	const struct nlmsghdr *cocci_id/* net/ipv6/addrlabel.c 488 */;
	struct sk_buff *cocci_id/* net/ipv6/addrlabel.c 486 */;
	struct netlink_callback *cocci_id/* net/ipv6/addrlabel.c 486 */;
	struct ifaddrlblmsg cocci_id/* net/ipv6/addrlabel.c 445 */;
	struct nlmsghdr *cocci_id/* net/ipv6/addrlabel.c 444 */;
	struct net_device *cocci_id/* net/ipv6/addrlabel.c 367 */;
	u32 cocci_id/* net/ipv6/addrlabel.c 361 */;
	struct in6_addr cocci_id/* net/ipv6/addrlabel.c 360 */;
	const struct nla_policy cocci_id/* net/ipv6/addrlabel.c 359 */[IFAL_MAX + 1];
	int __init cocci_id/* net/ipv6/addrlabel.c 349 */;
	struct pernet_operations cocci_id/* net/ipv6/addrlabel.c 344 */;
	void __net_exit cocci_id/* net/ipv6/addrlabel.c 330 */;
	struct ip6addrlbl_entry {
		struct in6_addr prefix;
		int prefixlen;
		int ifindex;
		int addrtype;
		u32 label;
		struct hlist_node list;
		struct rcu_head rcu;
	} cocci_id/* net/ipv6/addrlabel.c 32 */;
	int __net_init cocci_id/* net/ipv6/addrlabel.c 307 */;
	const struct in6_addr *cocci_id/* net/ipv6/addrlabel.c 266 */;
	unsigned int cocci_id/* net/ipv6/addrlabel.c 250 */;
	struct hlist_node *cocci_id/* net/ipv6/addrlabel.c 207 */;
	struct net *cocci_id/* net/ipv6/addrlabel.c 203 */;
	struct ip6addrlbl_entry *cocci_id/* net/ipv6/addrlabel.c 203 */;
	int cocci_id/* net/ipv6/addrlabel.c 203 */;
	bool cocci_id/* net/ipv6/addrlabel.c 114 */;
	const struct ip6addrlbl_entry *cocci_id/* net/ipv6/addrlabel.c 114 */;
}
