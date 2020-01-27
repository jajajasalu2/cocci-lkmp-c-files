cocci_test_suite() {
	struct ip_vs_lblc_entry {
		struct hlist_node list;
		int af;
		union nf_inet_addr addr;
		struct ip_vs_dest *dest;
		unsigned long lastuse;
		struct rcu_head rcu_head;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 88 */;
	void __exit cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 620 */;
	int __init cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 606 */;
	struct pernet_operations cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 601 */;
	struct netns_ipvs *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 586 */;
	struct net *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 584 */;
	void __net_exit cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 584 */;
	int __net_init cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 550 */;
	struct ip_vs_scheduler cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 536 */;
	struct ip_vs_iphdr *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 482 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 481 */;
	__s64 cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 437 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 403 */;
	struct ip_vs_service *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 400 */;
	struct ip_vs_dest *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 399 */;
	struct hlist_node *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 302 */;
	struct ip_vs_lblc_entry *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 301 */;
	unsigned long cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 298 */;
	struct ip_vs_lblc_table *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 296 */;
	struct timer_list *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 294 */;
	void cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 294 */;
	u16 cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 199 */;
	unsigned int cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 182 */;
	const union nf_inet_addr *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 180 */;
	__be32 cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 152 */;
	struct ip_vs_lblc_entry cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 133 */;
	struct rcu_head *cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 130 */;
	struct ctl_table cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 118 */[];
	struct ip_vs_lblc_table {
		struct rcu_head rcu_head;
		struct hlist_head bucket[IP_VS_LBLC_TAB_SIZE];
		struct timer_list periodic_timer;
		struct ip_vs_service *svc;
		atomic_t entries;
		int max_size;
		int rover;
		int counter;
		bool dead;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblc.c 101 */;
}
