cocci_test_suite() {
	bool cocci_id/* net/netfilter/nf_conncount.c 71 */;
	const struct nf_conn *cocci_id/* net/netfilter/nf_conncount.c 71 */;
	struct kmem_cache *cocci_id/* net/netfilter/nf_conncount.c 69 */;
	u_int32_t cocci_id/* net/netfilter/nf_conncount.c 67 */;
	void __exit cocci_id/* net/netfilter/nf_conncount.c 614 */;
	struct nf_conncount_tuple cocci_id/* net/netfilter/nf_conncount.c 598 */;
	int __init cocci_id/* net/netfilter/nf_conncount.c 590 */;
	struct nf_conncount_data {
		unsigned int keylen;
		struct rb_root root[CONNCOUNT_SLOTS];
		struct net *net;
		struct work_struct gc_work;
		unsigned long pending_trees[BITS_TO_LONGS(CONNCOUNT_SLOTS)];
		unsigned int gc_tree;
	} cocci_id/* net/netfilter/nf_conncount.c 58 */;
	spinlock_t cocci_id/* net/netfilter/nf_conncount.c 56 */[CONNCOUNT_SLOTS]__cacheline_aligned_in_smp;
	struct nf_conncount_rb {
		struct rb_node node;
		struct nf_conncount_list list;
		u32 key[MAX_KEYLEN];
		struct rcu_head rcu_head;
	} cocci_id/* net/netfilter/nf_conncount.c 49 */;
	struct nf_conncount_data cocci_id/* net/netfilter/nf_conncount.c 446 */;
	struct work_struct *cocci_id/* net/netfilter/nf_conncount.c 444 */;
	struct nf_conncount_tuple {
		struct list_head node;
		struct nf_conntrack_tuple tuple;
		struct nf_conntrack_zone zone;
		int cpu;
		u32 jiffies32;
	} cocci_id/* net/netfilter/nf_conncount.c 41 */;
	u8 cocci_id/* net/netfilter/nf_conncount.c 395 */;
	struct rb_node *cocci_id/* net/netfilter/nf_conncount.c 392 */;
	struct rb_root *cocci_id/* net/netfilter/nf_conncount.c 391 */;
	const u32 *cocci_id/* net/netfilter/nf_conncount.c 387 */;
	struct nf_conncount_data *cocci_id/* net/netfilter/nf_conncount.c 386 */;
	struct rb_node **cocci_id/* net/netfilter/nf_conncount.c 309 */;
	struct nf_conncount_rb *cocci_id/* net/netfilter/nf_conncount.c 308 */[CONNCOUNT_GC_MAX_NODES];
	struct nf_conncount_rb *cocci_id/* net/netfilter/nf_conncount.c 277 */[];
	struct nf_conncount_rb cocci_id/* net/netfilter/nf_conncount.c 271 */;
	struct nf_conncount_rb *cocci_id/* net/netfilter/nf_conncount.c 269 */;
	struct rcu_head *cocci_id/* net/netfilter/nf_conncount.c 267 */;
	void cocci_id/* net/netfilter/nf_conncount.c 267 */;
	u32 cocci_id/* net/netfilter/nf_conncount.c 190 */;
	unsigned int cocci_id/* net/netfilter/nf_conncount.c 133 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conncount.c 132 */;
	struct nf_conncount_tuple *cocci_id/* net/netfilter/nf_conncount.c 131 */;
	const struct nf_conntrack_tuple_hash *cocci_id/* net/netfilter/nf_conncount.c 130 */;
	const struct nf_conntrack_zone *cocci_id/* net/netfilter/nf_conncount.c 128 */;
	const struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conncount.c 127 */;
	struct nf_conncount_list *cocci_id/* net/netfilter/nf_conncount.c 126 */;
	struct net *cocci_id/* net/netfilter/nf_conncount.c 125 */;
	int cocci_id/* net/netfilter/nf_conncount.c 125 */;
	unsigned long cocci_id/* net/netfilter/nf_conncount.c 101 */;
}
