cocci_test_suite() {
	struct mm_struct *cocci_id/* arch/alpha/kernel/smp.c 746 */;
	unsigned long cocci_id/* arch/alpha/kernel/smp.c 744 */;
	struct vm_area_struct *cocci_id/* arch/alpha/kernel/smp.c 743 */;
	struct page *cocci_id/* arch/alpha/kernel/smp.c 743 */;
	void *cocci_id/* arch/alpha/kernel/smp.c 733 */;
	struct flush_tlb_page_struct cocci_id/* arch/alpha/kernel/smp.c 694 */;
	struct flush_tlb_page_struct *cocci_id/* arch/alpha/kernel/smp.c 682 */;
	struct flush_tlb_page_struct {
		struct vm_area_struct *vma;
		struct mm_struct *mm;
		unsigned long addr;
	} cocci_id/* arch/alpha/kernel/smp.c 673 */;
	enum ipi_message_type{IPI_RESCHEDULE, IPI_CALL_FUNC, IPI_CPU_STOP,} cocci_id/* arch/alpha/kernel/smp.c 64 */;
	struct {
		unsigned long bits ____cacheline_aligned;
	} cocci_id/* arch/alpha/kernel/smp.c 60 */[NR_CPUS]__cacheline_aligned;
	const struct cpumask *cocci_id/* arch/alpha/kernel/smp.c 597 */;
	void cocci_id/* arch/alpha/kernel/smp.c 597 */;
	cpumask_t cocci_id/* arch/alpha/kernel/smp.c 587 */;
	struct cpuinfo_alpha cocci_id/* arch/alpha/kernel/smp.c 56 */[NR_CPUS];
	unsigned long *cocci_id/* arch/alpha/kernel/smp.c 527 */;
	struct pt_regs *cocci_id/* arch/alpha/kernel/smp.c 524 */;
	enum ipi_message_type cocci_id/* arch/alpha/kernel/smp.c 510 */;
	struct task_struct *cocci_id/* arch/alpha/kernel/smp.c 479 */;
	unsigned int cocci_id/* arch/alpha/kernel/smp.c 479 */;
	int cocci_id/* arch/alpha/kernel/smp.c 478 */;
	void __init cocci_id/* arch/alpha/kernel/smp.c 402 */;
	union thread_union cocci_id/* arch/alpha/kernel/smp.c 309 */;
	struct pcb_struct *cocci_id/* arch/alpha/kernel/smp.c 295 */;
	struct percpu_struct *cocci_id/* arch/alpha/kernel/smp.c 243 */;
	char *cocci_id/* arch/alpha/kernel/smp.c 242 */;
	unsigned int *cocci_id/* arch/alpha/kernel/smp.c 218 */;
	size_t cocci_id/* arch/alpha/kernel/smp.c 205 */;
}
