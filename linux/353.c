cocci_test_suite() {
	const struct bpf_map *cocci_id/* kernel/bpf/hashtab.c 90 */;
	void __percpu **cocci_id/* kernel/bpf/hashtab.c 87 */;
	void __percpu *cocci_id/* kernel/bpf/hashtab.c 729 */;
	const struct bpf_htab *cocci_id/* kernel/bpf/hashtab.c 715 */;
	struct rcu_head *cocci_id/* kernel/bpf/hashtab.c 662 */;
	bool cocci_id/* kernel/bpf/hashtab.c 60 */(void *arg,
						   struct bpf_lru_node *node);
	struct bpf_lru_node *cocci_id/* kernel/bpf/hashtab.c 570 */;
	struct bpf_lru_node cocci_id/* kernel/bpf/hashtab.c 555 */;
	void *(*cocci_id/* kernel/bpf/hashtab.c 550 */)(struct bpf_map *map,
							void *key);
	const int cocci_id/* kernel/bpf/hashtab.c 546 */;
	struct bpf_insn *cocci_id/* kernel/bpf/hashtab.c 543 */;
	struct htab_elem *cocci_id/* kernel/bpf/hashtab.c 521 */;
	const bool cocci_id/* kernel/bpf/hashtab.c 519 */;
	struct bpf_map *cocci_id/* kernel/bpf/hashtab.c 518 */;
	void *cocci_id/* kernel/bpf/hashtab.c 518 */;
	struct htab_elem {
		union {
			struct hlist_nulls_node hash_node;
			struct {
				void *padding;
				union {
					struct bpf_htab *htab;
					struct pcpu_freelist_node fnode;
				};
			};
		};
		union {
			struct rcu_head rcu;
			struct bpf_lru_node lru_node;
		};
		u32 hash;
		char key[0]__aligned(8);
	} cocci_id/* kernel/bpf/hashtab.c 41 */;
	const void *cocci_id/* kernel/bpf/hashtab.c 405 */;
	struct bucket cocci_id/* kernel/bpf/hashtab.c 343 */;
	struct bpf_htab {
		struct bpf_map map;
		struct bucket *buckets;
		void *elems;
		union {
			struct pcpu_freelist freelist;
			struct bpf_lru lru;
		};
		struct htab_elem *__percpu*extra_elems;
		atomic_t count;
		u32 n_buckets;
		u32 elem_size;
		u32 hashrnd;
	} cocci_id/* kernel/bpf/hashtab.c 25 */;
	struct htab_elem cocci_id/* kernel/bpf/hashtab.c 218 */;
	struct pcpu_freelist_node *cocci_id/* kernel/bpf/hashtab.c 205 */;
	struct htab_elem *__percpu*cocci_id/* kernel/bpf/hashtab.c 204 */;
	struct bucket {
		struct hlist_nulls_head head;
		raw_spinlock_t lock;
	} cocci_id/* kernel/bpf/hashtab.c 20 */;
	struct bpf_map **cocci_id/* kernel/bpf/hashtab.c 1472 */;
	struct file *cocci_id/* kernel/bpf/hashtab.c 1433 */;
	void **cocci_id/* kernel/bpf/hashtab.c 1415 */;
	u32 *cocci_id/* kernel/bpf/hashtab.c 1413 */;
	union bpf_attr *cocci_id/* kernel/bpf/hashtab.c 1384 */;
	const struct bpf_map_ops cocci_id/* kernel/bpf/hashtab.c 1247 */;
	struct seq_file *cocci_id/* kernel/bpf/hashtab.c 1215 */;
	struct hlist_nulls_node *cocci_id/* kernel/bpf/hashtab.c 1178 */;
	void cocci_id/* kernel/bpf/hashtab.c 1172 */;
	u32 cocci_id/* kernel/bpf/hashtab.c 1037 */;
	struct bucket *cocci_id/* kernel/bpf/hashtab.c 1036 */;
	unsigned long cocci_id/* kernel/bpf/hashtab.c 1035 */;
	struct hlist_nulls_head *cocci_id/* kernel/bpf/hashtab.c 1034 */;
	struct bpf_htab cocci_id/* kernel/bpf/hashtab.c 1032 */;
	struct bpf_htab *cocci_id/* kernel/bpf/hashtab.c 1032 */;
	bool cocci_id/* kernel/bpf/hashtab.c 1030 */;
	u64 cocci_id/* kernel/bpf/hashtab.c 1029 */;
	int cocci_id/* kernel/bpf/hashtab.c 1028 */;
}
