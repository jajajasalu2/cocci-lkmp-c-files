cocci_test_suite() {
	struct of_phandle_args cocci_id/* drivers/clocksource/ingenic-timer.c 99 */;
	struct clk *__initcocci_id/* drivers/clocksource/ingenic-timer.c 97 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/ingenic-timer.c 86 */;
	irqreturn_t cocci_id/* drivers/clocksource/ingenic-timer.c 84 */;
	void *cocci_id/* drivers/clocksource/ingenic-timer.c 84 */;
	int cocci_id/* drivers/clocksource/ingenic-timer.c 84 */;
	unsigned long cocci_id/* drivers/clocksource/ingenic-timer.c 69 */;
	struct ingenic_tcu cocci_id/* drivers/clocksource/ingenic-timer.c 57 */;
	u64 notrace cocci_id/* drivers/clocksource/ingenic-timer.c 50 */;
	void cocci_id/* drivers/clocksource/ingenic-timer.c 40 */;
	struct ingenic_tcu *cocci_id/* drivers/clocksource/ingenic-timer.c 38 */;
	struct platform_driver cocci_id/* drivers/clocksource/ingenic-timer.c 347 */;
	const struct dev_pm_ops __maybe_unused cocci_id/* drivers/clocksource/ingenic-timer.c 341 */;
	struct device *cocci_id/* drivers/clocksource/ingenic-timer.c 323 */;
	int __maybe_unused cocci_id/* drivers/clocksource/ingenic-timer.c 323 */;
	struct platform_device *cocci_id/* drivers/clocksource/ingenic-timer.c 307 */;
	struct ingenic_tcu {
		struct regmap *map;
		struct clk *timer_clk,*cs_clk;
		unsigned int timer_channel,cs_channel;
		struct clock_event_device cevt;
		struct clocksource cs;
		char name[4];
		unsigned long pwm_channels_mask;
	} cocci_id/* drivers/clocksource/ingenic-timer.c 28 */;
	u32 *cocci_id/* drivers/clocksource/ingenic-timer.c 258 */;
	long cocci_id/* drivers/clocksource/ingenic-timer.c 242 */;
	struct regmap *cocci_id/* drivers/clocksource/ingenic-timer.c 241 */;
	struct ingenic_soc_info {
		unsigned int num_channels;
	} cocci_id/* drivers/clocksource/ingenic-timer.c 24 */;
	const struct ingenic_soc_info *cocci_id/* drivers/clocksource/ingenic-timer.c 239 */;
	const struct of_device_id *cocci_id/* drivers/clocksource/ingenic-timer.c 238 */;
	const struct of_device_id cocci_id/* drivers/clocksource/ingenic-timer.c 229 */[];
	const struct ingenic_soc_info cocci_id/* drivers/clocksource/ingenic-timer.c 225 */;
	struct clocksource *cocci_id/* drivers/clocksource/ingenic-timer.c 173 */;
	unsigned int cocci_id/* drivers/clocksource/ingenic-timer.c 172 */;
	struct device_node *cocci_id/* drivers/clocksource/ingenic-timer.c 169 */;
	int __init cocci_id/* drivers/clocksource/ingenic-timer.c 169 */;
	struct irq_domain *cocci_id/* drivers/clocksource/ingenic-timer.c 112 */;
}
