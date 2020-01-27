cocci_test_suite() {
	const struct bpf_func_proto cocci_id/* net/core/bpf_sk_storage.c 905 */;
	const struct bpf_map_ops cocci_id/* net/core/bpf_sk_storage.c 884 */;
	struct bpf_sk_storage {
		struct bpf_sk_storage_data __rcu *cache[BPF_SK_STORAGE_CACHE_SIZE];
		struct hlist_head list;
		struct sock *sk;
		struct rcu_head rcu;
		raw_spinlock_t lock;
	} cocci_id/* net/core/bpf_sk_storage.c 83 */;
	const struct sock *cocci_id/* net/core/bpf_sk_storage.c 772 */;
	int *cocci_id/* net/core/bpf_sk_storage.c 740 */;
	struct socket *cocci_id/* net/core/bpf_sk_storage.c 737 */;
	struct bpf_map *cocci_id/* net/core/bpf_sk_storage.c 735 */;
	void *cocci_id/* net/core/bpf_sk_storage.c 735 */;
	int cocci_id/* net/core/bpf_sk_storage.c 735 */;
	u64 cocci_id/* net/core/bpf_sk_storage.c 718 */;
	u32 *cocci_id/* net/core/bpf_sk_storage.c 693 */;
	const struct btf_type *cocci_id/* net/core/bpf_sk_storage.c 685 */;
	const struct btf *cocci_id/* net/core/bpf_sk_storage.c 684 */;
	const struct bpf_map *cocci_id/* net/core/bpf_sk_storage.c 683 */;
	struct bpf_sk_storage_elem cocci_id/* net/core/bpf_sk_storage.c 670 */;
	struct bpf_sk_storage_elem {
		struct hlist_node map_node;
		struct hlist_node snode;
		struct bpf_sk_storage __rcu *sk_storage;
		struct rcu_head rcu;
		struct bpf_sk_storage_data sdata ____cacheline_aligned;
	} cocci_id/* net/core/bpf_sk_storage.c 67 */;
	u32 cocci_id/* net/core/bpf_sk_storage.c 637 */;
	unsigned int cocci_id/* net/core/bpf_sk_storage.c 636 */;
	union bpf_attr *cocci_id/* net/core/bpf_sk_storage.c 633 */;
	struct bucket *cocci_id/* net/core/bpf_sk_storage.c 557 */;
	struct bpf_sk_storage_data {
		struct bpf_sk_storage_map __rcu *smap;
		u8 data[0]__aligned(8);
	} cocci_id/* net/core/bpf_sk_storage.c 55 */;
	struct hlist_node *cocci_id/* net/core/bpf_sk_storage.c 520 */;
	struct bpf_sk_storage_map {
		struct bpf_map map;
		struct bucket *buckets;
		u32 bucket_log;
		u16 elem_size;
		u16 cache_idx;
	} cocci_id/* net/core/bpf_sk_storage.c 41 */;
	struct bpf_sk_storage **cocci_id/* net/core/bpf_sk_storage.c 357 */;
	const struct bpf_sk_storage_data *cocci_id/* net/core/bpf_sk_storage.c 312 */;
	struct bpf_sk_storage_data *cocci_id/* net/core/bpf_sk_storage.c 260 */;
	struct bpf_sk_storage_elem *cocci_id/* net/core/bpf_sk_storage.c 216 */;
	struct bpf_sk_storage *cocci_id/* net/core/bpf_sk_storage.c 215 */;
	void cocci_id/* net/core/bpf_sk_storage.c 215 */;
	struct bucket {
		struct hlist_head list;
		raw_spinlock_t lock;
	} cocci_id/* net/core/bpf_sk_storage.c 18 */;
	struct bpf_sk_storage cocci_id/* net/core/bpf_sk_storage.c 167 */;
	struct sock *cocci_id/* net/core/bpf_sk_storage.c 153 */;
	struct bpf_sk_storage_map *cocci_id/* net/core/bpf_sk_storage.c 151 */;
	bool cocci_id/* net/core/bpf_sk_storage.c 147 */;
	atomic_t cocci_id/* net/core/bpf_sk_storage.c 13 */;
	const struct bpf_sk_storage_elem *cocci_id/* net/core/bpf_sk_storage.c 116 */;
}
