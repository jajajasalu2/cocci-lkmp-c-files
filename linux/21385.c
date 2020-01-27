cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/csky/kernel/ptrace.c 77 */;
	enum csky_regset{REGSET_GPR, REGSET_FPR,} cocci_id/* arch/csky/kernel/ptrace.c 67 */;
	unsigned char *cocci_id/* arch/csky/kernel/ptrace.c 242 */;
	unsigned long *cocci_id/* arch/csky/kernel/ptrace.c 241 */;
	void cocci_id/* arch/csky/kernel/ptrace.c 238 */(struct task_struct *task,
							 unsigned long *stack);
	unsigned long cocci_id/* arch/csky/kernel/ptrace.c 202 */;
	struct task_struct *cocci_id/* arch/csky/kernel/ptrace.c 201 */;
	long cocci_id/* arch/csky/kernel/ptrace.c 201 */;
	void cocci_id/* arch/csky/kernel/ptrace.c 196 */;
	const struct user_regset_view *cocci_id/* arch/csky/kernel/ptrace.c 191 */;
	const struct user_regset_view cocci_id/* arch/csky/kernel/ptrace.c 184 */;
	struct user_fp cocci_id/* arch/csky/kernel/ptrace.c 176 */;
	struct pt_regs cocci_id/* arch/csky/kernel/ptrace.c 168 */;
	const struct user_regset cocci_id/* arch/csky/kernel/ptrace.c 165 */[];
	const void __user *cocci_id/* arch/csky/kernel/ptrace.c 138 */;
	const void *cocci_id/* arch/csky/kernel/ptrace.c 138 */;
	struct user_fp *cocci_id/* arch/csky/kernel/ptrace.c 115 */;
	void __user *cocci_id/* arch/csky/kernel/ptrace.c 113 */;
	void *cocci_id/* arch/csky/kernel/ptrace.c 113 */;
	unsigned int cocci_id/* arch/csky/kernel/ptrace.c 112 */;
	const struct user_regset *cocci_id/* arch/csky/kernel/ptrace.c 111 */;
	int cocci_id/* arch/csky/kernel/ptrace.c 110 */;
}
