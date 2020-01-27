cocci_test_suite() {
	const u8 cocci_id/* net/ipv4/inet_fragment.c 85 */[16];
	struct ipfrag_skb_cb cocci_id/* net/ipv4/inet_fragment.c 67 */;
	struct inet_frag_queue *cocci_id/* net/ipv4/inet_fragment.c 54 */;
	struct sk_buff **cocci_id/* net/ipv4/inet_fragment.c 480 */;
	bool cocci_id/* net/ipv4/inet_fragment.c 478 */;
	struct sk_buff *cocci_id/* net/ipv4/inet_fragment.c 46 */;
	struct ipfrag_skb_cb *cocci_id/* net/ipv4/inet_fragment.c 44 */;
	struct rb_node **cocci_id/* net/ipv4/inet_fragment.c 373 */;
	struct ipfrag_skb_cb {
		union {
			struct inet_skb_parm h4;
			struct inet6_skb_parm h6;
		};
		struct sk_buff *next_frag;
		int frag_run_len;
	} cocci_id/* net/ipv4/inet_fragment.c 35 */;
	struct inet_frag_queue **cocci_id/* net/ipv4/inet_fragment.c 298 */;
	void *cocci_id/* net/ipv4/inet_fragment.c 277 */;
	unsigned int cocci_id/* net/ipv4/inet_fragment.c 257 */;
	struct sk_buff cocci_id/* net/ipv4/inet_fragment.c 238 */;
	struct rb_node *cocci_id/* net/ipv4/inet_fragment.c 234 */;
	struct rb_root *cocci_id/* net/ipv4/inet_fragment.c 232 */;
	struct inet_frag_queue cocci_id/* net/ipv4/inet_fragment.c 223 */;
	struct rcu_head *cocci_id/* net/ipv4/inet_fragment.c 221 */;
	struct fqdir *cocci_id/* net/ipv4/inet_fragment.c 187 */;
	void cocci_id/* net/ipv4/inet_fragment.c 187 */;
	struct net *cocci_id/* net/ipv4/inet_fragment.c 167 */;
	struct inet_frags *cocci_id/* net/ipv4/inet_fragment.c 167 */;
	struct fqdir **cocci_id/* net/ipv4/inet_fragment.c 167 */;
	int cocci_id/* net/ipv4/inet_fragment.c 167 */;
	struct fqdir cocci_id/* net/ipv4/inet_fragment.c 150 */;
	struct work_struct *cocci_id/* net/ipv4/inet_fragment.c 148 */;
}
