cocci_test_suite() {
	struct nlattr *cocci_id/* net/sched/cls_cgroup.c 82 */[TCA_CGROUP_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/sched/cls_cgroup.c 80 */;
	bool cocci_id/* net/sched/cls_cgroup.c 79 */;
	void **cocci_id/* net/sched/cls_cgroup.c 79 */;
	u32 cocci_id/* net/sched/cls_cgroup.c 78 */;
	struct nlattr **cocci_id/* net/sched/cls_cgroup.c 78 */;
	struct tcf_proto *cocci_id/* net/sched/cls_cgroup.c 77 */;
	unsigned long cocci_id/* net/sched/cls_cgroup.c 77 */;
	struct sk_buff *cocci_id/* net/sched/cls_cgroup.c 76 */;
	struct net *cocci_id/* net/sched/cls_cgroup.c 76 */;
	int cocci_id/* net/sched/cls_cgroup.c 76 */;
	struct cls_cgroup_head cocci_id/* net/sched/cls_cgroup.c 69 */;
	struct work_struct *cocci_id/* net/sched/cls_cgroup.c 66 */;
	struct cls_cgroup_head *cocci_id/* net/sched/cls_cgroup.c 58 */;
	void cocci_id/* net/sched/cls_cgroup.c 58 */;
	const struct nla_policy cocci_id/* net/sched/cls_cgroup.c 54 */[TCA_CGROUP_MAX + 1];
	struct tcf_result *cocci_id/* net/sched/cls_cgroup.c 26 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_cgroup.c 25 */;
	void __exit cocci_id/* net/sched/cls_cgroup.c 216 */;
	int __init cocci_id/* net/sched/cls_cgroup.c 211 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_cgroup.c 198 */;
	struct nlattr *cocci_id/* net/sched/cls_cgroup.c 174 */;
	struct tcmsg *cocci_id/* net/sched/cls_cgroup.c 171 */;
	struct cls_cgroup_head {
		u32 handle;
		struct tcf_exts exts;
		struct tcf_ematch_tree ematches;
		struct tcf_proto *tp;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_cgroup.c 17 */;
	struct tcf_walker *cocci_id/* net/sched/cls_cgroup.c 152 */;
	bool *cocci_id/* net/sched/cls_cgroup.c 146 */;
	void *cocci_id/* net/sched/cls_cgroup.c 146 */;
}
