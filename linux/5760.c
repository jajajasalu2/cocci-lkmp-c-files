cocci_test_suite() {
	unsigned long cocci_id/* drivers/clocksource/timer-rockchip.c 77 */;
	u32 cocci_id/* drivers/clocksource/timer-rockchip.c 60 */;
	void cocci_id/* drivers/clocksource/timer-rockchip.c 55 */;
	struct rk_timer *cocci_id/* drivers/clocksource/timer-rockchip.c 48 */;
	struct rk_clkevt *cocci_id/* drivers/clocksource/timer-rockchip.c 47 */;
	struct rk_clkevt {
		struct clock_event_device ce;
		struct rk_timer timer;
	} cocci_id/* drivers/clocksource/timer-rockchip.c 42 */;
	struct rk_timer {
		void __iomem *base;
		void __iomem *ctrl;
		struct clk *clk;
		struct clk *pclk;
		u32 freq;
		int irq;
	} cocci_id/* drivers/clocksource/timer-rockchip.c 33 */;
	struct rk_timer cocci_id/* drivers/clocksource/timer-rockchip.c 257 */;
	struct rk_clkevt cocci_id/* drivers/clocksource/timer-rockchip.c 210 */;
	int cocci_id/* drivers/clocksource/timer-rockchip.c 208 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-rockchip.c 207 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-rockchip.c 205 */;
	int __init cocci_id/* drivers/clocksource/timer-rockchip.c 205 */;
	void __init cocci_id/* drivers/clocksource/timer-rockchip.c 198 */;
	struct clk *cocci_id/* drivers/clocksource/timer-rockchip.c 130 */;
	int __init cocci_id/* drivers/clocksource/timer-rockchip.c 127 */;
	u64 notrace cocci_id/* drivers/clocksource/timer-rockchip.c 122 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-rockchip.c 107 */;
	void *cocci_id/* drivers/clocksource/timer-rockchip.c 107 */;
}
