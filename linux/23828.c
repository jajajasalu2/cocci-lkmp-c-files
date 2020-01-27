cocci_test_suite() {
	u8 cocci_id/* net/sched/cls_u32.c 96 */;
	const struct tc_u32_sel *cocci_id/* net/sched/cls_u32.c 95 */;
	__be32 cocci_id/* net/sched/cls_u32.c 94 */;
	unsigned int cocci_id/* net/sched/cls_u32.c 927 */;
	size_t cocci_id/* net/sched/cls_u32.c 855 */;
	struct nlattr *cocci_id/* net/sched/cls_u32.c 853 */[TCA_U32_MAX + 1];
	struct nlattr *cocci_id/* net/sched/cls_u32.c 852 */;
	struct tc_u32_sel *cocci_id/* net/sched/cls_u32.c 851 */;
	struct tc_u_common {
		struct tc_u_hnode __rcu *hlist;
		void *ptr;
		int refcnt;
		struct idr handle_idr;
		struct hlist_node hnode;
		long knodes;
	} cocci_id/* net/sched/cls_u32.c 85 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_u32.c 846 */;
	bool cocci_id/* net/sched/cls_u32.c 845 */;
	struct nlattr **cocci_id/* net/sched/cls_u32.c 845 */;
	void **cocci_id/* net/sched/cls_u32.c 845 */;
	struct tcf_proto *cocci_id/* net/sched/cls_u32.c 844 */;
	struct sk_buff *cocci_id/* net/sched/cls_u32.c 843 */;
	struct net *cocci_id/* net/sched/cls_u32.c 843 */;
	struct tc_u32_sel cocci_id/* net/sched/cls_u32.c 703 */;
	const struct nla_policy cocci_id/* net/sched/cls_u32.c 698 */[TCA_U32_MAX + 1];
	struct tc_u_hnode {
		struct tc_u_hnode __rcu *next;
		u32 handle;
		u32 prio;
		int refcnt;
		unsigned int divisor;
		struct idr handle_idr;
		bool is_root;
		struct rcu_head rcu;
		u32 flags;
		struct tc_u_knode __rcu *ht[1];
	} cocci_id/* net/sched/cls_u32.c 69 */;
	bool *cocci_id/* net/sched/cls_u32.c 653 */;
	struct tc_u_hnode __rcu **cocci_id/* net/sched/cls_u32.c 595 */;
	struct tc_cls_u32_offload cocci_id/* net/sched/cls_u32.c 475 */;
	struct tc_u_knode cocci_id/* net/sched/cls_u32.c 437 */;
	struct work_struct *cocci_id/* net/sched/cls_u32.c 434 */;
	struct tc_u_knode {
		struct tc_u_knode __rcu *next;
		u32 handle;
		struct tc_u_hnode __rcu *ht_up;
		struct tcf_exts exts;
		int ifindex;
		u8 fshift;
		struct tcf_result res;
		struct tc_u_hnode __rcu *ht_down;
#ifdef CONFIG_CLS_U32_PERF
		struct tc_u32_pcnt __percpu *pf;
#endif
		u32 flags;
		unsigned int in_hw_count;
#ifdef CONFIG_CLS_U32_MARK
		u32 val;
		u32 mask;
		u32 __percpu *pcpu_success;
#endif
		struct rcu_work rwork;
		struct tc_u32_sel sel;
	} cocci_id/* net/sched/cls_u32.c 43 */;
	void *cocci_id/* net/sched/cls_u32.c 340 */;
	struct tcf_block *cocci_id/* net/sched/cls_u32.c 321 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_u32.c 319 */;
	struct hlist_head *cocci_id/* net/sched/cls_u32.c 314 */;
	int cocci_id/* net/sched/cls_u32.c 308 */;
	u32 cocci_id/* net/sched/cls_u32.c 306 */;
	struct tc_u_hnode *cocci_id/* net/sched/cls_u32.c 306 */;
	struct tc_u_common *cocci_id/* net/sched/cls_u32.c 306 */;
	__be16 *cocci_id/* net/sched/cls_u32.c 218 */;
	__be32 *cocci_id/* net/sched/cls_u32.c 150 */;
	void __exit cocci_id/* net/sched/cls_u32.c 1451 */;
	void cocci_id/* net/sched/cls_u32.c 1451 */;
	struct hlist_head cocci_id/* net/sched/cls_u32.c 1437 */;
	int __init cocci_id/* net/sched/cls_u32.c 1424 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_u32.c 1409 */;
	struct net_device *cocci_id/* net/sched/cls_u32.c 1364 */;
	__u32 cocci_id/* net/sched/cls_u32.c 1350 */;
	struct tc_u32_mark cocci_id/* net/sched/cls_u32.c 1344 */;
	struct tc_u32_key cocci_id/* net/sched/cls_u32.c 1320 */;
	struct tc_u32_pcnt *cocci_id/* net/sched/cls_u32.c 1315 */;
	struct tcmsg *cocci_id/* net/sched/cls_u32.c 1292 */;
	struct tc_u_knode *cocci_id/* net/sched/cls_u32.c 1285 */;
	unsigned long cocci_id/* net/sched/cls_u32.c 1283 */;
	struct tc_u32_key *cocci_id/* net/sched/cls_u32.c 127 */;
	flow_setup_cb_t *cocci_id/* net/sched/cls_u32.c 1236 */;
	struct tcf_walker *cocci_id/* net/sched/cls_u32.c 1133 */;
	struct tc_u_knode __rcu **cocci_id/* net/sched/cls_u32.c 1071 */;
	struct tc_u32_mark *cocci_id/* net/sched/cls_u32.c 1060 */;
	struct {
		struct tc_u_knode *knode;
		unsigned int off;
	} cocci_id/* net/sched/cls_u32.c 106 */[TC_U32_MAXDEPTH];
	struct tcf_result *cocci_id/* net/sched/cls_u32.c 104 */;
	struct tc_u32_pcnt cocci_id/* net/sched/cls_u32.c 1034 */;
	typeof(*n) cocci_id/* net/sched/cls_u32.c 1027 */;
}
