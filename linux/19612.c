cocci_test_suite() {
	struct irq_desc *cocci_id/* arch/mips/kernel/smp.c 77 */;
	call_single_data_t *cocci_id/* arch/mips/kernel/smp.c 705 */;
	atomic_t *cocci_id/* arch/mips/kernel/smp.c 704 */;
	u32 cocci_id/* arch/mips/kernel/smp.c 642 */;
	struct vm_area_struct *cocci_id/* arch/mips/kernel/smp.c 640 */;
	struct flush_tlb_data cocci_id/* arch/mips/kernel/smp.c 625 */;
	unsigned long cocci_id/* arch/mips/kernel/smp.c 623 */;
	struct flush_tlb_data *cocci_id/* arch/mips/kernel/smp.c 618 */;
	struct flush_tlb_data {
		struct vm_area_struct *vma;
		unsigned long addr1;
		unsigned long addr2;
	} cocci_id/* arch/mips/kernel/smp.c 553 */;
	cpumask_t cocci_id/* arch/mips/kernel/smp.c 55 */[NR_CPUS]__read_mostly;
	struct mm_struct *cocci_id/* arch/mips/kernel/smp.c 529 */;
	void (*cocci_id/* arch/mips/kernel/smp.c 506 */)(void *info);
	void *cocci_id/* arch/mips/kernel/smp.c 469 */;
	struct task_struct *cocci_id/* arch/mips/kernel/smp.c 441 */;
	unsigned int cocci_id/* arch/mips/kernel/smp.c 441 */;
	int cocci_id/* arch/mips/kernel/smp.c 441 */;
	int cocci_id/* arch/mips/kernel/smp.c 43 */[NR_CPUS];
	void __init cocci_id/* arch/mips/kernel/smp.c 413 */;
	int cocci_id/* arch/mips/kernel/smp.c 40 */[CONFIG_MIPS_NR_CPU_NR_MAP];
	int __init cocci_id/* arch/mips/kernel/smp.c 324 */;
	struct device_node *cocci_id/* arch/mips/kernel/smp.c 238 */;
	struct irq_domain *cocci_id/* arch/mips/kernel/smp.c 237 */;
	const struct cpumask *cocci_id/* arch/mips/kernel/smp.c 234 */;
	struct irqaction *cocci_id/* arch/mips/kernel/smp.c 223 */;
	struct irqaction cocci_id/* arch/mips/kernel/smp.c 216 */;
	irqreturn_t cocci_id/* arch/mips/kernel/smp.c 203 */;
	const struct plat_smp_ops *cocci_id/* arch/mips/kernel/smp.c 137 */;
	cpumask_t cocci_id/* arch/mips/kernel/smp.c 119 */;
	void cocci_id/* arch/mips/kernel/smp.c 116 */;
	__typeof__(call_single_data_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(atomic_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
