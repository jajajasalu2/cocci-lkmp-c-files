cocci_test_suite() {
	void cocci_id/* arch/powerpc/kernel/process.c 924 */(struct thread_struct *thread);
	uint8_t cocci_id/* arch/powerpc/kernel/process.c 876 */;
	struct thread_vr_state cocci_id/* arch/powerpc/kernel/process.c 873 */;
	struct thread_fp_state cocci_id/* arch/powerpc/kernel/process.c 870 */;
	struct task_struct cocci_id/* arch/powerpc/kernel/process.c 852 */;
	bool cocci_id/* arch/powerpc/kernel/process.c 812 */;
	struct arch_hw_breakpoint *cocci_id/* arch/powerpc/kernel/process.c 785 */;
	unsigned long cocci_id/* arch/powerpc/kernel/process.c 78 */(void);
	struct debug_reg *cocci_id/* arch/powerpc/kernel/process.c 666 */;
	void __user *cocci_id/* arch/powerpc/kernel/process.c 629 */;
	void cocci_id/* arch/powerpc/kernel/process.c 256 */;
	struct mm_struct *cocci_id/* arch/powerpc/kernel/process.c 2168 */;
	struct thread_info *cocci_id/* arch/powerpc/kernel/process.c 2132 */;
	unsigned long *cocci_id/* arch/powerpc/kernel/process.c 2005 */;
	int cocci_id/* arch/powerpc/kernel/process.c 1995 */;
	struct task_struct *cocci_id/* arch/powerpc/kernel/process.c 1992 */;
	unsigned long cocci_id/* arch/powerpc/kernel/process.c 1992 */;
	unsigned int __user *cocci_id/* arch/powerpc/kernel/process.c 1945 */;
	unsigned int cocci_id/* arch/powerpc/kernel/process.c 1928 */;
	unsigned long __user *cocci_id/* arch/powerpc/kernel/process.c 1769 */;
	void cocci_id/* arch/powerpc/kernel/process.c 1688 */(unsigned long start,
							      unsigned long sp);
	void *cocci_id/* arch/powerpc/kernel/process.c 1615 */;
	struct pt_regs cocci_id/* arch/powerpc/kernel/process.c 1607 */;
	void (*cocci_id/* arch/powerpc/kernel/process.c 1600 */)(void);
	void cocci_id/* arch/powerpc/kernel/process.c 1598 */(void);
	struct pt_regs *cocci_id/* arch/powerpc/kernel/process.c 1597 */;
	u16 cocci_id/* arch/powerpc/kernel/process.c 1526 */;
	void notrace cocci_id/* arch/powerpc/kernel/process.c 141 */;
	const char *cocci_id/* arch/powerpc/kernel/process.c 1335 */;
	struct regbit *cocci_id/* arch/powerpc/kernel/process.c 1335 */;
	struct regbit cocci_id/* arch/powerpc/kernel/process.c 1305 */[];
	struct regbit {
		unsigned long bit;
		const char *name;
	} cocci_id/* arch/powerpc/kernel/process.c 1300 */;
	char cocci_id/* arch/powerpc/kernel/process.c 1263 */[96];
	struct seq_buf cocci_id/* arch/powerpc/kernel/process.c 1262 */;
	const void *cocci_id/* arch/powerpc/kernel/process.c 1243 */;
	unsigned long notrace cocci_id/* arch/powerpc/kernel/process.c 121 */;
	char *cocci_id/* arch/powerpc/kernel/process.c 111 */;
	int __init cocci_id/* arch/powerpc/kernel/process.c 111 */;
	u64 cocci_id/* arch/powerpc/kernel/process.c 1094 */;
	struct thread_struct *cocci_id/* arch/powerpc/kernel/process.c 1084 */;
	__typeof__(struct arch_hw_breakpoint) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
