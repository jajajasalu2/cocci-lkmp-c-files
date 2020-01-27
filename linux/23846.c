cocci_test_suite() {
	unsigned int cocci_id/* net/sched/sch_prio.c 71 */;
	struct sk_buff **cocci_id/* net/sched/sch_prio.c 69 */;
	void __exit cocci_id/* net/sched/sch_prio.c 430 */;
	int __init cocci_id/* net/sched/sch_prio.c 425 */;
	struct prio_sched_data cocci_id/* net/sched/sch_prio.c 413 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_prio.c 409 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_prio.c 397 */;
	struct tcf_block *cocci_id/* net/sched/sch_prio.c 387 */;
	int cocci_id/* net/sched/sch_prio.c 37 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_prio.c 366 */;
	struct tcf_proto *cocci_id/* net/sched/sch_prio.c 36 */;
	struct gnet_dump *cocci_id/* net/sched/sch_prio.c 352 */;
	struct tcf_result cocci_id/* net/sched/sch_prio.c 35 */;
	struct tcmsg *cocci_id/* net/sched/sch_prio.c 342 */;
	u32 cocci_id/* net/sched/sch_prio.c 331 */;
	struct Qdisc *cocci_id/* net/sched/sch_prio.c 331 */;
	unsigned long cocci_id/* net/sched/sch_prio.c 331 */;
	struct prio_sched_data *cocci_id/* net/sched/sch_prio.c 33 */;
	struct sk_buff *cocci_id/* net/sched/sch_prio.c 31 */;
	int *cocci_id/* net/sched/sch_prio.c 31 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_prio.c 289 */;
	struct Qdisc **cocci_id/* net/sched/sch_prio.c 289 */;
	struct tc_prio_qopt cocci_id/* net/sched/sch_prio.c 268 */;
	unsigned char *cocci_id/* net/sched/sch_prio.c 267 */;
	struct tc_prio_qopt_offload cocci_id/* net/sched/sch_prio.c 249 */;
	struct nlattr *cocci_id/* net/sched/sch_prio.c 231 */;
	struct prio_sched_data {
		int bands;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		u8 prio2band[TC_PRIO_MAX + 1];
		struct Qdisc *queues[TCQ_PRIO_BANDS];
	} cocci_id/* net/sched/sch_prio.c 21 */;
	struct Qdisc *cocci_id/* net/sched/sch_prio.c 182 */[TCQ_PRIO_BANDS];
	void cocci_id/* net/sched/sch_prio.c 166 */;
	struct net_device *cocci_id/* net/sched/sch_prio.c 144 */;
	struct tc_prio_qopt *cocci_id/* net/sched/sch_prio.c 142 */;
}
