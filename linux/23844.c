cocci_test_suite() {
	struct ingress_sched_data *cocci_id/* net/sched/sch_ingress.c 95 */;
	struct mini_Qdisc_pair *cocci_id/* net/sched/sch_ingress.c 57 */;
	struct tcf_proto *cocci_id/* net/sched/sch_ingress.c 55 */;
	void *cocci_id/* net/sched/sch_ingress.c 55 */;
	void cocci_id/* net/sched/sch_ingress.c 55 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_ingress.c 43 */;
	void __exit cocci_id/* net/sched/sch_ingress.c 288 */;
	int __init cocci_id/* net/sched/sch_ingress.c 274 */;
	struct clsact_sched_data cocci_id/* net/sched/sch_ingress.c 262 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_ingress.c 259 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_ingress.c 249 */;
	struct clsact_sched_data *cocci_id/* net/sched/sch_ingress.c 240 */;
	struct net_device *cocci_id/* net/sched/sch_ingress.c 212 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_ingress.c 209 */;
	struct nlattr *cocci_id/* net/sched/sch_ingress.c 208 */;
	int cocci_id/* net/sched/sch_ingress.c 208 */;
	struct ingress_sched_data {
		struct tcf_block *block;
		struct tcf_block_ext_info block_info;
		struct mini_Qdisc_pair miniqp;
	} cocci_id/* net/sched/sch_ingress.c 17 */;
	struct tcf_block *cocci_id/* net/sched/sch_ingress.c 165 */;
	u32 cocci_id/* net/sched/sch_ingress.c 160 */;
	struct Qdisc *cocci_id/* net/sched/sch_ingress.c 159 */;
	unsigned long cocci_id/* net/sched/sch_ingress.c 159 */;
	struct clsact_sched_data {
		struct tcf_block *ingress_block;
		struct tcf_block *egress_block;
		struct tcf_block_ext_info ingress_block_info;
		struct tcf_block_ext_info egress_block_info;
		struct mini_Qdisc_pair miniqp_ingress;
		struct mini_Qdisc_pair miniqp_egress;
	} cocci_id/* net/sched/sch_ingress.c 139 */;
	struct ingress_sched_data cocci_id/* net/sched/sch_ingress.c 129 */;
	struct sk_buff *cocci_id/* net/sched/sch_ingress.c 101 */;
}
