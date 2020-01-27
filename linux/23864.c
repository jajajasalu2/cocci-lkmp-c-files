cocci_test_suite() {
	unsigned int *cocci_id/* net/sched/sch_qfq.c 991 */;
	struct qfq_class **cocci_id/* net/sched/sch_qfq.c 990 */;
	int cocci_id/* net/sched/sch_qfq.c 979 */;
	struct qfq_class *cocci_id/* net/sched/sch_qfq.c 975 */;
	unsigned int cocci_id/* net/sched/sch_qfq.c 975 */;
	struct qfq_aggregate *cocci_id/* net/sched/sch_qfq.c 974 */;
	void cocci_id/* net/sched/sch_qfq.c 974 */;
	struct qfq_aggregate cocci_id/* net/sched/sch_qfq.c 900 */;
	struct qfq_group *cocci_id/* net/sched/sch_qfq.c 751 */;
	const struct qfq_group *cocci_id/* net/sched/sch_qfq.c 746 */;
	unsigned long cocci_id/* net/sched/sch_qfq.c 736 */;
	struct tcf_proto *cocci_id/* net/sched/sch_qfq.c 682 */;
	struct tcf_result cocci_id/* net/sched/sch_qfq.c 681 */;
	int *cocci_id/* net/sched/sch_qfq.c 677 */;
	struct sk_buff *cocci_id/* net/sched/sch_qfq.c 676 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_qfq.c 652 */;
	struct tc_qfq_stats cocci_id/* net/sched/sch_qfq.c 636 */;
	struct gnet_dump *cocci_id/* net/sched/sch_qfq.c 633 */;
	struct nlattr *cocci_id/* net/sched/sch_qfq.c 613 */;
	struct tcmsg *cocci_id/* net/sched/sch_qfq.c 610 */;
	struct Qdisc **cocci_id/* net/sched/sch_qfq.c 586 */;
	struct Qdisc *cocci_id/* net/sched/sch_qfq.c 567 */;
	struct tcf_block *cocci_id/* net/sched/sch_qfq.c 556 */;
	struct nlattr *cocci_id/* net/sched/sch_qfq.c 399 */[TCA_QFQ_MAX + 1];
	bool cocci_id/* net/sched/sch_qfq.c 398 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_qfq.c 394 */;
	struct nlattr **cocci_id/* net/sched/sch_qfq.c 393 */;
	unsigned long *cocci_id/* net/sched/sch_qfq.c 393 */;
	struct qfq_aggregate *cocci_id/* net/sched/sch_qfq.c 326 */(struct qfq_sched *);
	struct qfq_class cocci_id/* net/sched/sch_qfq.c 320 */;
	void cocci_id/* net/sched/sch_qfq.c 250 */(struct qfq_sched *,
						   struct qfq_aggregate *,
						   enum update_reason);
	void cocci_id/* net/sched/sch_qfq.c 249 */(struct qfq_sched *,
						   struct qfq_aggregate *);
	const struct nla_policy cocci_id/* net/sched/sch_qfq.c 217 */[TCA_QFQ_MAX + 1];
	struct Qdisc_class_common *cocci_id/* net/sched/sch_qfq.c 209 */;
	enum update_reason{enqueue, requeue,} cocci_id/* net/sched/sch_qfq.c 204 */;
	struct qfq_sched {
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		struct Qdisc_class_hash clhash;
		u64 oldV,V;
		struct qfq_aggregate *in_serv_agg;
		u32 wsum;
		u32 iwsum;
		unsigned long bitmaps[QFQ_MAX_STATE];
		struct qfq_group groups[QFQ_MAX_INDEX + 1];
		u32 min_slot_shift;
		u32 max_agg_classes;
		struct hlist_head nonfull_aggs;
	} cocci_id/* net/sched/sch_qfq.c 179 */;
	struct qfq_group {
		u64 S,F;
		unsigned int slot_shift;
		unsigned int index;
		unsigned int front;
		unsigned long full_slots;
		struct hlist_head slots[QFQ_MAX_SLOTS];
	} cocci_id/* net/sched/sch_qfq.c 168 */;
	void __exit cocci_id/* net/sched/sch_qfq.c 1520 */;
	int __init cocci_id/* net/sched/sch_qfq.c 1515 */;
	struct qfq_sched cocci_id/* net/sched/sch_qfq.c 1505 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_qfq.c 1502 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_qfq.c 1487 */;
	struct hlist_node *cocci_id/* net/sched/sch_qfq.c 1473 */;
	struct qfq_aggregate {
		struct hlist_node next;
		u64 S,F;
		struct qfq_group *grp;
		u32 class_weight;
		int lmax;
		u32 inv_w;
		u32 budgetmax;
		u32 initial_budget,budget;
		int num_classes;
		struct list_head active;
		struct hlist_node nonfull_next;
	} cocci_id/* net/sched/sch_qfq.c 143 */;
	enum update_reason cocci_id/* net/sched/sch_qfq.c 1318 */;
	struct qfq_sched *cocci_id/* net/sched/sch_qfq.c 1317 */;
	struct qfq_class {
		struct Qdisc_class_common common;
		unsigned int filter_cnt;
		struct gnet_stats_basic_packed bstats;
		struct gnet_stats_queue qstats;
		struct net_rate_estimator __rcu *rate_est;
		struct Qdisc *qdisc;
		struct list_head alist;
		struct qfq_aggregate *agg;
		int deficit;
	} cocci_id/* net/sched/sch_qfq.c 129 */;
	struct qfq_group cocci_id/* net/sched/sch_qfq.c 125 */;
	enum qfq_state{ER, IR, EB, IB, QFQ_MAX_STATE,} cocci_id/* net/sched/sch_qfq.c 123 */;
	struct sk_buff **cocci_id/* net/sched/sch_qfq.c 1198 */;
	unsigned long long cocci_id/* net/sched/sch_qfq.c 1148 */;
	void cocci_id/* net/sched/sch_qfq.c 1075 */(struct qfq_sched *q,
						    struct qfq_aggregate *agg);
	u64 cocci_id/* net/sched/sch_qfq.c 1016 */;
	u32 cocci_id/* net/sched/sch_qfq.c 1013 */;
}
