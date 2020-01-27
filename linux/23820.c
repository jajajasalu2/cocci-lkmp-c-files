cocci_test_suite() {
	psched_time_t cocci_id/* net/sched/sch_cbq.c 804 */;
	unsigned int cocci_id/* net/sched/sch_cbq.c 786 */;
	struct cbq_class {
		struct Qdisc_class_common common;
		struct cbq_class *next_alive;
		unsigned char priority;
		unsigned char priority2;
		unsigned char ewma_log;
		u32 defmap;
		long maxidle;
		long offtime;
		long minidle;
		u32 avpkt;
		struct qdisc_rate_table *R_tab;
		long allot;
		long quantum;
		long weight;
		struct Qdisc *qdisc;
		struct cbq_class *split;
		struct cbq_class *share;
		struct cbq_class *tparent;
		struct cbq_class *borrow;
		struct cbq_class *sibling;
		struct cbq_class *children;
		struct Qdisc *q;
		unsigned char cpriority;
		unsigned char delayed;
		unsigned char level;
		psched_time_t last;
		psched_time_t undertime;
		long avgidle;
		long deficit;
		psched_time_t penalized;
		struct gnet_stats_basic_packed bstats;
		struct gnet_stats_queue qstats;
		struct net_rate_estimator __rcu *rate_est;
		struct tc_cbq_xstats xstats;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		int filters;
		struct cbq_class *defaults[TC_PRIO_MAX + 1];
	} cocci_id/* net/sched/sch_cbq.c 71 */;
	ktime_t cocci_id/* net/sched/sch_cbq.c 508 */;
	enum hrtimer_restart cocci_id/* net/sched/sch_cbq.c 479 */;
	struct hrtimer *cocci_id/* net/sched/sch_cbq.c 479 */;
	psched_tdiff_t cocci_id/* net/sched/sch_cbq.c 397 */;
	struct sk_buff **cocci_id/* net/sched/sch_cbq.c 360 */;
	int cocci_id/* net/sched/sch_cbq.c 294 */;
	struct cbq_sched_data *cocci_id/* net/sched/sch_cbq.c 293 */;
	struct cbq_class *cocci_id/* net/sched/sch_cbq.c 291 */;
	void cocci_id/* net/sched/sch_cbq.c 291 */;
	void *cocci_id/* net/sched/sch_cbq.c 235 */;
	struct tcf_result cocci_id/* net/sched/sch_cbq.c 213 */;
	struct tcf_proto *cocci_id/* net/sched/sch_cbq.c 212 */;
	struct cbq_class **cocci_id/* net/sched/sch_cbq.c 209 */;
	struct sk_buff *cocci_id/* net/sched/sch_cbq.c 205 */;
	int *cocci_id/* net/sched/sch_cbq.c 205 */;
	void __exit cocci_id/* net/sched/sch_cbq.c 1811 */;
	int __init cocci_id/* net/sched/sch_cbq.c 1807 */;
	struct cbq_sched_data cocci_id/* net/sched/sch_cbq.c 1794 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_cbq.c 1790 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_cbq.c 1775 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_cbq.c 1751 */;
	struct cbq_class cocci_id/* net/sched/sch_cbq.c 173 */;
	u32 cocci_id/* net/sched/sch_cbq.c 1729 */;
	struct Qdisc *cocci_id/* net/sched/sch_cbq.c 1728 */;
	unsigned long cocci_id/* net/sched/sch_cbq.c 1728 */;
	struct tcf_block *cocci_id/* net/sched/sch_cbq.c 1716 */;
	struct Qdisc_class_common *cocci_id/* net/sched/sch_cbq.c 168 */;
	struct qdisc_rate_table *cocci_id/* net/sched/sch_cbq.c 1486 */;
	struct nlattr *cocci_id/* net/sched/sch_cbq.c 1484 */[TCA_CBQ_MAX + 1];
	struct nlattr *cocci_id/* net/sched/sch_cbq.c 1483 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_cbq.c 1478 */;
	unsigned long *cocci_id/* net/sched/sch_cbq.c 1478 */;
	struct nlattr **cocci_id/* net/sched/sch_cbq.c 1477 */;
	struct hlist_node *cocci_id/* net/sched/sch_cbq.c 1450 */;
	struct Qdisc **cocci_id/* net/sched/sch_cbq.c 1397 */;
	__u32 cocci_id/* net/sched/sch_cbq.c 1378 */;
	struct gnet_dump *cocci_id/* net/sched/sch_cbq.c 1374 */;
	struct tcmsg *cocci_id/* net/sched/sch_cbq.c 1348 */;
	struct cbq_sched_data {
		struct Qdisc_class_hash clhash;
		int nclasses[TC_CBQ_MAXPRIO + 1];
		unsigned int quanta[TC_CBQ_MAXPRIO + 1];
		struct cbq_class link;
		unsigned int activemask;
		struct cbq_class *active[TC_CBQ_MAXPRIO + 1];
#ifdef CONFIG_NET_CLS_ACT
		struct cbq_class *rx_class;
#endif
		struct cbq_class *tx_class;
		struct cbq_class *tx_borrowed;
		int tx_len;
		psched_time_t now;
		unsigned int pmask;
		struct hrtimer delay_timer;
		struct qdisc_watchdog watchdog;
		psched_tdiff_t wd_expires;
		int toplevel;
		u32 hgenerator;
	} cocci_id/* net/sched/sch_cbq.c 132 */;
	struct tc_cbq_fopt cocci_id/* net/sched/sch_cbq.c 1294 */;
	unsigned char *cocci_id/* net/sched/sch_cbq.c 1293 */;
	struct tc_cbq_wrropt cocci_id/* net/sched/sch_cbq.c 1274 */;
	struct tc_cbq_lssopt cocci_id/* net/sched/sch_cbq.c 1248 */;
	struct tc_ratespec *cocci_id/* net/sched/sch_cbq.c 1162 */;
	const struct tc_cbq_wrropt *cocci_id/* net/sched/sch_cbq.c 1147 */;
	struct tc_cbq_police cocci_id/* net/sched/sch_cbq.c 1127 */;
	struct tc_ratespec cocci_id/* net/sched/sch_cbq.c 1125 */;
	struct tc_cbq_ovl cocci_id/* net/sched/sch_cbq.c 1124 */;
	const struct nla_policy cocci_id/* net/sched/sch_cbq.c 1120 */[TCA_CBQ_MAX + 1];
	struct tc_cbq_fopt *cocci_id/* net/sched/sch_cbq.c 1114 */;
	struct tc_cbq_wrropt *cocci_id/* net/sched/sch_cbq.c 1095 */;
	long cocci_id/* net/sched/sch_cbq.c 1071 */;
	struct tc_cbq_lssopt *cocci_id/* net/sched/sch_cbq.c 1060 */;
}