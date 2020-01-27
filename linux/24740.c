cocci_test_suite() {
	struct nft_set_type cocci_id/* net/netfilter/nft_set_hash.c 709 */;
	struct nft_rhash_elem cocci_id/* net/netfilter/nft_set_hash.c 70 */;
	const struct rhashtable_params cocci_id/* net/netfilter/nft_set_hash.c 69 */;
	struct nft_hash_elem cocci_id/* net/netfilter/nft_set_hash.c 640 */;
	struct hlist_head cocci_id/* net/netfilter/nft_set_hash.c 639 */;
	struct nft_hash cocci_id/* net/netfilter/nft_set_hash.c 638 */;
	struct nft_set_estimate *cocci_id/* net/netfilter/nft_set_hash.c 630 */;
	bool cocci_id/* net/netfilter/nft_set_hash.c 629 */;
	const struct nft_set_desc *cocci_id/* net/netfilter/nft_set_hash.c 629 */;
	int cocci_id/* net/netfilter/nft_set_hash.c 619 */;
	struct hlist_node *cocci_id/* net/netfilter/nft_set_hash.c 618 */;
	const struct nlattr *const cocci_id/* net/netfilter/nft_set_hash.c 604 */[];
	u64 cocci_id/* net/netfilter/nft_set_hash.c 595 */;
	const struct nft_rhash_elem *cocci_id/* net/netfilter/nft_set_hash.c 58 */;
	struct nft_set_elem cocci_id/* net/netfilter/nft_set_hash.c 574 */;
	struct nft_set_iter *cocci_id/* net/netfilter/nft_set_hash.c 570 */;
	const struct nft_rhash_cmp_arg *cocci_id/* net/netfilter/nft_set_hash.c 57 */;
	const struct nft_ctx *cocci_id/* net/netfilter/nft_set_hash.c 569 */;
	struct nft_set *cocci_id/* net/netfilter/nft_set_hash.c 569 */;
	const void *cocci_id/* net/netfilter/nft_set_hash.c 55 */;
	u8 cocci_id/* net/netfilter/nft_set_hash.c 545 */;
	struct nft_hash *cocci_id/* net/netfilter/nft_set_hash.c 543 */;
	struct rhashtable_compare_arg *cocci_id/* net/netfilter/nft_set_hash.c 54 */;
	void *cocci_id/* net/netfilter/nft_set_hash.c 539 */;
	struct nft_hash_elem *cocci_id/* net/netfilter/nft_set_hash.c 525 */;
	const struct nft_set_elem *cocci_id/* net/netfilter/nft_set_hash.c 523 */;
	const struct nft_set *cocci_id/* net/netfilter/nft_set_hash.c 522 */;
	const struct net *cocci_id/* net/netfilter/nft_set_hash.c 522 */;
	void cocci_id/* net/netfilter/nft_set_hash.c 522 */;
	struct nft_set_ext **cocci_id/* net/netfilter/nft_set_hash.c 502 */;
	const struct nft_data *cocci_id/* net/netfilter/nft_set_hash.c 486 */;
	const struct nft_set_ext *cocci_id/* net/netfilter/nft_set_hash.c 484 */;
	const struct nft_hash *cocci_id/* net/netfilter/nft_set_hash.c 483 */;
	u32 *cocci_id/* net/netfilter/nft_set_hash.c 473 */;
	unsigned int cocci_id/* net/netfilter/nft_set_hash.c 443 */;
	const struct nft_hash_elem *cocci_id/* net/netfilter/nft_set_hash.c 427 */;
	const u32 *cocci_id/* net/netfilter/nft_set_hash.c 423 */;
	const struct nft_set_ext **cocci_id/* net/netfilter/nft_set_hash.c 423 */;
	struct nft_hash_elem {
		struct hlist_node node;
		struct nft_set_ext ext;
	} cocci_id/* net/netfilter/nft_set_hash.c 417 */;
	struct nft_hash {
		u32 seed;
		u32 buckets;
		struct hlist_head table[];
	} cocci_id/* net/netfilter/nft_set_hash.c 411 */;
	u32 cocci_id/* net/netfilter/nft_set_hash.c 396 */;
	struct rhashtable_params cocci_id/* net/netfilter/nft_set_hash.c 364 */;
	struct nft_rhash_cmp_arg {
		const struct nft_set *set;
		const u32 *key;
		u8 genmask;
	} cocci_id/* net/netfilter/nft_set_hash.c 34 */;
	struct nft_expr *cocci_id/* net/netfilter/nft_set_hash.c 318 */;
	struct nft_rhash cocci_id/* net/netfilter/nft_set_hash.c 304 */;
	struct rhashtable_iter cocci_id/* net/netfilter/nft_set_hash.c 302 */;
	struct nft_set_gc_batch *cocci_id/* net/netfilter/nft_set_hash.c 301 */;
	struct work_struct *cocci_id/* net/netfilter/nft_set_hash.c 296 */;
	struct nft_rhash_elem {
		struct rhash_head node;
		struct nft_set_ext ext;
	} cocci_id/* net/netfilter/nft_set_hash.c 29 */;
	struct nft_rhash {
		struct rhashtable ht;
		struct delayed_work gc_work;
	} cocci_id/* net/netfilter/nft_set_hash.c 24 */;
	struct nft_rhash_cmp_arg cocci_id/* net/netfilter/nft_set_hash.c 210 */;
	struct nft_rhash *cocci_id/* net/netfilter/nft_set_hash.c 208 */;
	struct nft_rhash_elem *cocci_id/* net/netfilter/nft_set_hash.c 185 */;
	struct nft_regs *cocci_id/* net/netfilter/nft_set_hash.c 118 */;
	const struct nft_expr *cocci_id/* net/netfilter/nft_set_hash.c 117 */;
	void *(*cocci_id/* net/netfilter/nft_set_hash.c 114 */)(struct nft_set *,
								const struct nft_expr *,
								struct nft_regs *regs);
}
