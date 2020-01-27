cocci_test_suite() {
	struct task_struct *cocci_id/* arch/powerpc/kernel/smp.c 989 */;
	struct thread_groups {
		unsigned int property;
		unsigned int nr_groups;
		unsigned int threads_per_group;
		unsigned int thread_list[MAX_THREAD_LIST_SIZE];
	} cocci_id/* arch/powerpc/kernel/smp.c 90 */;
	struct thread_groups cocci_id/* arch/powerpc/kernel/smp.c 778 */;
	struct thread_groups *cocci_id/* arch/powerpc/kernel/smp.c 755 */;
	size_t cocci_id/* arch/powerpc/kernel/smp.c 709 */;
	u32 *cocci_id/* arch/powerpc/kernel/smp.c 708 */;
	u32 cocci_id/* arch/powerpc/kernel/smp.c 707 */[3 + MAX_THREAD_LIST_SIZE];
	struct cpumask *(*cocci_id/* arch/powerpc/kernel/smp.c 646 */)(int);
	struct task_struct *cocci_id/* arch/powerpc/kernel/smp.c 630 */[NR_CPUS];
	struct pt_regs *cocci_id/* arch/powerpc/kernel/smp.c 549 */;
	unsigned long cocci_id/* arch/powerpc/kernel/smp.c 465 */;
	u64 cocci_id/* arch/powerpc/kernel/smp.c 463 */;
	bool cocci_id/* arch/powerpc/kernel/smp.c 463 */;
	void (*cocci_id/* arch/powerpc/kernel/smp.c 462 */)(struct pt_regs *);
	unsigned long *cocci_id/* arch/powerpc/kernel/smp.c 377 */;
	struct cpumask cocci_id/* arch/powerpc/kernel/smp.c 373 */;
	atomic_t cocci_id/* arch/powerpc/kernel/smp.c 372 */;
	const struct cpumask *cocci_id/* arch/powerpc/kernel/smp.c 342 */;
	struct cpu_messages *cocci_id/* arch/powerpc/kernel/smp.c 285 */;
	char *cocci_id/* arch/powerpc/kernel/smp.c 249 */;
	struct cpu_messages cocci_id/* arch/powerpc/kernel/smp.c 244 */;
	struct cpu_messages {
		long messages;
	} cocci_id/* arch/powerpc/kernel/smp.c 241 */;
	const char *cocci_id/* arch/powerpc/kernel/smp.c 208 */[];
	irq_handler_t cocci_id/* arch/powerpc/kernel/smp.c 192 */[];
	irqreturn_t cocci_id/* arch/powerpc/kernel/smp.c 164 */;
	void *cocci_id/* arch/powerpc/kernel/smp.c 164 */;
	unsigned int cocci_id/* arch/powerpc/kernel/smp.c 1410 */;
	void cocci_id/* arch/powerpc/kernel/smp.c 1410 */;
	int cocci_id/* arch/powerpc/kernel/smp.c 1390 */;
	void __init cocci_id/* arch/powerpc/kernel/smp.c 1351 */;
	struct sched_domain_topology_level cocci_id/* arch/powerpc/kernel/smp.c 1342 */[];
	struct cpumask *cocci_id/* arch/powerpc/kernel/smp.c 1174 */;
	const __be32 *cocci_id/* arch/powerpc/kernel/smp.c 1075 */;
	struct device_node *cocci_id/* arch/powerpc/kernel/smp.c 1074 */;
	volatile unsigned int cocci_id/* arch/powerpc/kernel/smp.c 107 */[NR_CPUS];
	struct smp_ops_t *cocci_id/* arch/powerpc/kernel/smp.c 104 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(cpumask_var_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
