cocci_test_suite() {
	const struct choke_sched_data *cocci_id/* net/sched/sch_choke.c 76 */;
	void __exit cocci_id/* net/sched/sch_choke.c 515 */;
	int __init cocci_id/* net/sched/sch_choke.c 510 */;
	struct choke_sched_data cocci_id/* net/sched/sch_choke.c 496 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_choke.c 494 */;
	void cocci_id/* net/sched/sch_choke.c 480 */;
	struct choke_sched_data {
		u32 limit;
		unsigned char flags;
		struct red_parms parms;
		struct red_vars vars;
		struct {
			u32 prob_drop;
			u32 prob_mark;
			u32 forced_drop;
			u32 forced_mark;
			u32 pdrop;
			u32 other;
			u32 matched;
		} stats;
		unsigned int head;
		unsigned int tail;
		unsigned int tab_mask;
		struct sk_buff **tab;
	} cocci_id/* net/sched/sch_choke.c 48 */;
	struct tc_choke_xstats cocci_id/* net/sched/sch_choke.c 469 */;
	struct gnet_dump *cocci_id/* net/sched/sch_choke.c 466 */;
	struct tc_red_qopt cocci_id/* net/sched/sch_choke.c 442 */;
	unsigned cocci_id/* net/sched/sch_choke.c 388 */;
	struct sk_buff *cocci_id/* net/sched/sch_choke.c 380 */;
	u32 cocci_id/* net/sched/sch_choke.c 352 */;
	unsigned int cocci_id/* net/sched/sch_choke.c 351 */;
	struct sk_buff **cocci_id/* net/sched/sch_choke.c 350 */;
	const struct tc_red_qopt *cocci_id/* net/sched/sch_choke.c 348 */;
	struct nlattr *cocci_id/* net/sched/sch_choke.c 347 */[TCA_CHOKE_MAX + 1];
	struct choke_sched_data *cocci_id/* net/sched/sch_choke.c 346 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_choke.c 344 */;
	struct nlattr *cocci_id/* net/sched/sch_choke.c 343 */;
	struct Qdisc *cocci_id/* net/sched/sch_choke.c 343 */;
	int cocci_id/* net/sched/sch_choke.c 343 */;
	void *cocci_id/* net/sched/sch_choke.c 338 */;
	const struct nla_policy cocci_id/* net/sched/sch_choke.c 331 */[TCA_CHOKE_MAX + 1];
	const struct red_parms *cocci_id/* net/sched/sch_choke.c 223 */;
	unsigned int *cocci_id/* net/sched/sch_choke.c 208 */;
	struct flow_keys cocci_id/* net/sched/sch_choke.c 158 */;
	bool cocci_id/* net/sched/sch_choke.c 155 */;
	u16 cocci_id/* net/sched/sch_choke.c 145 */;
	struct choke_skb_cb cocci_id/* net/sched/sch_choke.c 141 */;
	const struct sk_buff *cocci_id/* net/sched/sch_choke.c 139 */;
	struct choke_skb_cb *cocci_id/* net/sched/sch_choke.c 139 */;
	struct choke_skb_cb {
		u16 classid;
		u8 keys_valid;
		struct flow_keys_digest keys;
	} cocci_id/* net/sched/sch_choke.c 133 */;
}
