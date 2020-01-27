cocci_test_suite() {
	int __init cocci_id/* net/sched/em_meta.c 996 */;
	struct tcf_ematch_ops cocci_id/* net/sched/em_meta.c 986 */;
	const struct meta_type_ops *cocci_id/* net/sched/em_meta.c 966 */;
	struct tcf_meta_hdr cocci_id/* net/sched/em_meta.c 965 */;
	struct sk_buff *cocci_id/* net/sched/em_meta.c 962 */;
	void cocci_id/* net/sched/em_meta.c 956 */;
	unsigned long cocci_id/* net/sched/em_meta.c 947 */;
	struct meta_match *cocci_id/* net/sched/em_meta.c 909 */;
	struct tcf_meta_hdr *cocci_id/* net/sched/em_meta.c 908 */;
	struct nlattr *cocci_id/* net/sched/em_meta.c 907 */[TCA_EM_META_MAX + 1];
	struct tcf_ematch *cocci_id/* net/sched/em_meta.c 904 */;
	struct net *cocci_id/* net/sched/em_meta.c 903 */;
	void *cocci_id/* net/sched/em_meta.c 903 */;
	int cocci_id/* net/sched/em_meta.c 903 */;
	const struct nla_policy cocci_id/* net/sched/em_meta.c 899 */[TCA_EM_META_MAX + 1];
	struct nlattr *cocci_id/* net/sched/em_meta.c 882 */;
	struct meta_value *cocci_id/* net/sched/em_meta.c 882 */;
	struct meta_obj cocci_id/* net/sched/em_meta.c 848 */;
	struct tcf_pkt_info *cocci_id/* net/sched/em_meta.c 844 */;
	struct meta_match {
		struct meta_value lvalue;
		struct meta_value rvalue;
	} cocci_id/* net/sched/em_meta.c 84 */;
	const struct meta_type_ops cocci_id/* net/sched/em_meta.c 797 */[TCF_META_TYPE_MAX + 1];
	struct meta_type_ops {
		void (*destroy)(struct meta_value *);
		int (*compare)(struct meta_obj *, struct meta_obj *);
		int (*change)(struct meta_value *, struct nlattr *);
		void (*apply_extras)(struct meta_value *, struct meta_obj *);
		int (*dump)(struct sk_buff *, struct meta_value *, int);
	} cocci_id/* net/sched/em_meta.c 789 */;
	struct meta_value {
		struct tcf_meta_val hdr;
		unsigned long val;
		unsigned int len;
	} cocci_id/* net/sched/em_meta.c 78 */;
	unsigned long *cocci_id/* net/sched/em_meta.c 748 */;
	struct meta_obj {
		unsigned long value;
		unsigned int len;
	} cocci_id/* net/sched/em_meta.c 73 */;
	struct meta_ops *cocci_id/* net/sched/em_meta.c 673 */;
	struct meta_ops cocci_id/* net/sched/em_meta.c 618 */[TCF_META_TYPE_MAX + 1][TCF_META_ID_MAX + 1];
	struct meta_ops {
		void (*get)(struct sk_buff *, struct tcf_pkt_info *,
			    struct meta_value *, struct meta_obj *, int *);
	} cocci_id/* net/sched/em_meta.c 608 */;
	const struct sock *cocci_id/* net/sched/em_meta.c 518 */;
	unsigned short cocci_id/* net/sched/em_meta.c 174 */;
	struct net_device *cocci_id/* net/sched/em_meta.c 139 */;
	struct meta_obj *cocci_id/* net/sched/em_meta.c 139 */;
	void __exit cocci_id/* net/sched/em_meta.c 1001 */;
	int *cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 736 */;
}
