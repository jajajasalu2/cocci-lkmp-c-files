cocci_test_suite() {
	u32 cocci_id/* drivers/clocksource/timer-atmel-pit.c 77 */;
	u64 cocci_id/* drivers/clocksource/timer-atmel-pit.c 73 */;
	void __iomem *cocci_id/* drivers/clocksource/timer-atmel-pit.c 59 */;
	unsigned int cocci_id/* drivers/clocksource/timer-atmel-pit.c 59 */;
	struct pit_data cocci_id/* drivers/clocksource/timer-atmel-pit.c 56 */;
	struct clocksource *cocci_id/* drivers/clocksource/timer-atmel-pit.c 49 */;
	struct pit_data {
		struct clock_event_device clkevt;
		struct clocksource clksrc;
		void __iomem *base;
		u32 cycle;
		u32 cnt;
		unsigned int irq;
		struct clk *mck;
	} cocci_id/* drivers/clocksource/timer-atmel-pit.c 38 */;
	struct pit_data *cocci_id/* drivers/clocksource/timer-atmel-pit.c 171 */;
	int cocci_id/* drivers/clocksource/timer-atmel-pit.c 170 */;
	unsigned cocci_id/* drivers/clocksource/timer-atmel-pit.c 169 */;
	unsigned long cocci_id/* drivers/clocksource/timer-atmel-pit.c 168 */;
	struct device_node *cocci_id/* drivers/clocksource/timer-atmel-pit.c 166 */;
	int __init cocci_id/* drivers/clocksource/timer-atmel-pit.c 166 */;
	irqreturn_t cocci_id/* drivers/clocksource/timer-atmel-pit.c 145 */;
	void *cocci_id/* drivers/clocksource/timer-atmel-pit.c 145 */;
	struct clock_event_device *cocci_id/* drivers/clocksource/timer-atmel-pit.c 135 */;
	void cocci_id/* drivers/clocksource/timer-atmel-pit.c 121 */;
}
