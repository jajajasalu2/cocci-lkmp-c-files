cocci_test_suite() {
	u32 cocci_id/* net/sched/sch_dsmark.c 96 */;
	struct Qdisc *cocci_id/* net/sched/sch_dsmark.c 95 */;
	unsigned long cocci_id/* net/sched/sch_dsmark.c 95 */;
	struct Qdisc **cocci_id/* net/sched/sch_dsmark.c 65 */;
	void __exit cocci_id/* net/sched/sch_dsmark.c 514 */;
	int __init cocci_id/* net/sched/sch_dsmark.c 509 */;
	struct dsmark_qdisc_data cocci_id/* net/sched/sch_dsmark.c 497 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_dsmark.c 493 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_dsmark.c 480 */;
	struct dsmark_qdisc_data {
		struct Qdisc *q;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		struct mask_value *mv;
		u16 indices;
		u8 set_tc_index;
		u32 default_index;
#define DSMARK_EMBEDDED_SZ 16
		struct mask_value embedded[DSMARK_EMBEDDED_SZ];
	} cocci_id/* net/sched/sch_dsmark.c 45 */;
	struct tcmsg *cocci_id/* net/sched/sch_dsmark.c 427 */;
	void cocci_id/* net/sched/sch_dsmark.c 414 */;
	struct mask_value {
		u8 mask;
		u8 value;
	} cocci_id/* net/sched/sch_dsmark.c 40 */;
	u16 cocci_id/* net/sched/sch_dsmark.c 346 */;
	struct sk_buff *cocci_id/* net/sched/sch_dsmark.c 287 */;
	struct tcf_proto *cocci_id/* net/sched/sch_dsmark.c 243 */;
	struct tcf_result cocci_id/* net/sched/sch_dsmark.c 242 */;
	struct ipv6hdr cocci_id/* net/sched/sch_dsmark.c 225 */;
	struct iphdr cocci_id/* net/sched/sch_dsmark.c 215 */;
	unsigned int cocci_id/* net/sched/sch_dsmark.c 204 */;
	struct sk_buff **cocci_id/* net/sched/sch_dsmark.c 202 */;
	struct tcf_block *cocci_id/* net/sched/sch_dsmark.c 191 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_dsmark.c 166 */;
	struct nlattr *cocci_id/* net/sched/sch_dsmark.c 122 */[TCA_DSMARK_MAX + 1];
	struct nlattr *cocci_id/* net/sched/sch_dsmark.c 121 */;
	struct dsmark_qdisc_data *cocci_id/* net/sched/sch_dsmark.c 120 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_dsmark.c 118 */;
	struct nlattr **cocci_id/* net/sched/sch_dsmark.c 117 */;
	unsigned long *cocci_id/* net/sched/sch_dsmark.c 117 */;
	int cocci_id/* net/sched/sch_dsmark.c 116 */;
	const struct nla_policy cocci_id/* net/sched/sch_dsmark.c 108 */[TCA_DSMARK_MAX + 1];
}
