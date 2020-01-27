cocci_test_suite() {
	const struct xt_mtchk_param *cocci_id/* net/netfilter/xt_limit.c 98 */;
	int cocci_id/* net/netfilter/xt_limit.c 98 */;
	u32 cocci_id/* net/netfilter/xt_limit.c 88 */;
	unsigned long cocci_id/* net/netfilter/xt_limit.c 69 */;
	struct xt_limit_priv *cocci_id/* net/netfilter/xt_limit.c 68 */;
	const struct xt_rateinfo *cocci_id/* net/netfilter/xt_limit.c 67 */;
	const struct sk_buff *cocci_id/* net/netfilter/xt_limit.c 65 */;
	struct xt_action_param *cocci_id/* net/netfilter/xt_limit.c 65 */;
	bool cocci_id/* net/netfilter/xt_limit.c 64 */;
	void __exit cocci_id/* net/netfilter/xt_limit.c 203 */;
	int __init cocci_id/* net/netfilter/xt_limit.c 198 */;
	struct xt_match cocci_id/* net/netfilter/xt_limit.c 181 */;
	struct xt_limit_priv {
		spinlock_t lock;
		unsigned long prev;
		uint32_t credit;
	} cocci_id/* net/netfilter/xt_limit.c 17 */;
	struct compat_xt_rateinfo cocci_id/* net/netfilter/xt_limit.c 168 */;
	void __user *cocci_id/* net/netfilter/xt_limit.c 165 */;
	struct xt_rateinfo cocci_id/* net/netfilter/xt_limit.c 154 */;
	const struct compat_xt_rateinfo *cocci_id/* net/netfilter/xt_limit.c 153 */;
	const void *cocci_id/* net/netfilter/xt_limit.c 151 */;
	void *cocci_id/* net/netfilter/xt_limit.c 151 */;
	void cocci_id/* net/netfilter/xt_limit.c 151 */;
	struct compat_xt_rateinfo {
		u_int32_t avg;
		u_int32_t burst;
		compat_ulong_t prev;
		u_int32_t credit;
		u_int32_t credit_cap,cost;
		u_int32_t master;
	} cocci_id/* net/netfilter/xt_limit.c 138 */;
	const struct xt_mtdtor_param *cocci_id/* net/netfilter/xt_limit.c 130 */;
	struct xt_rateinfo *cocci_id/* net/netfilter/xt_limit.c 100 */;
}
