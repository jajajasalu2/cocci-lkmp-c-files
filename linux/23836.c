cocci_test_suite() {
	struct Qdisc *cocci_id/* net/sched/cls_fw.c 75 */;
	struct tcf_result *cocci_id/* net/sched/cls_fw.c 51 */;
	const struct tcf_proto *cocci_id/* net/sched/cls_fw.c 50 */;
	void __exit cocci_id/* net/sched/cls_fw.c 449 */;
	int __init cocci_id/* net/sched/cls_fw.c 444 */;
	struct tcf_proto_ops cocci_id/* net/sched/cls_fw.c 430 */;
	u32 cocci_id/* net/sched/cls_fw.c 422 */;
	void *cocci_id/* net/sched/cls_fw.c 422 */;
	unsigned long cocci_id/* net/sched/cls_fw.c 422 */;
	struct net_device *cocci_id/* net/sched/cls_fw.c 398 */;
	struct tcmsg *cocci_id/* net/sched/cls_fw.c 376 */;
	struct tcf_walker *cocci_id/* net/sched/cls_fw.c 345 */;
	struct fw_filter {
		struct fw_filter __rcu *next;
		u32 id;
		struct tcf_result res;
		int ifindex;
		struct tcf_exts exts;
		struct tcf_proto *tp;
		struct rcu_work rwork;
	} cocci_id/* net/sched/cls_fw.c 33 */;
	struct fw_head {
		u32 mask;
		struct fw_filter __rcu *ht[HTSIZE];
		struct rcu_head rcu;
	} cocci_id/* net/sched/cls_fw.c 27 */;
	struct fw_filter cocci_id/* net/sched/cls_fw.c 264 */;
	struct fw_filter __rcu **cocci_id/* net/sched/cls_fw.c 259 */;
	struct nlattr *cocci_id/* net/sched/cls_fw.c 246 */[TCA_FW_MAX + 1];
	struct nlattr *cocci_id/* net/sched/cls_fw.c 245 */;
	struct fw_head *cocci_id/* net/sched/cls_fw.c 243 */;
	struct netlink_ext_ack *cocci_id/* net/sched/cls_fw.c 241 */;
	bool cocci_id/* net/sched/cls_fw.c 240 */;
	struct nlattr **cocci_id/* net/sched/cls_fw.c 239 */;
	void **cocci_id/* net/sched/cls_fw.c 239 */;
	struct tcf_proto *cocci_id/* net/sched/cls_fw.c 238 */;
	struct sk_buff *cocci_id/* net/sched/cls_fw.c 237 */;
	struct net *cocci_id/* net/sched/cls_fw.c 237 */;
	int cocci_id/* net/sched/cls_fw.c 237 */;
	const struct nla_policy cocci_id/* net/sched/cls_fw.c 193 */[TCA_FW_MAX + 1];
	bool *cocci_id/* net/sched/cls_fw.c 154 */;
	struct work_struct *cocci_id/* net/sched/cls_fw.c 120 */;
	struct fw_filter *cocci_id/* net/sched/cls_fw.c 113 */;
	void cocci_id/* net/sched/cls_fw.c 113 */;
}
