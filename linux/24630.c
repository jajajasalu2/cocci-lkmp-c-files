cocci_test_suite() {
	struct gnet_stats_basic_packed *cocci_id/* net/netfilter/xt_RATEEST.c 97 */;
	const struct xt_rateest_target_info *cocci_id/* net/netfilter/xt_RATEEST.c 96 */;
	const struct xt_action_param *cocci_id/* net/netfilter/xt_RATEEST.c 94 */;
	struct sk_buff *cocci_id/* net/netfilter/xt_RATEEST.c 94 */;
	struct net *cocci_id/* net/netfilter/xt_RATEEST.c 63 */;
	unsigned int cocci_id/* net/netfilter/xt_RATEEST.c 50 */;
	const char *cocci_id/* net/netfilter/xt_RATEEST.c 47 */;
	struct xt_rateest_net *cocci_id/* net/netfilter/xt_RATEEST.c 46 */;
	struct xt_rateest *cocci_id/* net/netfilter/xt_RATEEST.c 46 */;
	void cocci_id/* net/netfilter/xt_RATEEST.c 37 */;
	struct xt_rateest cocci_id/* net/netfilter/xt_RATEEST.c 33 */;
	struct xt_rateest_net {
		struct mutex hash_lock;
		struct hlist_head hash[RATEEST_HSIZE];
	} cocci_id/* net/netfilter/xt_RATEEST.c 22 */;
	void __exit cocci_id/* net/netfilter/xt_RATEEST.c 216 */;
	int __init cocci_id/* net/netfilter/xt_RATEEST.c 207 */;
	struct xt_rateest_net cocci_id/* net/netfilter/xt_RATEEST.c 204 */;
	struct pernet_operations cocci_id/* net/netfilter/xt_RATEEST.c 201 */;
	int cocci_id/* net/netfilter/xt_RATEEST.c 190 */;
	struct xt_rateest_target_info cocci_id/* net/netfilter/xt_RATEEST.c 185 */;
	struct xt_target cocci_id/* net/netfilter/xt_RATEEST.c 178 */;
	const struct xt_tgdtor_param *cocci_id/* net/netfilter/xt_RATEEST.c 171 */;
	struct {
		struct nlattr opt;
		struct gnet_estimator est;
	} cocci_id/* net/netfilter/xt_RATEEST.c 112 */;
	struct xt_rateest_target_info *cocci_id/* net/netfilter/xt_RATEEST.c 110 */;
	const struct xt_tgchk_param *cocci_id/* net/netfilter/xt_RATEEST.c 107 */;
}
