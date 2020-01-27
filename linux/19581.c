cocci_test_suite() {
	void __init cocci_id/* arch/mips/kernel/smp-bmips.c 75 */;
	irqreturn_t cocci_id/* arch/mips/kernel/smp-bmips.c 63 */(int irq,
								  void *dev_id);
	void cocci_id/* arch/mips/kernel/smp-bmips.c 61 */(int cpu,
							   unsigned int action);
	u32 __maybe_unused cocci_id/* arch/mips/kernel/smp-bmips.c 584 */;
	void __iomem __maybe_unused *cocci_id/* arch/mips/kernel/smp-bmips.c 583 */;
	void __weak cocci_id/* arch/mips/kernel/smp-bmips.c 572 */;
	void cocci_id/* arch/mips/kernel/smp-bmips.c 53 */(int cpu, u32 val);
	void __iomem *cocci_id/* arch/mips/kernel/smp-bmips.c 510 */;
	struct reset_vec_info cocci_id/* arch/mips/kernel/smp-bmips.c 502 */;
	u32 cocci_id/* arch/mips/kernel/smp-bmips.c 500 */;
	struct reset_vec_info *cocci_id/* arch/mips/kernel/smp-bmips.c 479 */;
	struct reset_vec_info {
		int cpu;
		u32 val;
	} cocci_id/* arch/mips/kernel/smp-bmips.c 472 */;
	cpumask_t cocci_id/* arch/mips/kernel/smp-bmips.c 47 */;
	char *cocci_id/* arch/mips/kernel/smp-bmips.c 456 */;
	int __maybe_unused cocci_id/* arch/mips/kernel/smp-bmips.c 42 */;
	const struct plat_smp_ops cocci_id/* arch/mips/kernel/smp-bmips.c 414 */;
	void __ref cocci_id/* arch/mips/kernel/smp-bmips.c 384 */;
	unsigned int cocci_id/* arch/mips/kernel/smp-bmips.c 350 */;
	const struct cpumask *cocci_id/* arch/mips/kernel/smp-bmips.c 349 */;
	void cocci_id/* arch/mips/kernel/smp-bmips.c 349 */;
	unsigned long cocci_id/* arch/mips/kernel/smp-bmips.c 332 */;
	irqreturn_t cocci_id/* arch/mips/kernel/smp-bmips.c 330 */;
	void *cocci_id/* arch/mips/kernel/smp-bmips.c 330 */;
	int cocci_id/* arch/mips/kernel/smp-bmips.c 330 */;
	struct task_struct *cocci_id/* arch/mips/kernel/smp-bmips.c 182 */;
	irqreturn_t (*cocci_id/* arch/mips/kernel/smp-bmips.c 157 */)(int irq,
								      void *dev_id);
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
