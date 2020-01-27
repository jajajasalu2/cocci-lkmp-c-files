cocci_test_suite() {
	struct fttmr010 {
		void __iomem *base;
		unsigned int tick_rate;
		bool is_aspeed;
		u32 t1_enable_val;
		struct clock_event_device clkevt;
#ifdef CONFIG_ARM
		struct delay_timer delay_timer;
#endif
	} cocci_id/* drivers/clocksource/timer-fttmr010.c 94 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-fttmr010.c 407 */;
	int cocci_id/* drivers/clocksource/timer-fttmr010.c 407 */;
	u32 cocci_id/* drivers/clocksource/timer-fttmr010.c 258 */;
	struct clk *cocci_id/* drivers/clocksource/timer-fttmr010.c 256 */;
	struct fttmr010 *cocci_id/* drivers/clocksource/timer-fttmr010.c 254 */;
	bool cocci_id/* drivers/clocksource/timer-fttmr010.c 252 */;
	int __init cocci_id/* drivers/clocksource/timer-fttmr010.c 252 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-fttmr010.c 246 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-fttmr010.c 244 */;
	void *cocci_id/* drivers/clocksource/timer-fttmr010.c 244 */;
	u64 notrace cocci_id/* drivers/clocksource/timer-fttmr010.c 131 */;
	unsigned long cocci_id/* drivers/clocksource/timer-fttmr010.c 121 */;
	void cocci_id/* drivers/clocksource/timer-fttmr010.c 121 */;
	struct fttmr010 cocci_id/* drivers/clocksource/timer-fttmr010.c 113 */;
}
