cocci_test_suite() {
	struct ip_vs_dest_set {
		atomic_t size;
		unsigned long lastmod;
		struct list_head list;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 92 */;
	struct ip_vs_dest_set_elem {
		struct list_head list;
		struct ip_vs_dest *dest;
		struct rcu_head rcu_head;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 86 */;
	void __exit cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 805 */;
	int __init cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 791 */;
	struct pernet_operations cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 786 */;
	struct netns_ipvs *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 771 */;
	struct net *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 769 */;
	void __net_exit cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 769 */;
	int __net_init cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 736 */;
	struct ip_vs_scheduler cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 721 */;
	struct ip_vs_iphdr *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 646 */;
	const struct sk_buff *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 645 */;
	__s64 cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 601 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 566 */;
	struct ip_vs_service *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 563 */;
	struct ip_vs_dest *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 562 */;
	struct hlist_node *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 466 */;
	struct ip_vs_lblcr_entry *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 465 */;
	unsigned long cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 462 */;
	struct ip_vs_lblcr_table *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 460 */;
	struct timer_list *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 458 */;
	u16 cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 362 */;
	unsigned int cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 345 */;
	const union nf_inet_addr *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 343 */;
	__be32 cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 315 */;
	struct ctl_table cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 289 */[];
	struct ip_vs_lblcr_table {
		struct rcu_head rcu_head;
		struct hlist_head bucket[IP_VS_LBLCR_TAB_SIZE];
		atomic_t entries;
		int max_size;
		struct timer_list periodic_timer;
		struct ip_vs_service *svc;
		int rover;
		int counter;
		bool dead;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 271 */;
	struct ip_vs_lblcr_entry {
		struct hlist_node list;
		int af;
		union nf_inet_addr addr;
		struct ip_vs_dest_set set;
		unsigned long lastuse;
		struct rcu_head rcu_head;
	} cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 258 */;
	struct ip_vs_dest_set_elem *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 136 */;
	struct ip_vs_dest_set *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 134 */;
	void cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 133 */;
	struct ip_vs_dest_set_elem cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 128 */;
	struct rcu_head *cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 124 */;
	bool cocci_id/* net/netfilter/ipvs/ip_vs_lblcr.c 100 */;
}
