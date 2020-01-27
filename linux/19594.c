cocci_test_suite() {
	struct txx9_clock_event_device {
		struct clock_event_device cd;
		struct txx9_tmr_reg __iomem *tmrptr;
	} cocci_id/* arch/mips/kernel/cevt-txx9.c 75 */;
	u64 notrace cocci_id/* arch/mips/kernel/cevt-txx9.c 50 */;
	void cocci_id/* arch/mips/kernel/cevt-txx9.c 50 */;
	struct txx9_clocksource cocci_id/* arch/mips/kernel/cevt-txx9.c 40 */;
	struct txx9_clocksource *cocci_id/* arch/mips/kernel/cevt-txx9.c 32 */;
	u64 cocci_id/* arch/mips/kernel/cevt-txx9.c 30 */;
	struct clocksource *cocci_id/* arch/mips/kernel/cevt-txx9.c 30 */;
	struct txx9_clocksource {
		struct clocksource cs;
		struct txx9_tmr_reg __iomem *tmrptr;
	} cocci_id/* arch/mips/kernel/cevt-txx9.c 25 */;
	struct txx9_tmr_reg cocci_id/* arch/mips/kernel/cevt-txx9.c 190 */;
	struct txx9_tmr_reg __iomem *cocci_id/* arch/mips/kernel/cevt-txx9.c 188 */;
	struct clock_event_device *cocci_id/* arch/mips/kernel/cevt-txx9.c 187 */;
	unsigned int cocci_id/* arch/mips/kernel/cevt-txx9.c 185 */;
	unsigned long cocci_id/* arch/mips/kernel/cevt-txx9.c 184 */;
	int cocci_id/* arch/mips/kernel/cevt-txx9.c 184 */;
	void __init cocci_id/* arch/mips/kernel/cevt-txx9.c 184 */;
	struct irqaction cocci_id/* arch/mips/kernel/cevt-txx9.c 177 */;
	struct txx9_clock_event_device *cocci_id/* arch/mips/kernel/cevt-txx9.c 168 */;
	irqreturn_t cocci_id/* arch/mips/kernel/cevt-txx9.c 166 */;
	void *cocci_id/* arch/mips/kernel/cevt-txx9.c 166 */;
	struct txx9_clock_event_device cocci_id/* arch/mips/kernel/cevt-txx9.c 152 */;
}
