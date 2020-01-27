cocci_test_suite() {
	struct tcf_chain cocci_id/* net/sched/cls_api.c 973 */;
	struct tcf_net *cocci_id/* net/sched/cls_api.c 893 */;
	struct tcf_net {
		spinlock_t idr_lock;
		struct idr idr;
	} cocci_id/* net/sched/cls_api.c 883 */;
	struct flow_block_offload cocci_id/* net/sched/cls_api.c 707 */;
	enum flow_block_command cocci_id/* net/sched/cls_api.c 704 */;
	const struct Qdisc_ops *cocci_id/* net/sched/cls_api.c 658 */;
	flow_indr_block_bind_cb_t *cocci_id/* net/sched/cls_api.c 630 */;
	int cocci_id/* net/sched/cls_api.c 626 */(struct tcf_block *block,
						  struct flow_block_offload *bo);
	unsigned int cocci_id/* net/sched/cls_api.c 545 */;
	const struct tcf_proto_ops *cocci_id/* net/sched/cls_api.c 543 */;
	__u32 cocci_id/* net/sched/cls_api.c 54 */;
	int cocci_id/* net/sched/cls_api.c 534 */(const struct tcf_proto_ops *tmplt_ops,
						  void *tmplt_priv,
						  u32 chain_index,
						  struct tcf_block *block,
						  struct sk_buff *oskb,
						  u32 seq, u16 flags,
						  bool unicast);
	void cocci_id/* net/sched/cls_api.c 532 */(const struct tcf_proto_ops *tmplt_ops,
						   void *tmplt_priv);
	const struct tcf_proto *cocci_id/* net/sched/cls_api.c 51 */;
	struct tcf_chain *cocci_id/* net/sched/cls_api.c 480 */;
	int cocci_id/* net/sched/cls_api.c 477 */(struct tcf_chain *chain,
						  struct sk_buff *oskb,
						  u32 seq, u16 flags,
						  int event, bool unicast);
	const struct nla_policy cocci_id/* net/sched/cls_api.c 43 */[TCA_MAX + 1];
	struct tcf_filter_chain_list_item *cocci_id/* net/sched/cls_api.c 398 */;
	int __init cocci_id/* net/sched/cls_api.c 3654 */;
	struct flow_indr_block_entry cocci_id/* net/sched/cls_api.c 3649 */;
	struct tcf_net cocci_id/* net/sched/cls_api.c 3646 */;
	struct pernet_operations cocci_id/* net/sched/cls_api.c 3642 */;
	void __net_exit cocci_id/* net/sched/cls_api.c 3635 */;
	struct tcf_filter_chain_list_item {
		struct list_head list;
		tcf_chain_head_change_t *chain_head_change;
		void *chain_head_change_priv;
	} cocci_id/* net/sched/cls_api.c 362 */;
	const struct tc_action *cocci_id/* net/sched/cls_api.c 3460 */;
	const struct tcf_exts *cocci_id/* net/sched/cls_api.c 3458 */;
	struct ip_tunnel_info *cocci_id/* net/sched/cls_api.c 3431 */;
	struct flow_action_entry *cocci_id/* net/sched/cls_api.c 3409 */;
	struct flow_action *cocci_id/* net/sched/cls_api.c 3407 */;
	flow_setup_cb_t *cocci_id/* net/sched/cls_api.c 3389 */;
	unsigned int *cocci_id/* net/sched/cls_api.c 3252 */;
	struct tcf_walker cocci_id/* net/sched/cls_api.c 323 */;
	struct flow_block_cb *cocci_id/* net/sched/cls_api.c 3199 */;
	bool cocci_id/* net/sched/cls_api.c 3197 */;
	void *cocci_id/* net/sched/cls_api.c 3197 */;
	enum tc_setup_type cocci_id/* net/sched/cls_api.c 3196 */;
	struct tcf_block *cocci_id/* net/sched/cls_api.c 3196 */;
	int cocci_id/* net/sched/cls_api.c 3195 */;
	struct tc_action *cocci_id/* net/sched/cls_api.c 3116 */;
	struct nlattr *cocci_id/* net/sched/cls_api.c 3099 */;
	struct tcf_exts cocci_id/* net/sched/cls_api.c 3078 */;
	struct tcf_exts *cocci_id/* net/sched/cls_api.c 3075 */;
	size_t cocci_id/* net/sched/cls_api.c 3038 */;
	long cocci_id/* net/sched/cls_api.c 2924 */;
	struct netlink_callback *cocci_id/* net/sched/cls_api.c 2916 */;
	void cocci_id/* net/sched/cls_api.c 291 */(struct tcf_chain *chain);
	struct nlattr *cocci_id/* net/sched/cls_api.c 2785 */[TCA_MAX + 1];
	char cocci_id/* net/sched/cls_api.c 2738 */[IFNAMSIZ];
	struct nlattr **cocci_id/* net/sched/cls_api.c 2734 */;
	struct tcmsg *cocci_id/* net/sched/cls_api.c 2636 */;
	struct nlmsghdr *cocci_id/* net/sched/cls_api.c 2635 */;
	unsigned char *cocci_id/* net/sched/cls_api.c 2633 */;
	u16 cocci_id/* net/sched/cls_api.c 2631 */;
	struct sk_buff *cocci_id/* net/sched/cls_api.c 2629 */;
	struct tcf_dump_args cocci_id/* net/sched/cls_api.c 2477 */;
	long *cocci_id/* net/sched/cls_api.c 2471 */;
	struct tcf_dump_args *cocci_id/* net/sched/cls_api.c 2460 */;
	struct tcf_walker *cocci_id/* net/sched/cls_api.c 2458 */;
	struct tcf_dump_args {
		struct tcf_walker w;
		struct sk_buff *skb;
		struct netlink_callback *cb;
		struct tcf_block *block;
		struct Qdisc *q;
		u32 parent;
	} cocci_id/* net/sched/cls_api.c 2449 */;
	char *cocci_id/* net/sched/cls_api.c 222 */;
	struct tcf_chain_info cocci_id/* net/sched/cls_api.c 2179 */;
	work_func_t cocci_id/* net/sched/cls_api.c 203 */;
	struct rcu_work *cocci_id/* net/sched/cls_api.c 203 */;
	bool *cocci_id/* net/sched/cls_api.c 1882 */;
	struct tcf_chain_info *cocci_id/* net/sched/cls_api.c 1770 */;
	struct workqueue_struct *cocci_id/* net/sched/cls_api.c 177 */;
	struct tcf_proto **cocci_id/* net/sched/cls_api.c 1734 */;
	struct tcf_proto *cocci_id/* net/sched/cls_api.c 1684 */(struct tcf_chain *chain,
								 struct tcf_chain_info *chain_info,
								 u32 protocol,
								 u32 prio,
								 bool prio_allocate);
	struct tcf_chain_info {
		struct tcf_proto __rcu **pprev;
		struct tcf_proto __rcu *next;
	} cocci_id/* net/sched/cls_api.c 1645 */;
	struct tc_skb_ext *cocci_id/* net/sched/cls_api.c 1612 */;
	__be16 cocci_id/* net/sched/cls_api.c 1595 */;
	struct tcf_proto_ops *cocci_id/* net/sched/cls_api.c 159 */;
	const int cocci_id/* net/sched/cls_api.c 1587 */;
	struct tcf_result *cocci_id/* net/sched/cls_api.c 1584 */;
	struct flow_block_offload *cocci_id/* net/sched/cls_api.c 1499 */;
	struct tcf_block_ext_info cocci_id/* net/sched/cls_api.c 1419 */;
	struct tcf_proto __rcu **cocci_id/* net/sched/cls_api.c 1416 */;
	struct tcf_block **cocci_id/* net/sched/cls_api.c 1415 */;
	enum flow_block_binder_type cocci_id/* net/sched/cls_api.c 1328 */;
	struct tcf_block_owner_item *cocci_id/* net/sched/cls_api.c 1317 */;
	struct tcf_block_owner_item {
		struct list_head list;
		struct Qdisc *q;
		enum flow_block_binder_type binder_type;
	} cocci_id/* net/sched/cls_api.c 1298 */;
	struct tcf_block_ext_info *cocci_id/* net/sched/cls_api.c 1214 */;
	void cocci_id/* net/sched/cls_api.c 1213 */;
	const struct Qdisc_class_ops *cocci_id/* net/sched/cls_api.c 1190 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_api.c 1179 */;
	u32 cocci_id/* net/sched/cls_api.c 1178 */;
	unsigned long cocci_id/* net/sched/cls_api.c 1177 */;
	struct net *cocci_id/* net/sched/cls_api.c 1176 */;
	struct Qdisc *cocci_id/* net/sched/cls_api.c 1176 */;
	unsigned long *cocci_id/* net/sched/cls_api.c 1156 */;
	const char *cocci_id/* net/sched/cls_api.c 109 */;
	struct net_device *cocci_id/* net/sched/cls_api.c 1086 */;
	u32 *cocci_id/* net/sched/cls_api.c 1082 */;
	struct Qdisc **cocci_id/* net/sched/cls_api.c 1081 */;
	struct tcf_proto *cocci_id/* net/sched/cls_api.c 1008 */;
}
