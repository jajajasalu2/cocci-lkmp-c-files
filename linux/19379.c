cocci_test_suite() {
	struct ccount_timer cocci_id/* arch/xtensa/kernel/time.c 98 */;
	struct ccount_timer *cocci_id/* arch/xtensa/kernel/time.c 97 */;
	struct clock_event_device *cocci_id/* arch/xtensa/kernel/time.c 62 */;
	int cocci_id/* arch/xtensa/kernel/time.c 61 */;
	struct ccount_timer {
		struct clock_event_device evt;
		int irq_enabled;
		char name[24];
	} cocci_id/* arch/xtensa/kernel/time.c 55 */;
	struct clocksource cocci_id/* arch/xtensa/kernel/time.c 47 */;
	u64 notrace cocci_id/* arch/xtensa/kernel/time.c 42 */;
	u64 cocci_id/* arch/xtensa/kernel/time.c 37 */;
	struct clocksource *cocci_id/* arch/xtensa/kernel/time.c 37 */;
	unsigned long cocci_id/* arch/xtensa/kernel/time.c 34 */;
	struct clk *cocci_id/* arch/xtensa/kernel/time.c 158 */;
	struct device_node *cocci_id/* arch/xtensa/kernel/time.c 157 */;
	void __init cocci_id/* arch/xtensa/kernel/time.c 155 */;
	void cocci_id/* arch/xtensa/kernel/time.c 155 */;
	unsigned cocci_id/* arch/xtensa/kernel/time.c 137 */;
	struct irqaction cocci_id/* arch/xtensa/kernel/time.c 131 */;
	irqreturn_t cocci_id/* arch/xtensa/kernel/time.c 118 */;
	void *cocci_id/* arch/xtensa/kernel/time.c 118 */;
	__typeof__(struct ccount_timer) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
