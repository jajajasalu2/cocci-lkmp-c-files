cocci_test_suite() {
	struct basic_filter cocci_id/* net/sched/cls_basic.c 99 */;
	struct work_struct *cocci_id/* net/sched/cls_basic.c 96 */;
	struct basic_filter *cocci_id/* net/sched/cls_basic.c 87 */;
	void cocci_id/* net/sched/cls_basic.c 87 */;
	struct tcf_result *cocci_id/* net/sched/cls_basic.c 40 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_basic.c 39 */;
	void __exit cocci_id/* net/sched/cls_basic.c 342 */;
	int __init cocci_id/* net/sched/cls_basic.c 337 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_basic.c 323 */;
	struct tc_basic_pcnt *cocci_id/* net/sched/cls_basic.c 296 */;
	struct basic_filter {
		u32 handle;
		struct tcf_exts exts;
		struct tcf_ematch_tree ematches;
		struct tcf_result res;
		struct tcf_proto *tp;
		struct list_head link;
		struct tc_basic_pcnt __percpu *pf;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_basic.c 28 */;
	struct nlattr *cocci_id/* net/sched/cls_basic.c 279 */;
	struct tcmsg *cocci_id/* net/sched/cls_basic.c 275 */;
	u32 cocci_id/* net/sched/cls_basic.c 266 */;
	void *cocci_id/* net/sched/cls_basic.c 266 */;
	unsigned long cocci_id/* net/sched/cls_basic.c 266 */;
	struct tcf_walker *cocci_id/* net/sched/cls_basic.c 247 */;
	struct basic_head {
		struct list_head flist;
		struct idr handle_idr;
		struct rcu_head rcu;
	} cocci_id/* net/sched/cls_basic.c 22 */;
	struct tc_basic_pcnt cocci_id/* net/sched/cls_basic.c 213 */;
	struct nlattr *cocci_id/* net/sched/cls_basic.c 177 */[TCA_BASIC_MAX + 1];
	struct basic_head *cocci_id/* net/sched/cls_basic.c 176 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_basic.c 173 */;
	bool cocci_id/* net/sched/cls_basic.c 172 */;
	struct nlattr **cocci_id/* net/sched/cls_basic.c 172 */;
	void **cocci_id/* net/sched/cls_basic.c 172 */;
	struct tcf_proto *cocci_id/* net/sched/cls_basic.c 171 */;
	struct sk_buff *cocci_id/* net/sched/cls_basic.c 170 */;
	struct net *cocci_id/* net/sched/cls_basic.c 170 */;
	int cocci_id/* net/sched/cls_basic.c 170 */;
	const struct nla_policy cocci_id/* net/sched/cls_basic.c 140 */[TCA_BASIC_MAX + 1];
	bool *cocci_id/* net/sched/cls_basic.c 125 */;
}
