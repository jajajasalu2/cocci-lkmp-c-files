cocci_test_suite() {
	const unsigned int cocci_id/* net/sched/sch_skbprio.c 71 */;
	struct sk_buff **cocci_id/* net/sched/sch_skbprio.c 69 */;
	int cocci_id/* net/sched/sch_skbprio.c 42 */;
	u16 cocci_id/* net/sched/sch_skbprio.c 40 */;
	const struct skbprio_sched_data *cocci_id/* net/sched/sch_skbprio.c 40 */;
	struct skbprio_sched_data {
		struct sk_buff_head qdiscs[SKBPRIO_MAX_PRIORITY];
		struct gnet_stats_queue qstats[SKBPRIO_MAX_PRIORITY];
		u16 highest_prio;
		u16 lowest_prio;
	} cocci_id/* net/sched/sch_skbprio.c 32 */;
	void __exit cocci_id/* net/sched/sch_skbprio.c 308 */;
	int __init cocci_id/* net/sched/sch_skbprio.c 303 */;
	struct skbprio_sched_data cocci_id/* net/sched/sch_skbprio.c 291 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_skbprio.c 288 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_skbprio.c 280 */;
	unsigned int cocci_id/* net/sched/sch_skbprio.c 262 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_skbprio.c 260 */;
	struct gnet_dump *cocci_id/* net/sched/sch_skbprio.c 251 */;
	struct tcmsg *cocci_id/* net/sched/sch_skbprio.c 244 */;
	unsigned long cocci_id/* net/sched/sch_skbprio.c 243 */;
	u32 cocci_id/* net/sched/sch_skbprio.c 238 */;
	void cocci_id/* net/sched/sch_skbprio.c 224 */;
	struct tc_skbprio_qopt cocci_id/* net/sched/sch_skbprio.c 198 */;
	struct tc_skbprio_qopt *cocci_id/* net/sched/sch_skbprio.c 170 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_skbprio.c 168 */;
	struct nlattr *cocci_id/* net/sched/sch_skbprio.c 167 */;
	struct Qdisc *cocci_id/* net/sched/sch_skbprio.c 167 */;
	struct sk_buff_head *cocci_id/* net/sched/sch_skbprio.c 142 */;
	struct skbprio_sched_data *cocci_id/* net/sched/sch_skbprio.c 141 */;
	struct sk_buff *cocci_id/* net/sched/sch_skbprio.c 139 */;
}
