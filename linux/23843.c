cocci_test_suite() {
	void __exit cocci_id/* net/sched/cls_route.c 671 */;
	int __init cocci_id/* net/sched/cls_route.c 666 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_route.c 652 */;
	void *cocci_id/* net/sched/cls_route.c 644 */;
	unsigned long cocci_id/* net/sched/cls_route.c 644 */;
	struct tcmsg *cocci_id/* net/sched/cls_route.c 596 */;
	struct tcf_walker *cocci_id/* net/sched/cls_route.c 561 */;
	struct route4_filter cocci_id/* net/sched/cls_route.c 493 */;
	unsigned int cocci_id/* net/sched/cls_route.c 476 */;
	struct nlattr *cocci_id/* net/sched/cls_route.c 475 */[TCA_ROUTE4_MAX + 1];
	struct nlattr *cocci_id/* net/sched/cls_route.c 474 */;
	struct route4_bucket *cocci_id/* net/sched/cls_route.c 473 */;
	struct route4_filter __rcu **cocci_id/* net/sched/cls_route.c 471 */;
	struct route4_head *cocci_id/* net/sched/cls_route.c 470 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_route.c 468 */;
	bool cocci_id/* net/sched/cls_route.c 467 */;
	struct nlattr **cocci_id/* net/sched/cls_route.c 467 */;
	void **cocci_id/* net/sched/cls_route.c 467 */;
	struct tcf_proto *cocci_id/* net/sched/cls_route.c 466 */;
	struct sk_buff *cocci_id/* net/sched/cls_route.c 465 */;
	struct net *cocci_id/* net/sched/cls_route.c 465 */;
	int cocci_id/* net/sched/cls_route.c 465 */;
	struct route4_filter {
		struct route4_filter __rcu *next;
		u32 id;
		int iif;
		struct tcf_result res;
		struct tcf_exts exts;
		u32 handle;
		struct route4_bucket *bkt;
		struct tcf_proto *tp;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_route.c 46 */;
	struct route4_bucket cocci_id/* net/sched/cls_route.c 430 */;
	struct route4_bucket {
		struct route4_filter __rcu *ht[16 + 16 + 1];
		struct rcu_head rcu;
	} cocci_id/* net/sched/cls_route.c 40 */;
	const struct nla_policy cocci_id/* net/sched/cls_route.c 374 */[TCA_ROUTE4_MAX + 1];
	struct route4_head {
		struct route4_fastmap fastmap[16];
		struct route4_bucket __rcu *table[256 + 1];
		struct rcu_head rcu;
	} cocci_id/* net/sched/cls_route.c 34 */;
	bool *cocci_id/* net/sched/cls_route.c 311 */;
	struct route4_fastmap {
		struct route4_filter *filter;
		u32 id;
		int iif;
	} cocci_id/* net/sched/cls_route.c 28 */;
	struct work_struct *cocci_id/* net/sched/cls_route.c 260 */;
	struct route4_filter *cocci_id/* net/sched/cls_route.c 253 */;
	void cocci_id/* net/sched/cls_route.c 253 */;
	struct route4_head cocci_id/* net/sched/cls_route.c 245 */;
	u32 cocci_id/* net/sched/cls_route.c 202 */;
	struct dst_entry *cocci_id/* net/sched/cls_route.c 128 */;
	struct tcf_result *cocci_id/* net/sched/cls_route.c 125 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_route.c 124 */;
}
