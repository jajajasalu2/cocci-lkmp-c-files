cocci_test_suite() {
	struct ip_set_adt_opt *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 76 */;
	const struct xt_action_param *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 75 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 74 */;
	void __exit cocci_id/* net/netfilter/ipset/ip_set_list_set.c 673 */;
	int __init cocci_id/* net/netfilter/ipset/ip_set_list_set.c 667 */;
	struct ip_set_type cocci_id/* net/netfilter/ipset/ip_set_list_set.c 634 */;
	struct nlattr *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 607 */[];
	int cocci_id/* net/netfilter/ipset/ip_set_list_set.c 606 */;
	struct list_set *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 591 */;
	u32 cocci_id/* net/netfilter/ipset/ip_set_list_set.c 589 */;
	struct net *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 589 */;
	bool cocci_id/* net/netfilter/ipset/ip_set_list_set.c 588 */;
	void (*cocci_id/* net/netfilter/ipset/ip_set_list_set.c 578 */)(struct timer_list *t);
	struct timer_list *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 564 */;
	const struct ip_set_type_variant cocci_id/* net/netfilter/ipset/ip_set_list_set.c 548 */;
	struct ip_set_ext *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 54 */;
	char cocci_id/* net/netfilter/ipset/ip_set_list_set.c 489 */[IPSET_MAXNAMELEN];
	struct netlink_callback *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 484 */;
	const struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 483 */;
	size_t cocci_id/* net/netfilter/ipset/ip_set_list_set.c 463 */;
	struct nlattr *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 462 */;
	const struct list_set *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 461 */;
	struct sk_buff *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 459 */;
	struct list_set {
		u32 size;
		struct timer_list gc;
		struct ip_set *set;
		struct net *net;
		struct list_head members;
	} cocci_id/* net/netfilter/ipset/ip_set_list_set.c 40 */;
	struct set_adt_elem cocci_id/* net/netfilter/ipset/ip_set_list_set.c 351 */;
	ipset_adtfn cocci_id/* net/netfilter/ipset/ip_set_list_set.c 350 */;
	u32 *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 347 */;
	struct set_adt_elem {
		ip_set_id_t id;
		ip_set_id_t refid;
		int before;
	} cocci_id/* net/netfilter/ipset/ip_set_list_set.c 33 */;
	struct set_elem {
		struct rcu_head rcu;
		struct list_head list;
		struct ip_set *set;
		ip_set_id_t id;
	}__aligned(__alignof__(u64)) cocci_id/* net/netfilter/ipset/ip_set_list_set.c 26 */;
	struct set_adt_elem *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 236 */;
	void *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 232 */;
	const struct ip_set_ext *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 217 */;
	struct ip_set *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 146 */;
	struct set_elem cocci_id/* net/netfilter/ipset/ip_set_list_set.c 145 */;
	struct set_elem *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 145 */;
	struct rcu_head *cocci_id/* net/netfilter/ipset/ip_set_list_set.c 143 */;
	void cocci_id/* net/netfilter/ipset/ip_set_list_set.c 142 */;
	struct ip_set_ext cocci_id/* net/netfilter/ipset/ip_set_list_set.c 118 */;
	enum ipset_adt cocci_id/* net/netfilter/ipset/ip_set_list_set.c 116 */;
}
