cocci_test_suite() {
	struct xt_hashlimit_mtinfo1 cocci_id/* net/netfilter/xt_hashlimit.c 994 */;
	struct xt_match cocci_id/* net/netfilter/xt_hashlimit.c 988 */[]__read_mostly;
	const struct xt_mtdtor_param *cocci_id/* net/netfilter/xt_hashlimit.c 981 */;
	const struct xt_hashlimit_mtinfo1 *cocci_id/* net/netfilter/xt_hashlimit.c 976 */;
	const struct xt_hashlimit_mtinfo2 *cocci_id/* net/netfilter/xt_hashlimit.c 969 */;
	struct xt_hashlimit_mtinfo3 *cocci_id/* net/netfilter/xt_hashlimit.c 956 */;
	const struct xt_mtchk_param *cocci_id/* net/netfilter/xt_hashlimit.c 954 */;
	struct xt_hashlimit_mtinfo2 *cocci_id/* net/netfilter/xt_hashlimit.c 938 */;
	struct xt_hashlimit_mtinfo1 *cocci_id/* net/netfilter/xt_hashlimit.c 920 */;
	struct dsthash_ent {
		struct hlist_node node;
		struct dsthash_dst dst;
		spinlock_t lock;
		unsigned long expires;
		struct {
			unsigned long prev;
			union {
				struct {
					u_int64_t credit;
					u_int64_t credit_cap;
					u_int64_t cost;
				};
				struct {
					u_int32_t interval,prev_window;
					u_int64_t current_rate;
					u_int64_t rate;
					int64_t burst;
				};
			};
		} rateinfo;
		struct rcu_head rcu;
	} cocci_id/* net/netfilter/xt_hashlimit.c 88 */;
	struct net *cocci_id/* net/netfilter/xt_hashlimit.c 859 */;
	const char *cocci_id/* net/netfilter/xt_hashlimit.c 857 */;
	struct xt_hashlimit_htable **cocci_id/* net/netfilter/xt_hashlimit.c 855 */;
	const struct xt_hashlimit_mtinfo3 *cocci_id/* net/netfilter/xt_hashlimit.c 848 */;
	struct xt_action_param *cocci_id/* net/netfilter/xt_hashlimit.c 846 */;
	struct dsthash_dst cocci_id/* net/netfilter/xt_hashlimit.c 749 */;
	unsigned long cocci_id/* net/netfilter/xt_hashlimit.c 747 */;
	const struct hashlimit_cfg3 *cocci_id/* net/netfilter/xt_hashlimit.c 745 */;
	u64 cocci_id/* net/netfilter/xt_hashlimit.c 729 */;
	struct ipv6hdr cocci_id/* net/netfilter/xt_hashlimit.c 699 */;
	__be16 cocci_id/* net/netfilter/xt_hashlimit.c 682 */;
	const struct seq_operations cocci_id/* net/netfilter/xt_hashlimit.c 68 */;
	u8 cocci_id/* net/netfilter/xt_hashlimit.c 660 */;
	__be16 cocci_id/* net/netfilter/xt_hashlimit.c 659 */[2];
	const struct sk_buff *cocci_id/* net/netfilter/xt_hashlimit.c 657 */;
	struct dsthash_dst *cocci_id/* net/netfilter/xt_hashlimit.c 656 */;
	__be32 *cocci_id/* net/netfilter/xt_hashlimit.c 630 */;
	__be32 cocci_id/* net/netfilter/xt_hashlimit.c 624 */;
	struct hashlimit_net {
		struct hlist_head htables;
		struct proc_dir_entry *ipt_hashlimit;
		struct proc_dir_entry *ip6t_hashlimit;
	} cocci_id/* net/netfilter/xt_hashlimit.c 53 */;
	struct proc_dir_entry *cocci_id/* net/netfilter/xt_hashlimit.c 407 */;
	struct xt_hashlimit_htable cocci_id/* net/netfilter/xt_hashlimit.c 396 */;
	struct work_struct *cocci_id/* net/netfilter/xt_hashlimit.c 392 */;
	struct hlist_node *cocci_id/* net/netfilter/xt_hashlimit.c 380 */;
	bool (*cocci_id/* net/netfilter/xt_hashlimit.c 373 */)(const struct xt_hashlimit_htable *ht,
							       const struct dsthash_ent *he);
	struct hlist_head cocci_id/* net/netfilter/xt_hashlimit.c 290 */;
	const struct seq_operations *cocci_id/* net/netfilter/xt_hashlimit.c 281 */;
	void cocci_id/* net/netfilter/xt_hashlimit.c 272 */(struct work_struct *work);
	struct dsthash_ent cocci_id/* net/netfilter/xt_hashlimit.c 260 */;
	struct rcu_head *cocci_id/* net/netfilter/xt_hashlimit.c 258 */;
	bool *cocci_id/* net/netfilter/xt_hashlimit.c 217 */;
	u_int32_t cocci_id/* net/netfilter/xt_hashlimit.c 202 */;
	const struct xt_hashlimit_htable *cocci_id/* net/netfilter/xt_hashlimit.c 198 */;
	u32 cocci_id/* net/netfilter/xt_hashlimit.c 186 */;
	const u32 *cocci_id/* net/netfilter/xt_hashlimit.c 185 */;
	const struct dsthash_dst *cocci_id/* net/netfilter/xt_hashlimit.c 177 */;
	bool cocci_id/* net/netfilter/xt_hashlimit.c 176 */;
	const struct dsthash_ent *cocci_id/* net/netfilter/xt_hashlimit.c 176 */;
	struct kmem_cache *cocci_id/* net/netfilter/xt_hashlimit.c 174 */;
	struct hashlimit_cfg3 cocci_id/* net/netfilter/xt_hashlimit.c 165 */;
	struct hashlimit_cfg2 *cocci_id/* net/netfilter/xt_hashlimit.c 153 */;
	struct hashlimit_cfg1 *cocci_id/* net/netfilter/xt_hashlimit.c 141 */;
	const void *cocci_id/* net/netfilter/xt_hashlimit.c 138 */;
	struct hashlimit_cfg3 *cocci_id/* net/netfilter/xt_hashlimit.c 138 */;
	int cocci_id/* net/netfilter/xt_hashlimit.c 137 */;
	void __exit cocci_id/* net/netfilter/xt_hashlimit.c 1330 */;
	int __init cocci_id/* net/netfilter/xt_hashlimit.c 1300 */;
	struct hashlimit_net cocci_id/* net/netfilter/xt_hashlimit.c 1297 */;
	struct pernet_operations cocci_id/* net/netfilter/xt_hashlimit.c 1293 */;
	void __net_exit cocci_id/* net/netfilter/xt_hashlimit.c 1288 */;
	struct hashlimit_net *cocci_id/* net/netfilter/xt_hashlimit.c 1282 */;
	int __net_init cocci_id/* net/netfilter/xt_hashlimit.c 1280 */;
	struct xt_hashlimit_htable {
		struct hlist_node node;
		int use;
		u_int8_t family;
		bool rnd_initialized;
		struct hashlimit_cfg3 cfg;
		spinlock_t lock;
		u_int32_t rnd;
		unsigned int count;
		struct delayed_work gc_work;
		struct proc_dir_entry *pde;
		const char *name;
		struct net *net;
		struct hlist_head hash[0];
	} cocci_id/* net/netfilter/xt_hashlimit.c 115 */;
	long cocci_id/* net/netfilter/xt_hashlimit.c 1108 */;
	u_int8_t cocci_id/* net/netfilter/xt_hashlimit.c 1102 */;
	struct dsthash_ent *cocci_id/* net/netfilter/xt_hashlimit.c 1102 */;
	void cocci_id/* net/netfilter/xt_hashlimit.c 1102 */;
	unsigned int *cocci_id/* net/netfilter/xt_hashlimit.c 1081 */;
	struct xt_hashlimit_htable *cocci_id/* net/netfilter/xt_hashlimit.c 1080 */;
	loff_t *cocci_id/* net/netfilter/xt_hashlimit.c 1078 */;
	struct seq_file *cocci_id/* net/netfilter/xt_hashlimit.c 1078 */;
	void *cocci_id/* net/netfilter/xt_hashlimit.c 1078 */;
	unsigned int cocci_id/* net/netfilter/xt_hashlimit.c 1070 */;
	struct xt_hashlimit_mtinfo3 cocci_id/* net/netfilter/xt_hashlimit.c 1016 */;
	struct xt_hashlimit_mtinfo2 cocci_id/* net/netfilter/xt_hashlimit.c 1005 */;
	struct dsthash_dst {
		union {
			struct {
				__be32 src;
				__be32 dst;
			} ip;
#if IS_ENABLED(CONFIG_IP6_NF_IPTABLES)
			struct {
				__be32 src[4];
				__be32 dst[4];
			} ip6;
#endif
		};
		__be16 src_port;
		__be16 dst_port;
	} cocci_id/*  1 */;
}
