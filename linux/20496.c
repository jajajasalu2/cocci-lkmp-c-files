cocci_test_suite() {
	struct apbt_dev *cocci_id/* arch/x86/kernel/apb_timer.c 67 */;
	void __iomem *cocci_id/* arch/x86/kernel/apb_timer.c 67 */;
	struct dw_apb_clocksource *cocci_id/* arch/x86/kernel/apb_timer.c 65 */;
	struct apbt_dev {
		struct dw_apb_clock_event_device *timer;
		unsigned int num;
		int cpu;
		unsigned int irq;
		char name[10];
	} cocci_id/* arch/x86/kernel/apb_timer.c 57 */;
	unsigned long cocci_id/* arch/x86/kernel/apb_timer.c 55 */;
	int cocci_id/* arch/x86/kernel/apb_timer.c 49 */;
	phys_addr_t cocci_id/* arch/x86/kernel/apb_timer.c 48 */;
	u32 cocci_id/* arch/x86/kernel/apb_timer.c 356 */;
	void __init cocci_id/* arch/x86/kernel/apb_timer.c 282 */;
	u64 cocci_id/* arch/x86/kernel/apb_timer.c 245 */;
	unsigned int cocci_id/* arch/x86/kernel/apb_timer.c 214 */;
	struct sfi_timer_table_entry *cocci_id/* arch/x86/kernel/apb_timer.c 136 */;
	int __init cocci_id/* arch/x86/kernel/apb_timer.c 134 */;
	void cocci_id/* arch/x86/kernel/apb_timer.c 128 */;
	__typeof__(struct apbt_dev) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
