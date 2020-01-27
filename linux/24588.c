cocci_test_suite() {
	struct sk_psock_link *cocci_id/* net/core/sock_map.c 998 */;
	void cocci_id/* net/core/sock_map.c 998 */;
	const struct bpf_map_ops cocci_id/* net/core/sock_map.c 948 */;
	const struct bpf_func_proto cocci_id/* net/core/sock_map.c 938 */;
	struct hlist_node *cocci_id/* net/core/sock_map.c 855 */;
	struct bpf_htab_bucket cocci_id/* net/core/sock_map.c 819 */;
	struct bpf_htab_elem cocci_id/* net/core/sock_map.c 816 */;
	u64 cocci_id/* net/core/sock_map.c 797 */;
	union bpf_attr *cocci_id/* net/core/sock_map.c 793 */;
	struct hlist_head *cocci_id/* net/core/sock_map.c 759 */;
	struct socket *cocci_id/* net/core/sock_map.c 727 */;
	u32 *cocci_id/* net/core/sock_map.c 726 */;
	struct fd cocci_id/* net/core/sock_map.c 67 */;
	struct sk_psock *cocci_id/* net/core/sock_map.c 664 */;
	struct inet_connection_sock *cocci_id/* net/core/sock_map.c 659 */;
	const union bpf_attr *cocci_id/* net/core/sock_map.c 63 */;
	struct bpf_prog *cocci_id/* net/core/sock_map.c 63 */;
	struct bpf_htab_elem *cocci_id/* net/core/sock_map.c 563 */;
	struct bpf_htab_bucket *cocci_id/* net/core/sock_map.c 562 */;
	u32 cocci_id/* net/core/sock_map.c 561 */;
	struct bpf_htab cocci_id/* net/core/sock_map.c 560 */;
	struct bpf_htab *cocci_id/* net/core/sock_map.c 560 */;
	struct sock *cocci_id/* net/core/sock_map.c 558 */;
	struct bpf_map *cocci_id/* net/core/sock_map.c 558 */;
	void *cocci_id/* net/core/sock_map.c 558 */;
	const void *cocci_id/* net/core/sock_map.c 532 */;
	struct bpf_htab {
		struct bpf_map map;
		struct bpf_htab_bucket *buckets;
		u32 buckets_num;
		u32 elem_size;
		struct sk_psock_progs progs;
		atomic_t count;
	} cocci_id/* net/core/sock_map.c 523 */;
	struct bpf_htab_bucket {
		struct hlist_head head;
		raw_spinlock_t lock;
	} cocci_id/* net/core/sock_map.c 518 */;
	struct bpf_htab_elem {
		struct rcu_head rcu;
		u32 hash;
		struct sock *sk;
		struct hlist_node node;
		u8 key[0];
	} cocci_id/* net/core/sock_map.c 510 */;
	const struct sock *cocci_id/* net/core/sock_map.c 393 */;
	const struct bpf_sock_ops_kern *cocci_id/* net/core/sock_map.c 387 */;
	struct sock **cocci_id/* net/core/sock_map.c 278 */;
	struct bpf_stab *cocci_id/* net/core/sock_map.c 277 */;
	int cocci_id/* net/core/sock_map.c 277 */;
	struct bpf_stab cocci_id/* net/core/sock_map.c 263 */;
	struct sk_psock_progs *cocci_id/* net/core/sock_map.c 142 */;
	struct bpf_stab {
		struct bpf_map map;
		struct sock **sks;
		struct sk_psock_progs progs;
		raw_spinlock_t lock;
	} cocci_id/* net/core/sock_map.c 14 */;
	bool cocci_id/* net/core/sock_map.c 110 */;
}
