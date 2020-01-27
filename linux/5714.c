cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/clocksource/timer-ixp4xx.c 93 */;
	void *cocci_id/* drivers/clocksource/timer-ixp4xx.c 93 */;
	u64 cocci_id/* drivers/clocksource/timer-ixp4xx.c 88 */;
	struct clocksource *cocci_id/* drivers/clocksource/timer-ixp4xx.c 88 */;
	u64 notrace cocci_id/* drivers/clocksource/timer-ixp4xx.c 83 */;
	void cocci_id/* drivers/clocksource/timer-ixp4xx.c 83 */;
	unsigned long cocci_id/* drivers/clocksource/timer-ixp4xx.c 78 */;
	struct ixp4xx_timer cocci_id/* drivers/clocksource/timer-ixp4xx.c 75 */;
	struct ixp4xx_timer {
		void __iomem *base;
		unsigned int tick_rate;
		u32 latch;
		struct clock_event_device clkevt;
#ifdef CONFIG_ARM
		struct delay_timer delay_timer;
#endif
	} cocci_id/* drivers/clocksource/timer-ixp4xx.c 56 */;
	void __iomem *cocci_id/* drivers/clocksource/timer-ixp4xx.c 266 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-ixp4xx.c 264 */;
	int cocci_id/* drivers/clocksource/timer-ixp4xx.c 264 */;
	resource_size_t cocci_id/* drivers/clocksource/timer-ixp4xx.c 248 */;
	void __init cocci_id/* drivers/clocksource/timer-ixp4xx.c 248 */;
	unsigned int cocci_id/* drivers/clocksource/timer-ixp4xx.c 175 */;
	u32 cocci_id/* drivers/clocksource/timer-ixp4xx.c 159 */;
	struct ixp4xx_timer *cocci_id/* drivers/clocksource/timer-ixp4xx.c 158 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-ixp4xx.c 156 */;
}
