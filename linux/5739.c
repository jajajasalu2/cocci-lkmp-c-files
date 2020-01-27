cocci_test_suite() {
	void __iomem *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 99 */;
	struct ttc_timer_clockevent cocci_id/* drivers/clocksource/timer-cadence-ttc.c 97 */;
	struct ttc_timer_clockevent {
		struct ttc_timer ttc;
		struct clock_event_device ce;
	} cocci_id/* drivers/clocksource/timer-cadence-ttc.c 91 */;
	struct ttc_timer_clocksource cocci_id/* drivers/clocksource/timer-cadence-ttc.c 89 */;
	struct ttc_timer_clocksource {
		u32 scale_clk_ctrl_reg_old;
		u32 scale_clk_ctrl_reg_new;
		struct ttc_timer ttc;
		struct clocksource cs;
	} cocci_id/* drivers/clocksource/timer-cadence-ttc.c 81 */;
	struct ttc_timer cocci_id/* drivers/clocksource/timer-cadence-ttc.c 79 */;
	struct ttc_timer {
		void __iomem *base_addr;
		unsigned long freq;
		struct clk *clk;
		struct notifier_block clk_rate_change_nb;
	} cocci_id/* drivers/clocksource/timer-cadence-ttc.c 71 */;
	unsigned int cocci_id/* drivers/clocksource/timer-cadence-ttc.c 475 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 473 */;
	struct clk *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 401 */;
	int __init cocci_id/* drivers/clocksource/timer-cadence-ttc.c 401 */;
	struct clk_notifier_data *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 381 */;
	unsigned long cocci_id/* drivers/clocksource/timer-cadence-ttc.c 379 */;
	struct notifier_block *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 378 */;
	u32 cocci_id/* drivers/clocksource/timer-cadence-ttc.c 235 */;
	struct ttc_timer_clocksource *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 229 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 212 */;
	u64 notrace cocci_id/* drivers/clocksource/timer-cadence-ttc.c 162 */;
	void cocci_id/* drivers/clocksource/timer-cadence-ttc.c 162 */;
	struct ttc_timer *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 156 */;
	u64 cocci_id/* drivers/clocksource/timer-cadence-ttc.c 154 */;
	struct clocksource *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 154 */;
	struct ttc_timer_clockevent *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 138 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-cadence-ttc.c 136 */;
	void *cocci_id/* drivers/clocksource/timer-cadence-ttc.c 136 */;
	int cocci_id/* drivers/clocksource/timer-cadence-ttc.c 136 */;
}
