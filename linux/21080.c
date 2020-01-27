cocci_test_suite() {
	struct sh_cpuinfo cocci_id/* arch/sh/kernel/smp.c 51 */;
	struct sh_cpuinfo *cocci_id/* arch/sh/kernel/smp.c 49 */;
	struct vm_area_struct *cocci_id/* arch/sh/kernel/smp.c 436 */;
	struct flush_tlb_data cocci_id/* arch/sh/kernel/smp.c 422 */;
	struct flush_tlb_data *cocci_id/* arch/sh/kernel/smp.c 415 */;
	struct flush_tlb_data {
		struct vm_area_struct *vma;
		unsigned long addr1;
		unsigned long addr2;
	} cocci_id/* arch/sh/kernel/smp.c 377 */;
	struct mm_struct *cocci_id/* arch/sh/kernel/smp.c 360 */;
	struct plat_smp_ops *cocci_id/* arch/sh/kernel/smp.c 34 */;
	void *cocci_id/* arch/sh/kernel/smp.c 333 */;
	int cocci_id/* arch/sh/kernel/smp.c 32 */[NR_CPUS];
	const struct cpumask *cocci_id/* arch/sh/kernel/smp.c 271 */;
	void __init cocci_id/* arch/sh/kernel/smp.c 247 */;
	unsigned long cocci_id/* arch/sh/kernel/smp.c 216 */;
	struct task_struct *cocci_id/* arch/sh/kernel/smp.c 214 */;
	struct {
		unsigned long sp;
		unsigned long bss_start;
		unsigned long bss_end;
		void *start_kernel_fn;
		void *cpu_init_fn;
		void *thread_info;
	} cocci_id/* arch/sh/kernel/smp.c 205 */;
	unsigned int cocci_id/* arch/sh/kernel/smp.c 124 */;
	int cocci_id/* arch/sh/kernel/smp.c 122 */;
	void cocci_id/* arch/sh/kernel/smp.c 122 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
