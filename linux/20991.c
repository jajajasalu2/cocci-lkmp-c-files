cocci_test_suite() {
	enum ipi_message_type{IPI_NOP=0, IPI_RESCHEDULE=1, IPI_CALL_FUNC, IPI_CPU_START, IPI_CPU_STOP, IPI_CPU_TEST,} cocci_id/* arch/parisc/kernel/smp.c 68 */;
	volatile int cocci_id/* arch/parisc/kernel/smp.c 62 */;
	volatile struct task_struct *cocci_id/* arch/parisc/kernel/smp.c 59 */;
	struct task_struct *cocci_id/* arch/parisc/kernel/smp.c 416 */;
	unsigned int cocci_id/* arch/parisc/kernel/smp.c 416 */;
	int cocci_id/* arch/parisc/kernel/smp.c 416 */;
	long cocci_id/* arch/parisc/kernel/smp.c 323 */;
	const struct cpuinfo_parisc *cocci_id/* arch/parisc/kernel/smp.c 322 */;
	void __init cocci_id/* arch/parisc/kernel/smp.c 294 */;
	void cocci_id/* arch/parisc/kernel/smp.c 257 */(void);
	void __init cocci_id/* arch/parisc/kernel/smp.c 254 */;
	const struct cpumask *cocci_id/* arch/parisc/kernel/smp.c 241 */;
	void cocci_id/* arch/parisc/kernel/smp.c 241 */;
	enum ipi_message_type cocci_id/* arch/parisc/kernel/smp.c 188 */;
	spinlock_t *cocci_id/* arch/parisc/kernel/smp.c 127 */;
	unsigned long cocci_id/* arch/parisc/kernel/smp.c 123 */;
	struct cpuinfo_parisc *cocci_id/* arch/parisc/kernel/smp.c 122 */;
	void *cocci_id/* arch/parisc/kernel/smp.c 119 */;
	irqreturn_t __irq_entry cocci_id/* arch/parisc/kernel/smp.c 118 */;
	__typeof__(spinlock_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
