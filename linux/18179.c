cocci_test_suite() {
	long cocci_id/* arch/arm/kernel/unwind.c 90 */;
	const struct unwind_idx *cocci_id/* arch/arm/kernel/unwind.c 80 */;
	const struct unwind_idx cocci_id/* arch/arm/kernel/unwind.c 79 */[];
	enum regs{

#ifdef CONFIG_THUMB2_KERNEL
FP=7,

#else

	FP=11,

#endif
 SP=13, LR=14, PC=15,} cocci_id/* arch/arm/kernel/unwind.c 68 */;
	struct unwind_ctrl_block {
		unsigned long vrs[16];
		const unsigned long *insn;
		unsigned long sp_high;
		int check_each_pop;
		int entries;
		int byte;
	} cocci_id/* arch/arm/kernel/unwind.c 55 */;
	int cocci_id/* arch/arm/kernel/unwind.c 490 */;
	struct stackframe cocci_id/* arch/arm/kernel/unwind.c 460 */;
	struct task_struct *cocci_id/* arch/arm/kernel/unwind.c 458 */;
	struct pt_regs *cocci_id/* arch/arm/kernel/unwind.c 458 */;
	void cocci_id/* arch/arm/kernel/unwind.c 40 */;
	struct unwind_ctrl_block cocci_id/* arch/arm/kernel/unwind.c 379 */;
	struct stackframe *cocci_id/* arch/arm/kernel/unwind.c 375 */;
	struct unwind_ctrl_block *cocci_id/* arch/arm/kernel/unwind.c 306 */;
	unsigned long *cocci_id/* arch/arm/kernel/unwind.c 267 */;
	unsigned long **cocci_id/* arch/arm/kernel/unwind.c 233 */;
	unsigned int cocci_id/* arch/arm/kernel/unwind.c 233 */;
	struct unwind_table *cocci_id/* arch/arm/kernel/unwind.c 189 */;
	unsigned long cocci_id/* arch/arm/kernel/unwind.c 102 */;
}
