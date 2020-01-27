cocci_test_suite() {
	__be32 cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 93 */;
	bool cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 81 */;
	hsiphash_key_t *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 70 */;
	void cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 70 */;
	struct ip_vs_mh_state {
		struct rcu_head rcu_head;
		struct ip_vs_mh_lookup *lookup;
		struct ip_vs_mh_dest_setup *dest_setup;
		hsiphash_key_t hash1,hash2;
		int gcd;
		int rshift;
	} cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 61 */;
	void __exit cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 530 */;
	int __init cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 525 */;
	struct ip_vs_scheduler cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 512 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 50 */[];
	__be16 cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 448 */[2];
	const struct sk_buff *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 446 */;
	struct ip_vs_iphdr *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 446 */;
	struct ip_vs_mh_state *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 435 */;
	struct ip_vs_dest *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 433 */;
	struct ip_vs_service *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 432 */;
	int cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 432 */;
	struct ip_vs_mh_lookup cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 429 */;
	struct ip_vs_mh_dest_setup {
		unsigned int offset;
		unsigned int skip;
		unsigned int perm;
		int turns;
	} cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 42 */;
	struct ip_vs_mh_lookup {
		struct ip_vs_dest __rcu *dest;
	} cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 38 */;
	struct ip_vs_mh_state cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 377 */;
	struct rcu_head *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 373 */;
	struct ip_vs_mh_dest_setup cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 299 */;
	unsigned int cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 239 */;
	__be16 cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 237 */;
	const union nf_inet_addr *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 237 */;
	unsigned long cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 178 */;
	unsigned long *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 163 */;
	struct ip_vs_dest cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 141 */;
	struct ip_vs_mh_dest_setup *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 126 */;
	struct list_head *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 125 */;
	struct ip_vs_mh_lookup *cocci_id/* net/netfilter/ipvs/ip_vs_mh.c 108 */;
}
