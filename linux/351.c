cocci_test_suite() {
	const struct bpf_map_ops cocci_id/* kernel/bpf/lpm_trie.c 738 */;
	const struct btf_type *cocci_id/* kernel/bpf/lpm_trie.c 730 */;
	const struct btf *cocci_id/* kernel/bpf/lpm_trie.c 729 */;
	const struct bpf_map *cocci_id/* kernel/bpf/lpm_trie.c 728 */;
	struct lpm_trie_node **cocci_id/* kernel/bpf/lpm_trie.c 635 */;
	void cocci_id/* kernel/bpf/lpm_trie.c 586 */;
	struct lpm_trie *cocci_id/* kernel/bpf/lpm_trie.c 542 */;
	union bpf_attr *cocci_id/* kernel/bpf/lpm_trie.c 540 */;
	struct bpf_map *cocci_id/* kernel/bpf/lpm_trie.c 540 */;
	unsigned int cocci_id/* kernel/bpf/lpm_trie.c 438 */;
	unsigned long cocci_id/* kernel/bpf/lpm_trie.c 437 */;
	struct lpm_trie_node __rcu **cocci_id/* kernel/bpf/lpm_trie.c 435 */;
	struct bpf_lpm_trie_key *cocci_id/* kernel/bpf/lpm_trie.c 434 */;
	struct lpm_trie cocci_id/* kernel/bpf/lpm_trie.c 433 */;
	void *cocci_id/* kernel/bpf/lpm_trie.c 431 */;
	struct lpm_trie {
		struct bpf_map map;
		struct lpm_trie_node __rcu *root;
		size_t n_entries;
		size_t max_prefixlen;
		size_t data_size;
		raw_spinlock_t lock;
	} cocci_id/* kernel/bpf/lpm_trie.c 31 */;
	const void *cocci_id/* kernel/bpf/lpm_trie.c 277 */;
	struct lpm_trie_node *cocci_id/* kernel/bpf/lpm_trie.c 276 */;
	struct lpm_trie_node {
		struct rcu_head rcu;
		struct lpm_trie_node __rcu *child[2];
		u32 prefixlen;
		u32 flags;
		u8 data[0];
	} cocci_id/* kernel/bpf/lpm_trie.c 23 */;
	u16 cocci_id/* kernel/bpf/lpm_trie.c 205 */;
	__be16 *cocci_id/* kernel/bpf/lpm_trie.c 205 */;
	__be32 *cocci_id/* kernel/bpf/lpm_trie.c 193 */;
	u64 cocci_id/* kernel/bpf/lpm_trie.c 180 */;
	__be64 *cocci_id/* kernel/bpf/lpm_trie.c 180 */;
	struct bpf_lpm_trie_key cocci_id/* kernel/bpf/lpm_trie.c 172 */;
	struct lpm_trie_node cocci_id/* kernel/bpf/lpm_trie.c 171 */;
	u32 cocci_id/* kernel/bpf/lpm_trie.c 168 */;
	const struct bpf_lpm_trie_key *cocci_id/* kernel/bpf/lpm_trie.c 166 */;
	const struct lpm_trie_node *cocci_id/* kernel/bpf/lpm_trie.c 165 */;
	const struct lpm_trie *cocci_id/* kernel/bpf/lpm_trie.c 164 */;
	const u8 *cocci_id/* kernel/bpf/lpm_trie.c 151 */;
	int cocci_id/* kernel/bpf/lpm_trie.c 151 */;
	size_t cocci_id/* kernel/bpf/lpm_trie.c 151 */;
}
