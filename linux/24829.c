cocci_test_suite() {
	struct xt_led_info *cocci_id/* net/netfilter/xt_LED.c 96 */;
	const struct xt_tgchk_param *cocci_id/* net/netfilter/xt_LED.c 94 */;
	int cocci_id/* net/netfilter/xt_LED.c 94 */;
	const char *cocci_id/* net/netfilter/xt_LED.c 82 */;
	struct timer_list *cocci_id/* net/netfilter/xt_LED.c 74 */;
	unsigned long cocci_id/* net/netfilter/xt_LED.c 46 */;
	struct xt_led_info_internal *cocci_id/* net/netfilter/xt_LED.c 45 */;
	const struct xt_led_info *cocci_id/* net/netfilter/xt_LED.c 44 */;
	const struct xt_action_param *cocci_id/* net/netfilter/xt_LED.c 42 */;
	struct sk_buff *cocci_id/* net/netfilter/xt_LED.c 42 */;
	unsigned int cocci_id/* net/netfilter/xt_LED.c 41 */;
	struct xt_led_info_internal {
		struct list_head list;
		int refcnt;
		char *trigger_id;
		struct led_trigger netfilter_led_trigger;
		struct timer_list timer;
	} cocci_id/* net/netfilter/xt_LED.c 31 */;
	void __exit cocci_id/* net/netfilter/xt_LED.c 196 */;
	int __init cocci_id/* net/netfilter/xt_LED.c 191 */;
	struct xt_led_info cocci_id/* net/netfilter/xt_LED.c 184 */;
	struct xt_target cocci_id/* net/netfilter/xt_LED.c 179 */;
	const struct xt_tgdtor_param *cocci_id/* net/netfilter/xt_LED.c 155 */;
	void cocci_id/* net/netfilter/xt_LED.c 155 */;
	struct xt_led_info_internal cocci_id/* net/netfilter/xt_LED.c 112 */;
}
