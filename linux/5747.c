cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/clocksource/timer-zevio.c 99 */;
	void *cocci_id/* drivers/clocksource/timer-zevio.c 99 */;
	struct zevio_timer cocci_id/* drivers/clocksource/timer-zevio.c 65 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-zevio.c 63 */;
	unsigned long cocci_id/* drivers/clocksource/timer-zevio.c 62 */;
	struct zevio_timer {
		void __iomem *base;
		void __iomem *timer1,*timer2;
		void __iomem *interrupt_regs;
		struct clk *clk;
		struct clock_event_device clkevt;
		struct irqaction clkevt_irq;
		char clocksource_name[64];
		char clockevent_name[64];
	} cocci_id/* drivers/clocksource/timer-zevio.c 49 */;
	unsigned long long cocci_id/* drivers/clocksource/timer-zevio.c 148 */;
	int cocci_id/* drivers/clocksource/timer-zevio.c 121 */;
	struct resource cocci_id/* drivers/clocksource/timer-zevio.c 120 */;
	struct zevio_timer *cocci_id/* drivers/clocksource/timer-zevio.c 119 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-zevio.c 117 */;
	int __init cocci_id/* drivers/clocksource/timer-zevio.c 117 */;
	u32 cocci_id/* drivers/clocksource/timer-zevio.c 102 */;
}
