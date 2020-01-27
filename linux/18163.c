cocci_test_suite() {
	pgd_t *cocci_id/* arch/arm/kernel/smp.c 92 */;
	const struct smp_operations *cocci_id/* arch/arm/kernel/smp.c 86 */;
	struct smp_operations cocci_id/* arch/arm/kernel/smp.c 84 */;
	bool cocci_id/* arch/arm/kernel/smp.c 813 */;
	const cpumask_t *cocci_id/* arch/arm/kernel/smp.c 813 */;
	cpumask_t *cocci_id/* arch/arm/kernel/smp.c 808 */;
	int __init cocci_id/* arch/arm/kernel/smp.c 799 */;
	struct notifier_block cocci_id/* arch/arm/kernel/smp.c 795 */;
	struct cpumask *cocci_id/* arch/arm/kernel/smp.c 761 */;
	struct cpufreq_freqs *cocci_id/* arch/arm/kernel/smp.c 760 */;
	void *cocci_id/* arch/arm/kernel/smp.c 758 */;
	unsigned long cocci_id/* arch/arm/kernel/smp.c 758 */;
	struct notifier_block *cocci_id/* arch/arm/kernel/smp.c 757 */;
	struct cpumask cocci_id/* arch/arm/kernel/smp.c 711 */;
	unsigned cocci_id/* arch/arm/kernel/smp.c 637 */;
	struct pt_regs *cocci_id/* arch/arm/kernel/smp.c 627 */;
	void __exception_irq_entry cocci_id/* arch/arm/kernel/smp.c 627 */;
	enum ipi_msg_type{IPI_WAKEUP, IPI_TIMER, IPI_RESCHEDULE, IPI_CALL_FUNC, IPI_CPU_STOP, IPI_IRQ_WORK, IPI_COMPLETION, IPI_CPU_BACKTRACE,} cocci_id/* arch/arm/kernel/smp.c 62 */;
	struct completion *cocci_id/* arch/arm/kernel/smp.c 613 */;
	struct secondary_data cocci_id/* arch/arm/kernel/smp.c 60 */;
	const struct cpumask *cocci_id/* arch/arm/kernel/smp.c 556 */;
	u64 cocci_id/* arch/arm/kernel/smp.c 545 */;
	struct seq_file *cocci_id/* arch/arm/kernel/smp.c 530 */;
	const char *cocci_id/* arch/arm/kernel/smp.c 513 */[NR_IPI];
	void __init cocci_id/* arch/arm/kernel/smp.c 507 */;
	void (*cocci_id/* arch/arm/kernel/smp.c 505 */)(const struct cpumask *,
							unsigned int);
	struct mm_struct *cocci_id/* arch/arm/kernel/smp.c 386 */;
	struct cpuinfo_arm *cocci_id/* arch/arm/kernel/smp.c 371 */;
	unsigned int cocci_id/* arch/arm/kernel/smp.c 275 */;
	void cocci_id/* arch/arm/kernel/smp.c 275 */;
	int cocci_id/* arch/arm/kernel/smp.c 234 */;
	struct task_struct *cocci_id/* arch/arm/kernel/smp.c 125 */;
	__typeof__(struct completion *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
