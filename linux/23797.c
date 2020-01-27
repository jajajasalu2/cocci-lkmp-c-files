cocci_test_suite() {
	struct Qdisc *cocci_id/* net/sched/cls_tcindex.c 95 */;
	struct tcf_result *cocci_id/* net/sched/cls_tcindex.c 84 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_tcindex.c 83 */;
	void __exit cocci_id/* net/sched/cls_tcindex.c 684 */;
	int __init cocci_id/* net/sched/cls_tcindex.c 679 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_tcindex.c 665 */;
	u32 cocci_id/* net/sched/cls_tcindex.c 657 */;
	void *cocci_id/* net/sched/cls_tcindex.c 657 */;
	unsigned long cocci_id/* net/sched/cls_tcindex.c 657 */;
	u16 cocci_id/* net/sched/cls_tcindex.c 61 */;
	struct tcmsg *cocci_id/* net/sched/cls_tcindex.c 596 */;
	struct tcf_walker *cocci_id/* net/sched/cls_tcindex.c 523 */;
	struct nlattr *cocci_id/* net/sched/cls_tcindex.c 502 */[TCA_TCINDEX_MAX + 1];
	struct nlattr *cocci_id/* net/sched/cls_tcindex.c 501 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_tcindex.c 499 */;
	bool cocci_id/* net/sched/cls_tcindex.c 498 */;
	struct nlattr **cocci_id/* net/sched/cls_tcindex.c 498 */;
	void **cocci_id/* net/sched/cls_tcindex.c 498 */;
	struct tcf_proto *cocci_id/* net/sched/cls_tcindex.c 497 */;
	struct sk_buff *cocci_id/* net/sched/cls_tcindex.c 496 */;
	struct tcindex_data {
		struct tcindex_filter_result *perfect;
		struct tcindex_filter __rcu **h;
		struct tcf_proto *tp;
		u16 mask;
		u32 shift;
		u32 hash;
		u32 alloc_hash;
		u32 fall_through;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_tcindex.c 43 */;
	struct tcindex_filter {
		u16 key;
		struct tcindex_filter_result result;
		struct tcindex_filter __rcu *next;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_tcindex.c 35 */;
	struct tcf_exts cocci_id/* net/sched/cls_tcindex.c 311 */;
	struct tcf_result cocci_id/* net/sched/cls_tcindex.c 309 */;
	struct tcindex_filter_result {
		struct tcf_exts exts;
		struct tcf_result res;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_tcindex.c 29 */;
	struct tcindex_filter_result cocci_id/* net/sched/cls_tcindex.c 281 */;
	struct tcindex_data *cocci_id/* net/sched/cls_tcindex.c 277 */;
	struct net *cocci_id/* net/sched/cls_tcindex.c 277 */;
	int cocci_id/* net/sched/cls_tcindex.c 277 */;
	const struct nla_policy cocci_id/* net/sched/cls_tcindex.c 242 */[TCA_TCINDEX_MAX + 1];
	struct tcindex_data cocci_id/* net/sched/cls_tcindex.c 228 */;
	struct tcindex_filter __rcu **cocci_id/* net/sched/cls_tcindex.c 181 */;
	bool *cocci_id/* net/sched/cls_tcindex.c 176 */;
	struct tcindex_filter cocci_id/* net/sched/cls_tcindex.c 168 */;
	struct work_struct *cocci_id/* net/sched/cls_tcindex.c 165 */;
	struct tcindex_filter *cocci_id/* net/sched/cls_tcindex.c 158 */;
	void cocci_id/* net/sched/cls_tcindex.c 158 */;
	struct tcindex_filter_result *cocci_id/* net/sched/cls_tcindex.c 140 */;
}
