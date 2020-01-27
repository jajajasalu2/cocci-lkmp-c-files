cocci_test_suite() {
	const struct cpumask *cocci_id/* arch/parisc/kernel/irq.c 98 */;
	struct irq_data *cocci_id/* arch/parisc/kernel/irq.c 70 */;
	void __init cocci_id/* arch/parisc/kernel/irq.c 593 */;
	struct irqaction cocci_id/* arch/parisc/kernel/irq.c 570 */;
	unsigned long cocci_id/* arch/parisc/kernel/irq.c 55 */;
	unsigned int cocci_id/* arch/parisc/kernel/irq.c 53 */;
	void cocci_id/* arch/parisc/kernel/irq.c 53 */;
	cpumask_t cocci_id/* arch/parisc/kernel/irq.c 514 */;
	struct pt_regs *cocci_id/* arch/parisc/kernel/irq.c 507 */;
	void (*cocci_id/* arch/parisc/kernel/irq.c 485 */)(unsigned long p1);
	volatile unsigned int *cocci_id/* arch/parisc/kernel/irq.c 472 */;
	union irq_stack_union *cocci_id/* arch/parisc/kernel/irq.c 470 */;
	void cocci_id/* arch/parisc/kernel/irq.c 466 */(unsigned long p1,
							void *func,
							unsigned long new_stack);
	unsigned int *cocci_id/* arch/parisc/kernel/irq.c 404 */;
	union irq_stack_union {
		unsigned long stack[IRQ_STACK_SIZE / sizeof(unsigned long)];
		volatile unsigned int slock[4];
		volatile unsigned int lock[1];
	} cocci_id/* arch/parisc/kernel/irq.c 381 */;
	volatile unsigned long cocci_id/* arch/parisc/kernel/irq.c 33 */;
	struct irq_chip *cocci_id/* arch/parisc/kernel/irq.c 277 */;
	void *cocci_id/* arch/parisc/kernel/irq.c 277 */;
	irqreturn_t cocci_id/* arch/parisc/kernel/irq.c 26 */(int, void *);
	struct irqaction *cocci_id/* arch/parisc/kernel/irq.c 212 */;
	struct irq_desc *cocci_id/* arch/parisc/kernel/irq.c 211 */;
	loff_t *cocci_id/* arch/parisc/kernel/irq.c 196 */;
	struct seq_file *cocci_id/* arch/parisc/kernel/irq.c 151 */;
	int cocci_id/* arch/parisc/kernel/irq.c 151 */;
	struct irq_chip cocci_id/* arch/parisc/kernel/irq.c 130 */;
	bool cocci_id/* arch/parisc/kernel/irq.c 116 */;
	__typeof__(union irq_stack_union) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(unsigned long) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
