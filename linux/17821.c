cocci_test_suite() {
	int cocci_id/* arch/ia64/kernel/irq_ia64.c 91 */[NR_IRQS];
	cpumask_t cocci_id/* arch/ia64/kernel/irq_ia64.c 87 */[IA64_NUM_VECTORS];
	struct irq_cfg cocci_id/* arch/ia64/kernel/irq_ia64.c 76 */[NR_IRQS]__read_mostly;
	__u8 cocci_id/* arch/ia64/kernel/irq_ia64.c 67 */[16];
	void __iomem *cocci_id/* arch/ia64/kernel/irq_ia64.c 651 */;
	void __init cocci_id/* arch/ia64/kernel/irq_ia64.c 623 */;
	cpumask_t cocci_id/* arch/ia64/kernel/irq_ia64.c 62 */(int cpu);
	struct irqaction *cocci_id/* arch/ia64/kernel/irq_ia64.c 610 */;
	struct irqaction cocci_id/* arch/ia64/kernel/irq_ia64.c 589 */;
	irqreturn_t cocci_id/* arch/ia64/kernel/irq_ia64.c 583 */;
	void *cocci_id/* arch/ia64/kernel/irq_ia64.c 583 */;
	unsigned int cocci_id/* arch/ia64/kernel/irq_ia64.c 525 */[NR_IRQS];
	ia64_vector cocci_id/* arch/ia64/kernel/irq_ia64.c 438 */;
	struct pt_regs *cocci_id/* arch/ia64/kernel/irq_ia64.c 438 */;
	unsigned int cocci_id/* arch/ia64/kernel/irq_ia64.c 378 */;
	char *cocci_id/* arch/ia64/kernel/irq_ia64.c 359 */;
	int __init cocci_id/* arch/ia64/kernel/irq_ia64.c 359 */;
	struct irq_desc *cocci_id/* arch/ia64/kernel/irq_ia64.c 328 */;
	enum vector_domain_type{VECTOR_DOMAIN_NONE, VECTOR_DOMAIN_PERCPU,} cocci_id/* arch/ia64/kernel/irq_ia64.c 253 */;
	void cocci_id/* arch/ia64/kernel/irq_ia64.c 160 */;
	unsigned long cocci_id/* arch/ia64/kernel/irq_ia64.c 151 */;
	unsigned cocci_id/* arch/ia64/kernel/irq_ia64.c 130 */;
	struct irq_cfg *cocci_id/* arch/ia64/kernel/irq_ia64.c 128 */;
	cpumask_t cocci_id/* arch/ia64/kernel/irq_ia64.c 124 */;
	int cocci_id/* arch/ia64/kernel/irq_ia64.c 124 */;
	__typeof__(int[IA64_NUM_VECTORS]) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
