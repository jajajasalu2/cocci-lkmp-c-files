cocci_test_suite() {
	struct timer_s cocci_id/* arch/arm/mach-davinci/time.c 94 */[];
	struct timer_s {
		char *name;
		unsigned int id;
		unsigned long period;
		unsigned long opts;
		unsigned long flags;
		void __iomem *base;
		unsigned long tim_off;
		unsigned long prd_off;
		unsigned long enamode_shift;
		struct irqaction irqaction;
	} cocci_id/* arch/arm/mach-davinci/time.c 82 */;
	enum{TID_CLOCKEVENT, TID_CLOCKSOURCE,} cocci_id/* arch/arm/mach-davinci/time.c 39 */;
	struct davinci_timer_instance *cocci_id/* arch/arm/mach-davinci/time.c 355 */;
	struct davinci_soc_info *cocci_id/* arch/arm/mach-davinci/time.c 338 */;
	struct clk *cocci_id/* arch/arm/mach-davinci/time.c 336 */;
	void __init cocci_id/* arch/arm/mach-davinci/time.c 336 */;
	unsigned int cocci_id/* arch/arm/mach-davinci/time.c 32 */;
	struct clock_event_device cocci_id/* arch/arm/mach-davinci/time.c 31 */;
	struct timer_s *cocci_id/* arch/arm/mach-davinci/time.c 291 */;
	struct clock_event_device *cocci_id/* arch/arm/mach-davinci/time.c 289 */;
	unsigned long cocci_id/* arch/arm/mach-davinci/time.c 288 */;
	int cocci_id/* arch/arm/mach-davinci/time.c 288 */;
	u64 notrace cocci_id/* arch/arm/mach-davinci/time.c 280 */;
	void cocci_id/* arch/arm/mach-davinci/time.c 280 */;
	struct clocksource cocci_id/* arch/arm/mach-davinci/time.c 270 */;
	cycles_t cocci_id/* arch/arm/mach-davinci/time.c 267 */;
	u64 cocci_id/* arch/arm/mach-davinci/time.c 263 */;
	struct clocksource *cocci_id/* arch/arm/mach-davinci/time.c 263 */;
	void __iomem *cocci_id/* arch/arm/mach-davinci/time.c 195 */[2];
	irqreturn_t cocci_id/* arch/arm/mach-davinci/time.c 166 */;
	void *cocci_id/* arch/arm/mach-davinci/time.c 166 */;
	u32 cocci_id/* arch/arm/mach-davinci/time.c 114 */;
	char *cocci_id/* arch/arm/mach-davinci/time.c 105 */[];
}
