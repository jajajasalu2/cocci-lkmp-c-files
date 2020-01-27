cocci_test_suite() {
	struct nios2_clocksource cocci_id/* arch/nios2/kernel/time.c 98 */;
	struct nios2_clocksource *cocci_id/* arch/nios2/kernel/time.c 86 */;
	u64 cocci_id/* arch/nios2/kernel/time.c 84 */;
	struct clocksource *cocci_id/* arch/nios2/kernel/time.c 84 */;
	struct nios2_clocksource {
		struct nios2_timer timer;
		struct clocksource cs;
	} cocci_id/* arch/nios2/kernel/time.c 46 */;
	struct nios2_clockevent_dev {
		struct nios2_timer timer;
		struct clock_event_device ced;
	} cocci_id/* arch/nios2/kernel/time.c 41 */;
	struct nios2_timer {
		void __iomem *base;
		unsigned long freq;
	} cocci_id/* arch/nios2/kernel/time.c 36 */;
	void __init cocci_id/* arch/nios2/kernel/time.c 345 */;
	struct timespec64 *cocci_id/* arch/nios2/kernel/time.c 339 */;
	int __init cocci_id/* arch/nios2/kernel/time.c 317 */;
	unsigned int cocci_id/* arch/nios2/kernel/time.c 283 */;
	u32 cocci_id/* arch/nios2/kernel/time.c 246 */;
	void __iomem *cocci_id/* arch/nios2/kernel/time.c 245 */;
	struct device_node *cocci_id/* arch/nios2/kernel/time.c 243 */;
	int cocci_id/* arch/nios2/kernel/time.c 243 */;
	struct nios2_clockevent_dev cocci_id/* arch/nios2/kernel/time.c 229 */;
	u32 *cocci_id/* arch/nios2/kernel/time.c 213 */;
	void __iomem **cocci_id/* arch/nios2/kernel/time.c 213 */;
	irqreturn_t cocci_id/* arch/nios2/kernel/time.c 200 */;
	void *cocci_id/* arch/nios2/kernel/time.c 200 */;
	struct nios2_clockevent_dev *cocci_id/* arch/nios2/kernel/time.c 193 */;
	struct clock_event_device *cocci_id/* arch/nios2/kernel/time.c 191 */;
	u16 cocci_id/* arch/nios2/kernel/time.c 138 */;
	bool cocci_id/* arch/nios2/kernel/time.c 136 */;
	struct nios2_timer *cocci_id/* arch/nios2/kernel/time.c 135 */;
	unsigned long cocci_id/* arch/nios2/kernel/time.c 135 */;
	cycles_t cocci_id/* arch/nios2/kernel/time.c 108 */;
	void cocci_id/* arch/nios2/kernel/time.c 108 */;
}
