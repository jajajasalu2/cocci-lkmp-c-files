cocci_test_suite() {
	u32 cocci_id/* drivers/clocksource/bcm2835_timer.c 73 */;
	void __iomem *cocci_id/* drivers/clocksource/bcm2835_timer.c 72 */;
	struct device_node *cocci_id/* drivers/clocksource/bcm2835_timer.c 70 */;
	int __init cocci_id/* drivers/clocksource/bcm2835_timer.c 70 */;
	void (*cocci_id/* drivers/clocksource/bcm2835_timer.c 57 */)(struct clock_event_device *);
	struct bcm2835_timer *cocci_id/* drivers/clocksource/bcm2835_timer.c 56 */;
	irqreturn_t cocci_id/* drivers/clocksource/bcm2835_timer.c 54 */;
	void *cocci_id/* drivers/clocksource/bcm2835_timer.c 54 */;
	int cocci_id/* drivers/clocksource/bcm2835_timer.c 54 */;
	struct bcm2835_timer cocci_id/* drivers/clocksource/bcm2835_timer.c 48 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/bcm2835_timer.c 45 */;
	unsigned long cocci_id/* drivers/clocksource/bcm2835_timer.c 44 */;
	u64 notrace cocci_id/* drivers/clocksource/bcm2835_timer.c 39 */;
	void cocci_id/* drivers/clocksource/bcm2835_timer.c 39 */;
	struct bcm2835_timer {
		void __iomem *control;
		void __iomem *compare;
		int match_mask;
		struct clock_event_device evt;
		struct irqaction act;
	} cocci_id/* drivers/clocksource/bcm2835_timer.c 29 */;
}
