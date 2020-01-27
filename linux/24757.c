cocci_test_suite() {
	unsigned int cocci_id/* net/netfilter/xt_IDLETIMER.c 98 */;
	int cocci_id/* net/netfilter/xt_IDLETIMER.c 98 */;
	struct timer_list *cocci_id/* net/netfilter/xt_IDLETIMER.c 89 */;
	struct idletimer_tg cocci_id/* net/netfilter/xt_IDLETIMER.c 83 */;
	struct work_struct *cocci_id/* net/netfilter/xt_IDLETIMER.c 81 */;
	unsigned long cocci_id/* net/netfilter/xt_IDLETIMER.c 64 */;
	struct device_attribute *cocci_id/* net/netfilter/xt_IDLETIMER.c 61 */;
	char *cocci_id/* net/netfilter/xt_IDLETIMER.c 61 */;
	ssize_t cocci_id/* net/netfilter/xt_IDLETIMER.c 60 */;
	const char *cocci_id/* net/netfilter/xt_IDLETIMER.c 48 */;
	struct idletimer_tg *cocci_id/* net/netfilter/xt_IDLETIMER.c 48 */;
	struct kobject *cocci_id/* net/netfilter/xt_IDLETIMER.c 45 */;
	struct idletimer_tg {
		struct list_head entry;
		struct timer_list timer;
		struct work_struct work;
		struct kobject *kobj;
		struct device_attribute attr;
		unsigned int refcnt;
	} cocci_id/* net/netfilter/xt_IDLETIMER.c 31 */;
	void __exit cocci_id/* net/netfilter/xt_IDLETIMER.c 301 */;
	int __init cocci_id/* net/netfilter/xt_IDLETIMER.c 265 */;
	struct device *cocci_id/* net/netfilter/xt_IDLETIMER.c 263 */;
	struct class *cocci_id/* net/netfilter/xt_IDLETIMER.c 261 */;
	struct idletimer_tg_info cocci_id/* net/netfilter/xt_IDLETIMER.c 254 */;
	struct xt_target cocci_id/* net/netfilter/xt_IDLETIMER.c 250 */;
	const struct idletimer_tg_info *cocci_id/* net/netfilter/xt_IDLETIMER.c 227 */;
	const struct xt_tgdtor_param *cocci_id/* net/netfilter/xt_IDLETIMER.c 225 */;
	void cocci_id/* net/netfilter/xt_IDLETIMER.c 225 */;
	struct idletimer_tg_info *cocci_id/* net/netfilter/xt_IDLETIMER.c 182 */;
	const struct xt_tgchk_param *cocci_id/* net/netfilter/xt_IDLETIMER.c 180 */;
	const struct xt_action_param *cocci_id/* net/netfilter/xt_IDLETIMER.c 167 */;
	struct sk_buff *cocci_id/* net/netfilter/xt_IDLETIMER.c 166 */;
}
