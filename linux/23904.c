cocci_test_suite() {
	struct rb_node **cocci_id/* net/xfrm/xfrm_policy.c 979 */;
	struct xfrm_pol_inexact_node *cocci_id/* net/xfrm/xfrm_policy.c 775 */;
	struct xfrm_pol_inexact_key cocci_id/* net/xfrm/xfrm_policy.c 693 */;
	struct xfrmk_spdinfo *cocci_id/* net/xfrm/xfrm_policy.c 653 */;
	struct xfrm_pol_inexact_node {
		struct rb_node node;
		union {
			xfrm_address_t addr;
			struct rcu_head rcu;
		};
		u8 prefixlen;
		struct rb_root root;
		struct hlist_head hhead;
	} cocci_id/* net/xfrm/xfrm_policy.c 58 */;
	struct hlist_head cocci_id/* net/xfrm/xfrm_policy.c 574 */;
	struct hlist_node *cocci_id/* net/xfrm/xfrm_policy.c 519 */;
	struct xfrm_flo {
		struct dst_entry *dst_orig;
		u8 flags;
	} cocci_id/* net/xfrm/xfrm_policy.c 49 */;
	u8 *cocci_id/* net/xfrm/xfrm_policy.c 458 */;
	unsigned short cocci_id/* net/xfrm/xfrm_policy.c 457 */;
	int cocci_id/* net/xfrm/xfrm_policy.c 457 */;
	struct net *cocci_id/* net/xfrm/xfrm_policy.c 456 */;
	void cocci_id/* net/xfrm/xfrm_policy.c 456 */;
	unsigned cocci_id/* net/xfrm/xfrm_policy.c 45 */;
	struct xfrm_state *cocci_id/* net/xfrm/xfrm_policy.c 4394 */[XFRM_MAX_DEPTH];
	struct xfrm_encap_tmpl *cocci_id/* net/xfrm/xfrm_policy.c 4389 */;
	struct xfrm_kmaddress *cocci_id/* net/xfrm/xfrm_policy.c 4388 */;
	struct xfrm_migrate *cocci_id/* net/xfrm/xfrm_policy.c 4387 */;
	const struct xfrm_tmpl *cocci_id/* net/xfrm/xfrm_policy.c 4287 */;
	const struct xfrm_migrate *cocci_id/* net/xfrm/xfrm_policy.c 4287 */;
	struct audit_buffer *cocci_id/* net/xfrm/xfrm_policy.c 4166 */;
	void __init cocci_id/* net/xfrm/xfrm_policy.c 4153 */;
	struct pernet_operations __net_initdata cocci_id/* net/xfrm/xfrm_policy.c 4148 */;
	void __net_exit cocci_id/* net/xfrm/xfrm_policy.c 4140 */;
	int __net_init cocci_id/* net/xfrm/xfrm_policy.c 4106 */;
	struct xfrm_policy_hash *cocci_id/* net/xfrm/xfrm_policy.c 4086 */;
	struct rcu_head *cocci_id/* net/xfrm/xfrm_policy.c 407 */;
	struct xfrm_dst cocci_id/* net/xfrm/xfrm_policy.c 4013 */;
	struct linux_xfrm_mib cocci_id/* net/xfrm/xfrm_policy.c 3981 */;
	const struct dst_entry *cocci_id/* net/xfrm/xfrm_policy.c 3897 */;
	const void *cocci_id/* net/xfrm/xfrm_policy.c 3897 */;
	struct neighbour *cocci_id/* net/xfrm/xfrm_policy.c 3886 */;
	struct xfrm_policy cocci_id/* net/xfrm/xfrm_policy.c 388 */;
	const struct xfrm_state *cocci_id/* net/xfrm/xfrm_policy.c 3872 */;
	gfp_t cocci_id/* net/xfrm/xfrm_policy.c 384 */;
	struct xfrm_dst *cocci_id/* net/xfrm/xfrm_policy.c 3790 */[XFRM_MAX_DEPTH];
	struct xfrm_dst *cocci_id/* net/xfrm/xfrm_policy.c 3732 */;
	struct xfrm_tmpl **cocci_id/* net/xfrm/xfrm_policy.c 3609 */;
	struct xfrm_tmpl *cocci_id/* net/xfrm/xfrm_policy.c 3607 */[XFRM_MAX_DEPTH];
	struct sec_path cocci_id/* net/xfrm/xfrm_policy.c 3606 */;
	struct xfrm_state *cocci_id/* net/xfrm/xfrm_policy.c 3550 */;
	struct xfrm_if *cocci_id/* net/xfrm/xfrm_policy.c 3519 */;
	struct sec_path *cocci_id/* net/xfrm/xfrm_policy.c 3518 */;
	const struct xfrm_if_cb *cocci_id/* net/xfrm/xfrm_policy.c 3517 */;
	struct flowi cocci_id/* net/xfrm/xfrm_policy.c 3515 */;
	struct xfrm_policy *cocci_id/* net/xfrm/xfrm_policy.c 3510 */[XFRM_POLICY_TYPE_MAX];
	struct sock *cocci_id/* net/xfrm/xfrm_policy.c 3505 */;
	const struct sec_path *cocci_id/* net/xfrm/xfrm_policy.c 3493 */;
	int *cocci_id/* net/xfrm/xfrm_policy.c 3493 */;
	unsigned int cocci_id/* net/xfrm/xfrm_policy.c 3474 */;
	struct sk_buff *cocci_id/* net/xfrm/xfrm_policy.c 3473 */;
	struct flowi *cocci_id/* net/xfrm/xfrm_policy.c 3473 */;
	struct ip6_mh *cocci_id/* net/xfrm/xfrm_policy.c 3451 */;
	struct flowi6 cocci_id/* net/xfrm/xfrm_policy.c 3395 */;
	struct ipv6hdr cocci_id/* net/xfrm/xfrm_policy.c 3388 */;
	const unsigned char *cocci_id/* net/xfrm/xfrm_policy.c 3382 */;
	struct ipv6_opt_hdr *cocci_id/* net/xfrm/xfrm_policy.c 3381 */;
	const struct ipv6hdr *cocci_id/* net/xfrm/xfrm_policy.c 3379 */;
	struct flowi6 *cocci_id/* net/xfrm/xfrm_policy.c 3377 */;
	__be32 *cocci_id/* net/xfrm/xfrm_policy.c 3319 */;
	__be16 *cocci_id/* net/xfrm/xfrm_policy.c 3295 */;
	struct flowi4 cocci_id/* net/xfrm/xfrm_policy.c 3277 */;
	struct flowi4 *cocci_id/* net/xfrm/xfrm_policy.c 3271 */;
	const struct iphdr *cocci_id/* net/xfrm/xfrm_policy.c 3268 */;
	time64_t cocci_id/* net/xfrm/xfrm_policy.c 313 */;
	struct xfrm_flo cocci_id/* net/xfrm/xfrm_policy.c 3072 */;
	unsigned long cocci_id/* net/xfrm/xfrm_policy.c 302 */;
	long cocci_id/* net/xfrm/xfrm_policy.c 302 */;
	struct xfrm_flo *cocci_id/* net/xfrm/xfrm_policy.c 2932 */;
	struct xfrm_policy_queue *cocci_id/* net/xfrm/xfrm_policy.c 2834 */;
	struct sk_buff_head cocci_id/* net/xfrm/xfrm_policy.c 2761 */;
	struct timer_list *cocci_id/* net/xfrm/xfrm_policy.c 2752 */;
	xfrm_address_t *cocci_id/* net/xfrm/xfrm_policy.c 272 */;
	struct xfrm_policy **cocci_id/* net/xfrm/xfrm_policy.c 2670 */;
	__u32 cocci_id/* net/xfrm/xfrm_policy.c 2595 */;
	xfrm_address_t cocci_id/* net/xfrm/xfrm_policy.c 2553 */;
	const struct xfrm_policy_afinfo *cocci_id/* net/xfrm/xfrm_policy.c 255 */;
	struct net_device *cocci_id/* net/xfrm/xfrm_policy.c 2543 */;
	const struct xfrm_mode *cocci_id/* net/xfrm/xfrm_policy.c 2540 */;
	const struct xfrm_state_afinfo *cocci_id/* net/xfrm/xfrm_policy.c 2539 */;
	struct xfrm_dst **cocci_id/* net/xfrm/xfrm_policy.c 2534 */;
	struct xfrm_state **cocci_id/* net/xfrm/xfrm_policy.c 2533 */;
	u32 cocci_id/* net/xfrm/xfrm_policy.c 253 */;
	const xfrm_address_t *cocci_id/* net/xfrm/xfrm_policy.c 251 */;
	struct rt6_info *cocci_id/* net/xfrm/xfrm_policy.c 2504 */;
	struct dst_entry *cocci_id/* net/xfrm/xfrm_policy.c 250 */;
	struct dst_ops *cocci_id/* net/xfrm/xfrm_policy.c 2468 */;
	struct xfrm_tmpl *cocci_id/* net/xfrm/xfrm_policy.c 2375 */;
	const struct xfrm_policy *cocci_id/* net/xfrm/xfrm_policy.c 2324 */;
	const struct sock *cocci_id/* net/xfrm/xfrm_policy.c 2322 */;
	struct xfrm_tmpl cocci_id/* net/xfrm/xfrm_policy.c 2313 */;
	const struct flowi6 *cocci_id/* net/xfrm/xfrm_policy.c 209 */;
	struct xfrm_pol_inexact_candidates *cocci_id/* net/xfrm/xfrm_policy.c 2050 */;
	u16 cocci_id/* net/xfrm/xfrm_policy.c 2014 */;
	const struct flowi4 *cocci_id/* net/xfrm/xfrm_policy.c 196 */;
	const struct xfrm_selector *cocci_id/* net/xfrm/xfrm_policy.c 194 */;
	const struct flowi *cocci_id/* net/xfrm/xfrm_policy.c 194 */;
	bool cocci_id/* net/xfrm/xfrm_policy.c 193 */;
	const struct rb_node *cocci_id/* net/xfrm/xfrm_policy.c 1912 */;
	seqcount_t *cocci_id/* net/xfrm/xfrm_policy.c 1909 */;
	const struct rb_root *cocci_id/* net/xfrm/xfrm_policy.c 1908 */;
	struct xfrm_policy_walk_entry cocci_id/* net/xfrm/xfrm_policy.c 1830 */;
	bool cocci_id/* net/xfrm/xfrm_policy.c 182 */(struct xfrm_pol_inexact_candidates *cand,
						      struct xfrm_pol_inexact_bin *b,
						      const xfrm_address_t *saddr,
						      const xfrm_address_t *daddr);
	struct xfrm_policy_walk_entry *cocci_id/* net/xfrm/xfrm_policy.c 1818 */;
	int (*cocci_id/* net/xfrm/xfrm_policy.c 1814 */)(struct xfrm_policy *,
							 int, int, void *);
	struct xfrm_policy_walk *cocci_id/* net/xfrm/xfrm_policy.c 1813 */;
	void cocci_id/* net/xfrm/xfrm_policy.c 179 */(struct hlist_head *chain,
						      struct xfrm_policy *policy);
	struct xfrm_policy *cocci_id/* net/xfrm/xfrm_policy.c 176 */(struct hlist_head *chain,
								     struct xfrm_policy *policy,
								     bool excl);
	struct xfrm_pol_inexact_bin *cocci_id/* net/xfrm/xfrm_policy.c 169 */(struct net *net,
									      u8 type,
									      u16 family,
									      u8 dir,
									      u32 if_id);
	struct xfrm_policy *cocci_id/* net/xfrm/xfrm_policy.c 166 */(struct xfrm_policy *pol,
								     int dir);
	void cocci_id/* net/xfrm/xfrm_policy.c 165 */(struct xfrm_policy *pol,
						      int dir);
	struct xfrm_pol_inexact_candidates cocci_id/* net/xfrm/xfrm_policy.c 1649 */;
	void cocci_id/* net/xfrm/xfrm_policy.c 163 */(struct timer_list *t);
	int cocci_id/* net/xfrm/xfrm_policy.c 162 */(struct xfrm_dst *xdst);
	struct xfrm_sec_ctx *cocci_id/* net/xfrm/xfrm_policy.c 1616 */;
	struct xfrm_selector *cocci_id/* net/xfrm/xfrm_policy.c 1615 */;
	u8 cocci_id/* net/xfrm/xfrm_policy.c 1614 */;
	struct hlist_head *cocci_id/* net/xfrm/xfrm_policy.c 1613 */;
	struct xfrm_policy *cocci_id/* net/xfrm/xfrm_policy.c 1612 */;
	int cocci_id/* net/xfrm/xfrm_policy.c 161 */(struct dst_entry *dst);
	void cocci_id/* net/xfrm/xfrm_policy.c 160 */(struct xfrm_dst **bundle,
						      int nr);
	const struct rhashtable_params cocci_id/* net/xfrm/xfrm_policy.c 158 */;
	struct rhashtable cocci_id/* net/xfrm/xfrm_policy.c 157 */;
	seqcount_t cocci_id/* net/xfrm/xfrm_policy.c 155 */;
	struct kmem_cache *cocci_id/* net/xfrm/xfrm_policy.c 154 */;
	const __rcu struct xfrm_policy_afinfo *cocci_id/* net/xfrm/xfrm_policy.c 151 */[AF_INET6 + 1]
						__read_mostly;
	struct xfrm_pol_inexact_bin cocci_id/* net/xfrm/xfrm_policy.c 1488 */;
	const __rcu struct xfrm_if_cb *cocci_id/* net/xfrm/xfrm_policy.c 148 */;
	const struct xfrm_pol_inexact_bin *cocci_id/* net/xfrm/xfrm_policy.c 1466 */;
	const struct xfrm_pol_inexact_key *cocci_id/* net/xfrm/xfrm_policy.c 1465 */;
	struct rhashtable_compare_arg *cocci_id/* net/xfrm/xfrm_policy.c 1462 */;
	struct xfrm_pol_inexact_candidates {
		struct hlist_head *res[XFRM_POL_CAND_MAX];
	} cocci_id/* net/xfrm/xfrm_policy.c 143 */;
	struct xfrm_selector cocci_id/* net/xfrm/xfrm_policy.c 1393 */;
	u32 *cocci_id/* net/xfrm/xfrm_policy.c 1391 */;
	enum xfrm_pol_inexact_candidate_type{XFRM_POL_CAND_BOTH, XFRM_POL_CAND_SADDR, XFRM_POL_CAND_DADDR, XFRM_POL_CAND_ANY, XFRM_POL_CAND_MAX,} cocci_id/* net/xfrm/xfrm_policy.c 134 */;
	void *cocci_id/* net/xfrm/xfrm_policy.c 1322 */;
	struct net cocci_id/* net/xfrm/xfrm_policy.c 1207 */;
	struct work_struct *cocci_id/* net/xfrm/xfrm_policy.c 1205 */;
	struct xfrm_pol_inexact_bin {
		struct xfrm_pol_inexact_key k;
		struct rhash_head head;
		struct hlist_head hhead;
		seqcount_t count;
		struct rb_root root_d;
		struct rb_root root_s;
		struct list_head inexact_bins;
		struct rcu_head rcu;
	} cocci_id/* net/xfrm/xfrm_policy.c 116 */;
	struct xfrm_pol_inexact_bin *cocci_id/* net/xfrm/xfrm_policy.c 1101 */;
	struct xfrm_pol_inexact_key {
		possible_net_t net;
		u32 if_id;
		u16 family;
		u8 dir,type;
	} cocci_id/* net/xfrm/xfrm_policy.c 109 */;
	struct xfrm_pol_inexact_node cocci_id/* net/xfrm/xfrm_policy.c 1055 */;
	struct rb_node *cocci_id/* net/xfrm/xfrm_policy.c 1052 */;
	struct rb_root *cocci_id/* net/xfrm/xfrm_policy.c 1049 */;
}
