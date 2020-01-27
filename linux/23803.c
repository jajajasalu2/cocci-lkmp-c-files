cocci_test_suite() {
	struct work_struct *cocci_id/* net/sched/sch_htb.c 985 */;
	const struct nla_policy cocci_id/* net/sched/sch_htb.c 975 */[TCA_HTB_MAX + 1];
	struct htb_class {
		struct Qdisc_class_common common;
		struct psched_ratecfg rate;
		struct psched_ratecfg ceil;
		s64 buffer,cbuffer;
		s64 mbuffer;
		u32 prio;
		int quantum;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		int filter_cnt;
		int level;
		unsigned int children;
		struct htb_class *parent;
		struct net_rate_estimator __rcu *rate_est;
		struct gnet_stats_basic_packed bstats;
		struct tc_htb_xstats xstats;
		s64 tokens,ctokens;
		s64 t_c;
		union {
			struct htb_class_leaf {
				int deficit[TC_HTB_MAXDEPTH];
				struct Qdisc *q;
			} leaf;
			struct htb_class_inner {
				struct htb_prio clprio[TC_HTB_NUMPRIO];
			} inner;
		};
		s64 pq_key;
		int prio_activity;
		enum htb_cmode cmode;
		struct rb_node pq_node;
		struct rb_node node[TC_HTB_NUMPRIO];
		unsigned int drops ____cacheline_aligned_in_smp;
		unsigned int overlimits;
	} cocci_id/* net/sched/sch_htb.c 94 */;
	struct htb_prio *cocci_id/* net/sched/sch_htb.c 829 */;
	struct htb_level *cocci_id/* net/sched/sch_htb.c 828 */;
	const int cocci_id/* net/sched/sch_htb.c 823 */;
	struct {
		struct rb_node *root;
		struct rb_node **pptr;
		u32 *pid;
	} cocci_id/* net/sched/sch_htb.c 769 */[TC_HTB_MAXDEPTH];
	struct htb_prio {
		union {
			struct rb_root row;
			struct rb_root feed;
		};
		struct rb_node *ptr;
		u32 last_ptr_id;
	} cocci_id/* net/sched/sch_htb.c 76 */;
	struct rb_node *cocci_id/* net/sched/sch_htb.c 713 */;
	enum htb_cmode{HTB_CANT_SEND, HTB_MAY_BORROW, HTB_CAN_SEND,} cocci_id/* net/sched/sch_htb.c 70 */;
	struct sk_buff *cocci_id/* net/sched/sch_htb.c 656 */;
	s64 cocci_id/* net/sched/sch_htb.c 631 */;
	struct htb_class *cocci_id/* net/sched/sch_htb.c 631 */;
	int cocci_id/* net/sched/sch_htb.c 631 */;
	void cocci_id/* net/sched/sch_htb.c 631 */;
	struct sk_buff **cocci_id/* net/sched/sch_htb.c 580 */;
	struct htb_sched *cocci_id/* net/sched/sch_htb.c 555 */;
	enum htb_cmode cocci_id/* net/sched/sch_htb.c 528 */;
	s64 *cocci_id/* net/sched/sch_htb.c 526 */;
	const struct htb_class *cocci_id/* net/sched/sch_htb.c 479 */;
	long cocci_id/* net/sched/sch_htb.c 403 */;
	struct htb_class cocci_id/* net/sched/sch_htb.c 282 */;
	struct rb_node **cocci_id/* net/sched/sch_htb.c 277 */;
	struct rb_root *cocci_id/* net/sched/sch_htb.c 274 */;
	void *cocci_id/* net/sched/sch_htb.c 247 */;
	struct tcf_proto *cocci_id/* net/sched/sch_htb.c 215 */;
	struct tcf_result cocci_id/* net/sched/sch_htb.c 214 */;
	int *cocci_id/* net/sched/sch_htb.c 210 */;
	struct Qdisc_class_common *cocci_id/* net/sched/sch_htb.c 183 */;
	void __exit cocci_id/* net/sched/sch_htb.c 1592 */;
	int __init cocci_id/* net/sched/sch_htb.c 1588 */;
	struct htb_sched cocci_id/* net/sched/sch_htb.c 1577 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_htb.c 1574 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_htb.c 1559 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_htb.c 1535 */;
	u32 cocci_id/* net/sched/sch_htb.c 1509 */;
	struct Qdisc *cocci_id/* net/sched/sch_htb.c 1508 */;
	unsigned long cocci_id/* net/sched/sch_htb.c 1508 */;
	struct tcf_block *cocci_id/* net/sched/sch_htb.c 1499 */;
	struct htb_sched {
		struct Qdisc_class_hash clhash;
		int defcls;
		int rate2quantum;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
#define HTB_WARN_TOOMANYEVENTS 0x1
		unsigned int warned;
		int direct_qlen;
		struct work_struct work;
		struct qdisc_skb_head direct_queue;
		u32 direct_pkts;
		u32 overlimits;
		struct qdisc_watchdog watchdog;
		s64 now;
		s64 near_ev_cache[TC_HTB_MAXDEPTH];
		int row_mask[TC_HTB_MAXDEPTH];
		struct htb_level hlevel[TC_HTB_MAXDEPTH];
	} cocci_id/* net/sched/sch_htb.c 148 */;
	struct htb_level {
		struct rb_root wait_pq;
		struct htb_prio hprio[TC_HTB_NUMPRIO];
	} cocci_id/* net/sched/sch_htb.c 143 */;
	struct {
		struct nlattr nla;
		struct gnet_estimator opt;
	} cocci_id/* net/sched/sch_htb.c 1341 */;
	u64 cocci_id/* net/sched/sch_htb.c 1307 */;
	struct tc_htb_opt *cocci_id/* net/sched/sch_htb.c 1306 */;
	struct nlattr *cocci_id/* net/sched/sch_htb.c 1304 */[TCA_HTB_MAX + 1];
	struct nlattr *cocci_id/* net/sched/sch_htb.c 1303 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_htb.c 1298 */;
	unsigned long *cocci_id/* net/sched/sch_htb.c 1298 */;
	struct nlattr **cocci_id/* net/sched/sch_htb.c 1297 */;
	unsigned int cocci_id/* net/sched/sch_htb.c 1223 */;
	struct hlist_node *cocci_id/* net/sched/sch_htb.c 1221 */;
	struct Qdisc **cocci_id/* net/sched/sch_htb.c 1148 */;
	__u32 cocci_id/* net/sched/sch_htb.c 1128 */;
	struct gnet_stats_queue cocci_id/* net/sched/sch_htb.c 1124 */;
	struct gnet_dump *cocci_id/* net/sched/sch_htb.c 1121 */;
	struct tc_htb_opt cocci_id/* net/sched/sch_htb.c 1079 */;
	struct tcmsg *cocci_id/* net/sched/sch_htb.c 1075 */;
	struct tc_htb_glob cocci_id/* net/sched/sch_htb.c 1047 */;
	struct tc_htb_glob *cocci_id/* net/sched/sch_htb.c 1000 */;
}
