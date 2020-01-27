cocci_test_suite() {
	struct pie_skb_cb cocci_id/* net/sched/sch_pie.c 92 */;
	const struct sk_buff *cocci_id/* net/sched/sch_pie.c 90 */;
	struct pie_skb_cb *cocci_id/* net/sched/sch_pie.c 90 */;
	struct pie_skb_cb {
		psched_time_t enqueue_time;
	} cocci_id/* net/sched/sch_pie.c 86 */;
	struct pie_params *cocci_id/* net/sched/sch_pie.c 73 */;
	void __exit cocci_id/* net/sched/sch_pie.c 655 */;
	int __init cocci_id/* net/sched/sch_pie.c 650 */;
	struct pie_sched_data {
		struct pie_params params;
		struct pie_vars vars;
		struct pie_stats stats;
		struct timer_list adapt_timer;
		struct Qdisc *sch;
	} cocci_id/* net/sched/sch_pie.c 65 */;
	struct pie_sched_data cocci_id/* net/sched/sch_pie.c 637 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_pie.c 635 */;
	struct tc_pie_xstats cocci_id/* net/sched/sch_pie.c 586 */;
	struct gnet_dump *cocci_id/* net/sched/sch_pie.c 583 */;
	struct pie_stats {
		u32 packets_in;
		u32 dropped;
		u32 overlimit;
		u32 maxq;
		u32 ecn_mark;
	} cocci_id/* net/sched/sch_pie.c 56 */;
	spinlock_t *cocci_id/* net/sched/sch_pie.c 518 */;
	struct timer_list *cocci_id/* net/sched/sch_pie.c 514 */;
	struct pie_vars {
		u64 prob;
		psched_time_t burst_time;
		psched_time_t qdelay;
		psched_time_t qdelay_old;
		u64 dq_count;
		psched_time_t dq_tstamp;
		u64 accu_prob;
		u32 avg_dq_rate;
		u32 qlen_old;
		u8 accu_prob_overflows;
	} cocci_id/* net/sched/sch_pie.c 42 */;
	bool cocci_id/* net/sched/sch_pie.c 401 */;
	u64 cocci_id/* net/sched/sch_pie.c 398 */;
	s64 cocci_id/* net/sched/sch_pie.c 397 */;
	psched_time_t cocci_id/* net/sched/sch_pie.c 395 */;
	u32 cocci_id/* net/sched/sch_pie.c 394 */;
	struct pie_sched_data *cocci_id/* net/sched/sch_pie.c 393 */;
	struct Qdisc *cocci_id/* net/sched/sch_pie.c 391 */;
	void cocci_id/* net/sched/sch_pie.c 391 */;
	struct pie_params {
		psched_time_t target;
		u32 tupdate;
		u32 limit;
		u32 alpha;
		u32 beta;
		bool ecn;
		bool bytemode;
		u8 dq_rate_estimator;
	} cocci_id/* net/sched/sch_pie.c 30 */;
	struct sk_buff *cocci_id/* net/sched/sch_pie.c 287 */;
	unsigned int cocci_id/* net/sched/sch_pie.c 234 */;
	struct nlattr *cocci_id/* net/sched/sch_pie.c 233 */[TCA_PIE_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/sched/sch_pie.c 230 */;
	struct nlattr *cocci_id/* net/sched/sch_pie.c 229 */;
	int cocci_id/* net/sched/sch_pie.c 229 */;
	const struct nla_policy cocci_id/* net/sched/sch_pie.c 218 */[TCA_PIE_MAX + 1];
	struct sk_buff **cocci_id/* net/sched/sch_pie.c 177 */;
	struct pie_vars *cocci_id/* net/sched/sch_pie.c 106 */;
}
