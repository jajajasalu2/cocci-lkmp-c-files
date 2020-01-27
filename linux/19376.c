cocci_test_suite() {
	unsigned cocci_id/* arch/xtensa/kernel/smp.c 64 */;
	struct irqaction cocci_id/* arch/xtensa/kernel/smp.c 56 */;
	struct flush_data cocci_id/* arch/xtensa/kernel/smp.c 559 */;
	struct vm_area_struct *cocci_id/* arch/xtensa/kernel/smp.c 556 */;
	struct flush_data *cocci_id/* arch/xtensa/kernel/smp.c 552 */;
	irqreturn_t cocci_id/* arch/xtensa/kernel/smp.c 55 */(int irq,
							      void *dev_id);
	struct mm_struct *cocci_id/* arch/xtensa/kernel/smp.c 486 */;
	void cocci_id/* arch/xtensa/kernel/smp.c 48 */(unsigned long start,
						       unsigned long size);
	struct flush_data {
		struct vm_area_struct *vma;
		unsigned long addr1;
		unsigned long addr2;
	} cocci_id/* arch/xtensa/kernel/smp.c 465 */;
	struct seq_file *cocci_id/* arch/xtensa/kernel/smp.c 443 */;
	struct ipi_data *cocci_id/* arch/xtensa/kernel/smp.c 413 */;
	irqreturn_t cocci_id/* arch/xtensa/kernel/smp.c 410 */;
	struct cpumask cocci_id/* arch/xtensa/kernel/smp.c 397 */;
	const struct cpumask *cocci_id/* arch/xtensa/kernel/smp.c 380 */;
	enum ipi_msg_type cocci_id/* arch/xtensa/kernel/smp.c 369 */;
	struct ipi_data {
		unsigned long ipi_count[IPI_MAX];
	} cocci_id/* arch/xtensa/kernel/smp.c 362 */;
	const struct {
		const char *short_text;
		const char *long_text;
	} cocci_id/* arch/xtensa/kernel/smp.c 353 */[];
	enum ipi_msg_type{IPI_RESCHEDULE=0, IPI_CALL_FUNC, IPI_CPU_STOP, IPI_MAX,} cocci_id/* arch/xtensa/kernel/smp.c 346 */;
	void __ref cocci_id/* arch/xtensa/kernel/smp.c 335 */;
	unsigned long cocci_id/* arch/xtensa/kernel/smp.c 309 */;
	unsigned int cocci_id/* arch/xtensa/kernel/smp.c 307 */;
	void cocci_id/* arch/xtensa/kernel/smp.c 307 */;
	int cocci_id/* arch/xtensa/kernel/smp.c 270 */;
	struct task_struct *cocci_id/* arch/xtensa/kernel/smp.c 237 */;
	void *cocci_id/* arch/xtensa/kernel/smp.c 209 */;
	void __init cocci_id/* arch/xtensa/kernel/smp.c 115 */;
	__typeof__(struct ipi_data) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
