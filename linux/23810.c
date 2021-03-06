cocci_test_suite() {
	void __exit cocci_id/* net/sched/sch_fq.c 992 */;
	int __init cocci_id/* net/sched/sch_fq.c 976 */;
	struct fq_sched_data cocci_id/* net/sched/sch_fq.c 962 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_fq.c 960 */;
	struct tc_fq_qd_stats cocci_id/* net/sched/sch_fq.c 937 */;
	struct gnet_dump *cocci_id/* net/sched/sch_fq.c 934 */;
	struct fq_sched_data {
		struct fq_flow_head new_flows;
		struct fq_flow_head old_flows;
		struct rb_root delayed;
		u64 time_next_delayed_flow;
		unsigned long unthrottle_latency_ns;
		struct fq_flow internal;
		u32 quantum;
		u32 initial_quantum;
		u32 flow_refill_delay;
		u32 flow_plimit;
		unsigned long flow_max_rate;
		u64 ce_threshold;
		u32 orphan_mask;
		u32 low_rate_threshold;
		struct rb_root *fq_root;
		u8 rate_enable;
		u8 fq_trees_log;
		u32 flows;
		u32 inactive_flows;
		u32 throttled_flows;
		u64 stat_gc_flows;
		u64 stat_internal_packets;
		u64 stat_throttled;
		u64 stat_ce_mark;
		u64 stat_flows_plimit;
		u64 stat_pkts_too_long;
		u64 stat_allocation_errors;
		struct qdisc_watchdog watchdog;
	} cocci_id/* net/sched/sch_fq.c 91 */;
	struct fq_flow_head {
		struct fq_flow *first;
		struct fq_flow *last;
	} cocci_id/* net/sched/sch_fq.c 86 */;
	u64 cocci_id/* net/sched/sch_fq.c 831 */;
	u32 cocci_id/* net/sched/sch_fq.c 759 */;
	unsigned cocci_id/* net/sched/sch_fq.c 758 */;
	struct nlattr *cocci_id/* net/sched/sch_fq.c 756 */[TCA_FQ_MAX + 1];
	struct fq_sched_data *cocci_id/* net/sched/sch_fq.c 755 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_fq.c 753 */;
	struct nlattr *cocci_id/* net/sched/sch_fq.c 752 */;
	struct Qdisc *cocci_id/* net/sched/sch_fq.c 752 */;
	int cocci_id/* net/sched/sch_fq.c 752 */;
	const struct nla_policy cocci_id/* net/sched/sch_fq.c 738 */[TCA_FQ_MAX + 1];
	struct rb_root cocci_id/* net/sched/sch_fq.c 714 */;
	void *cocci_id/* net/sched/sch_fq.c 698 */;
	struct fq_flow {
		struct rb_root t_root;
		struct sk_buff *head;
		union {
			struct sk_buff *tail;
			unsigned long age;
		};
		struct rb_node fq_node;
		struct sock *sk;
		int qlen;
		int credit;
		u32 socket_hash;
		struct fq_flow *next;
		struct rb_node rate_node;
		u64 time_next_packet;
	} cocci_id/* net/sched/sch_fq.c 68 */;
	unsigned int cocci_id/* net/sched/sch_fq.c 624 */;
	struct fq_skb_cb cocci_id/* net/sched/sch_fq.c 59 */;
	struct fq_skb_cb *cocci_id/* net/sched/sch_fq.c 57 */;
	struct fq_skb_cb {
		u64 time_to_send;
	} cocci_id/* net/sched/sch_fq.c 53 */;
	struct fq_flow_head *cocci_id/* net/sched/sch_fq.c 486 */;
	struct fq_flow cocci_id/* net/sched/sch_fq.c 473 */;
	struct rb_node *cocci_id/* net/sched/sch_fq.c 459 */;
	unsigned long cocci_id/* net/sched/sch_fq.c 458 */;
	struct sk_buff **cocci_id/* net/sched/sch_fq.c 414 */;
	struct rb_node **cocci_id/* net/sched/sch_fq.c 381 */;
	struct sk_buff *cocci_id/* net/sched/sch_fq.c 379 */;
	struct fq_flow *cocci_id/* net/sched/sch_fq.c 379 */;
	void cocci_id/* net/sched/sch_fq.c 379 */;
	struct rb_root *cocci_id/* net/sched/sch_fq.c 245 */;
	struct sock *cocci_id/* net/sched/sch_fq.c 244 */;
	struct kmem_cache *cocci_id/* net/sched/sch_fq.c 188 */;
	bool cocci_id/* net/sched/sch_fq.c 136 */;
	const struct fq_flow *cocci_id/* net/sched/sch_fq.c 136 */;
}
