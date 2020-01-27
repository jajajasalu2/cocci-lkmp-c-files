cocci_test_suite() {
	char cocci_id/* arch/sh/kernel/irq.c 69 */[NR_CPUS * THREAD_SIZE]__page_aligned_bss;
	union irq_ctx *cocci_id/* arch/sh/kernel/irq.c 65 */[NR_CPUS]__read_mostly;
	union irq_ctx {
		struct thread_info tinfo;
		u32 stack[THREAD_SIZE / sizeof(u32)];
	} cocci_id/* arch/sh/kernel/irq.c 60 */;
	struct seq_file *cocci_id/* arch/sh/kernel/irq.c 41 */;
	int cocci_id/* arch/sh/kernel/irq.c 41 */;
	unsigned int cocci_id/* arch/sh/kernel/irq.c 31 */;
	void cocci_id/* arch/sh/kernel/irq.c 31 */;
	atomic_t cocci_id/* arch/sh/kernel/irq.c 24 */;
	struct cpumask *cocci_id/* arch/sh/kernel/irq.c 232 */;
	struct irq_data *cocci_id/* arch/sh/kernel/irq.c 229 */;
	void __init cocci_id/* arch/sh/kernel/irq.c 205 */;
	struct pt_regs *cocci_id/* arch/sh/kernel/irq.c 185 */;
	char *cocci_id/* arch/sh/kernel/irq.c 163 */;
	u32 *cocci_id/* arch/sh/kernel/irq.c 155 */;
	union irq_ctx *cocci_id/* arch/sh/kernel/irq.c 154 */;
	struct thread_info *cocci_id/* arch/sh/kernel/irq.c 153 */;
}
