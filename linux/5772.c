cocci_test_suite() {
	bool cocci_id/* drivers/clocksource/timer-sun5i.c 94 */;
	u8 cocci_id/* drivers/clocksource/timer-sun5i.c 89 */;
	u32 cocci_id/* drivers/clocksource/timer-sun5i.c 75 */;
	void cocci_id/* drivers/clocksource/timer-sun5i.c 73 */;
	struct sun5i_timer_clkevt cocci_id/* drivers/clocksource/timer-sun5i.c 65 */;
	struct sun5i_timer_clkevt {
		struct sun5i_timer timer;
		struct clock_event_device clkevt;
	} cocci_id/* drivers/clocksource/timer-sun5i.c 59 */;
	struct sun5i_timer_clksrc cocci_id/* drivers/clocksource/timer-sun5i.c 57 */;
	struct sun5i_timer_clksrc {
		struct sun5i_timer timer;
		struct clocksource clksrc;
	} cocci_id/* drivers/clocksource/timer-sun5i.c 51 */;
	struct sun5i_timer cocci_id/* drivers/clocksource/timer-sun5i.c 49 */;
	struct sun5i_timer {
		void __iomem *base;
		struct clk *clk;
		struct notifier_block clk_rate_cb;
		u32 ticks_per_jiffy;
	} cocci_id/* drivers/clocksource/timer-sun5i.c 41 */;
	struct reset_control *cocci_id/* drivers/clocksource/timer-sun5i.c 339 */;
	struct clk *cocci_id/* drivers/clocksource/timer-sun5i.c 265 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-sun5i.c 264 */;
	void __iomem *cocci_id/* drivers/clocksource/timer-sun5i.c 264 */;
	int __init cocci_id/* drivers/clocksource/timer-sun5i.c 264 */;
	struct sun5i_timer *cocci_id/* drivers/clocksource/timer-sun5i.c 253 */;
	struct clk_notifier_data *cocci_id/* drivers/clocksource/timer-sun5i.c 252 */;
	void *cocci_id/* drivers/clocksource/timer-sun5i.c 250 */;
	struct notifier_block *cocci_id/* drivers/clocksource/timer-sun5i.c 249 */;
	struct sun5i_timer_clksrc *cocci_id/* drivers/clocksource/timer-sun5i.c 158 */;
	u64 cocci_id/* drivers/clocksource/timer-sun5i.c 156 */;
	struct clocksource *cocci_id/* drivers/clocksource/timer-sun5i.c 156 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-sun5i.c 146 */;
	struct sun5i_timer_clkevt *cocci_id/* drivers/clocksource/timer-sun5i.c 137 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-sun5i.c 135 */;
	unsigned long cocci_id/* drivers/clocksource/timer-sun5i.c 134 */;
	int cocci_id/* drivers/clocksource/timer-sun5i.c 134 */;
}
