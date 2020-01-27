cocci_test_suite() {
	__u32 cocci_id/* lib/test_bpf.c 91 */;
	void __exit cocci_id/* lib/test_bpf.c 7049 */;
	int __init cocci_id/* lib/test_bpf.c 7033 */;
	const struct skb_segment_test *cocci_id/* lib/test_bpf.c 6966 */;
	struct skb_segment_test cocci_id/* lib/test_bpf.c 6922 */[]__initconst;
	struct skb_segment_test {
		const char *descr;
		struct sk_buff *(*build_skb)(void);
		netdev_features_t features;
	} cocci_id/* lib/test_bpf.c 6916 */;
	struct page *cocci_id/* lib/test_bpf.c 6807 */[2];
	struct sk_buff *cocci_id/* lib/test_bpf.c 6806 */[2];
	u32 cocci_id/* lib/test_bpf.c 6805 */;
	struct sk_buff *cocci_id/* lib/test_bpf.c 6803 */;
	void cocci_id/* lib/test_bpf.c 6803 */;
	bool cocci_id/* lib/test_bpf.c 6798 */;
	const char *cocci_id/* lib/test_bpf.c 6721 */;
	int cocci_id/* lib/test_bpf.c 6718 */[2];
	char cocci_id/* lib/test_bpf.c 6712 */[64];
	u64 cocci_id/* lib/test_bpf.c 6660 */;
	u64 *cocci_id/* lib/test_bpf.c 6658 */;
	const struct bpf_prog *cocci_id/* lib/test_bpf.c 6657 */;
	const void *cocci_id/* lib/test_bpf.c 6657 */;
	struct bpf_insn cocci_id/* lib/test_bpf.c 6625 */;
	struct sock_fprog_kern cocci_id/* lib/test_bpf.c 6583 */;
	__u8 cocci_id/* lib/test_bpf.c 6580 */;
	struct bpf_prog *cocci_id/* lib/test_bpf.c 6578 */;
	int *cocci_id/* lib/test_bpf.c 6578 */;
	void *cocci_id/* lib/test_bpf.c 6570 */;
	const struct bpf_test *cocci_id/* lib/test_bpf.c 6546 */;
	struct page *cocci_id/* lib/test_bpf.c 6503 */;
	char *cocci_id/* lib/test_bpf.c 6468 */;
	struct net_device cocci_id/* lib/test_bpf.c 6466 */;
	struct bpf_test {
		const char *descr;
		union {
			struct sock_filter insns[MAX_INSNS];
			struct bpf_insn insns_int[MAX_INSNS];
			struct {
				void *insns;
				unsigned int len;
			} ptr;
		} u;
		__u8 aux;
		__u8 data[MAX_DATA];
		struct {
			int data_size;
			__u32 result;
		} test[MAX_SUBTESTS];
		int (*fill_helper)(struct bpf_test *self);
		int expected_errcode;
		__u8 frag_data[MAX_DATA];
		int stack_depth;
	} cocci_id/* lib/test_bpf.c 63 */;
	enum{CLASSIC=BIT(6), INTERNAL=BIT(7),} cocci_id/* lib/test_bpf.c 56 */;
	struct bpf_test cocci_id/* lib/test_bpf.c 464 */[];
	struct bpf_insn *cocci_id/* lib/test_bpf.c 431 */;
	struct sock_filter *cocci_id/* lib/test_bpf.c 320 */;
	struct bpf_test *cocci_id/* lib/test_bpf.c 317 */;
	unsigned int cocci_id/* lib/test_bpf.c 317 */;
	int cocci_id/* lib/test_bpf.c 317 */;
	struct rnd_state cocci_id/* lib/test_bpf.c 130 */;
}
