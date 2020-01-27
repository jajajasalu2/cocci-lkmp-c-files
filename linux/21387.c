cocci_test_suite() {
	struct cpumask *cocci_id/* arch/csky/kernel/smp.c 83 */;
	enum ipi_message_type cocci_id/* arch/csky/kernel/smp.c 72 */;
	const struct cpumask *cocci_id/* arch/csky/kernel/smp.c 72 */;
	void __init cocci_id/* arch/csky/kernel/smp.c 62 */;
	void (*cocci_id/* arch/csky/kernel/smp.c 59 */)(const struct cpumask *mask);
	irqreturn_t cocci_id/* arch/csky/kernel/smp.c 38 */;
	void *cocci_id/* arch/csky/kernel/smp.c 38 */;
	enum ipi_message_type{IPI_EMPTY, IPI_RESCHEDULE, IPI_CALL_FUNC, IPI_MAX,} cocci_id/* arch/csky/kernel/smp.c 31 */;
	struct ipi_data_struct {
		unsigned long bits ____cacheline_aligned;
	} cocci_id/* arch/csky/kernel/smp.c 26 */;
	unsigned int cocci_id/* arch/csky/kernel/smp.c 250 */;
	void cocci_id/* arch/csky/kernel/smp.c 250 */;
	int cocci_id/* arch/csky/kernel/smp.c 237 */;
	struct mm_struct *cocci_id/* arch/csky/kernel/smp.c 202 */;
	unsigned long cocci_id/* arch/csky/kernel/smp.c 161 */;
	struct task_struct *cocci_id/* arch/csky/kernel/smp.c 159 */;
	volatile unsigned int cocci_id/* arch/csky/kernel/smp.c 156 */;
	void cocci_id/* arch/csky/kernel/smp.c 153 */(void);
	struct device_node *cocci_id/* arch/csky/kernel/smp.c 135 */;
	__typeof__(struct ipi_data_struct) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
