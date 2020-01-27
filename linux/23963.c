cocci_test_suite() {
	struct ipq *cocci_id/* net/ipv4/ip_fragment.c 98 */;
	struct inet_frag_queue *cocci_id/* net/ipv4/ip_fragment.c 96 */;
	void cocci_id/* net/ipv4/ip_fragment.c 96 */;
	const struct frag_v4_compare_key *cocci_id/* net/ipv4/ip_fragment.c 87 */;
	struct net *cocci_id/* net/ipv4/ip_fragment.c 85 */;
	const void *cocci_id/* net/ipv4/ip_fragment.c 82 */;
	int cocci_id/* net/ipv4/ip_fragment.c 78 */(struct ipq *qp,
						    struct sk_buff *skb,
						    struct sk_buff *prev_tail,
						    struct net_device *dev);
	struct inet_frags cocci_id/* net/ipv4/ip_fragment.c 76 */;
	struct inet_frag_queue cocci_id/* net/ipv4/ip_fragment.c 730 */;
	const struct rhashtable_params cocci_id/* net/ipv4/ip_fragment.c 729 */;
	const struct inet_frag_queue *cocci_id/* net/ipv4/ip_fragment.c 724 */;
	struct rhashtable_compare_arg *cocci_id/* net/ipv4/ip_fragment.c 721 */;
	const u32 *cocci_id/* net/ipv4/ip_fragment.c 717 */;
	struct frag_v4_compare_key cocci_id/* net/ipv4/ip_fragment.c 710 */;
	u8 cocci_id/* net/ipv4/ip_fragment.c 71 */;
	struct pernet_operations cocci_id/* net/ipv4/ip_fragment.c 700 */;
	void __init cocci_id/* net/ipv4/ip_fragment.c 632 */;
	void __net_exit cocci_id/* net/ipv4/ip_fragment.c 623 */;
	struct ipq {
		struct inet_frag_queue q;
		u8 ecn;
		u16 max_df_size;
		int iif;
		unsigned int rid;
		struct inet_peer *peer;
	} cocci_id/* net/ipv4/ip_fragment.c 61 */;
	struct ctl_table_header *cocci_id/* net/ipv4/ip_fragment.c 593 */;
	struct ctl_table *cocci_id/* net/ipv4/ip_fragment.c 592 */;
	int __net_init cocci_id/* net/ipv4/ip_fragment.c 590 */;
	const char cocci_id/* net/ipv4/ip_fragment.c 58 */[];
	struct ctl_table cocci_id/* net/ipv4/ip_fragment.c 579 */[];
	unsigned long cocci_id/* net/ipv4/ip_fragment.c 551 */;
	int cocci_id/* net/ipv4/ip_fragment.c 546 */;
	struct inet_skb_parm cocci_id/* net/ipv4/ip_fragment.c 535 */;
	struct iphdr cocci_id/* net/ipv4/ip_fragment.c 505 */;
	struct sk_buff *cocci_id/* net/ipv4/ip_fragment.c 503 */;
	struct net_device *cocci_id/* net/ipv4/ip_fragment.c 476 */;
	void *cocci_id/* net/ipv4/ip_fragment.c 407 */;
	const struct ipq *cocci_id/* net/ipv4/ip_fragment.c 396 */;
	unsigned int cocci_id/* net/ipv4/ip_fragment.c 278 */;
	struct inet_peer *cocci_id/* net/ipv4/ip_fragment.c 226 */;
	struct iphdr *cocci_id/* net/ipv4/ip_fragment.c 203 */;
	const struct iphdr *cocci_id/* net/ipv4/ip_fragment.c 136 */;
	struct timer_list *cocci_id/* net/ipv4/ip_fragment.c 133 */;
	u32 cocci_id/* net/ipv4/ip_fragment.c 121 */;
	bool cocci_id/* net/ipv4/ip_fragment.c 121 */;
	struct ipq cocci_id/* net/ipv4/ip_fragment.c 100 */;
}
