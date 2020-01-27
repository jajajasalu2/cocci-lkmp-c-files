cocci_test_suite() {
	const struct em_ipt_xt_match *cocci_id/* net/sched/em_ipt.c 99 */;
	const struct em_ipt_xt_match cocci_id/* net/sched/em_ipt.c 85 */[];
	u8 cocci_id/* net/sched/em_ipt.c 75 */;
	struct nlattr **cocci_id/* net/sched/em_ipt.c 75 */;
	int cocci_id/* net/sched/em_ipt.c 75 */;
	void *cocci_id/* net/sched/em_ipt.c 56 */;
	union {
		struct ipt_entry e4;
		struct ip6t_entry e6;
	} cocci_id/* net/sched/em_ipt.c 45 */;
	struct xt_mtchk_param cocci_id/* net/sched/em_ipt.c 44 */;
	struct net *cocci_id/* net/sched/em_ipt.c 42 */;
	struct em_ipt_match *cocci_id/* net/sched/em_ipt.c 42 */;
	const struct nla_policy cocci_id/* net/sched/em_ipt.c 33 */[TCA_EM_IPT_MAX + 1];
	void __exit cocci_id/* net/sched/em_ipt.c 285 */;
	int __init cocci_id/* net/sched/em_ipt.c 280 */;
	struct em_ipt_xt_match {
		char *match_name;
		int (*validate_match_data)(struct nlattr **tb, u8 mrev);
	} cocci_id/* net/sched/em_ipt.c 28 */;
	struct tcf_ematch_ops cocci_id/* net/sched/em_ipt.c 270 */;
	struct sk_buff *cocci_id/* net/sched/em_ipt.c 250 */;
	struct ipv6hdr cocci_id/* net/sched/em_ipt.c 223 */;
	struct iphdr cocci_id/* net/sched/em_ipt.c 217 */;
	struct nf_hook_state cocci_id/* net/sched/em_ipt.c 212 */;
	struct net_device *cocci_id/* net/sched/em_ipt.c 210 */;
	struct em_ipt_match {
		const struct xt_match *match;
		u32 hook;
		u8 nfproto;
		u8 match_data[0]__aligned(8);
	} cocci_id/* net/sched/em_ipt.c 21 */;
	struct xt_action_param cocci_id/* net/sched/em_ipt.c 209 */;
	const struct em_ipt_match *cocci_id/* net/sched/em_ipt.c 208 */;
	const void *cocci_id/* net/sched/em_ipt.c 208 */;
	struct tcf_pkt_info *cocci_id/* net/sched/em_ipt.c 206 */;
	struct xt_mtdtor_param cocci_id/* net/sched/em_ipt.c 193 */;
	void cocci_id/* net/sched/em_ipt.c 185 */;
	unsigned long cocci_id/* net/sched/em_ipt.c 176 */;
	struct xt_match *cocci_id/* net/sched/em_ipt.c 131 */;
	struct nlattr *cocci_id/* net/sched/em_ipt.c 129 */[TCA_EM_IPT_MAX + 1];
	struct tcf_ematch *cocci_id/* net/sched/em_ipt.c 127 */;
	struct nlattr *cocci_id/* net/sched/em_ipt.c 100 */;
}
