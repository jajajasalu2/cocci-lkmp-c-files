cocci_test_suite() {
	struct nft_set_type cocci_id/* net/netfilter/nft_set_rbtree.c 481 */;
	struct nft_rbtree cocci_id/* net/netfilter/nft_set_rbtree.c 470 */;
	const struct nft_rbtree_elem *cocci_id/* net/netfilter/nft_set_rbtree.c 47 */;
	struct nft_set_estimate *cocci_id/* net/netfilter/nft_set_rbtree.c 467 */;
	u32 cocci_id/* net/netfilter/nft_set_rbtree.c 466 */;
	const struct nft_set_desc *cocci_id/* net/netfilter/nft_set_rbtree.c 466 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_set_rbtree.c 435 */[];
	const struct nft_set_ext **cocci_id/* net/netfilter/nft_set_rbtree.c 43 */;
	u64 cocci_id/* net/netfilter/nft_set_rbtree.c 427 */;
	struct nft_set *cocci_id/* net/netfilter/nft_set_rbtree.c 375 */;
	struct nft_set_gc_batch *cocci_id/* net/netfilter/nft_set_rbtree.c 372 */;
	struct work_struct *cocci_id/* net/netfilter/nft_set_rbtree.c 369 */;
	struct nft_set_elem cocci_id/* net/netfilter/nft_set_rbtree.c 344 */;
	struct nft_set_iter *cocci_id/* net/netfilter/nft_set_rbtree.c 340 */;
	const struct nft_ctx *cocci_id/* net/netfilter/nft_set_rbtree.c 338 */;
	const struct nft_rbtree *cocci_id/* net/netfilter/nft_set_rbtree.c 303 */;
	void *cocci_id/* net/netfilter/nft_set_rbtree.c 299 */;
	const struct nft_set_elem *cocci_id/* net/netfilter/nft_set_rbtree.c 278 */;
	void cocci_id/* net/netfilter/nft_set_rbtree.c 276 */;
	struct nft_rbtree_elem {
		struct rb_node node;
		struct nft_set_ext ext;
	} cocci_id/* net/netfilter/nft_set_rbtree.c 25 */;
	struct rb_node *cocci_id/* net/netfilter/nft_set_rbtree.c 210 */;
	struct nft_set_ext **cocci_id/* net/netfilter/nft_set_rbtree.c 205 */;
	struct nft_rbtree {
		struct rb_root root;
		rwlock_t lock;
		seqcount_t count;
		struct delayed_work gc_work;
	} cocci_id/* net/netfilter/nft_set_rbtree.c 18 */;
	struct nft_rbtree_elem cocci_id/* net/netfilter/nft_set_rbtree.c 134 */;
	int cocci_id/* net/netfilter/nft_set_rbtree.c 127 */;
	const void *cocci_id/* net/netfilter/nft_set_rbtree.c 126 */;
	const struct rb_node *cocci_id/* net/netfilter/nft_set_rbtree.c 125 */;
	struct nft_rbtree *cocci_id/* net/netfilter/nft_set_rbtree.c 124 */;
	struct nft_rbtree_elem *cocci_id/* net/netfilter/nft_set_rbtree.c 123 */;
	u8 cocci_id/* net/netfilter/nft_set_rbtree.c 121 */;
	unsigned int cocci_id/* net/netfilter/nft_set_rbtree.c 121 */;
	const u32 *cocci_id/* net/netfilter/nft_set_rbtree.c 120 */;
	struct nft_rbtree_elem **cocci_id/* net/netfilter/nft_set_rbtree.c 120 */;
	bool cocci_id/* net/netfilter/nft_set_rbtree.c 119 */;
	const struct nft_set *cocci_id/* net/netfilter/nft_set_rbtree.c 119 */;
	const struct net *cocci_id/* net/netfilter/nft_set_rbtree.c 119 */;
}
