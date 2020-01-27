cocci_test_suite() {
	void __exit cocci_id/* drivers/clocksource/em_sti.c 364 */;
	int __init cocci_id/* drivers/clocksource/em_sti.c 359 */;
	struct platform_driver cocci_id/* drivers/clocksource/em_sti.c 350 */;
	const struct of_device_id cocci_id/* drivers/clocksource/em_sti.c 344 */[];
	struct resource *cocci_id/* drivers/clocksource/em_sti.c 282 */;
	struct platform_device *cocci_id/* drivers/clocksource/em_sti.c 279 */;
	u64 cocci_id/* drivers/clocksource/em_sti.c 253 */;
	struct em_sti_priv {
		void __iomem *base;
		struct clk *clk;
		struct platform_device *pdev;
		unsigned int active[USER_NR];
		unsigned long rate;
		raw_spinlock_t lock;
		struct clock_event_device ced;
		struct clocksource cs;
	} cocci_id/* drivers/clocksource/em_sti.c 25 */;
	unsigned long cocci_id/* drivers/clocksource/em_sti.c 249 */;
	int cocci_id/* drivers/clocksource/em_sti.c 249 */;
	struct em_sti_priv cocci_id/* drivers/clocksource/em_sti.c 230 */;
	enum{USER_CLOCKSOURCE, USER_CLOCKEVENT, USER_NR,} cocci_id/* drivers/clocksource/em_sti.c 23 */;
	struct em_sti_priv *cocci_id/* drivers/clocksource/em_sti.c 228 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/em_sti.c 228 */;
	void cocci_id/* drivers/clocksource/em_sti.c 198 */;
	struct clocksource *cocci_id/* drivers/clocksource/em_sti.c 181 */;
	unsigned int cocci_id/* drivers/clocksource/em_sti.c 148 */;
	irqreturn_t cocci_id/* drivers/clocksource/em_sti.c 140 */;
	void *cocci_id/* drivers/clocksource/em_sti.c 140 */;
}
