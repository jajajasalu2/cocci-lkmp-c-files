cocci_test_suite() {
	struct runtime_sc {
		u64 x;
		u64 y;
		u64 sm1;
		u64 ism1;
		u64 dx;
		u64 dy;
		u64 sm2;
		u64 ism2;
	} cocci_id/* net/sched/sch_hfsc.c 94 */;
	struct tc_service_curve *cocci_id/* net/sched/sch_hfsc.c 922 */;
	struct nlattr *cocci_id/* net/sched/sch_hfsc.c 921 */[TCA_HFSC_MAX + 1];
	struct nlattr *cocci_id/* net/sched/sch_hfsc.c 920 */;
	struct netlink_ext_ack *cocci_id/* net/sched/sch_hfsc.c 915 */;
	struct nlattr **cocci_id/* net/sched/sch_hfsc.c 914 */;
	unsigned long *cocci_id/* net/sched/sch_hfsc.c 914 */;
	int cocci_id/* net/sched/sch_hfsc.c 912 */;
	const struct nla_policy cocci_id/* net/sched/sch_hfsc.c 906 */[TCA_HFSC_MAX + 1];
	struct Qdisc_class_common *cocci_id/* net/sched/sch_hfsc.c 867 */;
	unsigned int cocci_id/* net/sched/sch_hfsc.c 851 */;
	struct internal_sc {
		u64 sm1;
		u64 ism1;
		u64 dx;
		u64 dy;
		u64 sm2;
		u64 ism2;
	} cocci_id/* net/sched/sch_hfsc.c 84 */;
	struct runtime_sc *cocci_id/* net/sched/sch_hfsc.c 489 */;
	u32 cocci_id/* net/sched/sch_hfsc.c 442 */;
	u64 cocci_id/* net/sched/sch_hfsc.c 441 */;
	struct hfsc_class cocci_id/* net/sched/sch_hfsc.c 328 */;
	struct rb_node *cocci_id/* net/sched/sch_hfsc.c 323 */;
	struct rb_node **cocci_id/* net/sched/sch_hfsc.c 322 */;
	struct hfsc_class *cocci_id/* net/sched/sch_hfsc.c 320 */;
	void cocci_id/* net/sched/sch_hfsc.c 319 */;
	struct hfsc_sched *cocci_id/* net/sched/sch_hfsc.c 219 */;
	struct hfsc_sched {
		u16 defcls;
		struct hfsc_class root;
		struct Qdisc_class_hash clhash;
		struct rb_root eligible;
		struct qdisc_watchdog watchdog;
	} cocci_id/* net/sched/sch_hfsc.c 169 */;
	void __exit cocci_id/* net/sched/sch_hfsc.c 1682 */;
	int __init cocci_id/* net/sched/sch_hfsc.c 1676 */;
	struct hfsc_sched cocci_id/* net/sched/sch_hfsc.c 1672 */;
	struct Qdisc_ops cocci_id/* net/sched/sch_hfsc.c 1661 */;
	const struct Qdisc_class_ops cocci_id/* net/sched/sch_hfsc.c 1646 */;
	bool cocci_id/* net/sched/sch_hfsc.c 1537 */;
	struct sk_buff **cocci_id/* net/sched/sch_hfsc.c 1532 */;
	struct tc_hfsc_qopt cocci_id/* net/sched/sch_hfsc.c 1519 */;
	unsigned char *cocci_id/* net/sched/sch_hfsc.c 1518 */;
	struct hlist_node *cocci_id/* net/sched/sch_hfsc.c 1495 */;
	struct tc_hfsc_qopt *cocci_id/* net/sched/sch_hfsc.c 1431 */;
	struct qdisc_walker *cocci_id/* net/sched/sch_hfsc.c 1341 */;
	__u32 cocci_id/* net/sched/sch_hfsc.c 1322 */;
	struct tc_hfsc_stats cocci_id/* net/sched/sch_hfsc.c 1321 */;
	struct gnet_dump *cocci_id/* net/sched/sch_hfsc.c 1318 */;
	struct tcmsg *cocci_id/* net/sched/sch_hfsc.c 1293 */;
	struct tc_service_curve cocci_id/* net/sched/sch_hfsc.c 1256 */;
	struct internal_sc *cocci_id/* net/sched/sch_hfsc.c 1254 */;
	struct tcf_block *cocci_id/* net/sched/sch_hfsc.c 1241 */;
	struct Qdisc *cocci_id/* net/sched/sch_hfsc.c 1219 */;
	unsigned long cocci_id/* net/sched/sch_hfsc.c 1218 */;
	struct Qdisc **cocci_id/* net/sched/sch_hfsc.c 1171 */;
	struct tcf_proto *cocci_id/* net/sched/sch_hfsc.c 1121 */;
	struct tcf_result cocci_id/* net/sched/sch_hfsc.c 1120 */;
	struct sk_buff *cocci_id/* net/sched/sch_hfsc.c 1116 */;
	int *cocci_id/* net/sched/sch_hfsc.c 1116 */;
	struct hfsc_class {
		struct Qdisc_class_common cl_common;
		struct gnet_stats_basic_packed bstats;
		struct gnet_stats_queue qstats;
		struct net_rate_estimator __rcu *rate_est;
		struct tcf_proto __rcu *filter_list;
		struct tcf_block *block;
		unsigned int filter_cnt;
		unsigned int level;
		struct hfsc_sched *sched;
		struct hfsc_class *cl_parent;
		struct list_head siblings;
		struct list_head children;
		struct Qdisc *qdisc;
		struct rb_node el_node;
		struct rb_root vt_tree;
		struct rb_node vt_node;
		struct rb_root cf_tree;
		struct rb_node cf_node;
		u64 cl_total;
		u64 cl_cumul;
		u64 cl_d;
		u64 cl_e;
		u64 cl_vt;
		u64 cl_f;
		u64 cl_myf;
		u64 cl_cfmin;
		u64 cl_cvtmin;
		u64 cl_vtadj;
		u64 cl_cvtoff;
		struct internal_sc cl_rsc;
		struct internal_sc cl_fsc;
		struct internal_sc cl_usc;
		struct runtime_sc cl_deadline;
		struct runtime_sc cl_eligible;
		struct runtime_sc cl_virtual;
		struct runtime_sc cl_ulimit;
		u8 cl_flags;
		u32 cl_vtperiod;
		u32 cl_parentperiod;
		u32 cl_nactive;
	} cocci_id/* net/sched/sch_hfsc.c 111 */;
	enum hfsc_class_flags{HFSC_RSC=0x1, HFSC_FSC=0x2, HFSC_USC=0x4,} cocci_id/* net/sched/sch_hfsc.c 105 */;
}
