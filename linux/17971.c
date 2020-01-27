cocci_test_suite() {
	void *cocci_id/* arch/sparc/kernel/smp_64.c 982 */;
	struct mm_struct *cocci_id/* arch/sparc/kernel/smp_64.c 980 */;
	struct page *cocci_id/* arch/sparc/kernel/smp_64.c 927 */;
	struct seq_file *cocci_id/* arch/sparc/kernel/smp_64.c 90 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/smp_64.c 874 */;
	void __irq_entry cocci_id/* arch/sparc/kernel/smp_64.c 874 */;
	u64 cocci_id/* arch/sparc/kernel/smp_64.c 863 */;
	const struct cpumask *cocci_id/* arch/sparc/kernel/smp_64.c 861 */;
	u32 cocci_id/* arch/sparc/kernel/smp_64.c 846 */;
	unsigned long *cocci_id/* arch/sparc/kernel/smp_64.c 846 */;
	const cpumask_t *cocci_id/* arch/sparc/kernel/smp_64.c 838 */;
	bool cocci_id/* arch/sparc/kernel/smp_64.c 79 */;
	void (*cocci_id/* arch/sparc/kernel/smp_64.c 787 */)(struct trap_per_cpu *,
							     int);
	cpumask_t cocci_id/* arch/sparc/kernel/smp_64.c 76 */;
	u16 cocci_id/* arch/sparc/kernel/smp_64.c 652 */;
	cpumask_t cocci_id/* arch/sparc/kernel/smp_64.c 62 */[NR_CPUS]__read_mostly;
	long cocci_id/* arch/sparc/kernel/smp_64.c 556 */;
	u16 *cocci_id/* arch/sparc/kernel/smp_64.c 490 */;
	u64 *cocci_id/* arch/sparc/kernel/smp_64.c 489 */;
	struct trap_per_cpu *cocci_id/* arch/sparc/kernel/smp_64.c 486 */;
	struct device_node *cocci_id/* arch/sparc/kernel/smp_64.c 375 */;
	struct thread_info *cocci_id/* arch/sparc/kernel/smp_64.c 351 */;
	struct hvtramp_mapping cocci_id/* arch/sparc/kernel/smp_64.c 304 */;
	struct hvtramp_descr *cocci_id/* arch/sparc/kernel/smp_64.c 296 */;
	void **cocci_id/* arch/sparc/kernel/smp_64.c 292 */;
	void cocci_id/* arch/sparc/kernel/smp_64.c 258 */(int cpu);
	struct {
		long rt;
		long master;
		long diff;
		long lat;
	} cocci_id/* arch/sparc/kernel/smp_64.c 208 */[NUM_ROUNDS];
	long *cocci_id/* arch/sparc/kernel/smp_64.c 173 */;
	unsigned long cocci_id/* arch/sparc/kernel/smp_64.c 169 */[SLAVE + 1];
	pte_t *cocci_id/* arch/sparc/kernel/smp_64.c 1648 */;
	pmd_t *cocci_id/* arch/sparc/kernel/smp_64.c 1625 */;
	pud_t *cocci_id/* arch/sparc/kernel/smp_64.c 1624 */;
	pgd_t *cocci_id/* arch/sparc/kernel/smp_64.c 1623 */;
	int __init cocci_id/* arch/sparc/kernel/smp_64.c 1613 */;
	void __init cocci_id/* arch/sparc/kernel/smp_64.c 1608 */;
	const unsigned long cocci_id/* arch/sparc/kernel/smp_64.c 1585 */;
	void *__init cocci_id/* arch/sparc/kernel/smp_64.c 1582 */;
	size_t cocci_id/* arch/sparc/kernel/smp_64.c 1582 */;
	unsigned long cocci_id/* arch/sparc/kernel/smp_64.c 1423 */;
	int cocci_id/* arch/sparc/kernel/smp_64.c 1411 */;
	unsigned int cocci_id/* arch/sparc/kernel/smp_64.c 1409 */;
	void cocci_id/* arch/sparc/kernel/smp_64.c 1409 */;
	cpuinfo_sparc *cocci_id/* arch/sparc/kernel/smp_64.c 1377 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/smp_64.c 1317 */;
	void cocci_id/* arch/sparc/kernel/smp_64.c 1209 */(int);
	atomic_t cocci_id/* arch/sparc/kernel/smp_64.c 1166 */;
	struct tlb_pending_info cocci_id/* arch/sparc/kernel/smp_64.c 1116 */;
	struct tlb_pending_info *cocci_id/* arch/sparc/kernel/smp_64.c 1108 */;
	struct tlb_pending_info {
		unsigned long ctx;
		unsigned long nr;
		unsigned long *vaddrs;
	} cocci_id/* arch/sparc/kernel/smp_64.c 1100 */;
	volatile unsigned long cocci_id/* arch/sparc/kernel/smp_64.c 102 */;
	void cocci_id/* arch/sparc/kernel/smp_64.c 100 */(void);
	__typeof__(cpumask_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(bool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
